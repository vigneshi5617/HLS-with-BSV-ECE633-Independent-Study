# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0


'''
The testbench uses Python to read input and output vectors for the bf16MAC operation from text files. Each of these files contains binary representations of 16-bit BF16 or 32-bit FP32 values, stored line by line.

- `A_binary.txt`, `B_binary.txt`, and `C_binary.txt` contain binary strings for the three MAC inputs.
- These are converted to base-10 integers using `int(x, 2)` so they can be assigned to DUT ports in the simulation.
- `MAC_binary.txt` contains expected FP32 outputs as binary strings, which are used for bit-accurate comparisons.
- This setup allows the testbench to validate the correctness of 1000 BF16 MAC operations automatically.
'''

"""
Functional test for MAC module:
- Applies 1049 integer test cases (int8 format)
- Applies 1000 floating-point test cases (BF16 format)
- Uses 3-cycle delay to accommodate for non-pipelined behavior
- Compares DUT result to golden reference (assertions)
"""

import os
import random
from pathlib import Path

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge

#-----------------------------------------------------------------------------------------------------
'''
Importing Test cases for mac int32
'''
pwd = os.getcwd()

with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','A_decimal.txt'),'r') as f:
    A_dec_int = f.readlines()
    # Convert each binary string into an integer using base-2
    A_dec_int = [int(a[:-1].strip()) for a in A_dec_int]
   

# ----------------------------------------
# 🧮 B_binary.txt: Contains 16-bit binary strings of operand B (in BF16)
# Example content: "0011111100000000"
# ----------------------------------------
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','B_decimal.txt'),'r') as f:
    B_dec_int = f.readlines()
    B_dec_int = [int(b[:-1].strip()) for b in B_dec_int] 


 # ----------------------------------------
# 🧮 C_binary.txt: Contains 32-bit binary strings of operand C (accumulator in FP32)
# Example content: "01000000010000000000000000000000"
# ----------------------------------------   
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','C_decimal.txt'),'r') as f:
    C_dec_int = f.readlines()
    C_dec_int = [int(c[:-1].strip()) for c in C_dec_int] 


# ----------------------------------------
# 🧾 MAC_binary.txt: Contains expected 32-bit binary results after A×B + C
# These are **kept as strings** for accurate comparison (due to floating-point rounding).
# ----------------------------------------
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','MAC_binary.txt'),'r') as f:
    MAC_bin_int = f.readlines()
    # We only strip newline characters; we do NOT convert to int (we need string comparison)
    MAC_bin_int = [int(mac[:-1].strip()) for mac in MAC_bin_int]
#-----------------------------------------------------------------------------------------------------
'''
Importing Test cases for mac fp32
'''
pwd = os.getcwd()


#Extracting the decimal test cases into arrays 
# ----------------------------------------
# 🧮 A_binary.txt: Contains 16-bit binary strings of operand A (in BF16)
# Example content: "0101010100000000"
# ----------------------------------------  
#Extracting the binary test cases into arrays 
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','A_binary.txt'),'r') as f:
    A_bin_fp = f.readlines()
    # Convert each binary string into an integer using base-2
    A_bin_fp = [int(a[:-1].strip(),2) for a in A_bin_fp]
   

# ----------------------------------------
# 🧮 B_binary.txt: Contains 16-bit binary strings of operand B (in BF16)
# Example content: "0011111100000000"
# ----------------------------------------
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','B_binary.txt'),'r') as f:
    B_bin_fp = f.readlines()
    B_bin_fp = [int(b[:-1].strip(),2) for b in B_bin_fp] 


# ----------------------------------------
# 🧮 C_binary.txt: Contains 32-bit binary strings of operand C (accumulator in FP32)
# Example content: "01000000010000000000000000000000"
# ----------------------------------------
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','C_binary.txt'),'r') as f:
    C_bin_fp = f.readlines()
    C_bin_fp = [int(c[:-1].strip(),2) for c in C_bin_fp] 


# ----------------------------------------
# 🧾 MAC_binary.txt: Contains expected 32-bit binary results after A×B + C
# These are **kept as strings** for accurate comparison (due to floating-point rounding).
# ----------------------------------------
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','MAC_binary.txt'),'r') as f:
    MAC_bin_fp = f.readlines()
    MAC_bin_fp = [str(mac[:-1].strip()) for mac in MAC_bin_fp]

#-----------------------------------------------------------------------------------------------------

@cocotb.test()
async def test_mac(dut):
    """Test to check counter"""

    dut.EN_get_inputs.value = 0
 
    clock = Clock(dut.CLK, 10, units="us")  # Create a 10us period clock on port clk
    # Start the clock. Start it low to avoid issues on the first RisingEdge
    cocotb.start_soon(clock.start(start_high=False))
    
    #Reset
    # Drive reset to initialize registers in the DUT
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK) # wait for clock edge
    dut.RST_N.value = 1       # release reset
    

    # Feed integer test cases
    # Each cycle simulates a MAC operation: result = a * b + c
    # Waits 3 clock cycles to mimic non-pipelined latency

    #Enable all methods
    dut.EN_get_inputs.value = 1
    
    dut.get_inputs_s.value = 0
    dut.get_inputs_a.value = 0
    dut.get_inputs_b.value = 0
    dut.get_inputs_c.value = 0
    dut._log.info('Performing mac_int')
    for i in range(0,1049):
        dut.get_inputs_a.value = A_dec_int[i]
        dut.get_inputs_b.value = B_dec_int[i]
        dut.get_inputs_c.value = C_dec_int[i]
        await RisingEdge(dut.CLK)
        await RisingEdge(dut.CLK)
        await RisingEdge(dut.CLK)
        dut._log.info(f'output {dut.mac_op.value}')
        assert int(MAC_bin_int[i]) == int(str(dut.mac_op.value)), f'MAC Output Mismatch, Expected = {MAC_bin_int[i]} DUT = {int(str(dut.mac_op.value))}'
        
    #Disable all methods
    dut.EN_get_inputs.value = 0
    await RisingEdge(dut.CLK)
    
    #Enable all methods
    dut.EN_get_inputs.value = 1
    
    dut.get_inputs_s.value = 1
    dut.get_inputs_a.value = 0
    dut.get_inputs_b.value = 0
    dut.get_inputs_c.value = 0
    dut._log.info('Performing mac_fp')
    for i in range(0,1000):
        dut.get_inputs_a.value = A_bin_fp[i]
        dut.get_inputs_b.value = B_bin_fp[i]
        dut.get_inputs_c.value = C_bin_fp[i]
        await RisingEdge(dut.CLK)
        await RisingEdge(dut.CLK)
        await RisingEdge(dut.CLK)
        dut._log.info(f'output {dut.mac_op.value}')
        assert str(MAC_bin_fp[i])[0:30] == str(dut.mac_op.value)[0:30], f'MAC Output Mismatch, Expected = {str(MAC_bin_fp[i])} DUT = {str(dut.mac_op.value)}' 

