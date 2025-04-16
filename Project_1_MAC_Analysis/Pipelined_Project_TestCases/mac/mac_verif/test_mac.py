# This file is public domain, it can be freely copied without restrictions.
# SPDX-License-Identifier: CC0-1.0

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
#Extracting the decimal test cases into arrays 
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','A_decimal.txt'),'r') as f:
    A_dec_int = f.readlines()
    A_dec_int = [int(a[:-1].strip()) for a in A_dec_int]
   
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','B_decimal.txt'),'r') as f:
    B_dec_int = f.readlines()
    B_dec_int = [int(b[:-1].strip()) for b in B_dec_int] 
    
with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','C_decimal.txt'),'r') as f:
    C_dec_int = f.readlines()
    C_dec_int = [int(c[:-1].strip()) for c in C_dec_int] 

with open(os.path.join(pwd,'mac_verif','test_cases','int8MAC','MAC_binary.txt'),'r') as f:
    MAC_bin_int = f.readlines()
    MAC_bin_int = [int(mac[:-1].strip()) for mac in MAC_bin_int]
#-----------------------------------------------------------------------------------------------------
'''
Importing Test cases for mac fp32
'''
pwd = os.getcwd()
    
#Extracting the binary test cases into arrays 
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','A_binary.txt'),'r') as f:
    A_bin_fp = f.readlines()
    A_bin_fp = [int(a[:-1].strip(),2) for a in A_bin_fp]
   
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','B_binary.txt'),'r') as f:
    B_bin_fp = f.readlines()
    B_bin_fp = [int(b[:-1].strip(),2) for b in B_bin_fp] 
    
with open(os.path.join(pwd,'mac_verif','test_cases','bf16MAC','C_binary.txt'),'r') as f:
    C_bin_fp = f.readlines()
    C_bin_fp = [int(c[:-1].strip(),2) for c in C_bin_fp] 

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
    dut.RST_N.value = 0
    await RisingEdge(dut.CLK)
    dut.RST_N.value = 1
    
    #Enable all methods
    dut.EN_get_inputs.value = 1
    
    dut.get_inputs_s.value = 0
    dut.get_inputs_a.value = 0
    dut.get_inputs_b.value = 0
    dut.get_inputs_c.value = 0
    dut._log.info('Performing mac_int')
    for i in range(0,1054):
        if i<1049:
            dut.get_inputs_a.value = A_dec_int[i]
            dut.get_inputs_b.value = B_dec_int[i]
            dut.get_inputs_c.value = C_dec_int[i]
        await RisingEdge(dut.CLK)
        if i>4:
            dut._log.info(f'output {dut.mac_op.value}')
            assert int(MAC_bin_int[i-5]) == int(str(dut.mac_op.value)), f'MAC Output Mismatch, Expected = {MAC_bin_int[i-4]} DUT = {int(str(dut.mac_op.value))}'
        
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
        if i<1000:
            dut.get_inputs_a.value = A_bin_fp[i]
            dut.get_inputs_b.value = B_bin_fp[i]
            dut.get_inputs_c.value = C_bin_fp[i]
        await RisingEdge(dut.CLK)
        if i>4:
            dut._log.info(f'output {dut.mac_op.value}')
            assert str(MAC_bin_fp[i-5])[0:30] == str(dut.mac_op.value)[0:30], f'MAC Output Mismatch, Expected = {str(MAC_bin_fp[i])} DUT = {str(dut.mac_op.value)}' 

