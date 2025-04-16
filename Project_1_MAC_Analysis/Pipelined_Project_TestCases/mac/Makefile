# ============================================================================
# 🔧 Makefile for BSV Verilog Generation + Simulation Setup
# ----------------------------------------------------------------------------
# This Makefile handles:
#   1. Compiling BSV (`mac.bsv`) into Verilog using BSC
#   2. Generating Verilog & build artifacts
#   3. Delegating simulation to cocotb using verilator backend
# ============================================================================

# Top-level BSV file
TOPFILE=mac.bsv

# Include paths for any custom Bluespec libraries
BSVINCDIR=.:%/Libraries

# Preprocessor macro (optional - used for RV64 design variants)
BSCDEFINES=RV64

# Output directories
VERILOGDIR=verilog/
BUILDDIR=intermediate/

# Include cocotb-related test configuration and simulation target
include mac_verif/Makefile.verif

# ----------------------------------------------------------------------------
# 🚀 simulate
# Simulates the design using cocotb (calls verilator by default)
# ----------------------------------------------------------------------------
.PHONY: simulate
simulate: 
	@make SIM=verilator

# ----------------------------------------------------------------------------
# ⚙️ generate_verilog
# Compiles BSV to Verilog using the Bluespec compiler
# ----------------------------------------------------------------------------
.PHONY: generate_verilog
generate_verilog:
	@mkdir -p $(VERILOGDIR) $(BUILDDIR)
	@bsc -u -verilog -elab \
	     -vdir ./verilog \
	     -bdir ./intermediate \
	     -info-dir ./intermediate \
	     +RTS -K4000M -RTS \
	     -check-assert \
	     -keep-fires \
	     -opt-undetermined-vals \
	     -remove-false-rules \
	     -remove-empty-rules \
	     -remove-starved-rules \
	     -remove-dollar \
	     -unspecified-to X \
	     -show-schedule \
	     -show-module-use \
	     -suppress-warnings G0010:T0054:G0020:G0024:G0023:G0096:G0036:G0117:G0015 \
	     -D $(BSCDEFINES) \
	     -p $(BSVINCDIR) \
	     $(TOPFILE)

# ----------------------------------------------------------------------------
# 🧹 clean_build
# Cleans up all build artifacts (Verilog files, VCDs, coverage, etc.)
# ----------------------------------------------------------------------------
.PHONY: clean_build
clean_build:
	@make clean
	@rm -rf $(VERILOGDIR) $(BUILDDIR)
	@rm -rf mac_verif/__pycache__
	@rm -rf results.xml cov*.yml
	@rm -rf *.vcd results.xml sim_build
	@echo "Cleaned"
