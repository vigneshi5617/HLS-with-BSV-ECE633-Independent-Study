


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
	@echo "  make compile         Compile fifo_example_testbench.bsv for Bluesim simulation"
	@echo "  make link            Link Bluesim files into executable"
	@echo "  make simulate        Run Bluesim simulation"
	@echo "  make v_compile       Compile fifo_example_testbench.bsv to Verilog (mkTb.v)"
	@echo "  make v_link          Link Verilog for simulation"
	@echo "  make v_simulate      Run Verilog simulation"
	@echo "  make clean           Remove temporary files"

.PHONY: compile
compile:
	@echo "Compiling fifo_example_testbench.bsv for Bluesim..."
	bsc -u -sim $(BSIM_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_fifo_example_testbench src_bsv/fifo_example_testbench.bsv

.PHONY: link
link:
	@echo "Linking mk_fifo_example_testbench for Bluesim..."
	bsc -sim -e mk_fifo_example_testbench -o ./Testbench_bsim $(BSIM_DIRS) $(BSC_LINK_FLAGS)
	@echo Linking for Bluesim finished



# .PHONY: link
# link:
# 	@echo Linking for Bluesim ...
# 	bsc -e mkTb -sim -o ./out $(BSIM_DIRS) $(BSC_LINK_FLAGS) $(BSC_PATHS)
# 	@echo Linking for Bluesim finished



# .PHONY: simulate
# simulate:
# 	@echo "Running Bluesim simulation..."
# 	./Testbench_bsim





.PHONY: simulate
simulate:
	@echo "Running Bluesim simulation..."
	./Testbench_bsim +bscvcd +fstname=dump.vcd

.PHONY: view_wave
view_wave:
	@echo "Opening waveform viewer..."
	gtkwave dump.vcd

.PHONY: v_compile
v_compile:
	@echo "Compiling fifo_example_testbench.bsv to Verilog (mk_fifo_example_testbench.v)..."
	bsc -u -verilog $(V_DIRS) $(BSC_COMP_FLAGS) $(BSC_PATHS) -g mk_fifo_example_testbench src_bsv/fifo_example_testbench.bsv

.PHONY: v_link
v_link:
	@echo "Linking Verilog for simulation..."
	bsc -verilog -e mk_fifo_example_testbench -o ./tb_v $(V_DIRS) -vsim iverilog verilog/mk_fifo_example_testbench.v

.PHONY: v_simulate
v_simulate:
	@echo "Running Verilog simulation..."
	./tb_v



# .PHONY: clean
# clean:
# 	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*

# .PHONY: full_clean
# full_clean:
# 	rm -f  ./*~  src_BSC/*~  build_bsim/*  build_v/*
# 	rm -f  Tb_bsim  Tb_bsim.so  tb_v  verilog/*

.PHONY: clean
clean:
	rm -f ./*~
	rm -rf build_bsim/* build_v/*
	rm -f Testbench_bsim Testbench_bsim.so tb_v
	rm -f dump.vcd
	rm -f verilog/*.v

.PHONY: full_clean
full_clean: clean
	rm -rf build_bsim build_v verilog
