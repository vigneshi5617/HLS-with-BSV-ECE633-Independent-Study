# Run Commands for the code
This is the folder for testing coverage of fp32 MAC.

## Coverage
We chose the range of inputs as follows to test the coverage.
- a : (-16,16)
- b : (-16,16)
- c : (-16,16)

While increasing the range of inputs is possible, the coverage report was not dumped(Terminal operation killed due to memory overload) due to the many combinations possible, and the RAM limit was 16GB.
The user can increase the range using the computational resources available.
The sample coverage report shows 100% coverage for the test cases chosen! The report can be found in the Mac folder.

Make a clone of the mac folder in this repo. Run the following commands.
## To activate pyenv

```
pyenv activate py38
```

## To setup cocotb (remove any older versions and install v1.6.2)
```
pip uninstall cocotb
pip install cocotb==1.6.2
```

## To compile and generate verilog from bsv

```
make  generate_verilog
```

## To simulate using cocotb
```
pip install cocotb_coverage==1.1
make simulate 
```

## To clean all the builds
```
make clean_build
```
