package Testbench;

import StmtFSM :: *;         // Import FSM utilities
import interface_intro :: *; // Import the DUT package

(* synthesize *)
module mkTestbench(Empty);

    // Instantiate the DUT
    Ifc_tpye1 dut <- mkModuleDeepThought;

    // Register to store output
    Reg#(int) result <- mkReg(0);

    // Define the test sequence for a single input set
    Stmt test_seq = seq
        $display("Starting single-input test...");

        // Apply a single test case
        $display("Assigning values: (10, 20, 30)");
        dut.the_assign(10, 20, 30);

        // Wait 1 cycle for computation
        delay(1);

        // Store the result in a register instead of using 'let'
        result <= dut.the_answer();

        // Wait 1 cycle to ensure value is updated
        delay(1);

        // Print the result
        $display("Computed Answer: %d (Expected: 60)", result);

        $display("Single-input test completed.");
    endseq;

    // Run the test sequence using mkAutoFSM
    mkAutoFSM(test_seq);

endmodule: mkTestbench

endpackage: Testbench

// package Testbench;

// import interface_intro :: *;

// (* synthesize *)
// module mkTestbench(Empty);

//     // Instantiate the DUT (Device Under Test)
//     Ifc_tpye1 dut <- mkModuleDeepThought;

//     Reg#(int) state <- mkReg(0);
//     // Registers for input values
//     Reg#(int) rg_x <- mkReg(10);
//     Reg#(int) rg_y <- mkReg(20);
//     Reg#(int) rg_z <- mkReg(30);

//     rule request(state == 0);
//         dut.the_assign(rg_x, rg_y, rg_z);
//         $display("-> Assigned values: x=%0d, y=%0d, z=%0d", rg_x, rg_y, rg_z);
//         state <= 1;
//     endrule

//     rule check_result(state == 1);
//         let result = dut.the_answer();
//         state <= 2;
//         $display("-> Computed answer from DUT: %0d (Expected: %0d)", result, rg_x + rg_y + rg_z);
//         $finish;
//     endrule

// endmodule: mkTestbench

// endpackage: Testbench
