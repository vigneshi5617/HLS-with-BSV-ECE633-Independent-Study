import cocotb   
import random
import os

from cocotb.clock import Clock
from cocotb.decorators import coroutine
from cocotb.triggers import Timer, RisingEdge, ReadOnly, FallingEdge
from cocotb_bus.monitor import Monitor # type: ignore
from cocotb_bus.drivers import BitDriver
from cocotb.binary      import BinaryValue
from cocotb.regression import TestFactory
from cocotb_bus.scoreboard import Scoreboard
from cocotb.result import TestFailure , TestSuccess

#Understand that #CLK AND RST_N are automatically created by Bluespec, 
#even though our interface is empty.
@cocotb.test()
def hello_world_test(dut):
    cocotb.fork(Clock(dut.CLK,10,).start()) 
    # we are creating a clk dut.CLK with posedge of duration 10 cycles
    dut.RST_N = 0 #generally it is synchronous reset 
    clkedge = RisingEdge(dut.CLK)
    yield clkedge #so that means i am driving the clkedge to te design.
    clkedge = RisingEdge(dut.CLK) # wait for the next clkedge .
    dut.RST_N <= 1
    yield clkedge


