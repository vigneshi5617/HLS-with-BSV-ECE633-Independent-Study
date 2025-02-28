/*
 * Generated by Bluespec Compiler, version 2024.07-22-g934465e3 (build 934465e3)
 * 
 * On Fri Feb  7 15:27:13 EST 2025
 * 
 */

/* Generation options: */
#ifndef __model_mk_counter_Tb_h__
#define __model_mk_counter_Tb_h__

#include "bluesim_types.h"
#include "bs_module.h"
#include "bluesim_primitives.h"
#include "bs_vcd.h"

#include "bs_model.h"
#include "mk_counter_Tb.h"

/* Class declaration for a model of mk_counter_Tb */
class MODEL_mk_counter_Tb : public Model {
 
 /* Top-level module instance */
 private:
  MOD_mk_counter_Tb *mk_counter_Tb_instance;
 
 /* Handle to the simulation kernel */
 private:
  tSimStateHdl sim_hdl;
 
 /* Constructor */
 public:
  MODEL_mk_counter_Tb();
 
 /* Functions required by the kernel */
 public:
  void create_model(tSimStateHdl simHdl, bool master);
  void destroy_model();
  void reset_model(bool asserted);
  void get_version(char const **name, char const **build);
  time_t get_creation_time();
  void * get_instance();
  void dump_state();
  void dump_VCD_defs();
  void dump_VCD(tVCDDumpType dt);
};

/* Function for creating a new model */
extern "C" {
  void * new_MODEL_mk_counter_Tb();
}

#endif /* ifndef __model_mk_counter_Tb_h__ */
