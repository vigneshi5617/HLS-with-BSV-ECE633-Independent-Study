/*
 * Generated by Bluespec Compiler, version 2024.07-22-g934465e3 (build 934465e3)
 * 
 * On Fri Feb  7 15:27:13 EST 2025
 * 
 */
#include "bluesim_primitives.h"
#include "mk_counter.h"


/* String declarations */
static std::string const __str_literal_2("counting is up? %0d", 19u);
static std::string const __str_literal_1("value in reg is: %0d", 20u);


/* Constructor */
MOD_mk_counter::MOD_mk_counter(tSimStateHdl simHdl, char const *name, Module *parent)
  : Module(simHdl, name, parent),
    __clk_handle_0(BAD_CLOCK_HANDLE),
    INST_rg_count(simHdl, "rg_count", this, 32u, 0u, (tUInt8)0u),
    INST_wr_decr(simHdl, "wr_decr", this, 32u, (tUInt8)0u),
    INST_wr_incr(simHdl, "wr_incr", this, 32u, (tUInt8)0u),
    PORT_RST_N((tUInt8)1u)
{
  symbol_count = 5u;
  symbols = new tSym[symbol_count];
  init_symbols_0();
}


/* Symbol init fns */

void MOD_mk_counter::init_symbols_0()
{
  init_symbol(&symbols[0u], "RL_rl_decr", SYM_RULE);
  init_symbol(&symbols[1u], "RL_rl_incr", SYM_RULE);
  init_symbol(&symbols[2u], "rg_count", SYM_MODULE, &INST_rg_count);
  init_symbol(&symbols[3u], "wr_decr", SYM_MODULE, &INST_wr_decr);
  init_symbol(&symbols[4u], "wr_incr", SYM_MODULE, &INST_wr_incr);
}


/* Rule actions */

void MOD_mk_counter::RL_rl_incr()
{
  tUInt32 DEF_rg_count_PLUS_wr_incr_wget___d5;
  DEF_b__h238 = INST_rg_count.METH_read();
  DEF_signed_rg_count___d3 = DEF_b__h238;
  DEF_rg_count_PLUS_wr_incr_wget___d5 = DEF_b__h238 + INST_wr_incr.METH_wget();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s,-32", &__str_literal_1, DEF_signed_rg_count___d3);
  INST_rg_count.METH_write(DEF_rg_count_PLUS_wr_incr_wget___d5);
}

void MOD_mk_counter::RL_rl_decr()
{
  tUInt32 DEF_rg_count_MINUS_wr_decr_wget___d8;
  DEF_b__h238 = INST_rg_count.METH_read();
  DEF_signed_rg_count___d3 = DEF_b__h238;
  DEF_rg_count_MINUS_wr_decr_wget___d8 = DEF_b__h238 - INST_wr_decr.METH_wget();
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s,-32", &__str_literal_1, DEF_signed_rg_count___d3);
  INST_rg_count.METH_write(DEF_rg_count_MINUS_wr_decr_wget___d8);
}


/* Methods */

void MOD_mk_counter::METH_ma_start(tUInt8 ARG_ma_start_count_up)
{
  tUInt8 DEF_NOT_ma_start_count_up___d9;
  DEF_NOT_ma_start_count_up___d9 = !ARG_ma_start_count_up;
  if (!(PORT_RST_N == (tUInt8)0u))
    dollar_display(sim_hdl, this, "s,1", &__str_literal_2, ARG_ma_start_count_up);
  if (ARG_ma_start_count_up)
    INST_wr_incr.METH_wset(1u);
  if (DEF_NOT_ma_start_count_up___d9)
    INST_wr_decr.METH_wset(1u);
}

tUInt8 MOD_mk_counter::METH_RDY_ma_start()
{
  tUInt8 DEF_CAN_FIRE_ma_start;
  tUInt8 PORT_RDY_ma_start;
  DEF_CAN_FIRE_ma_start = (tUInt8)1u;
  PORT_RDY_ma_start = DEF_CAN_FIRE_ma_start;
  return PORT_RDY_ma_start;
}

tUInt32 MOD_mk_counter::METH_ma_stop()
{
  tUInt32 PORT_ma_stop;
  DEF_b__h238 = INST_rg_count.METH_read();
  PORT_ma_stop = DEF_b__h238;
  return PORT_ma_stop;
}

tUInt8 MOD_mk_counter::METH_RDY_ma_stop()
{
  tUInt8 DEF_CAN_FIRE_ma_stop;
  tUInt8 PORT_RDY_ma_stop;
  DEF_CAN_FIRE_ma_stop = (tUInt8)1u;
  PORT_RDY_ma_stop = DEF_CAN_FIRE_ma_stop;
  return PORT_RDY_ma_stop;
}


/* Reset routines */

void MOD_mk_counter::reset_RST_N(tUInt8 ARG_rst_in)
{
  PORT_RST_N = ARG_rst_in;
  INST_rg_count.reset_RST(ARG_rst_in);
}


/* Static handles to reset routines */


/* Functions for the parent module to register its reset fns */


/* Functions to set the elaborated clock id */

void MOD_mk_counter::set_clk_0(char const *s)
{
  __clk_handle_0 = bk_get_or_define_clock(sim_hdl, s);
}


/* State dumping routine */
void MOD_mk_counter::dump_state(unsigned int indent)
{
  printf("%*s%s:\n", indent, "", inst_name);
  INST_rg_count.dump_state(indent + 2u);
  INST_wr_decr.dump_state(indent + 2u);
  INST_wr_incr.dump_state(indent + 2u);
}


/* VCD dumping routines */

unsigned int MOD_mk_counter::dump_VCD_defs(unsigned int levels)
{
  vcd_write_scope_start(sim_hdl, inst_name);
  vcd_num = vcd_reserve_ids(sim_hdl, 6u);
  unsigned int num = vcd_num;
  for (unsigned int clk = 0u; clk < bk_num_clocks(sim_hdl); ++clk)
    vcd_add_clock_def(sim_hdl, this, bk_clock_name(sim_hdl, clk), bk_clock_vcd_num(sim_hdl, clk));
  vcd_write_def(sim_hdl, bk_clock_vcd_num(sim_hdl, __clk_handle_0), "CLK", 1u);
  vcd_write_def(sim_hdl, num++, "RST_N", 1u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "b__h238", 32u);
  vcd_set_clock(sim_hdl, num, __clk_handle_0);
  vcd_write_def(sim_hdl, num++, "signed_rg_count___d3", 32u);
  num = INST_rg_count.dump_VCD_defs(num);
  num = INST_wr_decr.dump_VCD_defs(num);
  num = INST_wr_incr.dump_VCD_defs(num);
  vcd_write_scope_end(sim_hdl);
  return num;
}

void MOD_mk_counter::dump_VCD(tVCDDumpType dt, unsigned int levels, MOD_mk_counter &backing)
{
  vcd_defs(dt, backing);
  vcd_prims(dt, backing);
}

void MOD_mk_counter::vcd_defs(tVCDDumpType dt, MOD_mk_counter &backing)
{
  unsigned int num = vcd_num;
  if (dt == VCD_DUMP_XS)
  {
    vcd_write_x(sim_hdl, num++, 1u);
    vcd_write_x(sim_hdl, num++, 32u);
    vcd_write_x(sim_hdl, num++, 32u);
  }
  else
    if (dt == VCD_DUMP_CHANGES)
    {
      if ((backing.PORT_RST_N) != PORT_RST_N)
      {
	vcd_write_val(sim_hdl, num, PORT_RST_N, 1u);
	backing.PORT_RST_N = PORT_RST_N;
      }
      ++num;
      if ((backing.DEF_b__h238) != DEF_b__h238)
      {
	vcd_write_val(sim_hdl, num, DEF_b__h238, 32u);
	backing.DEF_b__h238 = DEF_b__h238;
      }
      ++num;
      if ((backing.DEF_signed_rg_count___d3) != DEF_signed_rg_count___d3)
      {
	vcd_write_val(sim_hdl, num, DEF_signed_rg_count___d3, 32u);
	backing.DEF_signed_rg_count___d3 = DEF_signed_rg_count___d3;
      }
      ++num;
    }
    else
    {
      vcd_write_val(sim_hdl, num++, PORT_RST_N, 1u);
      backing.PORT_RST_N = PORT_RST_N;
      vcd_write_val(sim_hdl, num++, DEF_b__h238, 32u);
      backing.DEF_b__h238 = DEF_b__h238;
      vcd_write_val(sim_hdl, num++, DEF_signed_rg_count___d3, 32u);
      backing.DEF_signed_rg_count___d3 = DEF_signed_rg_count___d3;
    }
}

void MOD_mk_counter::vcd_prims(tVCDDumpType dt, MOD_mk_counter &backing)
{
  INST_rg_count.dump_VCD(dt, backing.INST_rg_count);
  INST_wr_decr.dump_VCD(dt, backing.INST_wr_decr);
  INST_wr_incr.dump_VCD(dt, backing.INST_wr_incr);
}
