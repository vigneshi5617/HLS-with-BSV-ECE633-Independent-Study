TOPLEVEL_LANG ?= verilog
SIM ?= icarus
include Makefile.inc

VERILOG_SOURCES += $(TOP_DIR)/$(TOP_MODULE).v

TOPLEVEL = $(TOP_MODULE)
MODULE = $(MODULE)

or:
        $(MAKE) sim MODULE=or_test TOPLEVEL=or_test
include $(shell cocotb-config --makefiles)/Makefile.sim