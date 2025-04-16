package mac ;

import DReg :: *;

/**
 * ------------------------------------------------------------------------------
 * Interface: MAC_INF
 * ------------------------------------------------------------------------------
 * Purpose:
 *     This is the top-level interface for the MAC (Multiply-Accumulate) module.
 *     It defines the ports through which external components or testbenches can
 *     interact with the MAC hardware block.
 *
 * Functionality:
 *     - Accepts input operands (A, B, C) along with a mode select signal (s)
 *     - Computes the result of A * B + C (MAC operation)
 *     - Supports both integer and floating-point (bfloat16 → fp32) based on mode
 *
 * Usage Context:
 *     This interface is typically used in:
 *       - RTL simulations
 *       - Hardware-software interaction (e.g., HLS/RTL co-simulation)
 *       - Testbench communication using verification tools like cocotb
 * ------------------------------------------------------------------------------
 */
 interface MAC_INF;

  /**
   * --------------------------------------------------------------------------
   * Method: get_inputs
   * --------------------------------------------------------------------------
   * Purpose:
   *     Captures the input operands for the MAC operation.
   *     This method is expected to be called before triggering the MAC logic.
   *
   * Arguments:
   *     a : Bit#(16) → Operand A
   *         - Lower 8 bits used in integer mode (s == 0)
   *         - Full 16 bits interpreted as BF16 in floating-point mode (s == 1)
   *
   *     b : Bit#(16) → Operand B
   *         - Lower 8 bits used in integer mode (s == 0)
   *         - Full 16 bits interpreted as BF16 in floating-point mode (s == 1)
   *
   *     c : Bit#(32) → Operand C
   *         - Used as the accumulator input for both modes
   *         - Treated as:
   *             - Integer in integer mode
   *             - FP32 in floating-point mode
   *
   *     s : Bit#(1) → Mode Select
   *         - s == 0: Integer MAC mode
   *         - s == 1: Floating-Point MAC mode (BF16 * BF16 + FP32)
   *
   * Behavior:
   *     - Stores the input values into internal registers (in implementation)
   *     - Sets flags to trigger the MAC datapath rule execution
   * --------------------------------------------------------------------------
   */
  method Action get_inputs(Bit#(16) a, Bit#(16) b, Bit#(32) c, Bit#(1) s);

  /**
   * --------------------------------------------------------------------------
   * Method: mac_op
   * --------------------------------------------------------------------------
   * Purpose:
   *     Provides the final result of the MAC operation: (A * B + C)
   *
   * Return:
   *     Bit#(32) → The result of the MAC computation
   *                - In integer mode: 32-bit signed result
   *                - In floating-point mode: IEEE-754 FP32 compliant result
   *
   * Behavior:
   *     - The output is valid only when the internal computation rule has fired
   *     - External components must check for readiness (if exposed)
   * --------------------------------------------------------------------------
   */
  method Bit#(32) mac_op;

endinterface : MAC_INF

/**
 * ------------------------------------------------------------------------------
 * Module: mkMac
 * ------------------------------------------------------------------------------
 * Description:
 *     Hardware implementation of a Multiply-Accumulate (MAC) unit.
 *     Supports both:
 *       - Integer MAC:         result = (a * b + c)   using 8-bit integer inputs
 *       - Floating-Point MAC:  result = (a * b + c)   where a, b = BF16, c = FP32
 *
 * Interface:
 *     Exposes the MAC_INF interface:
 *       - get_inputs(): sets the operands and mode
 *       - mac_op(): returns the computed result
 *
 * Operation:
 *     - Inputs are latched via get_inputs() method
 *     - A rule (rl_mac_inputs) performs the MAC operation based on mode (s)
 *     - Outputs are made available via mac_op() when valid
 * ------------------------------------------------------------------------------
 */
(* synthesize *)
module mkMac(MAC_INF);

  //--------------------------------------------------------------------------
  // Register Declarations
  //--------------------------------------------------------------------------

  // Input registers
  Reg#(Bit#(16)) reg_operand_a   <- mkReg(0);  // Input A: 8-bit for int, 16-bit for BF16
  Reg#(Bit#(16)) reg_operand_b   <- mkReg(0);  // Input B
  Reg#(Bit#(32)) reg_operand_c   <- mkReg(0);  // Accumulator (C)
  Reg#(Bit#(1))  reg_mode_fp     <- mkReg(0);  // Mode select: 0 = int, 1 = FP

  // Output register
  Reg#(Bit#(32)) reg_result      <- mkReg(0);  // Final MAC result

  // Control flags
  Reg#(Bool) reg_input_valid     <- mkReg(False);
  Reg#(Bool) reg_output_valid    <- mkReg(False);


  //--------------------------------------------------------------------------
  // Rule: MAC Computation Logic
  //--------------------------------------------------------------------------
  rule rl_mac_inputs (reg_input_valid);

    if (reg_mode_fp == 0) begin
      // Integer Mode
      // - Use only lower 8 bits of A and B
      // - Use 32-bit CLA to compute (A * B + C)

      Bit#(32) int_product = multiplier(reg_operand_a[7:0], reg_operand_b[7:0]);
      reg_result           <= cla(int_product, reg_operand_c);
      reg_output_valid     <= True;

    end else begin
      // Floating-Point Mode
      // - Use full 16-bit BF16 A and B
      // - Convert BF16 multiply to FP32
      // - Perform FP32 addition with C

      Bit#(32) fp32_product = bf16_multiplier(reg_operand_a, reg_operand_b);
      reg_result            <= fp32_adder(fp32_product, reg_operand_c);
      reg_output_valid      <= True;
    end

  endrule : rl_mac_inputs


  //--------------------------------------------------------------------------
  // Method: get_inputs
  //--------------------------------------------------------------------------
  /**
   * Latches the inputs into internal registers for MAC operation.
   * This is the only input entry point into the module.
   *
   * Arguments:
   *     a : Operand A (Bit#(16))
   *     b : Operand B (Bit#(16))
   *     c : Accumulator C (Bit#(32))
   *     s : Mode Select (Bit#(1))
   *         - 0 → Integer Mode
   *         - 1 → Floating-Point Mode
   */
  method Action get_inputs(Bit#(16) a, Bit#(16) b, Bit#(32) c, Bit#(1) s);
    reg_operand_a     <= a;
    reg_operand_b     <= b;
    reg_operand_c     <= c;
    reg_mode_fp       <= s;
    reg_input_valid   <= True;
  endmethod : get_inputs


  //--------------------------------------------------------------------------
  // Method: mac_op
  //--------------------------------------------------------------------------
  /**
   * Returns the computed result of the MAC operation.
   * Valid only after `reg_output_valid` is set.
   *
   * Return:
   *     Bit#(32) → Result = A * B + C
   */
  method Bit#(32) mac_op() if (reg_output_valid);
    return reg_result;
  endmethod : mac_op

endmodule : mkMac

/**
 * ------------------------------------------------------------------------
 * Function: cla
 * ------------------------------------------------------------------------
 * Purpose:
 *     Implements a 32-bit Carry Lookahead Adder (CLA) in a sequential form.
 *     This version uses a temporary carry bit to avoid wide carry chains.
 *
 * Usage:
 *     - Fast addition for FP and integer datapaths
 *     - Exponent and mantissa processing in floating-point arithmetic
 *
 * Key Difference:
 *     - Instead of computing carry[] fully in parallel like traditional CLA,
 *       this version uses a single-bit temporary `c` for reduced resource usage.
 *     - Useful in environments with limited hardware parallelism.
 *
 * Inputs:
 *     x, y : 32-bit unsigned operands
 *
 * Output:
 *     sum : 32-bit unsigned result of x + y
 *
 * Internal Notes:
 *     - Uses basic generate and propagate signals
 *     - Reuses a single-bit carry (`c`) for carry propagation
 * ------------------------------------------------------------------------
 */
 function Bit#(32) cla(Bit#(32) x, Bit#(32) y);

  // Carry vector of size 33 bits to store intermediate carry values
  Bit#(33) carry = 0;

  // Final 32-bit sum output
  Bit#(32) sum = 0;

  // ----------------------------------------------------------------------
  // Step 1: Generate and Propagate Signals
  // ----------------------------------------------------------------------
  // Generate: G[i] = x[i] & y[i]
  Bit#(32) g = x & y;

  // Propagate: P[i] = x[i] ^ y[i]
  Bit#(32) p = x ^ y;

  // Temporary carry bit (updated in each loop iteration)
  Bit#(1) c = 0;

  // ----------------------------------------------------------------------
  // Step 2: Compute Sum and Carry Sequentially
  // ----------------------------------------------------------------------
  for (Integer i = 0; i < 32; i = i + 1) begin
    // Compute next carry: C[i+1] = G[i] | (P[i] & C[i])
    c = g[i] | (p[i] & c);

    // Compute sum: S[i] = P[i] ^ C[i]
    sum[i] = p[i] ^ carry[i];

    // Store carry for next iteration
    carry[i+1] = c;
  end

  // ----------------------------------------------------------------------
  // Step 3: Return Final Sum
  // ----------------------------------------------------------------------
  return sum;

endfunction : cla






  //Multiplier Operation using the Carry look ahead adder

  function Bit#(32) multiplier(Bit#(8) a, Bit#(8) b);

    //FIrst calcualte whteher the multiplciation is yelding a negativce answe or postive answer , for that we will
    //calaucte what is the MSB bit of a and b7 bit. 1 --> negatuve 0 --> positive 

    Bit#(1) sign     = a[7] ^ b[7];
    Bit#(32) product = 0;
    
    //Next thing if we have any one of the number is negative we need to take the 2's compliment of that and 
    //proceed with oepration and then convert back to original number .

    //Taking thr 2's compilment of the number 
    if(a[7] == 1) a = cla(signExtend(~a) , 32'b1)[7:0];
    if(b[7] == 1) b = cla(signExtend(~b),  32'b1)[7:0];

    //Lets make this as a 32 bit number and have 
    Bit#(32) a_ext = {Bit#(24)'(0), a};

    //nOW LETS perform the addtion using the shift and add method multiplciation
    for (Integer i = 0 ; i < 8 ; i = i + 1) begin 
        if(b[i] == 1) begin 
          product = cla(product, a_ext << i); //SHift and add to the product  
        end
    end

    //Once we do the operation we again need to check the sign of the result , so if we get the sign as 1 then
    // we have got a negative result and we need to 2's compliment to get the original number 

    if(sign == 1) begin 
    
        product = cla(~product , 32'b1); //We negate the product for the result to be negative
    end

    Bit#(32) p = signExtend(product);

    return p;


  endfunction:multiplier


/**
 * ------------------------------------------------------------------------------
 * Function : bf16_inter_mult
 * ------------------------------------------------------------------------------
 * Purpose  : Performs 8-bit × 8-bit multiplication using shift-and-add logic.
 *            Designed for unsigned BF16 fraction multiplication.
 *
 * Inputs   : 
 *   a - 8-bit fractional part of BF16 (implicitly with leading 1)
 *   b - 8-bit fractional part of BF16
 *
 * Output   : 
 *   32-bit partial product
 *
 * Notes:
 *   - Zero-extension is used to make operand 'a' 32-bit before shifting.
 *   - For each set bit in 'b', the appropriately shifted version of 'a' is added.
 * ------------------------------------------------------------------------------
 */
 function Bit#(32) bf16_inter_mult(Bit#(8) a, Bit#(8) b);

  // Zero-extend 8-bit operand 'a' to 32-bit for proper alignment during shifting
  Bit#(32) a_ext = zeroExtend(a);

  // Array of partial terms (like multiplication rows in long multiplication)
  Bit#(32) partials[8];

  // Initialize all partials to 0
  for (Integer i = 0; i < 8; i = i + 1)
    partials[i] = 0;

  // Generate partial products
  for (Integer i = 0; i < 8; i = i + 1) begin
    if (b[i] == 1) begin
      partials[i] = a_ext << i;  // Shift `a` left by i if `b[i]` is 1
    end
  end

  // Accumulate all non-zero partials using CLA
  Bit#(32) result = 0;
  for (Integer i = 0; i < 8; i = i + 1)
    result = cla(result, partials[i]);

  return result;

endfunction : bf16_inter_mult


    

        /**
 /**
 * -------------------------------------------------------------------------------------
 * Function  : bf16_multiplier
 * -------------------------------------------------------------------------------------
 * Purpose   : Multiplies two BF16 (bfloat16) numbers and returns an IEEE-754 compliant
 *             FP32 (single-precision float) result.
 *
 * Format Description:
 *   - BF16 (16 bits):
 *       [15]     → Sign bit
 *       [14:7]   → Exponent (8 bits, bias = 127)
 *       [6:0]    → Mantissa (7 bits, implicit leading '1' assumed for normalized numbers)
 *
 *   - FP32 (32 bits):
 *       [31]     → Sign bit
 *       [30:23]  → Exponent (8 bits)
 *       [22:0]   → Mantissa (23 bits)
 *
 * Rounding Logic:
 *   - Implements IEEE-754 "Round to Nearest, Ties to Even"
 *   - Uses guard (rounding) and sticky bits to determine rounding decision:
 *       Case 1: Rounded bit = 0  → round down (truncate)
 *       Case 2: Rounded bit = 1 and lower bits ≠ 0 → round up
 *       Case 3: Rounded bit = 1 and lower bits = 0 → round to even
 * -------------------------------------------------------------------------------------
 */
function Bit#(32) bf16_multiplier(Bit#(16) a, Bit#(16) b);

  // ------------------------------------------------------------
  // Step 1: Extract sign, exponent, and mantissa from BF16 inputs
  // ------------------------------------------------------------
  Bit#(1) sign_a = a[15];
  Bit#(1) sign_b = b[15];

  Bit#(8) exponent_a = a[14:7];
  Bit#(8) exponent_b = b[14:7];

  // Extend 7-bit mantissas with implied leading 1 to form 1.fraction
  Bit#(8) norm_mantissa_a = {1'b1, a[6:0]};
  Bit#(8) norm_mantissa_b = {1'b1, b[6:0]};

  // ------------------------------------------------------------
  // Step 2: Perform mantissa multiplication
  // → Using helper function (shift-and-add), truncate result to 16 bits
  // ------------------------------------------------------------
  Bit#(16) intermediate_product = bf16_inter_mult(norm_mantissa_a, norm_mantissa_b)[15:0];

  Bit#(23) fp32_fraction = 23'b0;
  Bit#(32) mantissa_extended = 32'b0;
  Bit#(1)  rounding_bit = 1'b0;
  Bit#(1)  rounding_carry = 1'b0;

  // ------------------------------------------------------------
  // Step 3: Normalize & Round
  //
 // ------------------------------------------------------------
// Case A: intermediate_product[15] == 0
//   → Normal mantissa result (already < 1), no shift needed
//   → Mantissa: bits [14:7]
//   → Rounding bit: bit [6], sticky: bits [5:0]
// ------------------------------------------------------------
if (intermediate_product[15] == 0) begin 
mantissa_extended = zeroExtend(intermediate_product[14:7]);  // Take next top 7 bits
rounding_bit = intermediate_product[6];                      // Guard bit

// --- IEEE Rounding Logic ---
// Round if:
//   → rounding_bit is 1 AND
//   → sticky bits [5:0] are non-zero
if (rounding_bit == 1 && intermediate_product[7:0] != 8'b01000000) begin 
  mantissa_extended = cla(mantissa_extended , 32'b1); // Round up
  
  // Overflow from rounding (e.g. 0b1111111 → 0b10000000)
  if (mantissa_extended[8] == 1) begin 
    mantissa_extended = cla((mantissa_extended >> 1), {31'b0, mantissa_extended[0]});
    rounding_carry = 1'b1;
  end
end

fp32_fraction = {mantissa_extended[6:0], 16'b0};  // Final 23-bit mantissa
end

// ------------------------------------------------------------
// Case B: intermediate_product[15] == 1
//   → Overflowed mantissa product (≥1), normalization required
//   → Mantissa: bits [14:8], rounding: bit [7], sticky: bits [6:0]
// ------------------------------------------------------------
else begin 
mantissa_extended = zeroExtend(intermediate_product[14:8]); // Take top 7 bits
rounding_bit = intermediate_product[7];                     // Guard bit

// --- IEEE Rounding: Round-to-Nearest, Ties-to-Even ---
if (rounding_bit == 1 && intermediate_product[8:0] != 9'b010000000) begin
  mantissa_extended = cla(mantissa_extended , 32'b1);  // Round up
end

fp32_fraction = {mantissa_extended[6:0], 16'b0};  // Pad to 23-bit field
end

  // ------------------------------------------------------------
  // Step 4: Compute Final Sign, Exponent and Assemble Result
  // ------------------------------------------------------------

  // Final sign is XOR of input signs
  Bit#(1) final_sign = sign_a ^ sign_b;

  // Determine bias based on normalization and rounding overflow
  Bit#(8) bias = 8'b0;
  if ((intermediate_product[15] == 1) || (rounding_carry == 1))
    bias = 8'b10000010;  // 130 = 127 + 1 (for shift)
  else
    bias = 8'b10000001;  // 129 = 127 + 1 (no shift)

  // Exponent calculation: exp_a + exp_b + bias
  Bit#(32) raw_exponent_sum = cla({24'b0, exponent_a}, {24'b0, exponent_b});
  Bit#(8) final_exponent    = cla(raw_exponent_sum, {24'b1, bias})[7:0];

  // Final FP32 assembly: {sign, exponent, fraction}
  Bit#(32) result = {final_sign, final_exponent, fp32_fraction};
  return result;

endfunction : bf16_multiplier


      
      /**
 * ------------------------------------------------------------------------
 * Function: fp32_adder
 * ------------------------------------------------------------------------
 * Purpose:
 *     This function implements floating-point addition of two IEEE-754
 *     32-bit (single-precision) numbers. It handles:
 *       - Sign extraction
 *       - Exponent alignment
 *       - Mantissa addition/subtraction
 *       - Normalization
 *       - IEEE-754 compliant rounding (round to nearest even)
 *       - Re-assembly of the final 32-bit FP result
 * 
 * Format of IEEE-754 FP32:
 *     [1 sign bit][8 exponent bits][23 mantissa bits]
 *     Actual mantissa used = 1.M (implicit leading 1 for normalized numbers)
 *
 * Rounding Rule (IEEE-754 Round to Nearest, Ties to Even):
 *     - If round bit < 0.5 → round down
 *     - If round bit > 0.5 → round up
 *     - If exactly 0.5 → round to even (check trailing bits)
 * ------------------------------------------------------------------------
 */
function Bit#(32) fp32_adder(Bit#(32) a, Bit#(32) b);

  //----------------------------------------------------------------------
  // Step 1: Extract sign, exponent, and mantissa from both operands
  //----------------------------------------------------------------------

  // Operand A
  Bit #(1) sign_a             = a[31];                         // Sign bit
  Bit#(32) exponent_a         = zeroExtend(a[30:23]);          // 8-bit exponent (zero-extended to 32-bit)
  Bit#(32) exponent_a_neg     = cla(~exponent_a, 32'b1);       // 2's complement for subtraction
  Bit#(32) mantissa_a         = zeroExtend(a[22:0]);           // Extract 23-bit mantissa
  mantissa_a[23]              = 1;                             // Add implicit leading 1 → 1.M

  // Operand B
  Bit#(1) sign_b              = b[31];
  Bit#(32) exponent_b         = zeroExtend(b[30:23]);
  Bit#(32) exponent_b_neg     = cla(~exponent_b, 32'b1);
  Bit#(32) mantissa_b         = zeroExtend(b[22:0]);
  mantissa_b[23]              = 1;

  //----------------------------------------------------------------------
  // Step 2: Initialize intermediate variables for alignment and result
  //----------------------------------------------------------------------
  Bit#(32) exponent_diff           = 32'b0;
  Bit#(32) aligned_mantissa_a     = 32'b0;
  Bit#(32) aligned_mantissa_b     = 32'b0;
  Bit#(32) selected_exponent      = 32'b0;      // Final exponent after alignment
  Bit#(32) mantissa_result        = 32'b0;      // Output mantissa after add/sub
  Bit#(1)  result_sign            = 1'b0;
  Bit#(32) normalized_mantissa    = 32'b0;
  Bit#(32) final_mantissa         = 32'b0;
  Bit#(32) rounding_mask          = 32'b1;
  Bit#(32) rounding_mask_neg      = cla(~rounding_mask, 32'b1);

  //----------------------------------------------------------------------
  // Step 3: Align mantissas
  // - The mantissa of the number with smaller exponent is shifted right
  // - We compute rounding mask and rounding bits to apply IEEE rounding
  //----------------------------------------------------------------------
  if (exponent_a > exponent_b) begin
    exponent_diff       = cla(exponent_a, exponent_b_neg); // A_exp - B_exp
    aligned_mantissa_a  = mantissa_a;

    Bit#(32) exp_diff_minus_1 = cla(exponent_diff, rounding_mask_neg);
    rounding_mask             = cla(rounding_mask << exp_diff_minus_1, rounding_mask_neg);

    // ----------- Rounding Logic ------------
    // If rounding bit == 0 and trailing bits == 0 → no rounding
    // Else → round to nearest even
    if (mantissa_b[exponent_diff] == 0 && (rounding_mask & mantissa_b) == 0) begin
      aligned_mantissa_b = mantissa_b >> exponent_diff;               // No rounding
    end else begin
      aligned_mantissa_b = cla(mantissa_b >> exponent_diff, {31'b0, mantissa_b[exp_diff_minus_1]}); // Rounded
    end
    selected_exponent = exponent_a;

  end else begin
    exponent_diff       = cla(exponent_b, exponent_a_neg);
    aligned_mantissa_b  = mantissa_b;

    Bit#(32) exp_diff_minus_1 = cla(exponent_diff, rounding_mask_neg);
    rounding_mask             = cla(rounding_mask << exp_diff_minus_1, rounding_mask_neg);

    if (mantissa_a[exponent_diff] != 0 && (rounding_mask & mantissa_a) == 0) begin
      aligned_mantissa_a = mantissa_a >> exponent_diff;
    end else begin
      aligned_mantissa_a = cla(mantissa_a >> exponent_diff, {31'b0, mantissa_a[exp_diff_minus_1]});
    end
    selected_exponent = exponent_b;
  end

  //----------------------------------------------------------------------
  // Step 4: Perform addition or subtraction based on signs
  //----------------------------------------------------------------------
  Bit#(32) neg_aligned_mant_a = cla(~aligned_mantissa_a, 32'b1); // 2's comp for subtraction
  Bit#(32) neg_aligned_mant_b = cla(~aligned_mantissa_b, 32'b1);

  Bool same_sign = (sign_a == sign_b);

  if (same_sign) begin
    // Signs are same → simple addition
    mantissa_result = cla(aligned_mantissa_a, aligned_mantissa_b);
    result_sign     = sign_a;
  end else begin
    // Signs are different → subtract smaller from larger
    Bool a_is_larger = (aligned_mantissa_a >= aligned_mantissa_b);

    mantissa_result = a_is_larger ?
                        cla(aligned_mantissa_a, neg_aligned_mant_b) :
                        cla(aligned_mantissa_b, neg_aligned_mant_a);

    result_sign     = a_is_larger ? sign_a : sign_b;
  end

  //----------------------------------------------------------------------
  // Step 5: Normalize and apply rounding (Round to Nearest Even)
  //----------------------------------------------------------------------
  if (mantissa_result[24] == 1) begin
    // Overflow (MSB beyond 23) → Shift right
    normalized_mantissa = zeroExtend(mantissa_result[23:1]);

    // Rounding up if needed
    if (mantissa_result[1] != 0) begin
      final_mantissa = cla(normalized_mantissa, {31'b0, mantissa_result[0]});
    end else begin
      final_mantissa = normalized_mantissa;
    end

    // If rounding causes overflow again
    selected_exponent = cla(selected_exponent, 32'b1);
    if (final_mantissa[23] == 1) begin
      selected_exponent = cla(selected_exponent, 32'b1);
    end

  end else if (mantissa_result[23] == 0) begin
    // Underflow → Shift left, Decrement exponent
    selected_exponent = cla(selected_exponent, rounding_mask_neg);
    final_mantissa = zeroExtend({mantissa_result[21:0], 1'b0});

  end else begin
    // Normal case
    final_mantissa = zeroExtend(mantissa_result[22:0]);
  end

  //----------------------------------------------------------------------
  // Step 6: Pack and return final 32-bit FP result
  //----------------------------------------------------------------------
  return {result_sign, selected_exponent[7:0], final_mantissa[22:0]};

endfunction : fp32_adder

    
endpackage 