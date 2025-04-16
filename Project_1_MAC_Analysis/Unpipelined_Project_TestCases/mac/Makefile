# ----------------------
# Top-level BSV source file to be compiled
# ----------------------
TOPFILE=mac.bsv

# ----------------------
# Bluespec include path: 
# - "." for current directory
# - "%/Libraries" allows importing from library path in Bluespec
# ----------------------
BSVINCDIR=.:%/Libraries

# ----------------------
# Define macros passed to BSC (you can add more defines here if needed)
# ----------------------
BSCDEFINES=RV64

# ----------------------
# Output directories for generated Verilog and intermediate files
# ----------------------
VERILOGDIR=verilog/
BUILDDIR=intermediate/

# ----------------------
# Include additional testbench configuration from subdirectory
# This should define how simulation is handled (e.g., Verilator + Cocotb setup)
# ----------------------
include mac_verif/Makefile.verif

# ----------------------
# .PHONY tells make these aren't actual files — just labels for tasks
# ----------------------
.PHONY: simulate
simulate: 
	@make SIM=verilator  # Trigger simulation using Verilator backend

# ----------------------
# Verilog generation step:
# - Create directories if not present
# - Use Bluespec Compiler (bsc) to compile .bsv to Verilog
# - Flags used:
#     -verilog: output Verilog
#     -elab: elaborate top-level module
#     -vdir, -bdir: output dirs for Verilog + intermediates
#     -check-assert: ensure `assert` rules are compiled
#     -keep-fires: show firing rules for debug
#     -remove-*rules: cleans up dead or unreachable rules
#     -unspecified-to X: propagate ‘X’ for unspecified values
#     -show-schedule, -show-module-use: good for debug
#     -suppress-warnings: suppress non-critical warnings
# ----------------------
.PHONY: generate_verilog
generate_verilog:
	@mkdir -p $(VERILOGDIR) $(BUILDDIR)
	@bsc -u -verilog -elab \
	-vdir ./verilog -bdir ./intermediate -info-dir ./intermediate \
	+RTS -K4000M -RTS \
	-check-assert -keep-fires \
	-opt-undetermined-vals \
	-remove-false-rules -remove-empty-rules -remove-starved-rules \
	-remove-dollar -unspecified-to X \
	-show-schedule -show-module-use \
	-suppress-warnings G0010:T0054:G0020:G0024:G0023:G0096:G0036:G0117:G0015 \
	-D $(BSCDEFINES) -p $(BSVINCDIR) $(TOPFILE)

# ----------------------
# Cleanup Rule:
# - Removes Verilog output, intermediate compilation files, VCD traces, and coverage YAMLs
# - Also clears Python cache from the test directory
# ----------------------
.PHONY: clean_build
clean_build:
	@make clean
	@rm -rf $(VERILOGDIR) $(BUILDDIR)
	@rm -rf mac_verif/__pycache__
	@rm -rf results.xml cov*.yml
	@rm -rf *.vcd results.xml sim_build
	@echo "Cleaned"
