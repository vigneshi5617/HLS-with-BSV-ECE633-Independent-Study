# BSC_COMP_FLAGS = -elab -keep-fires -aggressive-conditions -no-warn-action-shadowing
# BSC_LINK_FLAGS =
# BSC_PATHS = -p .:./../../Common:./src_BSV:%/Prelude:%/Libraries


# # ----------------------------------------------------------------
# # Help command
# .PHONY: help
# help:
# 	@echo "Available make commands:"
# 	@echo ""
# 	@echo "Bluesim Flow:"
# 	@echo "  make compile         Compile the Bluespec program for Bluesim simulation."
# 	@echo "  make link            Link the compiled Bluesim files into an executable."
# 	@echo "  make simulate        Run the Bluesim simulation executable."
# 	@echo ""
# 	@echo "Verilog Flow:"
# 	@echo "  make v_compile       Compile the Bluespec program into Verilog files."
# 	@echo "  make v_link          Link the Verilog files into a simulation executable."
# 	@echo "  make v_simulate      Run the Verilog simulation executable."
# 	@echo ""
# 	@echo "Cleanup:"
# 	@echo "  make clean           Remove temporary and intermediate files."
# 	@echo "  make full_clean      Remove all generated files, binaries, and Verilog files."
# 	@echo ""

# # ----------------------------------------------------------------


# .PHONY: default
# default: compile link

# # ----------------------------------------------------------------
# # Bluesim compile/link/simulate

# BSIM_DIRS = -simdir build_bsim -bdir build_bsim -info-dir build_bsim

# .PHONY: compile
# compile:
# 	@echo Compiling for Bluesim ...
# 	bsc -u -sim $(BSIM_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mkTb src_BSV/Tb.bsv 
# 	@echo Compiling for Bluesim finished

# .PHONY: link
# link:
# 	@echo Linking for Bluesim ...
# 	bsc -e mkTb -sim -o ./out $(BSIM_DIRS) $(BSC_LINK_FLAGS) $(BSC_PATHS)
# 	@echo Linking for Bluesim finished

# .PHONY: simulate
# simulate:
# 	@echo Bluesim simulation ...
# 	./out -V
# 	@echo Bluesim simulation finished

# # ----------------------------------------------------------------
# # Verilog compile/link/sim

# V_DIRS = -vdir verilog -bdir build_v -info-dir build_v

# .PHONY: v_compile
# v_compile:
# 	@echo Compiling for Verilog ...
# 	bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mkTb  src_BSV/Tb.bsv
# 	@echo Compiling for Verilog finished

# .PHONY: v_link
# v_link:
# 	@echo Linking for Verilog sim ...
# 	bsc -e mkTb -verilog -o ./out_v $(V_DIRS) -vsim iverilog  verilog/mkTb.v
# 	@echo Linking for Verilog sim finished

# .PHONY: v_simulate
# v_simulate:
# 	@echo Verilog simulation...
# 	./out_v +bscvcd
# 	@echo Verilog simulation finished

# # ----------------------------------------------------------------

# .PHONY: clean
# clean:
# 	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*

# .PHONY: full_clean
# full_clean:
# 	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*
# 	rm -f  out  out.so  out_v  verilog/*


BSC_COMP_FLAGS = -elab -keep-fires -aggressive-conditions -no-warn-action-shadowing
BSC_LINK_FLAGS =
BSC_PATHS = -p .:./src_bsv:%/Prelude:%/Libraries

# Bluesim directories
BSIM_DIRS = -simdir build_bsim -bdir build_bsim -info-dir build_bsim

# Verilog directories
V_DIRS = -vdir verilog -bdir build_v -info-dir build_v

.PHONY: default
default: compile link

.PHONY: help
help:
	@echo "Available make commands:"
	@echo "  make compile         Compile counter_tb.bsv for Bluesim simulation"
	@echo "  make link            Link Bluesim files into executable"
	@echo "  make simulate        Run Bluesim simulation"
	@echo "  make v_compile       Compile counter_tb.bsv to Verilog (mkTb.v)"
	@echo "  make v_link          Link Verilog for simulation"
	@echo "  make v_simulate      Run Verilog simulation"
	@echo "  make clean           Remove temporary files"

.PHONY: compile
compile:
	@echo "Compiling counter_tb.bsv for Bluesim..."
	bsc -u -sim $(BSIM_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_counter_Tb src_bsv/counter_tb.bsv

.PHONY: link
link:
	@echo "Linking mk_counter_Tb for Bluesim..."
	bsc -sim -e mk_counter_Tb -o ./Testbench_bsim $(BSIM_DIRS) $(BSC_LINK_FLAGS)
	@echo Linking for Bluesim finished



# .PHONY: link
# link:
# 	@echo Linking for Bluesim ...
# 	bsc -e mkTb -sim -o ./out $(BSIM_DIRS) $(BSC_LINK_FLAGS) $(BSC_PATHS)
# 	@echo Linking for Bluesim finished



.PHONY: simulate
simulate:
	@echo "Running Bluesim simulation..."
	./Testbench_bsim

.PHONY: v_compile
v_compile:
	@echo "Compiling counter_tb.bsv to Verilog (mk_counter_Tb.v)..."
	bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_counter_Tb src_bsv/counter_tb.bsv

.PHONY: v_link
v_link:
	@echo "Linking Verilog for simulation..."
	bsc -verilog -e mk_counter_Tb -o ./tb_v $(V_DIRS) -vsim iverilog verilog/mk_counter_Tb.v

.PHONY: v_simulate
v_simulate:
	@echo "Running Verilog simulation..."
	./tb_v



# .PHONY: clean
# clean:
# 	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*

.PHONY: full_clean
full_clean:
	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*
	rm -f  Tb_bsim  Tb_bsim.so  tb_v  verilog/*