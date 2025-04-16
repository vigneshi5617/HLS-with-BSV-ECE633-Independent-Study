// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__0\n"); );
    // Body
    vlSelf->mkMac__DOT__CLK = vlSelf->CLK;
    vlSelf->mkMac__DOT__RST_N = vlSelf->RST_N;
    vlSelf->mkMac__DOT__get_inputs_a = vlSelf->get_inputs_a;
    vlSelf->mkMac__DOT__get_inputs_b = vlSelf->get_inputs_b;
    vlSelf->mkMac__DOT__get_inputs_c = vlSelf->get_inputs_c;
    vlSelf->mkMac__DOT__get_inputs_s = vlSelf->get_inputs_s;
    vlSelf->mkMac__DOT__EN_get_inputs = vlSelf->EN_get_inputs;
    vlSelf->mkMac__DOT__reg_a_D_IN = vlSelf->get_inputs_a;
    vlSelf->mkMac__DOT__reg_b_D_IN = vlSelf->get_inputs_b;
    vlSelf->mkMac__DOT__reg_c_D_IN = vlSelf->get_inputs_c;
    vlSelf->mkMac__DOT__reg_s_D_IN = vlSelf->get_inputs_s;
    vlSelf->RDY_get_inputs = vlSelf->mkMac__DOT__RDY_get_inputs;
    vlSelf->macop = vlSelf->mkMac__DOT__rg_out;
    vlSelf->RDY_macop = vlSelf->mkMac__DOT__rg_out_valid;
    vlSelf->mkMac__DOT__CAN_FIRE_RL_rl_mac = vlSelf->mkMac__DOT__rg_inp_valid;
    vlSelf->mkMac__DOT__reg_a_EN = vlSelf->EN_get_inputs;
    vlSelf->mkMac__DOT__fp_ififo_rv_EN_port1___05Fwrite 
        = ((IData)(vlSelf->mkMac__DOT__reg_s) & (IData)(vlSelf->mkMac__DOT__rg_inp_valid));
    vlSelf->mkMac__DOT__int_ififo_rv_EN_port1___05Fwrite 
        = ((~ (IData)(vlSelf->mkMac__DOT__reg_s)) & (IData)(vlSelf->mkMac__DOT__rg_inp_valid));
    vlSelf->mkMac__DOT__sgn___05Fh80850 = (1U & VL_REDXOR_32(
                                                             (0x80008000U 
                                                              & vlSelf->mkMac__DOT__fp_ififo_rv[1U])));
    vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelf->mkMac__DOT__reg_a) 
                                      << 0x10U) | (IData)(vlSelf->mkMac__DOT__reg_b)))) 
                    << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__reg_c))));
    vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelf->mkMac__DOT__reg_a) 
                                       << 0x10U) | (IData)(vlSelf->mkMac__DOT__reg_b)))) 
                     << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__reg_c))) 
                   >> 0x20U));
    vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[2U] = 1U;
    vlSelf->mkMac__DOT__rg_add_bf_valid_D_IN = (1U 
                                                & vlSelf->mkMac__DOT__fp_ififo_rv[2U]);
    vlSelf->mkMac__DOT__rg_add_int_valid_D_IN = (1U 
                                                 & vlSelf->mkMac__DOT__int_ififo_rv[2U]);
    vlSelf->mkMac__DOT__rg_out_bf_valid_D_IN = (1U 
                                                & vlSelf->mkMac__DOT__fp_pfifo_rv[2U]);
    vlSelf->mkMac__DOT__rg_out_int_valid_D_IN = (1U 
                                                 & vlSelf->mkMac__DOT__int_pfifo_rv[2U]);
    vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int = (1U 
                                                   & (IData)(
                                                             (vlSelf->mkMac__DOT__int_ofifo_rv 
                                                              >> 0x20U)));
    vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp = (1U 
                                                  & (IData)(
                                                            (vlSelf->mkMac__DOT__fp_ofifo_rv 
                                                             >> 0x20U)));
    vlSelf->mkMac__DOT__propagate___05Fh138860 = (vlSelf->mkMac__DOT__int_pfifo_rv[1U] 
                                                  ^ 
                                                  vlSelf->mkMac__DOT__int_pfifo_rv[0U]);
    vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
        = (vlSelf->mkMac__DOT__int_pfifo_rv[1U] & vlSelf->mkMac__DOT__int_pfifo_rv[0U]);
    vlSelf->mkMac__DOT__fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ_fp___05FETC___05F_d2921 
        = ((vlSelf->mkMac__DOT__fp_pfifo_rv[1U] >> 0x1fU) 
           == (vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
               >> 0x1fU));
    vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343 
        = (0xffU & (((vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                      << 9U) | (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                >> 0x17U)) ^ ((vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                               << 0x19U) 
                                              | (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                 >> 7U))));
    vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345 
        = (0xffU & (((vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                      << 9U) | (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                >> 0x17U)) & ((vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                               << 0x19U) 
                                              | (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                 >> 7U))));
    vlSelf->mkMac__DOT__y___05Fh85326 = (0x4000U | 
                                         (0x3f80U & 
                                          (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                           >> 9U)));
    vlSelf->mkMac__DOT__y___05Fh85386 = (0x2000U | 
                                         (0x1fc0U & 
                                          (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                           >> 0xaU)));
    vlSelf->mkMac__DOT__mant_a___05Fh143146 = (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->mkMac__DOT__fp_pfifo_rv[1U]));
    vlSelf->mkMac__DOT__mant_b___05Fh143151 = (0x800000U 
                                               | (0x7fffffU 
                                                  & vlSelf->mkMac__DOT__fp_pfifo_rv[0U]));
    vlSelf->mkMac__DOT__y___05Fh85446 = (0x1000U | 
                                         (0xfe0U & 
                                          (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                           >> 0xbU)));
    vlSelf->mkMac__DOT__y___05Fh85506 = (0x800U | (0x7f0U 
                                                   & (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                      >> 0xcU)));
    vlSelf->mkMac__DOT__exp_b___05Fh143148 = (0xffU 
                                              & (vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                                                 >> 0x17U));
    vlSelf->mkMac__DOT__exp_a___05Fh143143 = (0xffU 
                                              & (vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                                                 >> 0x17U));
    vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2 
        = (0xffU & (~ ((vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                        << 9U) | (vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                                  >> 0x17U))));
    vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1 
        = (0xffU & (~ ((vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                        << 9U) | (vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                                  >> 0x17U))));
    vlSelf->mkMac__DOT__y___05Fh85566 = (0x400U | (0x3f8U 
                                                   & (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                      >> 0xdU)));
    vlSelf->mkMac__DOT__y___05Fh85626 = (0x200U | (0x1fcU 
                                                   & (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                      >> 0xeU)));
    vlSelf->mkMac__DOT__y___05Fh85686 = (0x100U | (0xfeU 
                                                   & (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                      >> 0xfU)));
    vlSelf->mkMac__DOT__product___05Fh85744 = (0x80U 
                                               | (0x7fU 
                                                  & (vlSelf->mkMac__DOT__fp_ififo_rv[1U] 
                                                     >> 0x10U)));
    vlSelf->mkMac__DOT__x___05Fh3574 = (0xffU & (~ 
                                                 vlSelf->mkMac__DOT__int_ififo_rv[1U]));
    vlSelf->mkMac__DOT__x___05Fh38082 = (0xffU & (~ 
                                                  ((vlSelf->mkMac__DOT__int_ififo_rv[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mkMac__DOT__int_ififo_rv[1U] 
                                                      >> 0x10U))));
    vlSelf->mkMac__DOT__macop = vlSelf->macop;
    vlSelf->mkMac__DOT__RDY_macop = vlSelf->RDY_macop;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_rl_mac = vlSelf->mkMac__DOT__CAN_FIRE_RL_rl_mac;
    vlSelf->mkMac__DOT__WILL_FIRE_get_inputs = vlSelf->mkMac__DOT__reg_a_EN;
    vlSelf->mkMac__DOT__reg_b_EN = vlSelf->mkMac__DOT__reg_a_EN;
    vlSelf->mkMac__DOT__reg_c_EN = vlSelf->mkMac__DOT__reg_a_EN;
    vlSelf->mkMac__DOT__reg_s_EN = vlSelf->mkMac__DOT__reg_a_EN;
    vlSelf->mkMac__DOT__rg_inp_valid_D_IN = vlSelf->mkMac__DOT__reg_a_EN;
    vlSelf->mkMac__DOT__rg_mult_bf_valid_1_whas = vlSelf->mkMac__DOT__fp_ififo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__rg_mult_bf_valid_D_IN = vlSelf->mkMac__DOT__fp_ififo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__rg_mult_int_valid_1_whas = vlSelf->mkMac__DOT__int_ififo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__rg_mult_int_valid_D_IN = vlSelf->mkMac__DOT__int_ififo_rv_EN_port1___05Fwrite;
    if (vlSelf->mkMac__DOT__rg_add_bf_valid_D_IN) {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv[0U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv[1U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv[2U];
    }
    if (vlSelf->mkMac__DOT__rg_add_int_valid_D_IN) {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_ififo_rv[0U];
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_ififo_rv[1U];
        vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_ififo_rv[2U];
    }
    vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage2 
        = vlSelf->mkMac__DOT__rg_out_bf_valid_D_IN;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage2 
        = vlSelf->mkMac__DOT__rg_out_bf_valid_D_IN;
    vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage2 
        = vlSelf->mkMac__DOT__rg_out_int_valid_D_IN;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage2 
        = vlSelf->mkMac__DOT__rg_out_int_valid_D_IN;
    if (vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int) {
        vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_int = 1U;
        vlSelf->mkMac__DOT__int_ofifo_rv_port1___05Fread = 0ULL;
    } else {
        vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_int = 0U;
        vlSelf->mkMac__DOT__int_ofifo_rv_port1___05Fread 
            = vlSelf->mkMac__DOT__int_ofifo_rv;
    }
    vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_fp = vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp;
    vlSelf->mkMac__DOT__rg_out_EN = ((IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int) 
                                     | (IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp));
    if (vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp) {
        vlSelf->mkMac__DOT__rg_out_D_IN = (IData)(vlSelf->mkMac__DOT__fp_ofifo_rv);
        vlSelf->mkMac__DOT__fp_ofifo_rv_port1___05Fread = 0ULL;
    } else {
        vlSelf->mkMac__DOT__rg_out_D_IN = (IData)(vlSelf->mkMac__DOT__int_ofifo_rv);
        vlSelf->mkMac__DOT__fp_ofifo_rv_port1___05Fread 
            = vlSelf->mkMac__DOT__fp_ofifo_rv;
    }
    vlSelf->mkMac__DOT__rg_out_valid_1_whas = ((IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp) 
                                               | (IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int));
    vlSelf->mkMac__DOT__IF_int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_ETC___05F_d2833 
        = ((1U & vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh139602 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771));
    vlSelf->mkMac__DOT__propagate___05Fh80952 = vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343;
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55___05FETC___05F_d1361 
        = ((1U & (IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh81914 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                                >> 1U) 
                                               & (IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345)));
    vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d2926 
        = (vlSelf->mkMac__DOT__exp_a___05Fh143143 <= vlSelf->mkMac__DOT__exp_b___05Fh143148);
    vlSelf->mkMac__DOT__IF_INV_fp_pfifo_rv_port0___05Fread___05F913_BITS_30_TO_ETC___05F_d3559 
        = ((1U & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh168969 = (0xffffff00U 
                                                  | ((0xfeU 
                                                      & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2)))));
    vlSelf->mkMac__DOT__y___05Fh170026 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2))));
    vlSelf->mkMac__DOT__IF_INV_fp_pfifo_rv_port0___05Fread___05F913_BITS_62_TO_ETC___05F_d2941 
        = ((1U & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh143380 = (0xffffff00U 
                                                  | ((0xfeU 
                                                      & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1)) 
                                                     | (1U 
                                                        & (~ (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1)))));
    vlSelf->mkMac__DOT__y___05Fh144437 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1))));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1392 
        = ((1U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85744
            : 0U);
    vlSelf->mkMac__DOT__SEXT_INV_int_ififo_rv_port0___05Fread___05F1_BITS_39_T_ETC___05F_d53 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh3574));
    vlSelf->mkMac__DOT__IF_SEXT_INV_int_ififo_rv_port0___05Fread___05F1_BITS_3_ETC___05F_d88 
        = ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh3574))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh3567 = (((- (IData)(
                                                            (1U 
                                                             & ((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                                                >> 7U)))) 
                                                 << 8U) 
                                                | ((0xfeU 
                                                    & (IData)(vlSelf->mkMac__DOT__x___05Fh3574)) 
                                                   | (1U 
                                                      & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh3574)))));
    vlSelf->mkMac__DOT__y___05Fh4644 = (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->mkMac__DOT__x___05Fh3574))));
    vlSelf->mkMac__DOT__SEXT_INV_int_ififo_rv_port0___05Fread___05F1_BITS_55_T_ETC___05F_d149 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh38082));
    vlSelf->mkMac__DOT__IF_SEXT_INV_int_ififo_rv_port0___05Fread___05F1_BITS_5_ETC___05F_d184 
        = ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh38082))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh38075 = (((- (IData)(
                                                             (1U 
                                                              & ((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                                                 >> 7U)))) 
                                                  << 8U) 
                                                 | ((0xfeU 
                                                     & (IData)(vlSelf->mkMac__DOT__x___05Fh38082)) 
                                                    | (1U 
                                                       & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh38082)))));
    vlSelf->mkMac__DOT__y___05Fh39135 = (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->mkMac__DOT__x___05Fh38082))));
    if (vlSelf->mkMac__DOT__fp_ififo_rv_EN_port1___05Fwrite) {
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fread[2U];
    }
    if (vlSelf->mkMac__DOT__int_ififo_rv_EN_port1___05Fwrite) {
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_ififo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_ififo_rv_port1___05Fread[2U];
    }
    vlSelf->mkMac__DOT__rg_out_valid_D_IN = vlSelf->mkMac__DOT__rg_out_valid_1_whas;
    vlSelf->mkMac__DOT__y___05Fh139735 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh139602)));
    vlSelf->mkMac__DOT__y___05Fh82045 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81914)));
    vlSelf->mkMac__DOT__y___05Fh170133 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170026));
    vlSelf->mkMac__DOT__y___05Fh144544 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144437));
    vlSelf->mkMac__DOT__propagate___05Fh85690 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1392 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85686);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1392 
           & vlSelf->mkMac__DOT__y___05Fh85686);
    vlSelf->mkMac__DOT__y___05Fh4751 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4644));
    vlSelf->mkMac__DOT__y___05Fh39242 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39135));
    vlSelf->mkMac__DOT__fp_ififo_rv_D_IN[0U] = vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__fp_ififo_rv_D_IN[1U] = vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__fp_ififo_rv_D_IN[2U] = vlSelf->mkMac__DOT__fp_ififo_rv_port2___05Fread[2U];
    vlSelf->mkMac__DOT__int_ififo_rv_D_IN[0U] = vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__int_ififo_rv_D_IN[1U] = vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__int_ififo_rv_D_IN[2U] = vlSelf->mkMac__DOT__int_ififo_rv_port2___05Fread[2U];
    vlSelf->mkMac__DOT__y___05Fh139711 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh139735));
    vlSelf->mkMac__DOT__y___05Fh82022 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82045));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879 
        = (0xffU & ((IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d2926)
                     ? ((vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                         << 9U) | (vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                                   >> 0x17U)) : ((vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                                                  << 9U) 
                                                 | (vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                                                    >> 0x17U))));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BI_ETC___05F_d4891 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__final_exp___05Fh143157 = vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879;
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11 
        = (0xffU & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879)));
    vlSelf->mkMac__DOT__propagate___05Fh216230 = ((0xfeU 
                                                   & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879)) 
                                                  | (1U 
                                                     & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879))));
    vlSelf->mkMac__DOT__y___05Fh217289 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879))));
    vlSelf->mkMac__DOT__y___05Fh170240 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170133));
    vlSelf->mkMac__DOT__y___05Fh144651 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144544));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389___05FETC___05F_d1457 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh91145 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395));
    vlSelf->mkMac__DOT__y___05Fh4858 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4751));
    vlSelf->mkMac__DOT__y___05Fh39349 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39242));
    vlSelf->mkMac__DOT__y___05Fh139843 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh139711)));
    vlSelf->mkMac__DOT__y___05Fh82152 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82022)));
    vlSelf->mkMac__DOT__propagate___05Fh224720 = (0xffffff00U 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11));
    vlSelf->mkMac__DOT__y___05Fh225643 = (1U & (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879)));
    vlSelf->mkMac__DOT__y___05Fh217396 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217289));
    vlSelf->mkMac__DOT__y___05Fh170347 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170240));
    vlSelf->mkMac__DOT__y___05Fh144758 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144651));
    vlSelf->mkMac__DOT__y___05Fh91279 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91145)));
    vlSelf->mkMac__DOT__y___05Fh4965 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4858));
    vlSelf->mkMac__DOT__y___05Fh39456 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39349));
    vlSelf->mkMac__DOT__y___05Fh139819 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh139843));
    vlSelf->mkMac__DOT__y___05Fh82129 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82152));
    vlSelf->mkMac__DOT__y___05Fh225775 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh225643)));
    vlSelf->mkMac__DOT__y___05Fh217503 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217396));
    vlSelf->mkMac__DOT__y___05Fh170454 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170347));
    vlSelf->mkMac__DOT__y___05Fh144865 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144758));
    vlSelf->mkMac__DOT__y___05Fh91255 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91279));
    vlSelf->mkMac__DOT__y___05Fh5072 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4965));
    vlSelf->mkMac__DOT__y___05Fh39563 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39456));
    vlSelf->mkMac__DOT__y___05Fh139951 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh139819)));
    vlSelf->mkMac__DOT__y___05Fh82259 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82129)));
    vlSelf->mkMac__DOT__y___05Fh225752 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh225775));
    vlSelf->mkMac__DOT__y___05Fh217610 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217503));
    vlSelf->mkMac__DOT__y___05Fh170561 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170454));
    vlSelf->mkMac__DOT__y___05Fh144972 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144865));
    vlSelf->mkMac__DOT__y___05Fh91388 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91255)));
    vlSelf->mkMac__DOT__y___05Fh5179 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5072));
    vlSelf->mkMac__DOT__y___05Fh39670 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39563));
    vlSelf->mkMac__DOT__y___05Fh139927 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh139951));
    vlSelf->mkMac__DOT__y___05Fh82236 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82259));
    vlSelf->mkMac__DOT__y___05Fh225883 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh225752)));
    vlSelf->mkMac__DOT__y___05Fh217717 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217610));
    vlSelf->mkMac__DOT__y___05Fh173022 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170561));
    vlSelf->mkMac__DOT__y___05Fh147433 = (((IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh144972));
    vlSelf->mkMac__DOT__y___05Fh91364 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91388));
    vlSelf->mkMac__DOT__y___05Fh5286 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5179));
    vlSelf->mkMac__DOT__y___05Fh39777 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39670));
    vlSelf->mkMac__DOT__y___05Fh140059 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh139927)));
    vlSelf->mkMac__DOT__y___05Fh82366 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82236)));
    vlSelf->mkMac__DOT__y___05Fh225860 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh225883));
    vlSelf->mkMac__DOT__y___05Fh217824 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217717));
    vlSelf->mkMac__DOT__y___05Fh168972 = (((- (IData)((IData)(vlSelf->mkMac__DOT__y___05Fh173022))) 
                                           << 8U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh170561) 
                                            << 7U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh170454) 
                                               << 6U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh170347) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh170240) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh170133) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh170026) 
                                                           << 2U) 
                                                          | ((1U 
                                                              & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_30_TO_23___05Fq2))
                                                              ? 2U
                                                              : 0U))))))));
    vlSelf->mkMac__DOT__y___05Fh143383 = (((- (IData)((IData)(vlSelf->mkMac__DOT__y___05Fh147433))) 
                                           << 8U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh144972) 
                                            << 7U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh144865) 
                                               << 6U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh144758) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh144651) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh144544) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh144437) 
                                                           << 2U) 
                                                          | ((1U 
                                                              & (IData)(vlSelf->mkMac__DOT__INV_fp_pfifo_rv_BITS_62_TO_55___05Fq1))
                                                              ? 2U
                                                              : 0U))))))));
    vlSelf->mkMac__DOT__y___05Fh91497 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91364)));
    vlSelf->mkMac__DOT__y___05Fh5393 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5286));
    vlSelf->mkMac__DOT__y___05Fh39884 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39777));
    vlSelf->mkMac__DOT__y___05Fh140035 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh140059));
    vlSelf->mkMac__DOT__y___05Fh82343 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82366));
    vlSelf->mkMac__DOT__y___05Fh225991 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh225860)));
    vlSelf->mkMac__DOT__y___05Fh217931 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh217824));
    vlSelf->mkMac__DOT__exp_b___05F_h143149 = (vlSelf->mkMac__DOT__propagate___05Fh168969 
                                               ^ vlSelf->mkMac__DOT__y___05Fh168972);
    vlSelf->mkMac__DOT__exp_a___05F_h143144 = (vlSelf->mkMac__DOT__propagate___05Fh143380 
                                               ^ vlSelf->mkMac__DOT__y___05Fh143383);
    vlSelf->mkMac__DOT__y___05Fh91473 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91497));
    vlSelf->mkMac__DOT__y___05Fh5500 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5393));
    vlSelf->mkMac__DOT__y___05Fh39991 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39884));
    vlSelf->mkMac__DOT__y___05Fh140167 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140035)));
    vlSelf->mkMac__DOT__y___05Fh82473 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82343)));
    vlSelf->mkMac__DOT__y___05Fh225968 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh225991));
    vlSelf->mkMac__DOT__y___05Fh216233 = (((IData)(vlSelf->mkMac__DOT__y___05Fh217931) 
                                           << 8U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh217824) 
                                            << 7U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh217717) 
                                               << 6U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh217610) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh217503) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh217396) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh217289) 
                                                           << 2U) 
                                                          | ((1U 
                                                              & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879))
                                                              ? 2U
                                                              : 0U))))))));
    vlSelf->mkMac__DOT__propagate___05Fh168960 = (vlSelf->mkMac__DOT__exp_a___05Fh143143 
                                                  ^ vlSelf->mkMac__DOT__exp_b___05F_h143149);
    vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
        = (vlSelf->mkMac__DOT__exp_a___05Fh143143 & vlSelf->mkMac__DOT__exp_b___05F_h143149);
    vlSelf->mkMac__DOT__propagate___05Fh143371 = (vlSelf->mkMac__DOT__exp_b___05Fh143148 
                                                  ^ vlSelf->mkMac__DOT__exp_a___05F_h143144);
    vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
        = (vlSelf->mkMac__DOT__exp_b___05Fh143148 & vlSelf->mkMac__DOT__exp_a___05F_h143144);
    vlSelf->mkMac__DOT__y___05Fh91606 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91473)));
    vlSelf->mkMac__DOT__y___05Fh5607 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5500));
    vlSelf->mkMac__DOT__y___05Fh40098 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh39991));
    vlSelf->mkMac__DOT__y___05Fh140143 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh140167));
    vlSelf->mkMac__DOT__y___05Fh82450 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82473));
    vlSelf->mkMac__DOT__y___05Fh226099 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh225968)));
    vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
        = (vlSelf->mkMac__DOT__propagate___05Fh216230 
           ^ vlSelf->mkMac__DOT__y___05Fh216233);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d3648 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh174118 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d3030 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh148529 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968));
    vlSelf->mkMac__DOT__y___05Fh91582 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91606));
    vlSelf->mkMac__DOT__y___05Fh5714 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5607));
    vlSelf->mkMac__DOT__y___05Fh40205 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40098));
    vlSelf->mkMac__DOT__y___05Fh140275 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140143)));
    vlSelf->mkMac__DOT__y___05Fh82580 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82450)));
    vlSelf->mkMac__DOT__y___05Fh226076 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226099));
    vlSelf->mkMac__DOT__IF_0_CONCAT_IF_0_CONCAT_fp_pfifo_rv_port0___05Frea_ETC___05F_d4940 
        = ((1U & vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh216222 = ((0xfffffffeU 
                                                   & vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923) 
                                                  | (1U 
                                                     & (~ vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923)));
    vlSelf->mkMac__DOT__y___05Fh221515 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923)));
    vlSelf->mkMac__DOT__y___05Fh174252 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174118)));
    vlSelf->mkMac__DOT__y___05Fh148663 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148529)));
    vlSelf->mkMac__DOT__y___05Fh91715 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91582)));
    vlSelf->mkMac__DOT__y___05Fh5821 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5714));
    vlSelf->mkMac__DOT__y___05Fh40312 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40205));
    vlSelf->mkMac__DOT__y___05Fh140251 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh140275));
    vlSelf->mkMac__DOT__y___05Fh82557 = (((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1343) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82580));
    vlSelf->mkMac__DOT__y___05Fh226207 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh226076)));
    vlSelf->mkMac__DOT__y___05Fh221622 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh221515));
    vlSelf->mkMac__DOT__y___05Fh174228 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174252));
    vlSelf->mkMac__DOT__y___05Fh148639 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh148663));
    vlSelf->mkMac__DOT__y___05Fh91691 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91715));
    vlSelf->mkMac__DOT__y___05Fh5928 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5821));
    vlSelf->mkMac__DOT__y___05Fh40419 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40312));
    vlSelf->mkMac__DOT__y___05Fh140383 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140251)));
    vlSelf->mkMac__DOT__y___05Fh80955 = (((IData)((
                                                   ((IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345) 
                                                    >> 7U) 
                                                   | (IData)(vlSelf->mkMac__DOT__y___05Fh82557))) 
                                          << 8U) | 
                                         (((IData)(vlSelf->mkMac__DOT__y___05Fh82580) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh82473) 
                                            << 6U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh82366) 
                                               << 5U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh82259) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh82152) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh82045) 
                                                        << 2U) 
                                                       | ((1U 
                                                           & (IData)(vlSelf->mkMac__DOT__fp_ififo_rv_port0___05Fread___05F332_BITS_62_TO_55_341_ETC___05F_d1345))
                                                           ? 2U
                                                           : 0U))))))));
    vlSelf->mkMac__DOT__y___05Fh226184 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226207));
    vlSelf->mkMac__DOT__y___05Fh221729 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh221622));
    vlSelf->mkMac__DOT__y___05Fh174361 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174228)));
    vlSelf->mkMac__DOT__y___05Fh148772 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148639)));
    vlSelf->mkMac__DOT__y___05Fh91824 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91691)));
    vlSelf->mkMac__DOT__y___05Fh6035 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5928));
    vlSelf->mkMac__DOT__y___05Fh40526 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40419));
    vlSelf->mkMac__DOT__y___05Fh140359 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh140383));
    vlSelf->mkMac__DOT__midval___05Fh80851 = (vlSelf->mkMac__DOT__propagate___05Fh80952 
                                              ^ vlSelf->mkMac__DOT__y___05Fh80955);
    vlSelf->mkMac__DOT__y___05Fh226315 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh226184)));
    vlSelf->mkMac__DOT__y___05Fh221836 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh221729));
    vlSelf->mkMac__DOT__y___05Fh174337 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174361));
    vlSelf->mkMac__DOT__y___05Fh148748 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh148772));
    vlSelf->mkMac__DOT__y___05Fh91800 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91824));
    vlSelf->mkMac__DOT__y___05Fh6142 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6035));
    vlSelf->mkMac__DOT__y___05Fh40633 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40526));
    vlSelf->mkMac__DOT__y___05Fh140491 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140359)));
    vlSelf->mkMac__DOT__y___05Fh226292 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_B_ETC___05Fq11) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226315));
    vlSelf->mkMac__DOT__y___05Fh221943 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh221836));
    vlSelf->mkMac__DOT__y___05Fh174470 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174337)));
    vlSelf->mkMac__DOT__y___05Fh148881 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148748)));
    vlSelf->mkMac__DOT__y___05Fh91933 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91800)));
    vlSelf->mkMac__DOT__y___05Fh6249 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6142));
    vlSelf->mkMac__DOT__y___05Fh40740 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40633));
    vlSelf->mkMac__DOT__y___05Fh140467 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh140491));
    vlSelf->mkMac__DOT__y___05Fh228799 = (IData)((((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879) 
                                                   >> 7U) 
                                                  | (IData)(vlSelf->mkMac__DOT__y___05Fh226292)));
    vlSelf->mkMac__DOT__y___05Fh222050 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh221943));
    vlSelf->mkMac__DOT__y___05Fh174446 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174470));
    vlSelf->mkMac__DOT__y___05Fh148857 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh148881));
    vlSelf->mkMac__DOT__y___05Fh91909 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91933));
    vlSelf->mkMac__DOT__y___05Fh6356 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6249));
    vlSelf->mkMac__DOT__y___05Fh40847 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40740));
    vlSelf->mkMac__DOT__y___05Fh140599 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140467)));
    vlSelf->mkMac__DOT__y___05Fh224723 = (((- (IData)((IData)(vlSelf->mkMac__DOT__y___05Fh228799))) 
                                           << 8U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh226315) 
                                            << 7U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh226207) 
                                               << 6U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh226099) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh225991) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh225883) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh225775) 
                                                           << 2U) 
                                                          | ((1U 
                                                              & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4879))
                                                              ? 2U
                                                              : 0U))))))));
    vlSelf->mkMac__DOT__y___05Fh222157 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh222050));
    vlSelf->mkMac__DOT__y___05Fh174579 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174446)));
    vlSelf->mkMac__DOT__y___05Fh148990 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148857)));
    vlSelf->mkMac__DOT__y___05Fh92042 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91909)));
    vlSelf->mkMac__DOT__y___05Fh6463 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6356));
    vlSelf->mkMac__DOT__y___05Fh40954 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40847));
    vlSelf->mkMac__DOT__y___05Fh140575 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh140599));
    vlSelf->mkMac__DOT__final_exp___05F_1___05Fh224715 
        = (vlSelf->mkMac__DOT__propagate___05Fh224720 
           ^ vlSelf->mkMac__DOT__y___05Fh224723);
    vlSelf->mkMac__DOT__y___05Fh222264 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh222157));
    vlSelf->mkMac__DOT__y___05Fh174555 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174579));
    vlSelf->mkMac__DOT__y___05Fh148966 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh148990));
    vlSelf->mkMac__DOT__y___05Fh92018 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92042));
    vlSelf->mkMac__DOT__y___05Fh6570 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6463));
    vlSelf->mkMac__DOT__y___05Fh41061 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh40954));
    vlSelf->mkMac__DOT__y___05Fh140707 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140575)));
    vlSelf->mkMac__DOT__y___05Fh222371 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh222264));
    vlSelf->mkMac__DOT__y___05Fh174688 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174555)));
    vlSelf->mkMac__DOT__y___05Fh149099 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148966)));
    vlSelf->mkMac__DOT__y___05Fh92151 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92018)));
    vlSelf->mkMac__DOT__y___05Fh6677 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6570));
    vlSelf->mkMac__DOT__y___05Fh41168 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41061));
    vlSelf->mkMac__DOT__y___05Fh140683 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh140707));
    vlSelf->mkMac__DOT__y___05Fh222478 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222371));
    vlSelf->mkMac__DOT__y___05Fh174664 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174688));
    vlSelf->mkMac__DOT__y___05Fh149075 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149099));
    vlSelf->mkMac__DOT__y___05Fh92127 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92151));
    vlSelf->mkMac__DOT__y___05Fh6784 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6677));
    vlSelf->mkMac__DOT__y___05Fh41275 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41168));
    vlSelf->mkMac__DOT__y___05Fh140815 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140683)));
    vlSelf->mkMac__DOT__y___05Fh222585 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222478));
    vlSelf->mkMac__DOT__y___05Fh174797 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174664)));
    vlSelf->mkMac__DOT__y___05Fh149208 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149075)));
    vlSelf->mkMac__DOT__y___05Fh92260 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92127)));
    vlSelf->mkMac__DOT__y___05Fh6891 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6784));
    vlSelf->mkMac__DOT__y___05Fh41382 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41275));
    vlSelf->mkMac__DOT__y___05Fh140791 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh140815));
    vlSelf->mkMac__DOT__y___05Fh222692 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222585));
    vlSelf->mkMac__DOT__y___05Fh174773 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174797));
    vlSelf->mkMac__DOT__y___05Fh149184 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149208));
    vlSelf->mkMac__DOT__y___05Fh92236 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92260));
    vlSelf->mkMac__DOT__y___05Fh6998 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6891));
    vlSelf->mkMac__DOT__y___05Fh41489 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41382));
    vlSelf->mkMac__DOT__y___05Fh140923 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140791)));
    vlSelf->mkMac__DOT__y___05Fh222799 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222692));
    vlSelf->mkMac__DOT__y___05Fh174906 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174773)));
    vlSelf->mkMac__DOT__y___05Fh149317 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149184)));
    vlSelf->mkMac__DOT__y___05Fh92369 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92236)));
    vlSelf->mkMac__DOT__y___05Fh7105 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6998));
    vlSelf->mkMac__DOT__y___05Fh41596 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41489));
    vlSelf->mkMac__DOT__y___05Fh140899 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh140923));
    vlSelf->mkMac__DOT__y___05Fh222906 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222799));
    vlSelf->mkMac__DOT__y___05Fh174882 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174906));
    vlSelf->mkMac__DOT__y___05Fh149293 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149317));
    vlSelf->mkMac__DOT__y___05Fh92345 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92369));
    vlSelf->mkMac__DOT__y___05Fh7212 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh7105));
    vlSelf->mkMac__DOT__y___05Fh41703 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41596));
    vlSelf->mkMac__DOT__y___05Fh141031 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh140899)));
    vlSelf->mkMac__DOT__y___05Fh223013 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222906));
    vlSelf->mkMac__DOT__y___05Fh175015 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174882)));
    vlSelf->mkMac__DOT__y___05Fh149426 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149293)));
    vlSelf->mkMac__DOT__y___05Fh92478 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92345)));
    vlSelf->mkMac__DOT__y___05Fh7319 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh7212));
    vlSelf->mkMac__DOT__y___05Fh41810 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41703));
    vlSelf->mkMac__DOT__y___05Fh141007 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141031));
    vlSelf->mkMac__DOT__y___05Fh223120 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223013));
    vlSelf->mkMac__DOT__y___05Fh174991 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh175015));
    vlSelf->mkMac__DOT__y___05Fh149402 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149426));
    vlSelf->mkMac__DOT__y___05Fh92454 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92478));
    vlSelf->mkMac__DOT__y___05Fh7426 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh7319));
    vlSelf->mkMac__DOT__y___05Fh41917 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41810));
    vlSelf->mkMac__DOT__y___05Fh141139 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141007)));
    vlSelf->mkMac__DOT__y___05Fh223227 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223120));
    vlSelf->mkMac__DOT__y___05Fh175124 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174991)));
    vlSelf->mkMac__DOT__y___05Fh149535 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149402)));
    vlSelf->mkMac__DOT__y___05Fh92587 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92454)));
    vlSelf->mkMac__DOT__y___05Fh7533 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh7426));
    vlSelf->mkMac__DOT__y___05Fh42024 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh41917));
    vlSelf->mkMac__DOT__y___05Fh141115 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141139));
    vlSelf->mkMac__DOT__y___05Fh223334 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223227));
    vlSelf->mkMac__DOT__y___05Fh175100 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175124));
    vlSelf->mkMac__DOT__y___05Fh149511 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149535));
    vlSelf->mkMac__DOT__y___05Fh92563 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92587));
    vlSelf->mkMac__DOT__y___05Fh7640 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                         >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh7533));
    vlSelf->mkMac__DOT__y___05Fh42131 = (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh42024));
    vlSelf->mkMac__DOT__y___05Fh141247 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141115)));
    vlSelf->mkMac__DOT__y___05Fh223441 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223334));
    vlSelf->mkMac__DOT__y___05Fh175233 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175100)));
    vlSelf->mkMac__DOT__y___05Fh149644 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149511)));
    vlSelf->mkMac__DOT__y___05Fh92696 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92563)));
    vlSelf->mkMac__DOT__y___05Fh3570 = ((0x80000000U 
                                         & (((IData)(vlSelf->mkMac__DOT__x___05Fh3574) 
                                             << 0x18U) 
                                            & ((IData)(vlSelf->mkMac__DOT__y___05Fh7640) 
                                               << 0x1fU))) 
                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh7640) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh7533) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh7426) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh7319) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh7212) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh7105) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh6998) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh6891) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh6784) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh6677) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh6570) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh6463) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh6356) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh6249) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh6142) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh6035) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5928) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5821) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5714) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5607) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5500) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5393) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5286) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5179) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh5072) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh4965) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh4858) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh4751) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh4644) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & (IData)(vlSelf->mkMac__DOT__x___05Fh3574))
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh38078 = ((0x80000000U 
                                          & (((IData)(vlSelf->mkMac__DOT__x___05Fh38082) 
                                              << 0x18U) 
                                             & ((IData)(vlSelf->mkMac__DOT__y___05Fh42131) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh42131) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh42024) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh41917) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh41810) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh41703) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh41596) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh41489) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh41382) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh41275) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh41168) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh41061) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh40954) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh40847) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40740) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40633) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40526) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40419) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40312) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40205) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh40098) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39991) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39884) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39777) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39670) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39563) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39456) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39349) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39242) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh39135) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & (IData)(vlSelf->mkMac__DOT__x___05Fh38082))
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh141223 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141247));
    vlSelf->mkMac__DOT__y___05Fh223548 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223441));
    vlSelf->mkMac__DOT__y___05Fh175209 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175233));
    vlSelf->mkMac__DOT__y___05Fh149620 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149644));
    vlSelf->mkMac__DOT__y___05Fh92672 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92696));
    vlSelf->mkMac__DOT__propagate567_XOR_y570___05Fq3 
        = (vlSelf->mkMac__DOT__propagate___05Fh3567 
           ^ vlSelf->mkMac__DOT__y___05Fh3570);
    vlSelf->mkMac__DOT__propagate8075_XOR_y8078___05Fq4 
        = (vlSelf->mkMac__DOT__propagate___05Fh38075 
           ^ vlSelf->mkMac__DOT__y___05Fh38078);
    vlSelf->mkMac__DOT__y___05Fh141355 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141223)));
    vlSelf->mkMac__DOT__y___05Fh223655 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223548));
    vlSelf->mkMac__DOT__y___05Fh175342 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175209)));
    vlSelf->mkMac__DOT__y___05Fh149753 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149620)));
    vlSelf->mkMac__DOT__y___05Fh92805 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92672)));
    vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138 
        = (0xffU & ((0x80U & vlSelf->mkMac__DOT__int_ififo_rv[1U])
                     ? vlSelf->mkMac__DOT__propagate567_XOR_y570___05Fq3
                     : vlSelf->mkMac__DOT__int_ififo_rv[1U]));
    vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234 
        = (0xffU & ((0x800000U & vlSelf->mkMac__DOT__int_ififo_rv[1U])
                     ? vlSelf->mkMac__DOT__propagate8075_XOR_y8078___05Fq4
                     : ((vlSelf->mkMac__DOT__int_ififo_rv[1U] 
                         << 0x10U) | (vlSelf->mkMac__DOT__int_ififo_rv[1U] 
                                      >> 0x10U))));
    vlSelf->mkMac__DOT__y___05Fh141331 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141355));
    vlSelf->mkMac__DOT__y___05Fh223762 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223655));
    vlSelf->mkMac__DOT__y___05Fh175318 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175342));
    vlSelf->mkMac__DOT__y___05Fh149729 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149753));
    vlSelf->mkMac__DOT__y___05Fh92781 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92805));
    vlSelf->mkMac__DOT__y___05Fh7823 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                        << 7U);
    vlSelf->mkMac__DOT__y___05Fh12137 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 6U);
    vlSelf->mkMac__DOT__y___05Fh16451 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 5U);
    vlSelf->mkMac__DOT__y___05Fh20765 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 4U);
    vlSelf->mkMac__DOT__y___05Fh25079 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 3U);
    vlSelf->mkMac__DOT__y___05Fh29393 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 2U);
    vlSelf->mkMac__DOT__y___05Fh33707 = ((IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234) 
                                         << 1U);
    vlSelf->mkMac__DOT__product___05Fh38019 = vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_55_8_THEN_S_ETC___05F_d234;
    vlSelf->mkMac__DOT__y___05Fh141463 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141331)));
    vlSelf->mkMac__DOT__y___05Fh223869 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223762));
    vlSelf->mkMac__DOT__y___05Fh175451 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175318)));
    vlSelf->mkMac__DOT__y___05Fh149862 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149729)));
    vlSelf->mkMac__DOT__y___05Fh92914 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92781)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d236 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh38019
            : 0U);
    vlSelf->mkMac__DOT__y___05Fh141439 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141463));
    vlSelf->mkMac__DOT__y___05Fh223976 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223869));
    vlSelf->mkMac__DOT__y___05Fh175427 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175451));
    vlSelf->mkMac__DOT__y___05Fh149838 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149862));
    vlSelf->mkMac__DOT__y___05Fh92890 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92914));
    vlSelf->mkMac__DOT__propagate___05Fh33711 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d236 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh33707);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d236 
           & vlSelf->mkMac__DOT__y___05Fh33707);
    vlSelf->mkMac__DOT__y___05Fh141571 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141439)));
    vlSelf->mkMac__DOT__y___05Fh224083 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223976));
    vlSelf->mkMac__DOT__y___05Fh175560 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175427)));
    vlSelf->mkMac__DOT__y___05Fh149971 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149838)));
    vlSelf->mkMac__DOT__y___05Fh93023 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92890)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d301 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh47301 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239));
    vlSelf->mkMac__DOT__y___05Fh141547 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141571));
    vlSelf->mkMac__DOT__y___05Fh224190 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh224083));
    vlSelf->mkMac__DOT__y___05Fh175536 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175560));
    vlSelf->mkMac__DOT__y___05Fh149947 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149971));
    vlSelf->mkMac__DOT__y___05Fh92999 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93023));
    vlSelf->mkMac__DOT__y___05Fh47435 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47301)));
    vlSelf->mkMac__DOT__y___05Fh141679 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141547)));
    vlSelf->mkMac__DOT__y___05Fh224297 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh224190));
    vlSelf->mkMac__DOT__y___05Fh175669 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175536)));
    vlSelf->mkMac__DOT__y___05Fh150080 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149947)));
    vlSelf->mkMac__DOT__y___05Fh93132 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92999)));
    vlSelf->mkMac__DOT__y___05Fh47411 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47435));
    vlSelf->mkMac__DOT__y___05Fh141655 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141679));
    vlSelf->mkMac__DOT__y___05Fh224404 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh224297));
    vlSelf->mkMac__DOT__y___05Fh175645 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175669));
    vlSelf->mkMac__DOT__y___05Fh150056 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150080));
    vlSelf->mkMac__DOT__y___05Fh93108 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93132));
    vlSelf->mkMac__DOT__y___05Fh47544 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47411)));
    vlSelf->mkMac__DOT__y___05Fh141787 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141655)));
    vlSelf->mkMac__DOT__y___05Fh224511 = ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh224404));
    vlSelf->mkMac__DOT__y___05Fh175778 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175645)));
    vlSelf->mkMac__DOT__y___05Fh150189 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150056)));
    vlSelf->mkMac__DOT__y___05Fh93241 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93108)));
    vlSelf->mkMac__DOT__y___05Fh47520 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47544));
    vlSelf->mkMac__DOT__y___05Fh141763 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141787));
    vlSelf->mkMac__DOT__y___05Fh216225 = ((0x80000000U 
                                           & ((vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923 
                                               << 1U) 
                                              & ((IData)(vlSelf->mkMac__DOT__y___05Fh224511) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh224511) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh224404) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh224297) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh224190) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh224083) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh223976) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh223869) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh223762) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh223655) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh223548) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh223441) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh223334) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh223227) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh223120) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh223013) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222906) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222799) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222692) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222585) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222478) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222371) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222264) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222157) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh222050) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh221943) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh221836) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh221729) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh221622) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh221515) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh175754 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175778));
    vlSelf->mkMac__DOT__y___05Fh150165 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150189));
    vlSelf->mkMac__DOT__y___05Fh93217 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93241));
    vlSelf->mkMac__DOT__y___05Fh47653 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47520)));
    vlSelf->mkMac__DOT__y___05Fh141895 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141763)));
    vlSelf->mkMac__DOT__final_exp___05F_1___05Fh216218 
        = (vlSelf->mkMac__DOT__propagate___05Fh216222 
           ^ vlSelf->mkMac__DOT__y___05Fh216225);
    vlSelf->mkMac__DOT__y___05Fh175887 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175754)));
    vlSelf->mkMac__DOT__y___05Fh150298 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150165)));
    vlSelf->mkMac__DOT__y___05Fh93350 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93217)));
    vlSelf->mkMac__DOT__y___05Fh47629 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47653));
    vlSelf->mkMac__DOT__y___05Fh141871 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh141895));
    vlSelf->mkMac__DOT__y___05Fh175863 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175887));
    vlSelf->mkMac__DOT__y___05Fh150274 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150298));
    vlSelf->mkMac__DOT__y___05Fh93326 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93350));
    vlSelf->mkMac__DOT__y___05Fh47762 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47629)));
    vlSelf->mkMac__DOT__y___05Fh142003 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141871)));
    vlSelf->mkMac__DOT__y___05Fh175996 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175863)));
    vlSelf->mkMac__DOT__y___05Fh150407 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150274)));
    vlSelf->mkMac__DOT__y___05Fh93459 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93326)));
    vlSelf->mkMac__DOT__y___05Fh47738 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47762));
    vlSelf->mkMac__DOT__y___05Fh141979 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142003));
    vlSelf->mkMac__DOT__y___05Fh175972 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175996));
    vlSelf->mkMac__DOT__y___05Fh150383 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150407));
    vlSelf->mkMac__DOT__y___05Fh93435 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93459));
    vlSelf->mkMac__DOT__y___05Fh47871 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47738)));
    vlSelf->mkMac__DOT__y___05Fh142111 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh141979)));
    vlSelf->mkMac__DOT__y___05Fh176105 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175972)));
    vlSelf->mkMac__DOT__y___05Fh150516 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150383)));
    vlSelf->mkMac__DOT__y___05Fh93568 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93435)));
    vlSelf->mkMac__DOT__y___05Fh47847 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47871));
    vlSelf->mkMac__DOT__y___05Fh142087 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142111));
    vlSelf->mkMac__DOT__y___05Fh176081 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176105));
    vlSelf->mkMac__DOT__y___05Fh150492 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150516));
    vlSelf->mkMac__DOT__y___05Fh93544 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93568));
    vlSelf->mkMac__DOT__y___05Fh47980 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47847)));
    vlSelf->mkMac__DOT__y___05Fh142219 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142087)));
    vlSelf->mkMac__DOT__y___05Fh176214 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176081)));
    vlSelf->mkMac__DOT__y___05Fh150625 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150492)));
    vlSelf->mkMac__DOT__y___05Fh93677 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93544)));
    vlSelf->mkMac__DOT__y___05Fh47956 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh47980));
    vlSelf->mkMac__DOT__y___05Fh142195 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142219));
    vlSelf->mkMac__DOT__y___05Fh176190 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176214));
    vlSelf->mkMac__DOT__y___05Fh150601 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150625));
    vlSelf->mkMac__DOT__y___05Fh93653 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93677));
    vlSelf->mkMac__DOT__y___05Fh48089 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh47956)));
    vlSelf->mkMac__DOT__y___05Fh142327 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142195)));
    vlSelf->mkMac__DOT__y___05Fh176323 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176190)));
    vlSelf->mkMac__DOT__y___05Fh150734 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150601)));
    vlSelf->mkMac__DOT__y___05Fh93786 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93653)));
    vlSelf->mkMac__DOT__y___05Fh48065 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh48089));
    vlSelf->mkMac__DOT__y___05Fh142303 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142327));
    vlSelf->mkMac__DOT__y___05Fh176299 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176323));
    vlSelf->mkMac__DOT__y___05Fh150710 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150734));
    vlSelf->mkMac__DOT__y___05Fh93762 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93786));
    vlSelf->mkMac__DOT__y___05Fh48198 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48065)));
    vlSelf->mkMac__DOT__y___05Fh142435 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142303)));
    vlSelf->mkMac__DOT__y___05Fh176432 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176299)));
    vlSelf->mkMac__DOT__y___05Fh150843 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150710)));
    vlSelf->mkMac__DOT__y___05Fh93895 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93762)));
    vlSelf->mkMac__DOT__y___05Fh48174 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh48198));
    vlSelf->mkMac__DOT__y___05Fh142411 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142435));
    vlSelf->mkMac__DOT__y___05Fh176408 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176432));
    vlSelf->mkMac__DOT__y___05Fh150819 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150843));
    vlSelf->mkMac__DOT__y___05Fh93871 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93895));
    vlSelf->mkMac__DOT__y___05Fh48307 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48174)));
    vlSelf->mkMac__DOT__y___05Fh142543 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142411)));
    vlSelf->mkMac__DOT__y___05Fh176541 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176408)));
    vlSelf->mkMac__DOT__y___05Fh150952 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150819)));
    vlSelf->mkMac__DOT__y___05Fh94004 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93871)));
    vlSelf->mkMac__DOT__y___05Fh48283 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48307));
    vlSelf->mkMac__DOT__y___05Fh142519 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142543));
    vlSelf->mkMac__DOT__y___05Fh176517 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176541));
    vlSelf->mkMac__DOT__y___05Fh150928 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150952));
    vlSelf->mkMac__DOT__y___05Fh93980 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94004));
    vlSelf->mkMac__DOT__y___05Fh48416 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48283)));
    vlSelf->mkMac__DOT__y___05Fh142651 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142519)));
    vlSelf->mkMac__DOT__y___05Fh176650 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176517)));
    vlSelf->mkMac__DOT__y___05Fh151061 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150928)));
    vlSelf->mkMac__DOT__y___05Fh94113 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93980)));
    vlSelf->mkMac__DOT__y___05Fh48392 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48416));
    vlSelf->mkMac__DOT__y___05Fh142627 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142651));
    vlSelf->mkMac__DOT__y___05Fh176626 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176650));
    vlSelf->mkMac__DOT__y___05Fh151037 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151061));
    vlSelf->mkMac__DOT__y___05Fh94089 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94113));
    vlSelf->mkMac__DOT__y___05Fh48525 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48392)));
    vlSelf->mkMac__DOT__y___05Fh142759 = (1U & ((vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh142627)));
    vlSelf->mkMac__DOT__y___05Fh176759 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176626)));
    vlSelf->mkMac__DOT__y___05Fh151170 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151037)));
    vlSelf->mkMac__DOT__y___05Fh94222 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94089)));
    vlSelf->mkMac__DOT__y___05Fh48501 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48525));
    vlSelf->mkMac__DOT__y___05Fh142735 = ((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh142759));
    vlSelf->mkMac__DOT__y___05Fh176735 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176759));
    vlSelf->mkMac__DOT__y___05Fh151146 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151170));
    vlSelf->mkMac__DOT__y___05Fh94198 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94222));
    vlSelf->mkMac__DOT__y___05Fh48634 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48501)));
    vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2910 
        = ((0x80000000U & ((0x80000000U & (vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771 
                                           << 1U)) 
                           | ((IData)(vlSelf->mkMac__DOT__y___05Fh142735) 
                              << 0x1fU))) | (((IData)(vlSelf->mkMac__DOT__y___05Fh142759) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh142651) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh142543) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh142435) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh142327) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh142219) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh142111) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh142003) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh141895) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh141787) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh141679) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh141571) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh141463) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh141355) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh141247) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh141139) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh141031) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140923) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140815) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140707) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140599) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140491) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140383) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140275) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140167) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh140059) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh139951) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh139843) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh139735) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2771)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh176868 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176735)));
    vlSelf->mkMac__DOT__y___05Fh151279 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151146)));
    vlSelf->mkMac__DOT__y___05Fh94331 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94198)));
    vlSelf->mkMac__DOT__y___05Fh48610 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48634));
    vlSelf->mkMac__DOT__int_ofifo_rv_port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)((vlSelf->mkMac__DOT__propagate___05Fh138860 
                                             ^ vlSelf->mkMac__DOT__int_pfifo_rv_port0___05Fread___05F762_BITS_63_TO_32_76_ETC___05F_d2910))));
    if (vlSelf->mkMac__DOT__rg_out_int_valid_D_IN) {
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[2U] = 0U;
        vlSelf->mkMac__DOT__int_ofifo_rv_port2___05Fread 
            = vlSelf->mkMac__DOT__int_ofifo_rv_port1___05Fwrite_1;
    } else {
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_pfifo_rv[0U];
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_pfifo_rv[1U];
        vlSelf->mkMac__DOT__int_pfifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_pfifo_rv[2U];
        vlSelf->mkMac__DOT__int_ofifo_rv_port2___05Fread 
            = vlSelf->mkMac__DOT__int_ofifo_rv_port1___05Fread;
    }
    vlSelf->mkMac__DOT__y___05Fh176844 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176868));
    vlSelf->mkMac__DOT__y___05Fh151255 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151279));
    vlSelf->mkMac__DOT__y___05Fh94307 = ((vlSelf->mkMac__DOT__propagate___05Fh85690 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94331));
    vlSelf->mkMac__DOT__y___05Fh48743 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48610)));
    vlSelf->mkMac__DOT__y___05Fh176977 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176844)));
    vlSelf->mkMac__DOT__y___05Fh151388 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151255)));
    vlSelf->mkMac__DOT__y___05Fh85704 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh94307) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh94331) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh94222) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh94113) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh94004) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh93895) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh93786) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh93677) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh93568) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh93459) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh93350) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh93241) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh93132) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh93023) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92914) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92805) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92696) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92587) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92478) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92369) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92260) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92151) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh92042) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91933) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91824) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91715) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91606) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91497) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91388) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh91279) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1395)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh48719 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48743));
    vlSelf->mkMac__DOT__int_ofifo_rv_D_IN = vlSelf->mkMac__DOT__int_ofifo_rv_port2___05Fread;
    vlSelf->mkMac__DOT__y___05Fh176953 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176977));
    vlSelf->mkMac__DOT__y___05Fh151364 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151388));
    vlSelf->mkMac__DOT__product___05Fh85684 = (vlSelf->mkMac__DOT__propagate___05Fh85690 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85704);
    vlSelf->mkMac__DOT__y___05Fh48852 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48719)));
    vlSelf->mkMac__DOT__y___05Fh177086 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176953)));
    vlSelf->mkMac__DOT__y___05Fh151497 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151364)));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1536 
        = ((2U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85684
            : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_32_389_THE_ETC___05F_d1392);
    vlSelf->mkMac__DOT__y___05Fh48828 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48852));
    vlSelf->mkMac__DOT__y___05Fh177062 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177086));
    vlSelf->mkMac__DOT__y___05Fh151473 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151497));
    vlSelf->mkMac__DOT__propagate___05Fh85630 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1536 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85626);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1536 
           & vlSelf->mkMac__DOT__y___05Fh85626);
    vlSelf->mkMac__DOT__y___05Fh48961 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48828)));
    vlSelf->mkMac__DOT__y___05Fh177195 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177062)));
    vlSelf->mkMac__DOT__y___05Fh151606 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151473)));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388___05FETC___05F_d1601 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh95613 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539));
    vlSelf->mkMac__DOT__y___05Fh48937 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh48961));
    vlSelf->mkMac__DOT__y___05Fh177171 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177195));
    vlSelf->mkMac__DOT__y___05Fh151582 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151606));
    vlSelf->mkMac__DOT__y___05Fh95747 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95613)));
    vlSelf->mkMac__DOT__y___05Fh49070 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh48937)));
    vlSelf->mkMac__DOT__y___05Fh177304 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177171)));
    if (vlSelf->mkMac__DOT__rg_out_bf_valid_D_IN) {
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_pfifo_rv[0U];
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_pfifo_rv[1U];
        vlSelf->mkMac__DOT__fp_pfifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_pfifo_rv[2U];
    }
    vlSelf->mkMac__DOT__y___05Fh151715 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151582)));
    vlSelf->mkMac__DOT__y___05Fh95723 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh95747));
    vlSelf->mkMac__DOT__y___05Fh49046 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49070));
    vlSelf->mkMac__DOT__y___05Fh177280 = ((vlSelf->mkMac__DOT__propagate___05Fh168960 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177304));
    vlSelf->mkMac__DOT__y___05Fh151691 = ((vlSelf->mkMac__DOT__propagate___05Fh143371 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151715));
    vlSelf->mkMac__DOT__y___05Fh95856 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95723)));
    vlSelf->mkMac__DOT__y___05Fh49179 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49046)));
    vlSelf->mkMac__DOT__y___05Fh168963 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh177280) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh177304) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh177195) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh177086) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh176977) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh176868) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh176759) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh176650) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh176541) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh176432) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh176323) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh176214) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh176105) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh175996) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175887) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175778) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175669) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175560) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175451) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175342) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175233) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175124) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh175015) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174906) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174797) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174688) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174579) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174470) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174361) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh174252) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d3586)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh143374 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh151691) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh151715) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh151606) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh151497) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh151388) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh151279) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh151170) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh151061) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh150952) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh150843) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh150734) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh150625) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh150516) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh150407) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh150298) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh150189) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh150080) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149971) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149862) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149753) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149644) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149535) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149426) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149317) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149208) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh149099) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh148990) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh148881) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh148772) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh148663) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_30___05FETC___05F_d2968)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh95832 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh95856));
    vlSelf->mkMac__DOT__y___05Fh49155 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49179));
    vlSelf->mkMac__DOT__exp_diff___05Fh143292 = (vlSelf->mkMac__DOT__propagate___05Fh168960 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh168963);
    vlSelf->mkMac__DOT__exp_diff___05Fh143352 = (vlSelf->mkMac__DOT__propagate___05Fh143371 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh143374);
    vlSelf->mkMac__DOT__y___05Fh95965 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95832)));
    vlSelf->mkMac__DOT__y___05Fh49288 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49155)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d3792 
        = ((1U & vlSelf->mkMac__DOT__exp_diff___05Fh143292)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__mant_shifted_b___05Fh186159 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mant_b___05Fh143151, vlSelf->mkMac__DOT__exp_diff___05Fh143292);
    vlSelf->mkMac__DOT__propagate___05Fh177567 = (~ vlSelf->mkMac__DOT__exp_diff___05Fh143292);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d3173 
        = ((1U & vlSelf->mkMac__DOT__exp_diff___05Fh143352)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__mant_shifted_a___05Fh164589 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mant_a___05Fh143146, vlSelf->mkMac__DOT__exp_diff___05Fh143352);
    vlSelf->mkMac__DOT__propagate___05Fh151924 = (~ vlSelf->mkMac__DOT__exp_diff___05Fh143352);
    vlSelf->mkMac__DOT__y___05Fh95941 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh95965));
    vlSelf->mkMac__DOT__y___05Fh49264 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49288));
    vlSelf->mkMac__DOT__y___05Fh178491 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__exp_diff___05Fh143292));
    vlSelf->mkMac__DOT__y___05Fh156921 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__exp_diff___05Fh143352));
    vlSelf->mkMac__DOT__y___05Fh96074 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95941)));
    vlSelf->mkMac__DOT__y___05Fh49397 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49264)));
    vlSelf->mkMac__DOT__y___05Fh178625 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178491)));
    vlSelf->mkMac__DOT__y___05Fh157055 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156921)));
    vlSelf->mkMac__DOT__y___05Fh96050 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh96074));
    vlSelf->mkMac__DOT__y___05Fh49373 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49397));
    vlSelf->mkMac__DOT__y___05Fh178601 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh178625));
    vlSelf->mkMac__DOT__y___05Fh157031 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157055));
    vlSelf->mkMac__DOT__y___05Fh96183 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96050)));
    vlSelf->mkMac__DOT__y___05Fh49506 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49373)));
    vlSelf->mkMac__DOT__y___05Fh178734 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178601)));
    vlSelf->mkMac__DOT__y___05Fh157164 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157031)));
    vlSelf->mkMac__DOT__y___05Fh96159 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh96183));
    vlSelf->mkMac__DOT__y___05Fh49482 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49506));
    vlSelf->mkMac__DOT__y___05Fh178710 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh178734));
    vlSelf->mkMac__DOT__y___05Fh157140 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157164));
    vlSelf->mkMac__DOT__y___05Fh96292 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96159)));
    vlSelf->mkMac__DOT__y___05Fh49615 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49482)));
    vlSelf->mkMac__DOT__y___05Fh178843 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178710)));
    vlSelf->mkMac__DOT__y___05Fh157273 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157140)));
    vlSelf->mkMac__DOT__y___05Fh96268 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh96292));
    vlSelf->mkMac__DOT__y___05Fh49591 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49615));
    vlSelf->mkMac__DOT__y___05Fh178819 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh178843));
    vlSelf->mkMac__DOT__y___05Fh157249 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157273));
    vlSelf->mkMac__DOT__y___05Fh96401 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96268)));
    vlSelf->mkMac__DOT__y___05Fh49724 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49591)));
    vlSelf->mkMac__DOT__y___05Fh178952 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178819)));
    vlSelf->mkMac__DOT__y___05Fh157382 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157249)));
    vlSelf->mkMac__DOT__y___05Fh96377 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh96401));
    vlSelf->mkMac__DOT__y___05Fh49700 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49724));
    vlSelf->mkMac__DOT__y___05Fh178928 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh178952));
    vlSelf->mkMac__DOT__y___05Fh157358 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157382));
    vlSelf->mkMac__DOT__y___05Fh96510 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96377)));
    vlSelf->mkMac__DOT__y___05Fh49833 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49700)));
    vlSelf->mkMac__DOT__y___05Fh179061 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178928)));
    vlSelf->mkMac__DOT__y___05Fh157491 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157358)));
    vlSelf->mkMac__DOT__y___05Fh96486 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh96510));
    vlSelf->mkMac__DOT__y___05Fh49809 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49833));
    vlSelf->mkMac__DOT__y___05Fh179037 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179061));
    vlSelf->mkMac__DOT__y___05Fh157467 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157491));
    vlSelf->mkMac__DOT__y___05Fh96619 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96486)));
    vlSelf->mkMac__DOT__y___05Fh49942 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49809)));
    vlSelf->mkMac__DOT__y___05Fh179170 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179037)));
    vlSelf->mkMac__DOT__y___05Fh157600 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157467)));
    vlSelf->mkMac__DOT__y___05Fh96595 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96619));
    vlSelf->mkMac__DOT__y___05Fh49918 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh49942));
    vlSelf->mkMac__DOT__y___05Fh179146 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179170));
    vlSelf->mkMac__DOT__y___05Fh157576 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157600));
    vlSelf->mkMac__DOT__y___05Fh96728 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96595)));
    vlSelf->mkMac__DOT__y___05Fh50051 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh49918)));
    vlSelf->mkMac__DOT__y___05Fh179279 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179146)));
    vlSelf->mkMac__DOT__y___05Fh157709 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157576)));
    vlSelf->mkMac__DOT__y___05Fh96704 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96728));
    vlSelf->mkMac__DOT__y___05Fh50027 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh50051));
    vlSelf->mkMac__DOT__y___05Fh179255 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179279));
    vlSelf->mkMac__DOT__y___05Fh157685 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157709));
    vlSelf->mkMac__DOT__y___05Fh96837 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96704)));
    vlSelf->mkMac__DOT__y___05Fh50160 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh50027)));
    vlSelf->mkMac__DOT__y___05Fh179388 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179255)));
    vlSelf->mkMac__DOT__y___05Fh157818 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157685)));
    vlSelf->mkMac__DOT__y___05Fh96813 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96837));
    vlSelf->mkMac__DOT__y___05Fh50136 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh50160));
    vlSelf->mkMac__DOT__y___05Fh179364 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179388));
    vlSelf->mkMac__DOT__y___05Fh157794 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157818));
    vlSelf->mkMac__DOT__y___05Fh96946 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96813)));
    vlSelf->mkMac__DOT__y___05Fh50269 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh50136)));
    vlSelf->mkMac__DOT__y___05Fh179497 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179364)));
    vlSelf->mkMac__DOT__y___05Fh157927 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157794)));
    vlSelf->mkMac__DOT__y___05Fh96922 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96946));
    vlSelf->mkMac__DOT__y___05Fh50245 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh50269));
    vlSelf->mkMac__DOT__y___05Fh179473 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179497));
    vlSelf->mkMac__DOT__y___05Fh157903 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157927));
    vlSelf->mkMac__DOT__y___05Fh97055 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96922)));
    vlSelf->mkMac__DOT__y___05Fh50378 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh50245)));
    vlSelf->mkMac__DOT__y___05Fh179606 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179473)));
    vlSelf->mkMac__DOT__y___05Fh158036 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157903)));
    vlSelf->mkMac__DOT__y___05Fh97031 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97055));
    vlSelf->mkMac__DOT__y___05Fh50354 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh50378));
    vlSelf->mkMac__DOT__y___05Fh179582 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179606));
    vlSelf->mkMac__DOT__y___05Fh158012 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158036));
    vlSelf->mkMac__DOT__y___05Fh97164 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97031)));
    vlSelf->mkMac__DOT__y___05Fh50487 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh50354)));
    vlSelf->mkMac__DOT__y___05Fh179715 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179582)));
    vlSelf->mkMac__DOT__y___05Fh158145 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158012)));
    vlSelf->mkMac__DOT__y___05Fh97140 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97164));
    vlSelf->mkMac__DOT__y___05Fh50463 = ((vlSelf->mkMac__DOT__propagate___05Fh33711 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh50487));
    vlSelf->mkMac__DOT__y___05Fh179691 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179715));
    vlSelf->mkMac__DOT__y___05Fh158121 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158145));
    vlSelf->mkMac__DOT__y___05Fh97273 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97140)));
    vlSelf->mkMac__DOT__y___05Fh33714 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh50463) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh50487) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh50378) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh50269) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh50160) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh50051) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh49942) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh49833) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh49724) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh49615) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh49506) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh49397) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh49288) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh49179) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh49070) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48961) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48852) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48743) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48634) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48525) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48416) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48307) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48198) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh48089) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47980) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47871) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47762) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47653) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47544) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh47435) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d239)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh179824 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179691)));
    vlSelf->mkMac__DOT__y___05Fh158254 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158121)));
    vlSelf->mkMac__DOT__y___05Fh97249 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97273));
    vlSelf->mkMac__DOT__product___05Fh33705 = (vlSelf->mkMac__DOT__propagate___05Fh33711 
                                               ^ vlSelf->mkMac__DOT__y___05Fh33714);
    vlSelf->mkMac__DOT__y___05Fh179800 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179824));
    vlSelf->mkMac__DOT__y___05Fh158230 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158254));
    vlSelf->mkMac__DOT__y___05Fh97382 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97249)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d380 
        = ((2U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh33705
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d236);
    vlSelf->mkMac__DOT__y___05Fh179933 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179800)));
    vlSelf->mkMac__DOT__y___05Fh158363 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158230)));
    vlSelf->mkMac__DOT__y___05Fh97358 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97382));
    vlSelf->mkMac__DOT__propagate___05Fh29397 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d380 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh29393);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d380 
           & vlSelf->mkMac__DOT__y___05Fh29393);
    vlSelf->mkMac__DOT__y___05Fh179909 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179933));
    vlSelf->mkMac__DOT__y___05Fh158339 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158363));
    vlSelf->mkMac__DOT__y___05Fh97491 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97358)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d445 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh51590 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383));
    vlSelf->mkMac__DOT__y___05Fh180042 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179909)));
    vlSelf->mkMac__DOT__y___05Fh158472 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158339)));
    vlSelf->mkMac__DOT__y___05Fh97467 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97491));
    vlSelf->mkMac__DOT__y___05Fh51724 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh51590)));
    vlSelf->mkMac__DOT__y___05Fh180018 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180042));
    vlSelf->mkMac__DOT__y___05Fh158448 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158472));
    vlSelf->mkMac__DOT__y___05Fh97600 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97467)));
    vlSelf->mkMac__DOT__y___05Fh51700 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh51724));
    vlSelf->mkMac__DOT__y___05Fh180151 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180018)));
    vlSelf->mkMac__DOT__y___05Fh158581 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158448)));
    vlSelf->mkMac__DOT__y___05Fh97576 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97600));
    vlSelf->mkMac__DOT__y___05Fh51833 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh51700)));
    vlSelf->mkMac__DOT__y___05Fh180127 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180151));
    vlSelf->mkMac__DOT__y___05Fh158557 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158581));
    vlSelf->mkMac__DOT__y___05Fh97709 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97576)));
    vlSelf->mkMac__DOT__y___05Fh51809 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh51833));
    vlSelf->mkMac__DOT__y___05Fh180260 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180127)));
    vlSelf->mkMac__DOT__y___05Fh158690 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158557)));
    vlSelf->mkMac__DOT__y___05Fh97685 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97709));
    vlSelf->mkMac__DOT__y___05Fh51942 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh51809)));
    vlSelf->mkMac__DOT__y___05Fh180236 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180260));
    vlSelf->mkMac__DOT__y___05Fh158666 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158690));
    vlSelf->mkMac__DOT__y___05Fh97818 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97685)));
    vlSelf->mkMac__DOT__y___05Fh51918 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh51942));
    vlSelf->mkMac__DOT__y___05Fh180369 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180236)));
    vlSelf->mkMac__DOT__y___05Fh158799 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158666)));
    vlSelf->mkMac__DOT__y___05Fh97794 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97818));
    vlSelf->mkMac__DOT__y___05Fh52051 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh51918)));
    vlSelf->mkMac__DOT__y___05Fh180345 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180369));
    vlSelf->mkMac__DOT__y___05Fh158775 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158799));
    vlSelf->mkMac__DOT__y___05Fh97927 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97794)));
    vlSelf->mkMac__DOT__y___05Fh52027 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh52051));
    vlSelf->mkMac__DOT__y___05Fh180478 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180345)));
    vlSelf->mkMac__DOT__y___05Fh158908 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158775)));
    vlSelf->mkMac__DOT__y___05Fh97903 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97927));
    vlSelf->mkMac__DOT__y___05Fh52160 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52027)));
    vlSelf->mkMac__DOT__y___05Fh180454 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180478));
    vlSelf->mkMac__DOT__y___05Fh158884 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158908));
    vlSelf->mkMac__DOT__y___05Fh98036 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97903)));
    vlSelf->mkMac__DOT__y___05Fh52136 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh52160));
    vlSelf->mkMac__DOT__y___05Fh180587 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180454)));
    vlSelf->mkMac__DOT__y___05Fh159017 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158884)));
    vlSelf->mkMac__DOT__y___05Fh98012 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98036));
    vlSelf->mkMac__DOT__y___05Fh52269 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52136)));
    vlSelf->mkMac__DOT__y___05Fh180563 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180587));
    vlSelf->mkMac__DOT__y___05Fh158993 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159017));
    vlSelf->mkMac__DOT__y___05Fh98145 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98012)));
    vlSelf->mkMac__DOT__y___05Fh52245 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh52269));
    vlSelf->mkMac__DOT__y___05Fh180696 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180563)));
    vlSelf->mkMac__DOT__y___05Fh159126 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158993)));
    vlSelf->mkMac__DOT__y___05Fh98121 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98145));
    vlSelf->mkMac__DOT__y___05Fh52378 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52245)));
    vlSelf->mkMac__DOT__y___05Fh180672 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180696));
    vlSelf->mkMac__DOT__y___05Fh159102 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159126));
    vlSelf->mkMac__DOT__y___05Fh98254 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98121)));
    vlSelf->mkMac__DOT__y___05Fh52354 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh52378));
    vlSelf->mkMac__DOT__y___05Fh180805 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180672)));
    vlSelf->mkMac__DOT__y___05Fh159235 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159102)));
    vlSelf->mkMac__DOT__y___05Fh98230 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98254));
    vlSelf->mkMac__DOT__y___05Fh52487 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52354)));
    vlSelf->mkMac__DOT__y___05Fh180781 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180805));
    vlSelf->mkMac__DOT__y___05Fh159211 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159235));
    vlSelf->mkMac__DOT__y___05Fh98363 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98230)));
    vlSelf->mkMac__DOT__y___05Fh52463 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh52487));
    vlSelf->mkMac__DOT__y___05Fh180914 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180781)));
    vlSelf->mkMac__DOT__y___05Fh159344 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159211)));
    vlSelf->mkMac__DOT__y___05Fh98339 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98363));
    vlSelf->mkMac__DOT__y___05Fh52596 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52463)));
    vlSelf->mkMac__DOT__y___05Fh180890 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180914));
    vlSelf->mkMac__DOT__y___05Fh159320 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159344));
    vlSelf->mkMac__DOT__y___05Fh98472 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98339)));
    vlSelf->mkMac__DOT__y___05Fh52572 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh52596));
    vlSelf->mkMac__DOT__y___05Fh181023 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180890)));
    vlSelf->mkMac__DOT__y___05Fh159453 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159320)));
    vlSelf->mkMac__DOT__y___05Fh98448 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98472));
    vlSelf->mkMac__DOT__y___05Fh52705 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52572)));
    vlSelf->mkMac__DOT__y___05Fh180999 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181023));
    vlSelf->mkMac__DOT__y___05Fh159429 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159453));
    vlSelf->mkMac__DOT__y___05Fh98581 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98448)));
    vlSelf->mkMac__DOT__y___05Fh52681 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh52705));
    vlSelf->mkMac__DOT__y___05Fh181132 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180999)));
    vlSelf->mkMac__DOT__y___05Fh159562 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159429)));
    vlSelf->mkMac__DOT__y___05Fh98557 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98581));
    vlSelf->mkMac__DOT__y___05Fh52814 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52681)));
    vlSelf->mkMac__DOT__y___05Fh181108 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181132));
    vlSelf->mkMac__DOT__y___05Fh159538 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159562));
    vlSelf->mkMac__DOT__y___05Fh98690 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98557)));
    vlSelf->mkMac__DOT__y___05Fh52790 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh52814));
    vlSelf->mkMac__DOT__y___05Fh181241 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181108)));
    vlSelf->mkMac__DOT__y___05Fh159671 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159538)));
    vlSelf->mkMac__DOT__y___05Fh98666 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98690));
    vlSelf->mkMac__DOT__y___05Fh52923 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52790)));
    vlSelf->mkMac__DOT__y___05Fh181217 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181241));
    vlSelf->mkMac__DOT__y___05Fh159647 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159671));
    vlSelf->mkMac__DOT__y___05Fh98799 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98666)));
    vlSelf->mkMac__DOT__y___05Fh52899 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh52923));
    vlSelf->mkMac__DOT__y___05Fh181350 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181217)));
    vlSelf->mkMac__DOT__y___05Fh159780 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159647)));
    vlSelf->mkMac__DOT__y___05Fh98775 = ((vlSelf->mkMac__DOT__propagate___05Fh85630 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98799));
    vlSelf->mkMac__DOT__y___05Fh53032 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh52899)));
    vlSelf->mkMac__DOT__y___05Fh181326 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181350));
    vlSelf->mkMac__DOT__y___05Fh159756 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159780));
    vlSelf->mkMac__DOT__y___05Fh85644 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh98775) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh98799) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh98690) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh98581) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh98472) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh98363) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh98254) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh98145) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh98036) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh97927) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh97818) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh97709) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh97600) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh97491) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh97382) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh97273) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh97164) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh97055) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96946) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96837) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96728) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96619) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96510) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96401) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96292) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96183) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh96074) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh95965) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh95856) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh95747) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1539)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh53008 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53032));
    vlSelf->mkMac__DOT__y___05Fh181459 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181326)));
    vlSelf->mkMac__DOT__y___05Fh159889 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159756)));
    vlSelf->mkMac__DOT__product___05Fh85624 = (vlSelf->mkMac__DOT__propagate___05Fh85630 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85644);
    vlSelf->mkMac__DOT__y___05Fh53141 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53008)));
    vlSelf->mkMac__DOT__y___05Fh181435 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181459));
    vlSelf->mkMac__DOT__y___05Fh159865 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159889));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1680 
        = ((4U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85624
            : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_33_388_THE_ETC___05F_d1536);
    vlSelf->mkMac__DOT__y___05Fh53117 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53141));
    vlSelf->mkMac__DOT__y___05Fh181568 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181435)));
    vlSelf->mkMac__DOT__y___05Fh159998 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159865)));
    vlSelf->mkMac__DOT__propagate___05Fh85570 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1680 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85566);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1680 
           & vlSelf->mkMac__DOT__y___05Fh85566);
    vlSelf->mkMac__DOT__y___05Fh53250 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53117)));
    vlSelf->mkMac__DOT__y___05Fh181544 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181568));
    vlSelf->mkMac__DOT__y___05Fh159974 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159998));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387___05FETC___05F_d1745 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh100081 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683));
    vlSelf->mkMac__DOT__y___05Fh53226 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53250));
    vlSelf->mkMac__DOT__y___05Fh181677 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181544)));
    vlSelf->mkMac__DOT__y___05Fh160107 = (1U & ((vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159974)));
    vlSelf->mkMac__DOT__y___05Fh100215 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100081)));
    vlSelf->mkMac__DOT__y___05Fh53359 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53226)));
    vlSelf->mkMac__DOT__y___05Fh181653 = ((vlSelf->mkMac__DOT__propagate___05Fh177567 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181677));
    vlSelf->mkMac__DOT__y___05Fh160083 = ((vlSelf->mkMac__DOT__propagate___05Fh151924 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160107));
    vlSelf->mkMac__DOT__y___05Fh100191 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100215));
    vlSelf->mkMac__DOT__y___05Fh53335 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53359));
    vlSelf->mkMac__DOT__y___05Fh177570 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__exp_diff___05Fh143292 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh181653) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh181677) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh181568) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh181459) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh181350) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh181241) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh181132) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh181023) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh180914) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh180805) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh180696) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh180587) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh180478) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh180369) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh180260) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh180151) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh180042) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179933) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179824) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179715) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179606) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179497) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179388) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179279) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179170) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh179061) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh178952) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh178843) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh178734) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh178625) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__exp_diff___05Fh143292)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh151927 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__exp_diff___05Fh143352 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh160083) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh160107) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh159998) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh159889) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh159780) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh159671) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh159562) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh159453) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh159344) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh159235) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh159126) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh159017) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh158908) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh158799) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158690) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158581) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158472) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158363) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158254) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158145) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh158036) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157927) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157818) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157709) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157600) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157491) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157382) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157273) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157164) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh157055) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__exp_diff___05Fh143352)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh100324 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100191)));
    vlSelf->mkMac__DOT__y___05Fh53468 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53335)));
    vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293 
        = (vlSelf->mkMac__DOT__propagate___05Fh177567 
           ^ vlSelf->mkMac__DOT__y___05Fh177570);
    vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353 
        = (vlSelf->mkMac__DOT__propagate___05Fh151924 
           ^ vlSelf->mkMac__DOT__y___05Fh151927);
    vlSelf->mkMac__DOT__y___05Fh100300 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100324));
    vlSelf->mkMac__DOT__y___05Fh53444 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53468));
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread_ETC___05F_d3934 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293);
    vlSelf->mkMac__DOT__y___05Fh186183 = (1U & (vlSelf->mkMac__DOT__mant_b___05Fh143151 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293)));
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread_ETC___05F_d3315 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353);
    vlSelf->mkMac__DOT__y___05Fh164613 = (1U & (vlSelf->mkMac__DOT__mant_a___05Fh143146 
                                                >> 
                                                (0x1fU 
                                                 & vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353)));
    vlSelf->mkMac__DOT__y___05Fh100433 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100300)));
    vlSelf->mkMac__DOT__y___05Fh53577 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53444)));
    vlSelf->mkMac__DOT__propagate___05Fh177550 = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871);
    vlSelf->mkMac__DOT__propagate___05Fh186187 = (vlSelf->mkMac__DOT__mant_shifted_b___05Fh186159 
                                                  ^ vlSelf->mkMac__DOT__y___05Fh186183);
    vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
        = (vlSelf->mkMac__DOT__mant_shifted_b___05Fh186159 
           & vlSelf->mkMac__DOT__y___05Fh186183);
    vlSelf->mkMac__DOT__propagate___05Fh151907 = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252);
    vlSelf->mkMac__DOT__propagate___05Fh164617 = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh164589 
                                                  ^ vlSelf->mkMac__DOT__y___05Fh164613);
    vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
        = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh164589 
           & vlSelf->mkMac__DOT__y___05Fh164613);
    vlSelf->mkMac__DOT__y___05Fh100409 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100433));
    vlSelf->mkMac__DOT__y___05Fh53553 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53577));
    vlSelf->mkMac__DOT__y___05Fh182789 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293)));
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4083 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh187146 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021));
    vlSelf->mkMac__DOT__y___05Fh161219 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353)));
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d3464 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh165576 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402));
    vlSelf->mkMac__DOT__y___05Fh100542 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100409)));
    vlSelf->mkMac__DOT__y___05Fh53686 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53553)));
    vlSelf->mkMac__DOT__y___05Fh182923 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182789)));
    vlSelf->mkMac__DOT__y___05Fh187280 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187146)));
    vlSelf->mkMac__DOT__y___05Fh161353 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161219)));
    vlSelf->mkMac__DOT__y___05Fh165710 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165576)));
    vlSelf->mkMac__DOT__y___05Fh100518 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100542));
    vlSelf->mkMac__DOT__y___05Fh53662 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53686));
    vlSelf->mkMac__DOT__y___05Fh182899 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh182923));
    vlSelf->mkMac__DOT__y___05Fh187256 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187280));
    vlSelf->mkMac__DOT__y___05Fh161329 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161353));
    vlSelf->mkMac__DOT__y___05Fh165686 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh165710));
    vlSelf->mkMac__DOT__y___05Fh100651 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100518)));
    vlSelf->mkMac__DOT__y___05Fh53795 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53662)));
    vlSelf->mkMac__DOT__y___05Fh183032 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182899)));
    vlSelf->mkMac__DOT__y___05Fh187389 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187256)));
    vlSelf->mkMac__DOT__y___05Fh161462 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161329)));
    vlSelf->mkMac__DOT__y___05Fh165819 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165686)));
    vlSelf->mkMac__DOT__y___05Fh100627 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100651));
    vlSelf->mkMac__DOT__y___05Fh53771 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53795));
    vlSelf->mkMac__DOT__y___05Fh183008 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183032));
    vlSelf->mkMac__DOT__y___05Fh187365 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187389));
    vlSelf->mkMac__DOT__y___05Fh161438 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161462));
    vlSelf->mkMac__DOT__y___05Fh165795 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh165819));
    vlSelf->mkMac__DOT__y___05Fh100760 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100627)));
    vlSelf->mkMac__DOT__y___05Fh53904 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53771)));
    vlSelf->mkMac__DOT__y___05Fh183141 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183008)));
    vlSelf->mkMac__DOT__y___05Fh187498 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187365)));
    vlSelf->mkMac__DOT__y___05Fh161571 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161438)));
    vlSelf->mkMac__DOT__y___05Fh165928 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165795)));
    vlSelf->mkMac__DOT__y___05Fh100736 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100760));
    vlSelf->mkMac__DOT__y___05Fh53880 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh53904));
    vlSelf->mkMac__DOT__y___05Fh183117 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183141));
    vlSelf->mkMac__DOT__y___05Fh187474 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187498));
    vlSelf->mkMac__DOT__y___05Fh161547 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161571));
    vlSelf->mkMac__DOT__y___05Fh165904 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh165928));
    vlSelf->mkMac__DOT__y___05Fh100869 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100736)));
    vlSelf->mkMac__DOT__y___05Fh54013 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53880)));
    vlSelf->mkMac__DOT__y___05Fh183250 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183117)));
    vlSelf->mkMac__DOT__y___05Fh187607 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187474)));
    vlSelf->mkMac__DOT__y___05Fh161680 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161547)));
    vlSelf->mkMac__DOT__y___05Fh166037 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165904)));
    vlSelf->mkMac__DOT__y___05Fh100845 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100869));
    vlSelf->mkMac__DOT__y___05Fh53989 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54013));
    vlSelf->mkMac__DOT__y___05Fh183226 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183250));
    vlSelf->mkMac__DOT__y___05Fh187583 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187607));
    vlSelf->mkMac__DOT__y___05Fh161656 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161680));
    vlSelf->mkMac__DOT__y___05Fh166013 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166037));
    vlSelf->mkMac__DOT__y___05Fh100978 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100845)));
    vlSelf->mkMac__DOT__y___05Fh54122 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh53989)));
    vlSelf->mkMac__DOT__y___05Fh183359 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183226)));
    vlSelf->mkMac__DOT__y___05Fh187716 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187583)));
    vlSelf->mkMac__DOT__y___05Fh161789 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161656)));
    vlSelf->mkMac__DOT__y___05Fh166146 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166013)));
    vlSelf->mkMac__DOT__y___05Fh100954 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100978));
    vlSelf->mkMac__DOT__y___05Fh54098 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54122));
    vlSelf->mkMac__DOT__y___05Fh183335 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183359));
    vlSelf->mkMac__DOT__y___05Fh187692 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187716));
    vlSelf->mkMac__DOT__y___05Fh161765 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161789));
    vlSelf->mkMac__DOT__y___05Fh166122 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166146));
    vlSelf->mkMac__DOT__y___05Fh101087 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100954)));
    vlSelf->mkMac__DOT__y___05Fh54231 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54098)));
    vlSelf->mkMac__DOT__y___05Fh183468 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183335)));
    vlSelf->mkMac__DOT__y___05Fh187825 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187692)));
    vlSelf->mkMac__DOT__y___05Fh161898 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161765)));
    vlSelf->mkMac__DOT__y___05Fh166255 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166122)));
    vlSelf->mkMac__DOT__y___05Fh101063 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101087));
    vlSelf->mkMac__DOT__y___05Fh54207 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54231));
    vlSelf->mkMac__DOT__y___05Fh183444 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183468));
    vlSelf->mkMac__DOT__y___05Fh187801 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187825));
    vlSelf->mkMac__DOT__y___05Fh161874 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh161898));
    vlSelf->mkMac__DOT__y___05Fh166231 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166255));
    vlSelf->mkMac__DOT__y___05Fh101196 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101063)));
    vlSelf->mkMac__DOT__y___05Fh54340 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54207)));
    vlSelf->mkMac__DOT__y___05Fh183577 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183444)));
    vlSelf->mkMac__DOT__y___05Fh187934 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187801)));
    vlSelf->mkMac__DOT__y___05Fh162007 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161874)));
    vlSelf->mkMac__DOT__y___05Fh166364 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166231)));
    vlSelf->mkMac__DOT__y___05Fh101172 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101196));
    vlSelf->mkMac__DOT__y___05Fh54316 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54340));
    vlSelf->mkMac__DOT__y___05Fh183553 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183577));
    vlSelf->mkMac__DOT__y___05Fh187910 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187934));
    vlSelf->mkMac__DOT__y___05Fh161983 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh162007));
    vlSelf->mkMac__DOT__y___05Fh166340 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166364));
    vlSelf->mkMac__DOT__y___05Fh101305 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101172)));
    vlSelf->mkMac__DOT__y___05Fh54449 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54316)));
    vlSelf->mkMac__DOT__y___05Fh183686 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183553)));
    vlSelf->mkMac__DOT__y___05Fh188043 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187910)));
    vlSelf->mkMac__DOT__y___05Fh162116 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161983)));
    vlSelf->mkMac__DOT__y___05Fh166473 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166340)));
    vlSelf->mkMac__DOT__y___05Fh101281 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101305));
    vlSelf->mkMac__DOT__y___05Fh54425 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54449));
    vlSelf->mkMac__DOT__y___05Fh183662 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183686));
    vlSelf->mkMac__DOT__y___05Fh188019 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh188043));
    vlSelf->mkMac__DOT__y___05Fh162092 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh162116));
    vlSelf->mkMac__DOT__y___05Fh166449 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166473));
    vlSelf->mkMac__DOT__y___05Fh101414 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101281)));
    vlSelf->mkMac__DOT__y___05Fh54558 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54425)));
    vlSelf->mkMac__DOT__y___05Fh183795 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183662)));
    vlSelf->mkMac__DOT__y___05Fh188152 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188019)));
    vlSelf->mkMac__DOT__y___05Fh162225 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162092)));
    vlSelf->mkMac__DOT__y___05Fh166582 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166449)));
    vlSelf->mkMac__DOT__y___05Fh101390 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101414));
    vlSelf->mkMac__DOT__y___05Fh54534 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54558));
    vlSelf->mkMac__DOT__y___05Fh183771 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183795));
    vlSelf->mkMac__DOT__y___05Fh188128 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188152));
    vlSelf->mkMac__DOT__y___05Fh162201 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162225));
    vlSelf->mkMac__DOT__y___05Fh166558 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166582));
    vlSelf->mkMac__DOT__y___05Fh101523 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101390)));
    vlSelf->mkMac__DOT__y___05Fh54667 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54534)));
    vlSelf->mkMac__DOT__y___05Fh183904 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183771)));
    vlSelf->mkMac__DOT__y___05Fh188261 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188128)));
    vlSelf->mkMac__DOT__y___05Fh162334 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162201)));
    vlSelf->mkMac__DOT__y___05Fh166691 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166558)));
    vlSelf->mkMac__DOT__y___05Fh101499 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101523));
    vlSelf->mkMac__DOT__y___05Fh54643 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54667));
    vlSelf->mkMac__DOT__y___05Fh183880 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183904));
    vlSelf->mkMac__DOT__y___05Fh188237 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188261));
    vlSelf->mkMac__DOT__y___05Fh162310 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162334));
    vlSelf->mkMac__DOT__y___05Fh166667 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166691));
    vlSelf->mkMac__DOT__y___05Fh101632 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101499)));
    vlSelf->mkMac__DOT__y___05Fh54776 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh54643)));
    vlSelf->mkMac__DOT__y___05Fh184013 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183880)));
    vlSelf->mkMac__DOT__y___05Fh188370 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188237)));
    vlSelf->mkMac__DOT__y___05Fh162443 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162310)));
    vlSelf->mkMac__DOT__y___05Fh166800 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166667)));
    vlSelf->mkMac__DOT__y___05Fh101608 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101632));
    vlSelf->mkMac__DOT__y___05Fh54752 = ((vlSelf->mkMac__DOT__propagate___05Fh29397 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh54776));
    vlSelf->mkMac__DOT__y___05Fh183989 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184013));
    vlSelf->mkMac__DOT__y___05Fh188346 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188370));
    vlSelf->mkMac__DOT__y___05Fh162419 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162443));
    vlSelf->mkMac__DOT__y___05Fh166776 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166800));
    vlSelf->mkMac__DOT__y___05Fh101741 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101608)));
    vlSelf->mkMac__DOT__y___05Fh29400 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh54752) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh54776) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh54667) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh54558) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh54449) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh54340) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh54231) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh54122) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh54013) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh53904) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh53795) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh53686) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh53577) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh53468) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh53359) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh53250) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh53141) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh53032) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52923) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52814) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52705) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52596) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52487) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52378) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52269) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52160) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh52051) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh51942) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh51833) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh51724) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d383)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh184122 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183989)));
    vlSelf->mkMac__DOT__y___05Fh188479 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188346)));
    vlSelf->mkMac__DOT__y___05Fh162552 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162419)));
    vlSelf->mkMac__DOT__y___05Fh166909 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166776)));
    vlSelf->mkMac__DOT__y___05Fh101717 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101741));
    vlSelf->mkMac__DOT__product___05Fh29391 = (vlSelf->mkMac__DOT__propagate___05Fh29397 
                                               ^ vlSelf->mkMac__DOT__y___05Fh29400);
    vlSelf->mkMac__DOT__y___05Fh184098 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184122));
    vlSelf->mkMac__DOT__y___05Fh188455 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188479));
    vlSelf->mkMac__DOT__y___05Fh162528 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162552));
    vlSelf->mkMac__DOT__y___05Fh166885 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166909));
    vlSelf->mkMac__DOT__y___05Fh101850 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101717)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d524 
        = ((4U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh29391
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d380);
    vlSelf->mkMac__DOT__y___05Fh184231 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184098)));
    vlSelf->mkMac__DOT__y___05Fh188588 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188455)));
    vlSelf->mkMac__DOT__y___05Fh162661 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162528)));
    vlSelf->mkMac__DOT__y___05Fh167018 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166885)));
    vlSelf->mkMac__DOT__y___05Fh101826 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101850));
    vlSelf->mkMac__DOT__propagate___05Fh25083 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d524 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh25079);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d524 
           & vlSelf->mkMac__DOT__y___05Fh25079);
    vlSelf->mkMac__DOT__y___05Fh184207 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184231));
    vlSelf->mkMac__DOT__y___05Fh188564 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188588));
    vlSelf->mkMac__DOT__y___05Fh162637 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162661));
    vlSelf->mkMac__DOT__y___05Fh166994 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167018));
    vlSelf->mkMac__DOT__y___05Fh101959 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101826)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d589 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh55879 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527));
    vlSelf->mkMac__DOT__y___05Fh184340 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184207)));
    vlSelf->mkMac__DOT__y___05Fh188697 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188564)));
    vlSelf->mkMac__DOT__y___05Fh162770 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162637)));
    vlSelf->mkMac__DOT__y___05Fh167127 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166994)));
    vlSelf->mkMac__DOT__y___05Fh101935 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101959));
    vlSelf->mkMac__DOT__y___05Fh56013 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh55879)));
    vlSelf->mkMac__DOT__y___05Fh184316 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184340));
    vlSelf->mkMac__DOT__y___05Fh188673 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188697));
    vlSelf->mkMac__DOT__y___05Fh162746 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162770));
    vlSelf->mkMac__DOT__y___05Fh167103 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167127));
    vlSelf->mkMac__DOT__y___05Fh102068 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101935)));
    vlSelf->mkMac__DOT__y___05Fh55989 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56013));
    vlSelf->mkMac__DOT__y___05Fh184449 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184316)));
    vlSelf->mkMac__DOT__y___05Fh188806 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188673)));
    vlSelf->mkMac__DOT__y___05Fh162879 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162746)));
    vlSelf->mkMac__DOT__y___05Fh167236 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167103)));
    vlSelf->mkMac__DOT__y___05Fh102044 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102068));
    vlSelf->mkMac__DOT__y___05Fh56122 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh55989)));
    vlSelf->mkMac__DOT__y___05Fh184425 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184449));
    vlSelf->mkMac__DOT__y___05Fh188782 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188806));
    vlSelf->mkMac__DOT__y___05Fh162855 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162879));
    vlSelf->mkMac__DOT__y___05Fh167212 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167236));
    vlSelf->mkMac__DOT__y___05Fh102177 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102044)));
    vlSelf->mkMac__DOT__y___05Fh56098 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56122));
    vlSelf->mkMac__DOT__y___05Fh184558 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184425)));
    vlSelf->mkMac__DOT__y___05Fh188915 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188782)));
    vlSelf->mkMac__DOT__y___05Fh162988 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162855)));
    vlSelf->mkMac__DOT__y___05Fh167345 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167212)));
    vlSelf->mkMac__DOT__y___05Fh102153 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102177));
    vlSelf->mkMac__DOT__y___05Fh56231 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56098)));
    vlSelf->mkMac__DOT__y___05Fh184534 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184558));
    vlSelf->mkMac__DOT__y___05Fh188891 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188915));
    vlSelf->mkMac__DOT__y___05Fh162964 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162988));
    vlSelf->mkMac__DOT__y___05Fh167321 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167345));
    vlSelf->mkMac__DOT__y___05Fh102286 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102153)));
    vlSelf->mkMac__DOT__y___05Fh56207 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56231));
    vlSelf->mkMac__DOT__y___05Fh184667 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184534)));
    vlSelf->mkMac__DOT__y___05Fh189024 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188891)));
    vlSelf->mkMac__DOT__y___05Fh163097 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162964)));
    vlSelf->mkMac__DOT__y___05Fh167454 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167321)));
    vlSelf->mkMac__DOT__y___05Fh102262 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102286));
    vlSelf->mkMac__DOT__y___05Fh56340 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56207)));
    vlSelf->mkMac__DOT__y___05Fh184643 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184667));
    vlSelf->mkMac__DOT__y___05Fh189000 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189024));
    vlSelf->mkMac__DOT__y___05Fh163073 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163097));
    vlSelf->mkMac__DOT__y___05Fh167430 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167454));
    vlSelf->mkMac__DOT__y___05Fh102395 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102262)));
    vlSelf->mkMac__DOT__y___05Fh56316 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56340));
    vlSelf->mkMac__DOT__y___05Fh184776 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184643)));
    vlSelf->mkMac__DOT__y___05Fh189133 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189000)));
    vlSelf->mkMac__DOT__y___05Fh163206 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163073)));
    vlSelf->mkMac__DOT__y___05Fh167563 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167430)));
    vlSelf->mkMac__DOT__y___05Fh102371 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102395));
    vlSelf->mkMac__DOT__y___05Fh56449 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56316)));
    vlSelf->mkMac__DOT__y___05Fh184752 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184776));
    vlSelf->mkMac__DOT__y___05Fh189109 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189133));
    vlSelf->mkMac__DOT__y___05Fh163182 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163206));
    vlSelf->mkMac__DOT__y___05Fh167539 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167563));
    vlSelf->mkMac__DOT__y___05Fh102504 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102371)));
    vlSelf->mkMac__DOT__y___05Fh56425 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56449));
    vlSelf->mkMac__DOT__y___05Fh184885 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184752)));
    vlSelf->mkMac__DOT__y___05Fh189242 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189109)));
    vlSelf->mkMac__DOT__y___05Fh163315 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163182)));
    vlSelf->mkMac__DOT__y___05Fh167672 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167539)));
    vlSelf->mkMac__DOT__y___05Fh102480 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102504));
    vlSelf->mkMac__DOT__y___05Fh56558 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56425)));
    vlSelf->mkMac__DOT__y___05Fh184861 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184885));
    vlSelf->mkMac__DOT__y___05Fh189218 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189242));
    vlSelf->mkMac__DOT__y___05Fh163291 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163315));
    vlSelf->mkMac__DOT__y___05Fh167648 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167672));
    vlSelf->mkMac__DOT__y___05Fh102613 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102480)));
    vlSelf->mkMac__DOT__y___05Fh56534 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56558));
    vlSelf->mkMac__DOT__y___05Fh184994 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184861)));
    vlSelf->mkMac__DOT__y___05Fh189351 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189218)));
    vlSelf->mkMac__DOT__y___05Fh163424 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163291)));
    vlSelf->mkMac__DOT__y___05Fh167781 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167648)));
    vlSelf->mkMac__DOT__y___05Fh102589 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102613));
    vlSelf->mkMac__DOT__y___05Fh56667 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56534)));
    vlSelf->mkMac__DOT__y___05Fh184970 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184994));
    vlSelf->mkMac__DOT__y___05Fh189327 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189351));
    vlSelf->mkMac__DOT__y___05Fh163400 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163424));
    vlSelf->mkMac__DOT__y___05Fh167757 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167781));
    vlSelf->mkMac__DOT__y___05Fh102722 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102589)));
    vlSelf->mkMac__DOT__y___05Fh56643 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56667));
    vlSelf->mkMac__DOT__y___05Fh185103 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184970)));
    vlSelf->mkMac__DOT__y___05Fh189460 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189327)));
    vlSelf->mkMac__DOT__y___05Fh163533 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163400)));
    vlSelf->mkMac__DOT__y___05Fh167890 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167757)));
    vlSelf->mkMac__DOT__y___05Fh102698 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102722));
    vlSelf->mkMac__DOT__y___05Fh56776 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56643)));
    vlSelf->mkMac__DOT__y___05Fh185079 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185103));
    vlSelf->mkMac__DOT__y___05Fh189436 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189460));
    vlSelf->mkMac__DOT__y___05Fh163509 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163533));
    vlSelf->mkMac__DOT__y___05Fh167866 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167890));
    vlSelf->mkMac__DOT__y___05Fh102831 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102698)));
    vlSelf->mkMac__DOT__y___05Fh56752 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh56776));
    vlSelf->mkMac__DOT__y___05Fh185212 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185079)));
    vlSelf->mkMac__DOT__y___05Fh189569 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189436)));
    vlSelf->mkMac__DOT__y___05Fh163642 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163509)));
    vlSelf->mkMac__DOT__y___05Fh167999 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167866)));
    vlSelf->mkMac__DOT__y___05Fh102807 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102831));
    vlSelf->mkMac__DOT__y___05Fh56885 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56752)));
    vlSelf->mkMac__DOT__y___05Fh185188 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185212));
    vlSelf->mkMac__DOT__y___05Fh189545 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189569));
    vlSelf->mkMac__DOT__y___05Fh163618 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163642));
    vlSelf->mkMac__DOT__y___05Fh167975 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167999));
    vlSelf->mkMac__DOT__y___05Fh102940 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102807)));
    vlSelf->mkMac__DOT__y___05Fh56861 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh56885));
    vlSelf->mkMac__DOT__y___05Fh185321 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185188)));
    vlSelf->mkMac__DOT__y___05Fh189678 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189545)));
    vlSelf->mkMac__DOT__y___05Fh163751 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163618)));
    vlSelf->mkMac__DOT__y___05Fh168108 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167975)));
    vlSelf->mkMac__DOT__y___05Fh102916 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102940));
    vlSelf->mkMac__DOT__y___05Fh56994 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56861)));
    vlSelf->mkMac__DOT__y___05Fh185297 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185321));
    vlSelf->mkMac__DOT__y___05Fh189654 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189678));
    vlSelf->mkMac__DOT__y___05Fh163727 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163751));
    vlSelf->mkMac__DOT__y___05Fh168084 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168108));
    vlSelf->mkMac__DOT__y___05Fh103049 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102916)));
    vlSelf->mkMac__DOT__y___05Fh56970 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh56994));
    vlSelf->mkMac__DOT__y___05Fh185430 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185297)));
    vlSelf->mkMac__DOT__y___05Fh189787 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189654)));
    vlSelf->mkMac__DOT__y___05Fh163860 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163727)));
    vlSelf->mkMac__DOT__y___05Fh168217 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168084)));
    vlSelf->mkMac__DOT__y___05Fh103025 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103049));
    vlSelf->mkMac__DOT__y___05Fh57103 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh56970)));
    vlSelf->mkMac__DOT__y___05Fh185406 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185430));
    vlSelf->mkMac__DOT__y___05Fh189763 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189787));
    vlSelf->mkMac__DOT__y___05Fh163836 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163860));
    vlSelf->mkMac__DOT__y___05Fh168193 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168217));
    vlSelf->mkMac__DOT__y___05Fh103158 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103025)));
    vlSelf->mkMac__DOT__y___05Fh57079 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57103));
    vlSelf->mkMac__DOT__y___05Fh185539 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185406)));
    vlSelf->mkMac__DOT__y___05Fh189896 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189763)));
    vlSelf->mkMac__DOT__y___05Fh163969 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163836)));
    vlSelf->mkMac__DOT__y___05Fh168326 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168193)));
    vlSelf->mkMac__DOT__y___05Fh103134 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103158));
    vlSelf->mkMac__DOT__y___05Fh57212 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57079)));
    vlSelf->mkMac__DOT__y___05Fh185515 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185539));
    vlSelf->mkMac__DOT__y___05Fh189872 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh189896));
    vlSelf->mkMac__DOT__y___05Fh163945 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163969));
    vlSelf->mkMac__DOT__y___05Fh168302 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168326));
    vlSelf->mkMac__DOT__y___05Fh103267 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103134)));
    vlSelf->mkMac__DOT__y___05Fh57188 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57212));
    vlSelf->mkMac__DOT__y___05Fh185648 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185515)));
    vlSelf->mkMac__DOT__y___05Fh190005 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189872)));
    vlSelf->mkMac__DOT__y___05Fh164078 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163945)));
    vlSelf->mkMac__DOT__y___05Fh168435 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168302)));
    vlSelf->mkMac__DOT__y___05Fh103243 = ((vlSelf->mkMac__DOT__propagate___05Fh85570 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103267));
    vlSelf->mkMac__DOT__y___05Fh57321 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57188)));
    vlSelf->mkMac__DOT__y___05Fh185624 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185648));
    vlSelf->mkMac__DOT__y___05Fh189981 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190005));
    vlSelf->mkMac__DOT__y___05Fh164054 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164078));
    vlSelf->mkMac__DOT__y___05Fh168411 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168435));
    vlSelf->mkMac__DOT__y___05Fh85584 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh103243) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh103267) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh103158) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh103049) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh102940) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh102831) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh102722) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh102613) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh102504) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh102395) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh102286) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh102177) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh102068) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh101959) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101850) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101741) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101632) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101523) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101414) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101305) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101196) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh101087) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100978) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100869) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100760) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100651) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100542) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100433) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100324) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh100215) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1683)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh57297 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57321));
    vlSelf->mkMac__DOT__y___05Fh185757 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185624)));
    vlSelf->mkMac__DOT__y___05Fh190114 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189981)));
    vlSelf->mkMac__DOT__y___05Fh164187 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164054)));
    vlSelf->mkMac__DOT__y___05Fh168544 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168411)));
    vlSelf->mkMac__DOT__product___05Fh85564 = (vlSelf->mkMac__DOT__propagate___05Fh85570 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85584);
    vlSelf->mkMac__DOT__y___05Fh57430 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57297)));
    vlSelf->mkMac__DOT__y___05Fh185733 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185757));
    vlSelf->mkMac__DOT__y___05Fh190090 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190114));
    vlSelf->mkMac__DOT__y___05Fh164163 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164187));
    vlSelf->mkMac__DOT__y___05Fh168520 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168544));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1824 
        = ((8U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85564
            : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_34_387_THE_ETC___05F_d1680);
    vlSelf->mkMac__DOT__y___05Fh57406 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57430));
    vlSelf->mkMac__DOT__y___05Fh185866 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185733)));
    vlSelf->mkMac__DOT__y___05Fh190223 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190090)));
    vlSelf->mkMac__DOT__y___05Fh164296 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164163)));
    vlSelf->mkMac__DOT__y___05Fh168653 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168520)));
    vlSelf->mkMac__DOT__propagate___05Fh85510 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1824 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85506);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1824 
           & vlSelf->mkMac__DOT__y___05Fh85506);
    vlSelf->mkMac__DOT__y___05Fh57539 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57406)));
    vlSelf->mkMac__DOT__y___05Fh185842 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185866));
    vlSelf->mkMac__DOT__y___05Fh190199 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190223));
    vlSelf->mkMac__DOT__y___05Fh164272 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164296));
    vlSelf->mkMac__DOT__y___05Fh168629 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168653));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386___05FETC___05F_d1889 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh104549 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827));
    vlSelf->mkMac__DOT__y___05Fh57515 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57539));
    vlSelf->mkMac__DOT__y___05Fh185975 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185842)));
    vlSelf->mkMac__DOT__y___05Fh190332 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190199)));
    vlSelf->mkMac__DOT__y___05Fh164405 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164272)));
    vlSelf->mkMac__DOT__y___05Fh168762 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168629)));
    vlSelf->mkMac__DOT__y___05Fh104683 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104549)));
    vlSelf->mkMac__DOT__y___05Fh57648 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57515)));
    vlSelf->mkMac__DOT__y___05Fh185951 = ((vlSelf->mkMac__DOT__propagate___05Fh177550 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185975));
    vlSelf->mkMac__DOT__y___05Fh190308 = ((vlSelf->mkMac__DOT__propagate___05Fh186187 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190332));
    vlSelf->mkMac__DOT__y___05Fh164381 = ((vlSelf->mkMac__DOT__propagate___05Fh151907 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164405));
    vlSelf->mkMac__DOT__y___05Fh168738 = ((vlSelf->mkMac__DOT__propagate___05Fh164617 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168762));
    vlSelf->mkMac__DOT__y___05Fh104659 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104683));
    vlSelf->mkMac__DOT__y___05Fh57624 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57648));
    vlSelf->mkMac__DOT__y___05Fh177553 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3871 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh185951) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh185975) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh185866) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh185757) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh185648) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh185539) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh185430) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh185321) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh185212) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh185103) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh184994) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh184885) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh184776) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh184667) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184558) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184449) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184340) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184231) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184122) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh184013) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183904) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183795) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183686) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183577) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183468) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183359) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183250) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183141) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh183032) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh182923) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143293))
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh186190 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh190308) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh190332) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh190223) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh190114) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh190005) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh189896) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh189787) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh189678) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh189569) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh189460) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh189351) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh189242) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh189133) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh189024) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188915) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188806) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188697) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188588) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188479) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188370) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188261) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188152) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh188043) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187934) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187825) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187716) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187607) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187498) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187389) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh187280) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_22___05FETC___05F_d4021)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh151910 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F9_ETC___05F_d3252 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh164381) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh164405) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh164296) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh164187) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh164078) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh163969) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh163860) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh163751) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh163642) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh163533) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh163424) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh163315) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh163206) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh163097) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162988) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162879) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162770) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162661) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162552) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162443) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162334) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162225) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162116) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh162007) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161898) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161789) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161680) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161571) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161462) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh161353) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_decr___05Fh143353))
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh164620 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh168738) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh168762) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh168653) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh168544) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh168435) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh168326) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh168217) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh168108) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh167999) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh167890) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh167781) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh167672) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh167563) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh167454) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh167345) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh167236) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh167127) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh167018) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166909) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166800) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166691) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166582) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166473) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166364) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166255) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166146) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh166037) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh165928) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh165819) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh165710) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_54___05FETC___05F_d3402)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh104792 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104659)));
    vlSelf->mkMac__DOT__y___05Fh57757 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57624)));
    vlSelf->mkMac__DOT__mask___05F_1___05Fh143294 = 
        (vlSelf->mkMac__DOT__propagate___05Fh177550 
         ^ vlSelf->mkMac__DOT__y___05Fh177553);
    vlSelf->mkMac__DOT__mant_shifted_b___05Fh186181 
        = (vlSelf->mkMac__DOT__propagate___05Fh186187 
           ^ vlSelf->mkMac__DOT__y___05Fh186190);
    vlSelf->mkMac__DOT__mask___05Fh143354 = (vlSelf->mkMac__DOT__propagate___05Fh151907 
                                             ^ vlSelf->mkMac__DOT__y___05Fh151910);
    vlSelf->mkMac__DOT__mant_shifted_a___05Fh164611 
        = (vlSelf->mkMac__DOT__propagate___05Fh164617 
           ^ vlSelf->mkMac__DOT__y___05Fh164620);
    vlSelf->mkMac__DOT__y___05Fh104768 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104792));
    vlSelf->mkMac__DOT__y___05Fh57733 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57757));
    vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh168945 
        = (((~ (vlSelf->mkMac__DOT__mant_b___05Fh143151 
                >> (0x1fU & vlSelf->mkMac__DOT__exp_diff___05Fh143292))) 
            & (0U == (vlSelf->mkMac__DOT__mask___05F_1___05Fh143294 
                      & vlSelf->mkMac__DOT__mant_b___05Fh143151)))
            ? vlSelf->mkMac__DOT__mant_shifted_b___05Fh186159
            : vlSelf->mkMac__DOT__mant_shifted_b___05Fh186181);
    vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh143356 
        = (((vlSelf->mkMac__DOT__mant_a___05Fh143146 
             >> (0x1fU & vlSelf->mkMac__DOT__exp_diff___05Fh143352)) 
            & (0U == (vlSelf->mkMac__DOT__mask___05Fh143354 
                      & vlSelf->mkMac__DOT__mant_a___05Fh143146)))
            ? vlSelf->mkMac__DOT__mant_shifted_a___05Fh164589
            : vlSelf->mkMac__DOT__mant_shifted_a___05Fh164611);
    if (vlSelf->mkMac__DOT___0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS_62___05FETC___05F_d2926) {
        vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156 
            = vlSelf->mkMac__DOT__mant_b___05Fh143151;
        vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
            = vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh143356;
    } else {
        vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156 
            = vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh168945;
        vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
            = vlSelf->mkMac__DOT__mant_a___05Fh143146;
    }
    vlSelf->mkMac__DOT__y___05Fh104901 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104768)));
    vlSelf->mkMac__DOT__y___05Fh57866 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57733)));
    vlSelf->mkMac__DOT__y___05Fh104877 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104901));
    vlSelf->mkMac__DOT__y___05Fh57842 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57866));
    vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
        = (~ vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4164 
        = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
           < vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156);
    vlSelf->mkMac__DOT__propagate___05Fh190566 = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
                                                  ^ vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
        = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
           & vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156);
    vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
        = (~ vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154);
    vlSelf->mkMac__DOT__y___05Fh105010 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104877)));
    vlSelf->mkMac__DOT__y___05Fh57975 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57842)));
    vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F91_ETC___05F_d4570 
        = ((1U & vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh194868 = ((0xfffffffeU 
                                                   & vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10) 
                                                  | (1U 
                                                     & (~ vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10)));
    vlSelf->mkMac__DOT__y___05Fh195925 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10)));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BI_ETC___05F_d4230 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh191489 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168));
    vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F91_ETC___05F_d4344 
        = ((1U & vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh203396 = ((0xfffffffeU 
                                                   & vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9) 
                                                  | (1U 
                                                     & (~ vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9)));
    vlSelf->mkMac__DOT__y___05Fh204453 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9)));
    vlSelf->mkMac__DOT__y___05Fh104986 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105010));
    vlSelf->mkMac__DOT__y___05Fh57951 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh57975));
    vlSelf->mkMac__DOT__y___05Fh196032 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh195925));
    vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh143232 
        = (1U & ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4164)
                  ? (vlSelf->mkMac__DOT__fp_pfifo_rv[0U] 
                     >> 0x1fU) : (vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                                  >> 0x1fU)));
    vlSelf->mkMac__DOT__y___05Fh191623 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191489)));
    vlSelf->mkMac__DOT__y___05Fh204560 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204453));
    vlSelf->mkMac__DOT__y___05Fh105119 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104986)));
    vlSelf->mkMac__DOT__y___05Fh58084 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh57951)));
    vlSelf->mkMac__DOT__y___05Fh196139 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196032));
    vlSelf->mkMac__DOT__y___05Fh191599 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh191623));
    vlSelf->mkMac__DOT__y___05Fh204667 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204560));
    vlSelf->mkMac__DOT__y___05Fh105095 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105119));
    vlSelf->mkMac__DOT__y___05Fh58060 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58084));
    vlSelf->mkMac__DOT__y___05Fh196246 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196139));
    vlSelf->mkMac__DOT__y___05Fh191732 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191599)));
    vlSelf->mkMac__DOT__y___05Fh204774 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204667));
    vlSelf->mkMac__DOT__y___05Fh105228 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105095)));
    vlSelf->mkMac__DOT__y___05Fh58193 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58060)));
    vlSelf->mkMac__DOT__y___05Fh196353 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196246));
    vlSelf->mkMac__DOT__y___05Fh191708 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh191732));
    vlSelf->mkMac__DOT__y___05Fh204881 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204774));
    vlSelf->mkMac__DOT__y___05Fh105204 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105228));
    vlSelf->mkMac__DOT__y___05Fh58169 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58193));
    vlSelf->mkMac__DOT__y___05Fh196460 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196353));
    vlSelf->mkMac__DOT__y___05Fh191841 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191708)));
    vlSelf->mkMac__DOT__y___05Fh204988 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204881));
    vlSelf->mkMac__DOT__y___05Fh105337 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105204)));
    vlSelf->mkMac__DOT__y___05Fh58302 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58169)));
    vlSelf->mkMac__DOT__y___05Fh196567 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196460));
    vlSelf->mkMac__DOT__y___05Fh191817 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh191841));
    vlSelf->mkMac__DOT__y___05Fh205095 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh204988));
    vlSelf->mkMac__DOT__y___05Fh105313 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105337));
    vlSelf->mkMac__DOT__y___05Fh58278 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58302));
    vlSelf->mkMac__DOT__y___05Fh196674 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196567));
    vlSelf->mkMac__DOT__y___05Fh191950 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191817)));
    vlSelf->mkMac__DOT__y___05Fh205202 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh205095));
    vlSelf->mkMac__DOT__y___05Fh105446 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105313)));
    vlSelf->mkMac__DOT__y___05Fh58411 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58278)));
    vlSelf->mkMac__DOT__y___05Fh196781 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh196674));
    vlSelf->mkMac__DOT__y___05Fh191926 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh191950));
    vlSelf->mkMac__DOT__y___05Fh205309 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh205202));
    vlSelf->mkMac__DOT__y___05Fh105422 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105446));
    vlSelf->mkMac__DOT__y___05Fh58387 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58411));
    vlSelf->mkMac__DOT__y___05Fh196888 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196781));
    vlSelf->mkMac__DOT__y___05Fh192059 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191926)));
    vlSelf->mkMac__DOT__y___05Fh205416 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205309));
    vlSelf->mkMac__DOT__y___05Fh105555 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105422)));
    vlSelf->mkMac__DOT__y___05Fh58520 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58387)));
    vlSelf->mkMac__DOT__y___05Fh196995 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196888));
    vlSelf->mkMac__DOT__y___05Fh192035 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh192059));
    vlSelf->mkMac__DOT__y___05Fh205523 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205416));
    vlSelf->mkMac__DOT__y___05Fh105531 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105555));
    vlSelf->mkMac__DOT__y___05Fh58496 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58520));
    vlSelf->mkMac__DOT__y___05Fh197102 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196995));
    vlSelf->mkMac__DOT__y___05Fh192168 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192035)));
    vlSelf->mkMac__DOT__y___05Fh205630 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205523));
    vlSelf->mkMac__DOT__y___05Fh105664 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105531)));
    vlSelf->mkMac__DOT__y___05Fh58629 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58496)));
    vlSelf->mkMac__DOT__y___05Fh197209 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197102));
    vlSelf->mkMac__DOT__y___05Fh192144 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh192168));
    vlSelf->mkMac__DOT__y___05Fh205737 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205630));
    vlSelf->mkMac__DOT__y___05Fh105640 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105664));
    vlSelf->mkMac__DOT__y___05Fh58605 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58629));
    vlSelf->mkMac__DOT__y___05Fh197316 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197209));
    vlSelf->mkMac__DOT__y___05Fh192277 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192144)));
    vlSelf->mkMac__DOT__y___05Fh205844 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205737));
    vlSelf->mkMac__DOT__y___05Fh105773 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105640)));
    vlSelf->mkMac__DOT__y___05Fh58738 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58605)));
    vlSelf->mkMac__DOT__y___05Fh197423 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197316));
    vlSelf->mkMac__DOT__y___05Fh192253 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh192277));
    vlSelf->mkMac__DOT__y___05Fh205951 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205844));
    vlSelf->mkMac__DOT__y___05Fh105749 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105773));
    vlSelf->mkMac__DOT__y___05Fh58714 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58738));
    vlSelf->mkMac__DOT__y___05Fh197530 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197423));
    vlSelf->mkMac__DOT__y___05Fh192386 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192253)));
    vlSelf->mkMac__DOT__y___05Fh206058 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205951));
    vlSelf->mkMac__DOT__y___05Fh105882 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105749)));
    vlSelf->mkMac__DOT__y___05Fh58847 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58714)));
    vlSelf->mkMac__DOT__y___05Fh197637 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197530));
    vlSelf->mkMac__DOT__y___05Fh192362 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh192386));
    vlSelf->mkMac__DOT__y___05Fh206165 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206058));
    vlSelf->mkMac__DOT__y___05Fh105858 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105882));
    vlSelf->mkMac__DOT__y___05Fh58823 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58847));
    vlSelf->mkMac__DOT__y___05Fh197744 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197637));
    vlSelf->mkMac__DOT__y___05Fh192495 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192362)));
    vlSelf->mkMac__DOT__y___05Fh206272 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206165));
    vlSelf->mkMac__DOT__y___05Fh105991 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105858)));
    vlSelf->mkMac__DOT__y___05Fh58956 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58823)));
    vlSelf->mkMac__DOT__y___05Fh197851 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197744));
    vlSelf->mkMac__DOT__y___05Fh192471 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192495));
    vlSelf->mkMac__DOT__y___05Fh206379 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206272));
    vlSelf->mkMac__DOT__y___05Fh105967 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105991));
    vlSelf->mkMac__DOT__y___05Fh58932 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh58956));
    vlSelf->mkMac__DOT__y___05Fh197958 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197851));
    vlSelf->mkMac__DOT__y___05Fh192604 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192471)));
    vlSelf->mkMac__DOT__y___05Fh206486 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206379));
    vlSelf->mkMac__DOT__y___05Fh106100 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105967)));
    vlSelf->mkMac__DOT__y___05Fh59065 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh58932)));
    vlSelf->mkMac__DOT__y___05Fh198065 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197958));
    vlSelf->mkMac__DOT__y___05Fh192580 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192604));
    vlSelf->mkMac__DOT__y___05Fh206593 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206486));
    vlSelf->mkMac__DOT__y___05Fh106076 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106100));
    vlSelf->mkMac__DOT__y___05Fh59041 = ((vlSelf->mkMac__DOT__propagate___05Fh25083 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh59065));
    vlSelf->mkMac__DOT__y___05Fh198172 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198065));
    vlSelf->mkMac__DOT__y___05Fh192713 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192580)));
    vlSelf->mkMac__DOT__y___05Fh206700 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206593));
    vlSelf->mkMac__DOT__y___05Fh106209 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106076)));
    vlSelf->mkMac__DOT__y___05Fh25086 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh59041) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh59065) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh58956) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh58847) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh58738) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh58629) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh58520) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh58411) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh58302) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh58193) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh58084) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh57975) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh57866) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh57757) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57648) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57539) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57430) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57321) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57212) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh57103) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56994) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56885) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56776) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56667) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56558) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56449) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56340) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56231) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56122) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh56013) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d527)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh198279 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198172));
    vlSelf->mkMac__DOT__y___05Fh192689 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192713));
    vlSelf->mkMac__DOT__y___05Fh206807 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206700));
    vlSelf->mkMac__DOT__y___05Fh106185 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106209));
    vlSelf->mkMac__DOT__product___05Fh25077 = (vlSelf->mkMac__DOT__propagate___05Fh25083 
                                               ^ vlSelf->mkMac__DOT__y___05Fh25086);
    vlSelf->mkMac__DOT__y___05Fh198386 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198279));
    vlSelf->mkMac__DOT__y___05Fh192822 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192689)));
    vlSelf->mkMac__DOT__y___05Fh206914 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206807));
    vlSelf->mkMac__DOT__y___05Fh106318 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106185)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d668 
        = ((8U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh25077
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d524);
    vlSelf->mkMac__DOT__y___05Fh198493 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198386));
    vlSelf->mkMac__DOT__y___05Fh192798 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192822));
    vlSelf->mkMac__DOT__y___05Fh207021 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh206914));
    vlSelf->mkMac__DOT__y___05Fh106294 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106318));
    vlSelf->mkMac__DOT__propagate___05Fh20769 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d668 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh20765);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d668 
           & vlSelf->mkMac__DOT__y___05Fh20765);
    vlSelf->mkMac__DOT__y___05Fh198600 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198493));
    vlSelf->mkMac__DOT__y___05Fh192931 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192798)));
    vlSelf->mkMac__DOT__y___05Fh207128 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh207021));
    vlSelf->mkMac__DOT__y___05Fh106427 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106294)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d733 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh60168 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671));
    vlSelf->mkMac__DOT__y___05Fh198707 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198600));
    vlSelf->mkMac__DOT__y___05Fh192907 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192931));
    vlSelf->mkMac__DOT__y___05Fh207235 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh207128));
    vlSelf->mkMac__DOT__y___05Fh106403 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106427));
    vlSelf->mkMac__DOT__y___05Fh60302 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60168)));
    vlSelf->mkMac__DOT__y___05Fh198814 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198707));
    vlSelf->mkMac__DOT__y___05Fh193040 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh192907)));
    vlSelf->mkMac__DOT__y___05Fh207342 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh207235));
    vlSelf->mkMac__DOT__y___05Fh106536 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106403)));
    vlSelf->mkMac__DOT__y___05Fh60278 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60302));
    vlSelf->mkMac__DOT__y___05Fh198921 = ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh198814));
    vlSelf->mkMac__DOT__y___05Fh193016 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193040));
    vlSelf->mkMac__DOT__y___05Fh207449 = ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh207342));
    vlSelf->mkMac__DOT__y___05Fh106512 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106536));
    vlSelf->mkMac__DOT__y___05Fh60411 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60278)));
    vlSelf->mkMac__DOT__y___05Fh194871 = ((0x80000000U 
                                           & ((vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10 
                                               << 1U) 
                                              & ((IData)(vlSelf->mkMac__DOT__y___05Fh198921) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh198921) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh198814) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh198707) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh198600) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh198493) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh198386) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh198279) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh198172) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh198065) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh197958) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh197851) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh197744) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh197637) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh197530) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh197423) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh197316) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh197209) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh197102) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196995) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196888) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196781) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196674) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196567) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196460) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196353) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196246) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196139) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh196032) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh195925) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__INV_mant_shifted_b43156___05Fq10)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh193149 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193016)));
    vlSelf->mkMac__DOT__y___05Fh203399 = ((0x80000000U 
                                           & ((vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9 
                                               << 1U) 
                                              & ((IData)(vlSelf->mkMac__DOT__y___05Fh207449) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh207449) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh207342) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh207235) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh207128) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh207021) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh206914) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh206807) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh206700) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh206593) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh206486) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh206379) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh206272) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh206165) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh206058) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205951) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205844) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205737) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205630) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205523) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205416) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205309) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205202) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh205095) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204988) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204881) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204774) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204667) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204560) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh204453) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__INV_mant_shifted_a43154___05Fq9)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh106645 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106512)));
    vlSelf->mkMac__DOT__y___05Fh60387 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60411));
    vlSelf->mkMac__DOT__mant_shifted_b___05F_h143159 
        = (vlSelf->mkMac__DOT__propagate___05Fh194868 
           ^ vlSelf->mkMac__DOT__y___05Fh194871);
    vlSelf->mkMac__DOT__y___05Fh193125 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193149));
    vlSelf->mkMac__DOT__mant_shifted_a___05F_h143158 
        = (vlSelf->mkMac__DOT__propagate___05Fh203396 
           ^ vlSelf->mkMac__DOT__y___05Fh203399);
    vlSelf->mkMac__DOT__y___05Fh106621 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106645));
    vlSelf->mkMac__DOT__y___05Fh60520 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60387)));
    vlSelf->mkMac__DOT__propagate___05Fh194859 = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
                                                  ^ vlSelf->mkMac__DOT__mant_shifted_b___05F_h143159);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
        = (vlSelf->mkMac__DOT__mant_shifted_a___05Fh143154 
           & vlSelf->mkMac__DOT__mant_shifted_b___05F_h143159);
    vlSelf->mkMac__DOT__y___05Fh193258 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193125)));
    vlSelf->mkMac__DOT__propagate___05Fh203387 = (vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156 
                                                  ^ vlSelf->mkMac__DOT__mant_shifted_a___05F_h143158);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
        = (vlSelf->mkMac__DOT__mant_shifted_b___05Fh143156 
           & vlSelf->mkMac__DOT__mant_shifted_a___05F_h143158);
    vlSelf->mkMac__DOT__y___05Fh106754 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106621)));
    vlSelf->mkMac__DOT__y___05Fh60496 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60520));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BI_ETC___05F_d4682 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh200017 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620));
    vlSelf->mkMac__DOT__y___05Fh193234 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193258));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BI_ETC___05F_d4456 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh208545 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394));
    vlSelf->mkMac__DOT__y___05Fh106730 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106754));
    vlSelf->mkMac__DOT__y___05Fh60629 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60496)));
    vlSelf->mkMac__DOT__y___05Fh200151 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200017)));
    vlSelf->mkMac__DOT__y___05Fh193367 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193234)));
    vlSelf->mkMac__DOT__y___05Fh208679 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh208545)));
    vlSelf->mkMac__DOT__y___05Fh106863 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106730)));
    vlSelf->mkMac__DOT__y___05Fh60605 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60629));
    vlSelf->mkMac__DOT__y___05Fh200127 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200151));
    vlSelf->mkMac__DOT__y___05Fh193343 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193367));
    vlSelf->mkMac__DOT__y___05Fh208655 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh208679));
    vlSelf->mkMac__DOT__y___05Fh106839 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106863));
    vlSelf->mkMac__DOT__y___05Fh60738 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60605)));
    vlSelf->mkMac__DOT__y___05Fh200260 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200127)));
    vlSelf->mkMac__DOT__y___05Fh193476 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193343)));
    vlSelf->mkMac__DOT__y___05Fh208788 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh208655)));
    vlSelf->mkMac__DOT__y___05Fh106972 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106839)));
    vlSelf->mkMac__DOT__y___05Fh60714 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60738));
    vlSelf->mkMac__DOT__y___05Fh200236 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200260));
    vlSelf->mkMac__DOT__y___05Fh193452 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193476));
    vlSelf->mkMac__DOT__y___05Fh208764 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh208788));
    vlSelf->mkMac__DOT__y___05Fh106948 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106972));
    vlSelf->mkMac__DOT__y___05Fh60847 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60714)));
    vlSelf->mkMac__DOT__y___05Fh200369 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200236)));
    vlSelf->mkMac__DOT__y___05Fh193585 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193452)));
    vlSelf->mkMac__DOT__y___05Fh208897 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh208764)));
    vlSelf->mkMac__DOT__y___05Fh107081 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106948)));
    vlSelf->mkMac__DOT__y___05Fh60823 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60847));
    vlSelf->mkMac__DOT__y___05Fh200345 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200369));
    vlSelf->mkMac__DOT__y___05Fh193561 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193585));
    vlSelf->mkMac__DOT__y___05Fh208873 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh208897));
    vlSelf->mkMac__DOT__y___05Fh107057 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107081));
    vlSelf->mkMac__DOT__y___05Fh60956 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60823)));
    vlSelf->mkMac__DOT__y___05Fh200478 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200345)));
    vlSelf->mkMac__DOT__y___05Fh193694 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193561)));
    vlSelf->mkMac__DOT__y___05Fh209006 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh208873)));
    vlSelf->mkMac__DOT__y___05Fh107190 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107057)));
    vlSelf->mkMac__DOT__y___05Fh60932 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh60956));
    vlSelf->mkMac__DOT__y___05Fh200454 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200478));
    vlSelf->mkMac__DOT__y___05Fh193670 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193694));
    vlSelf->mkMac__DOT__y___05Fh208982 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh209006));
    vlSelf->mkMac__DOT__y___05Fh107166 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107190));
    vlSelf->mkMac__DOT__y___05Fh61065 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh60932)));
    vlSelf->mkMac__DOT__y___05Fh200587 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200454)));
    vlSelf->mkMac__DOT__y___05Fh193803 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193670)));
    vlSelf->mkMac__DOT__y___05Fh209115 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh208982)));
    vlSelf->mkMac__DOT__y___05Fh107299 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107166)));
    vlSelf->mkMac__DOT__y___05Fh61041 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh61065));
    vlSelf->mkMac__DOT__y___05Fh200563 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200587));
    vlSelf->mkMac__DOT__y___05Fh193779 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193803));
    vlSelf->mkMac__DOT__y___05Fh209091 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh209115));
    vlSelf->mkMac__DOT__y___05Fh107275 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107299));
    vlSelf->mkMac__DOT__y___05Fh61174 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61041)));
    vlSelf->mkMac__DOT__y___05Fh200696 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200563)));
    vlSelf->mkMac__DOT__y___05Fh193912 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193779)));
    vlSelf->mkMac__DOT__y___05Fh209224 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209091)));
    vlSelf->mkMac__DOT__y___05Fh107408 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107275)));
    vlSelf->mkMac__DOT__y___05Fh61150 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61174));
    vlSelf->mkMac__DOT__y___05Fh200672 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200696));
    vlSelf->mkMac__DOT__y___05Fh193888 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193912));
    vlSelf->mkMac__DOT__y___05Fh209200 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh209224));
    vlSelf->mkMac__DOT__y___05Fh107384 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107408));
    vlSelf->mkMac__DOT__y___05Fh61283 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61150)));
    vlSelf->mkMac__DOT__y___05Fh200805 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200672)));
    vlSelf->mkMac__DOT__y___05Fh194021 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193888)));
    vlSelf->mkMac__DOT__y___05Fh209333 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209200)));
    vlSelf->mkMac__DOT__y___05Fh107517 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107384)));
    vlSelf->mkMac__DOT__y___05Fh61259 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61283));
    vlSelf->mkMac__DOT__y___05Fh200781 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200805));
    vlSelf->mkMac__DOT__y___05Fh193997 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194021));
    vlSelf->mkMac__DOT__y___05Fh209309 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh209333));
    vlSelf->mkMac__DOT__y___05Fh107493 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107517));
    vlSelf->mkMac__DOT__y___05Fh61392 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61259)));
    vlSelf->mkMac__DOT__y___05Fh200914 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200781)));
    vlSelf->mkMac__DOT__y___05Fh194130 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh193997)));
    vlSelf->mkMac__DOT__y___05Fh209442 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209309)));
    vlSelf->mkMac__DOT__y___05Fh107626 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107493)));
    vlSelf->mkMac__DOT__y___05Fh61368 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61392));
    vlSelf->mkMac__DOT__y___05Fh200890 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh200914));
    vlSelf->mkMac__DOT__y___05Fh194106 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194130));
    vlSelf->mkMac__DOT__y___05Fh209418 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh209442));
    vlSelf->mkMac__DOT__y___05Fh107602 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107626));
    vlSelf->mkMac__DOT__y___05Fh61501 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61368)));
    vlSelf->mkMac__DOT__y___05Fh201023 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200890)));
    vlSelf->mkMac__DOT__y___05Fh194239 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh194106)));
    vlSelf->mkMac__DOT__y___05Fh209551 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209418)));
    vlSelf->mkMac__DOT__y___05Fh107735 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107602)));
    vlSelf->mkMac__DOT__y___05Fh61477 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61501));
    vlSelf->mkMac__DOT__y___05Fh200999 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201023));
    vlSelf->mkMac__DOT__y___05Fh194215 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194239));
    vlSelf->mkMac__DOT__y___05Fh209527 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209551));
    vlSelf->mkMac__DOT__y___05Fh107711 = ((vlSelf->mkMac__DOT__propagate___05Fh85510 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107735));
    vlSelf->mkMac__DOT__y___05Fh61610 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61477)));
    vlSelf->mkMac__DOT__y___05Fh201132 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh200999)));
    vlSelf->mkMac__DOT__y___05Fh194348 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh194215)));
    vlSelf->mkMac__DOT__y___05Fh209660 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209527)));
    vlSelf->mkMac__DOT__y___05Fh85524 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh107711) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh107735) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh107626) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh107517) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh107408) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh107299) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh107190) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh107081) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh106972) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh106863) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh106754) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh106645) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh106536) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh106427) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh106318) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh106209) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh106100) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105991) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105882) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105773) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105664) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105555) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105446) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105337) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105228) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105119) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh105010) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh104901) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh104792) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh104683) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1827)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh61586 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61610));
    vlSelf->mkMac__DOT__y___05Fh201108 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201132));
    vlSelf->mkMac__DOT__y___05Fh194324 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194348));
    vlSelf->mkMac__DOT__y___05Fh209636 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209660));
    vlSelf->mkMac__DOT__product___05Fh85504 = (vlSelf->mkMac__DOT__propagate___05Fh85510 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85524);
    vlSelf->mkMac__DOT__y___05Fh61719 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61586)));
    vlSelf->mkMac__DOT__y___05Fh201241 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201108)));
    vlSelf->mkMac__DOT__y___05Fh194457 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh194324)));
    vlSelf->mkMac__DOT__y___05Fh209769 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209636)));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1968 
        = ((0x10U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85504
            : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_35_386_THE_ETC___05F_d1824);
    vlSelf->mkMac__DOT__y___05Fh61695 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61719));
    vlSelf->mkMac__DOT__y___05Fh201217 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201241));
    vlSelf->mkMac__DOT__y___05Fh194433 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194457));
    vlSelf->mkMac__DOT__y___05Fh209745 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209769));
    vlSelf->mkMac__DOT__propagate___05Fh85450 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1968 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85446);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1968 
           & vlSelf->mkMac__DOT__y___05Fh85446);
    vlSelf->mkMac__DOT__y___05Fh61828 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61695)));
    vlSelf->mkMac__DOT__y___05Fh201350 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201217)));
    vlSelf->mkMac__DOT__y___05Fh194566 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh194433)));
    vlSelf->mkMac__DOT__y___05Fh209878 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209745)));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385___05FETC___05F_d2033 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh109017 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971));
    vlSelf->mkMac__DOT__y___05Fh61804 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61828));
    vlSelf->mkMac__DOT__y___05Fh201326 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201350));
    vlSelf->mkMac__DOT__y___05Fh194542 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194566));
    vlSelf->mkMac__DOT__y___05Fh209854 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209878));
    vlSelf->mkMac__DOT__y___05Fh109151 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109017)));
    vlSelf->mkMac__DOT__y___05Fh61937 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61804)));
    vlSelf->mkMac__DOT__y___05Fh201459 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201326)));
    vlSelf->mkMac__DOT__y___05Fh194675 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh194542)));
    vlSelf->mkMac__DOT__y___05Fh209987 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209854)));
    vlSelf->mkMac__DOT__y___05Fh109127 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109151));
    vlSelf->mkMac__DOT__y___05Fh61913 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh61937));
    vlSelf->mkMac__DOT__y___05Fh201435 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201459));
    vlSelf->mkMac__DOT__y___05Fh194651 = ((vlSelf->mkMac__DOT__propagate___05Fh190566 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh194675));
    vlSelf->mkMac__DOT__y___05Fh209963 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209987));
    vlSelf->mkMac__DOT__y___05Fh109260 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109127)));
    vlSelf->mkMac__DOT__y___05Fh62046 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh61913)));
    vlSelf->mkMac__DOT__y___05Fh201568 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201435)));
    vlSelf->mkMac__DOT__y___05Fh190569 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh194651) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh194675) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh194566) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh194457) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh194348) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh194239) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh194130) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh194021) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh193912) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh193803) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh193694) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh193585) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh193476) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh193367) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh193258) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh193149) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh193040) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192931) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192822) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192713) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192604) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192495) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192386) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192277) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192168) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh192059) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh191950) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh191841) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh191732) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh191623) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4168)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh210096 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh209963)));
    vlSelf->mkMac__DOT__y___05Fh109236 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109260));
    vlSelf->mkMac__DOT__y___05Fh62022 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62046));
    vlSelf->mkMac__DOT__y___05Fh201544 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201568));
    vlSelf->mkMac__DOT__mant_sum___05Fh143229 = (vlSelf->mkMac__DOT__propagate___05Fh190566 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh190569);
    vlSelf->mkMac__DOT__y___05Fh210072 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210096));
    vlSelf->mkMac__DOT__y___05Fh109369 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109236)));
    vlSelf->mkMac__DOT__y___05Fh62155 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62022)));
    vlSelf->mkMac__DOT__y___05Fh201677 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201544)));
    vlSelf->mkMac__DOT__y___05Fh210205 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210072)));
    vlSelf->mkMac__DOT__y___05Fh109345 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109369));
    vlSelf->mkMac__DOT__y___05Fh62131 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62155));
    vlSelf->mkMac__DOT__y___05Fh201653 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201677));
    vlSelf->mkMac__DOT__y___05Fh210181 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210205));
    vlSelf->mkMac__DOT__y___05Fh109478 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109345)));
    vlSelf->mkMac__DOT__y___05Fh62264 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62131)));
    vlSelf->mkMac__DOT__y___05Fh201786 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201653)));
    vlSelf->mkMac__DOT__y___05Fh210314 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210181)));
    vlSelf->mkMac__DOT__y___05Fh109454 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109478));
    vlSelf->mkMac__DOT__y___05Fh62240 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62264));
    vlSelf->mkMac__DOT__y___05Fh201762 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201786));
    vlSelf->mkMac__DOT__y___05Fh210290 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210314));
    vlSelf->mkMac__DOT__y___05Fh109587 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109454)));
    vlSelf->mkMac__DOT__y___05Fh62373 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62240)));
    vlSelf->mkMac__DOT__y___05Fh201895 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201762)));
    vlSelf->mkMac__DOT__y___05Fh210423 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210290)));
    vlSelf->mkMac__DOT__y___05Fh109563 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109587));
    vlSelf->mkMac__DOT__y___05Fh62349 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62373));
    vlSelf->mkMac__DOT__y___05Fh201871 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh201895));
    vlSelf->mkMac__DOT__y___05Fh210399 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210423));
    vlSelf->mkMac__DOT__y___05Fh109696 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109563)));
    vlSelf->mkMac__DOT__y___05Fh62482 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62349)));
    vlSelf->mkMac__DOT__y___05Fh202004 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201871)));
    vlSelf->mkMac__DOT__y___05Fh210532 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210399)));
    vlSelf->mkMac__DOT__y___05Fh109672 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109696));
    vlSelf->mkMac__DOT__y___05Fh62458 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62482));
    vlSelf->mkMac__DOT__y___05Fh201980 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202004));
    vlSelf->mkMac__DOT__y___05Fh210508 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210532));
    vlSelf->mkMac__DOT__y___05Fh109805 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109672)));
    vlSelf->mkMac__DOT__y___05Fh62591 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62458)));
    vlSelf->mkMac__DOT__y___05Fh202113 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201980)));
    vlSelf->mkMac__DOT__y___05Fh210641 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210508)));
    vlSelf->mkMac__DOT__y___05Fh109781 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109805));
    vlSelf->mkMac__DOT__y___05Fh62567 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62591));
    vlSelf->mkMac__DOT__y___05Fh202089 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202113));
    vlSelf->mkMac__DOT__y___05Fh210617 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210641));
    vlSelf->mkMac__DOT__y___05Fh109914 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109781)));
    vlSelf->mkMac__DOT__y___05Fh62700 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62567)));
    vlSelf->mkMac__DOT__y___05Fh202222 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202089)));
    vlSelf->mkMac__DOT__y___05Fh210750 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210617)));
    vlSelf->mkMac__DOT__y___05Fh109890 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109914));
    vlSelf->mkMac__DOT__y___05Fh62676 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62700));
    vlSelf->mkMac__DOT__y___05Fh202198 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202222));
    vlSelf->mkMac__DOT__y___05Fh210726 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210750));
    vlSelf->mkMac__DOT__y___05Fh110023 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109890)));
    vlSelf->mkMac__DOT__y___05Fh62809 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62676)));
    vlSelf->mkMac__DOT__y___05Fh202331 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202198)));
    vlSelf->mkMac__DOT__y___05Fh210859 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210726)));
    vlSelf->mkMac__DOT__y___05Fh109999 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110023));
    vlSelf->mkMac__DOT__y___05Fh62785 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62809));
    vlSelf->mkMac__DOT__y___05Fh202307 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202331));
    vlSelf->mkMac__DOT__y___05Fh210835 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210859));
    vlSelf->mkMac__DOT__y___05Fh110132 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109999)));
    vlSelf->mkMac__DOT__y___05Fh62918 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62785)));
    vlSelf->mkMac__DOT__y___05Fh202440 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202307)));
    vlSelf->mkMac__DOT__y___05Fh210968 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210835)));
    vlSelf->mkMac__DOT__y___05Fh110108 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110132));
    vlSelf->mkMac__DOT__y___05Fh62894 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh62918));
    vlSelf->mkMac__DOT__y___05Fh202416 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202440));
    vlSelf->mkMac__DOT__y___05Fh210944 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh210968));
    vlSelf->mkMac__DOT__y___05Fh110241 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110108)));
    vlSelf->mkMac__DOT__y___05Fh63027 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh62894)));
    vlSelf->mkMac__DOT__y___05Fh202549 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202416)));
    vlSelf->mkMac__DOT__y___05Fh211077 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh210944)));
    vlSelf->mkMac__DOT__y___05Fh110217 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110241));
    vlSelf->mkMac__DOT__y___05Fh63003 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh63027));
    vlSelf->mkMac__DOT__y___05Fh202525 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202549));
    vlSelf->mkMac__DOT__y___05Fh211053 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211077));
    vlSelf->mkMac__DOT__y___05Fh110350 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110217)));
    vlSelf->mkMac__DOT__y___05Fh63136 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh63003)));
    vlSelf->mkMac__DOT__y___05Fh202658 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202525)));
    vlSelf->mkMac__DOT__y___05Fh211186 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211053)));
    vlSelf->mkMac__DOT__y___05Fh110326 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110350));
    vlSelf->mkMac__DOT__y___05Fh63112 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh63136));
    vlSelf->mkMac__DOT__y___05Fh202634 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202658));
    vlSelf->mkMac__DOT__y___05Fh211162 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211186));
    vlSelf->mkMac__DOT__y___05Fh110459 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110326)));
    vlSelf->mkMac__DOT__y___05Fh63245 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh63112)));
    vlSelf->mkMac__DOT__y___05Fh202767 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202634)));
    vlSelf->mkMac__DOT__y___05Fh211295 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211162)));
    vlSelf->mkMac__DOT__y___05Fh110435 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110459));
    vlSelf->mkMac__DOT__y___05Fh63221 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh63245));
    vlSelf->mkMac__DOT__y___05Fh202743 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202767));
    vlSelf->mkMac__DOT__y___05Fh211271 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211295));
    vlSelf->mkMac__DOT__y___05Fh110568 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110435)));
    vlSelf->mkMac__DOT__y___05Fh63354 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh63221)));
    vlSelf->mkMac__DOT__y___05Fh202876 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202743)));
    vlSelf->mkMac__DOT__y___05Fh211404 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211271)));
    vlSelf->mkMac__DOT__y___05Fh110544 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110568));
    vlSelf->mkMac__DOT__y___05Fh63330 = ((vlSelf->mkMac__DOT__propagate___05Fh20769 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh63354));
    vlSelf->mkMac__DOT__y___05Fh202852 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202876));
    vlSelf->mkMac__DOT__y___05Fh211380 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211404));
    vlSelf->mkMac__DOT__y___05Fh110677 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110544)));
    vlSelf->mkMac__DOT__y___05Fh20772 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh63330) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh63354) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh63245) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh63136) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh63027) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh62918) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh62809) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh62700) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh62591) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh62482) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh62373) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh62264) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh62155) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh62046) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61937) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61828) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61719) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61610) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61501) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61392) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61283) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61174) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh61065) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60956) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60847) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60738) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60629) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60520) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60411) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh60302) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d671)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh202985 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202852)));
    vlSelf->mkMac__DOT__y___05Fh211513 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211380)));
    vlSelf->mkMac__DOT__y___05Fh110653 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110677));
    vlSelf->mkMac__DOT__product___05Fh20763 = (vlSelf->mkMac__DOT__propagate___05Fh20769 
                                               ^ vlSelf->mkMac__DOT__y___05Fh20772);
    vlSelf->mkMac__DOT__y___05Fh202961 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh202985));
    vlSelf->mkMac__DOT__y___05Fh211489 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211513));
    vlSelf->mkMac__DOT__y___05Fh110786 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110653)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d812 
        = ((0x10U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh20763
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d668);
    vlSelf->mkMac__DOT__y___05Fh203094 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202961)));
    vlSelf->mkMac__DOT__y___05Fh211622 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211489)));
    vlSelf->mkMac__DOT__y___05Fh110762 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110786));
    vlSelf->mkMac__DOT__propagate___05Fh16455 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d812 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh16451);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d812 
           & vlSelf->mkMac__DOT__y___05Fh16451);
    vlSelf->mkMac__DOT__y___05Fh203070 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh203094));
    vlSelf->mkMac__DOT__y___05Fh211598 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211622));
    vlSelf->mkMac__DOT__y___05Fh110895 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110762)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d877 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh64457 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815));
    vlSelf->mkMac__DOT__y___05Fh203203 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh203070)));
    vlSelf->mkMac__DOT__y___05Fh211731 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh211598)));
    vlSelf->mkMac__DOT__y___05Fh110871 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110895));
    vlSelf->mkMac__DOT__y___05Fh64591 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh64457)));
    vlSelf->mkMac__DOT__y___05Fh203179 = ((vlSelf->mkMac__DOT__propagate___05Fh194859 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh203203));
    vlSelf->mkMac__DOT__y___05Fh211707 = ((vlSelf->mkMac__DOT__propagate___05Fh203387 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211731));
    vlSelf->mkMac__DOT__y___05Fh111004 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110871)));
    vlSelf->mkMac__DOT__y___05Fh64567 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64591));
    vlSelf->mkMac__DOT__y___05Fh194862 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh203179) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh203203) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh203094) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh202985) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh202876) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh202767) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh202658) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh202549) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh202440) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh202331) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh202222) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh202113) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh202004) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh201895) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201786) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201677) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201568) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201459) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201350) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201241) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201132) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh201023) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200914) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200805) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200696) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200587) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200478) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200369) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200260) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh200151) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4620)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh203390 = ((0x80000000U 
                                           & ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh211707) 
                                                 << 0x1fU))) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh211731) 
                                              << 0x1eU) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh211622) 
                                                 << 0x1dU) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh211513) 
                                                    << 0x1cU) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh211404) 
                                                       << 0x1bU) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh211295) 
                                                          << 0x1aU) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh211186) 
                                                             << 0x19U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh211077) 
                                                                << 0x18U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh210968) 
                                                                   << 0x17U) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh210859) 
                                                                      << 0x16U) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh210750) 
                                                                         << 0x15U) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh210641) 
                                                                            << 0x14U) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh210532) 
                                                                               << 0x13U) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh210423) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh210314) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh210205) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh210096) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209987) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209878) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209769) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209660) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209551) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209442) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209333) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209224) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209115) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh209006) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh208897) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh208788) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh208679) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4394)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh110980 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111004));
    vlSelf->mkMac__DOT__y___05Fh64700 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh64567)));
    vlSelf->mkMac__DOT__mant_sum___05Fh190522 = (vlSelf->mkMac__DOT__propagate___05Fh194859 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh194862);
    vlSelf->mkMac__DOT__mant_sum___05Fh190523 = (vlSelf->mkMac__DOT__propagate___05Fh203387 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh203390);
    vlSelf->mkMac__DOT___theResult___05F___05F_3_fst___05Fh143231 
        = ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_pfifo_rv_port0___05Fread___05F913_BITS___05FETC___05F_d4164)
            ? vlSelf->mkMac__DOT__mant_sum___05Fh190523
            : vlSelf->mkMac__DOT__mant_sum___05Fh190522);
    if (vlSelf->mkMac__DOT__fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ_fp___05FETC___05F_d2921) {
        vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh143228 
            = (1U & (vlSelf->mkMac__DOT__fp_pfifo_rv[1U] 
                     >> 0x1fU));
        vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
            = vlSelf->mkMac__DOT__mant_sum___05Fh143229;
    } else {
        vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh143228 
            = (1U & (IData)(vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh143232));
        vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
            = vlSelf->mkMac__DOT___theResult___05F___05F_3_fst___05Fh143231;
    }
    vlSelf->mkMac__DOT__y___05Fh111113 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110980)));
    vlSelf->mkMac__DOT__y___05Fh64676 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64700));
    vlSelf->mkMac__DOT__y___05Fh111089 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111113));
    vlSelf->mkMac__DOT__y___05Fh64809 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh64676)));
    vlSelf->mkMac__DOT__y___05Fh111222 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111089)));
    vlSelf->mkMac__DOT__y___05Fh64785 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64809));
    vlSelf->mkMac__DOT__x___05Fh229004 = (0x7ffffeU 
                                          & (vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
                                             << 1U));
    if ((0x800000U & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762)) {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh224713 
            = vlSelf->mkMac__DOT__final_exp___05Fh143157;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh224714 
            = (0x7fffffU & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762);
    } else {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh224713 
            = vlSelf->mkMac__DOT__final_exp___05F_1___05Fh224715;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh224714 
            = (0x7fffffU & vlSelf->mkMac__DOT__x___05Fh229004);
    }
    vlSelf->mkMac__DOT__mant_interim___05F_1___05Fh211921 
        = (0x7fffffU & (vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
                        >> 1U));
    vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
        = (0x7fffffU & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
                         >> 1U) ^ (1U & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762)));
    vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
        = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762 
                  >> 1U) & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762));
    vlSelf->mkMac__DOT__y___05Fh111198 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111222));
    vlSelf->mkMac__DOT__y___05Fh64918 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh64785)));
    vlSelf->mkMac__DOT__propagate___05Fh211972 = vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768;
    vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05F_d4816 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh212938 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770));
    vlSelf->mkMac__DOT__y___05Fh111331 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111198)));
    vlSelf->mkMac__DOT__y___05Fh64894 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64918));
    vlSelf->mkMac__DOT__y___05Fh213069 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh212938)));
    vlSelf->mkMac__DOT__y___05Fh111307 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111331));
    vlSelf->mkMac__DOT__y___05Fh65027 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh64894)));
    vlSelf->mkMac__DOT__y___05Fh213046 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213069));
    vlSelf->mkMac__DOT__y___05Fh111440 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111307)));
    vlSelf->mkMac__DOT__y___05Fh65003 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh65027));
    vlSelf->mkMac__DOT__y___05Fh213176 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213046)));
    vlSelf->mkMac__DOT__y___05Fh111416 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111440));
    vlSelf->mkMac__DOT__y___05Fh65136 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65003)));
    vlSelf->mkMac__DOT__y___05Fh213153 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213176));
    vlSelf->mkMac__DOT__y___05Fh111549 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111416)));
    vlSelf->mkMac__DOT__y___05Fh65112 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh65136));
    vlSelf->mkMac__DOT__y___05Fh213283 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213153)));
    vlSelf->mkMac__DOT__y___05Fh111525 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111549));
    vlSelf->mkMac__DOT__y___05Fh65245 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65112)));
    vlSelf->mkMac__DOT__y___05Fh213260 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213283));
    vlSelf->mkMac__DOT__y___05Fh111658 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111525)));
    vlSelf->mkMac__DOT__y___05Fh65221 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh65245));
    vlSelf->mkMac__DOT__y___05Fh213390 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213260)));
    vlSelf->mkMac__DOT__y___05Fh111634 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111658));
    vlSelf->mkMac__DOT__y___05Fh65354 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65221)));
    vlSelf->mkMac__DOT__y___05Fh213367 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213390));
    vlSelf->mkMac__DOT__y___05Fh111767 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111634)));
    vlSelf->mkMac__DOT__y___05Fh65330 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh65354));
    vlSelf->mkMac__DOT__y___05Fh213497 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213367)));
    vlSelf->mkMac__DOT__y___05Fh111743 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111767));
    vlSelf->mkMac__DOT__y___05Fh65463 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65330)));
    vlSelf->mkMac__DOT__y___05Fh213474 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213497));
    vlSelf->mkMac__DOT__y___05Fh111876 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111743)));
    vlSelf->mkMac__DOT__y___05Fh65439 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh65463));
    vlSelf->mkMac__DOT__y___05Fh213604 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213474)));
    vlSelf->mkMac__DOT__y___05Fh111852 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111876));
    vlSelf->mkMac__DOT__y___05Fh65572 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65439)));
    vlSelf->mkMac__DOT__y___05Fh213581 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213604));
    vlSelf->mkMac__DOT__y___05Fh111985 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111852)));
    vlSelf->mkMac__DOT__y___05Fh65548 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh65572));
    vlSelf->mkMac__DOT__y___05Fh213711 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213581)));
    vlSelf->mkMac__DOT__y___05Fh111961 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111985));
    vlSelf->mkMac__DOT__y___05Fh65681 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65548)));
    vlSelf->mkMac__DOT__y___05Fh213688 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213711));
    vlSelf->mkMac__DOT__y___05Fh112094 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111961)));
    vlSelf->mkMac__DOT__y___05Fh65657 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh65681));
    vlSelf->mkMac__DOT__y___05Fh213818 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213688)));
    vlSelf->mkMac__DOT__y___05Fh112070 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112094));
    vlSelf->mkMac__DOT__y___05Fh65790 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65657)));
    vlSelf->mkMac__DOT__y___05Fh213795 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh213818));
    vlSelf->mkMac__DOT__y___05Fh112203 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112070)));
    vlSelf->mkMac__DOT__y___05Fh65766 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh65790));
    vlSelf->mkMac__DOT__y___05Fh213925 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213795)));
    vlSelf->mkMac__DOT__y___05Fh112179 = ((vlSelf->mkMac__DOT__propagate___05Fh85450 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112203));
    vlSelf->mkMac__DOT__y___05Fh65899 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65766)));
    vlSelf->mkMac__DOT__y___05Fh213902 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh213925));
    vlSelf->mkMac__DOT__y___05Fh85464 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh112179) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh112203) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh112094) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh111985) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh111876) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh111767) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh111658) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh111549) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh111440) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh111331) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh111222) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh111113) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh111004) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh110895) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110786) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110677) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110568) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110459) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110350) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110241) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110132) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh110023) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109914) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109805) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109696) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109587) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109478) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109369) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109260) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh109151) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1971)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh65875 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh65899));
    vlSelf->mkMac__DOT__y___05Fh214032 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh213902)));
    vlSelf->mkMac__DOT__product___05Fh85444 = (vlSelf->mkMac__DOT__propagate___05Fh85450 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85464);
    vlSelf->mkMac__DOT__y___05Fh66008 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65875)));
    vlSelf->mkMac__DOT__y___05Fh214009 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214032));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2112 
        = ((0x20U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
            ? vlSelf->mkMac__DOT__product___05Fh85444
            : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_36_385_THE_ETC___05F_d1968);
    vlSelf->mkMac__DOT__y___05Fh65984 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66008));
    vlSelf->mkMac__DOT__y___05Fh214139 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214009)));
    vlSelf->mkMac__DOT__propagate___05Fh85390 = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2112 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85386);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
        = (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2112 
           & vlSelf->mkMac__DOT__y___05Fh85386);
    vlSelf->mkMac__DOT__y___05Fh66117 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh65984)));
    vlSelf->mkMac__DOT__y___05Fh214116 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214139));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384___05FETC___05F_d2177 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh113485 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115));
    vlSelf->mkMac__DOT__y___05Fh66093 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66117));
    vlSelf->mkMac__DOT__y___05Fh214246 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214116)));
    vlSelf->mkMac__DOT__y___05Fh113619 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113485)));
    vlSelf->mkMac__DOT__y___05Fh66226 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66093)));
    vlSelf->mkMac__DOT__y___05Fh214223 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214246));
    vlSelf->mkMac__DOT__y___05Fh113595 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh113619));
    vlSelf->mkMac__DOT__y___05Fh66202 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66226));
    vlSelf->mkMac__DOT__y___05Fh214353 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214223)));
    vlSelf->mkMac__DOT__y___05Fh113728 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113595)));
    vlSelf->mkMac__DOT__y___05Fh66335 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66202)));
    vlSelf->mkMac__DOT__y___05Fh214330 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214353));
    vlSelf->mkMac__DOT__y___05Fh113704 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh113728));
    vlSelf->mkMac__DOT__y___05Fh66311 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66335));
    vlSelf->mkMac__DOT__y___05Fh214460 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214330)));
    vlSelf->mkMac__DOT__y___05Fh113837 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113704)));
    vlSelf->mkMac__DOT__y___05Fh66444 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66311)));
    vlSelf->mkMac__DOT__y___05Fh214437 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214460));
    vlSelf->mkMac__DOT__y___05Fh113813 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh113837));
    vlSelf->mkMac__DOT__y___05Fh66420 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66444));
    vlSelf->mkMac__DOT__y___05Fh214567 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214437)));
    vlSelf->mkMac__DOT__y___05Fh113946 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113813)));
    vlSelf->mkMac__DOT__y___05Fh66553 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66420)));
    vlSelf->mkMac__DOT__y___05Fh214544 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214567));
    vlSelf->mkMac__DOT__y___05Fh113922 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh113946));
    vlSelf->mkMac__DOT__y___05Fh66529 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66553));
    vlSelf->mkMac__DOT__y___05Fh214674 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214544)));
    vlSelf->mkMac__DOT__y___05Fh114055 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113922)));
    vlSelf->mkMac__DOT__y___05Fh66662 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66529)));
    vlSelf->mkMac__DOT__y___05Fh214651 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214674));
    vlSelf->mkMac__DOT__y___05Fh114031 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114055));
    vlSelf->mkMac__DOT__y___05Fh66638 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66662));
    vlSelf->mkMac__DOT__y___05Fh214781 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214651)));
    vlSelf->mkMac__DOT__y___05Fh114164 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114031)));
    vlSelf->mkMac__DOT__y___05Fh66771 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66638)));
    vlSelf->mkMac__DOT__y___05Fh214758 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214781));
    vlSelf->mkMac__DOT__y___05Fh114140 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114164));
    vlSelf->mkMac__DOT__y___05Fh66747 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66771));
    vlSelf->mkMac__DOT__y___05Fh214888 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214758)));
    vlSelf->mkMac__DOT__y___05Fh114273 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114140)));
    vlSelf->mkMac__DOT__y___05Fh66880 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66747)));
    vlSelf->mkMac__DOT__y___05Fh214865 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214888));
    vlSelf->mkMac__DOT__y___05Fh114249 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114273));
    vlSelf->mkMac__DOT__y___05Fh66856 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66880));
    vlSelf->mkMac__DOT__y___05Fh214995 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214865)));
    vlSelf->mkMac__DOT__y___05Fh114382 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114249)));
    vlSelf->mkMac__DOT__y___05Fh66989 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66856)));
    vlSelf->mkMac__DOT__y___05Fh214972 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214995));
    vlSelf->mkMac__DOT__y___05Fh114358 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114382));
    vlSelf->mkMac__DOT__y___05Fh66965 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh66989));
    vlSelf->mkMac__DOT__y___05Fh215102 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh214972)));
    vlSelf->mkMac__DOT__y___05Fh114491 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114358)));
    vlSelf->mkMac__DOT__y___05Fh67098 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh66965)));
    vlSelf->mkMac__DOT__y___05Fh215079 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh215102));
    vlSelf->mkMac__DOT__y___05Fh114467 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114491));
    vlSelf->mkMac__DOT__y___05Fh67074 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67098));
    vlSelf->mkMac__DOT__y___05Fh215209 = (1U & ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh215079)));
    vlSelf->mkMac__DOT__y___05Fh114600 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114467)));
    vlSelf->mkMac__DOT__y___05Fh67207 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh67074)));
    vlSelf->mkMac__DOT__y___05Fh215186 = ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4768 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh215209));
    vlSelf->mkMac__DOT__y___05Fh114576 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114600));
    vlSelf->mkMac__DOT__y___05Fh67183 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67207));
    vlSelf->mkMac__DOT__y___05Fh211975 = (((IData)(
                                                   ((vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770 
                                                     >> 0x16U) 
                                                    | (IData)(vlSelf->mkMac__DOT__y___05Fh215186))) 
                                           << 0x17U) 
                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh215209) 
                                              << 0x16U) 
                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh215102) 
                                                 << 0x15U) 
                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh214995) 
                                                    << 0x14U) 
                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh214888) 
                                                       << 0x13U) 
                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh214781) 
                                                          << 0x12U) 
                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh214674) 
                                                             << 0x11U) 
                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh214567) 
                                                                << 0x10U) 
                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh214460) 
                                                                   << 0xfU) 
                                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh214353) 
                                                                      << 0xeU) 
                                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh214246) 
                                                                         << 0xdU) 
                                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh214139) 
                                                                            << 0xcU) 
                                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh214032) 
                                                                               << 0xbU) 
                                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh213925) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213818) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213711) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213604) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213497) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213390) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213283) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213176) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh213069) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4770)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh114709 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114576)));
    vlSelf->mkMac__DOT__y___05Fh67316 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh67183)));
    vlSelf->mkMac__DOT__final_mant___05Fh211967 = (vlSelf->mkMac__DOT__propagate___05Fh211972 
                                                   ^ vlSelf->mkMac__DOT__y___05Fh211975);
    vlSelf->mkMac__DOT__y___05Fh114685 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114709));
    vlSelf->mkMac__DOT__y___05Fh67292 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67316));
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh211922 
        = ((2U & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762)
            ? vlSelf->mkMac__DOT__final_mant___05Fh211967
            : vlSelf->mkMac__DOT__mant_interim___05F_1___05Fh211921);
    vlSelf->mkMac__DOT__y___05Fh114818 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114685)));
    vlSelf->mkMac__DOT__y___05Fh67425 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh67292)));
    vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh211924 
        = ((0x800000U & vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh211922)
            ? vlSelf->mkMac__DOT__final_exp___05F_1___05Fh216218
            : vlSelf->mkMac__DOT__final_exp___05F_2___05Fh211923);
    if ((0x1000000U & vlSelf->mkMac__DOT__IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919_EQ___05FETC___05F_d4762)) {
        vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq13 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh211922;
        vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq12 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh211924;
    } else {
        vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq13 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh224714;
        vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq12 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh224713;
    }
    vlSelf->mkMac__DOT__y___05Fh114794 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114818));
    vlSelf->mkMac__DOT__y___05Fh67401 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67425));
    vlSelf->mkMac__DOT__y___05Fh114927 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114794)));
    vlSelf->mkMac__DOT__y___05Fh67534 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh67401)));
    vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05F_d5041 
        = ((0x7f800000U & (vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq12 
                           << 0x17U)) | (0x7fffffU 
                                         & vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05Fq13));
    vlSelf->mkMac__DOT__y___05Fh114903 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114927));
    vlSelf->mkMac__DOT__y___05Fh67510 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67534));
    vlSelf->mkMac__DOT__fp_ofifo_rv_port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)((((IData)(vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh143228) 
                                              << 0x1fU) 
                                             | vlSelf->mkMac__DOT__IF_IF_fp_pfifo_rv_port0___05Fread___05F913_BIT_63_919___05FETC___05F_d5041))));
    vlSelf->mkMac__DOT__fp_ofifo_rv_port2___05Fread 
        = ((IData)(vlSelf->mkMac__DOT__rg_out_bf_valid_D_IN)
            ? vlSelf->mkMac__DOT__fp_ofifo_rv_port1___05Fwrite_1
            : vlSelf->mkMac__DOT__fp_ofifo_rv_port1___05Fread);
    vlSelf->mkMac__DOT__y___05Fh115036 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114903)));
    vlSelf->mkMac__DOT__y___05Fh67643 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh67510)));
    vlSelf->mkMac__DOT__y___05Fh115012 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115036));
    vlSelf->mkMac__DOT__y___05Fh67619 = ((vlSelf->mkMac__DOT__propagate___05Fh16455 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh67643));
    vlSelf->mkMac__DOT__fp_ofifo_rv_D_IN = vlSelf->mkMac__DOT__fp_ofifo_rv_port2___05Fread;
    vlSelf->mkMac__DOT__y___05Fh115145 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115012)));
    vlSelf->mkMac__DOT__y___05Fh16458 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh67619) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh67643) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh67534) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh67425) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh67316) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh67207) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh67098) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh66989) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh66880) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh66771) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh66662) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh66553) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh66444) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh66335) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh66226) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh66117) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh66008) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65899) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65790) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65681) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65572) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65463) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65354) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65245) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65136) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh65027) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh64918) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh64809) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh64700) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh64591) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d815)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh115121 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115145));
    vlSelf->mkMac__DOT__product___05Fh16449 = (vlSelf->mkMac__DOT__propagate___05Fh16455 
                                               ^ vlSelf->mkMac__DOT__y___05Fh16458);
    vlSelf->mkMac__DOT__y___05Fh115254 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115121)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d956 
        = ((0x20U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh16449
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d812);
    vlSelf->mkMac__DOT__y___05Fh115230 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115254));
    vlSelf->mkMac__DOT__propagate___05Fh12141 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d956 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh12137);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d956 
           & vlSelf->mkMac__DOT__y___05Fh12137);
    vlSelf->mkMac__DOT__y___05Fh115363 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115230)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d1021 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh68746 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959));
    vlSelf->mkMac__DOT__y___05Fh115339 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115363));
    vlSelf->mkMac__DOT__y___05Fh68880 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh68746)));
    vlSelf->mkMac__DOT__y___05Fh115472 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115339)));
    vlSelf->mkMac__DOT__y___05Fh68856 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh68880));
    vlSelf->mkMac__DOT__y___05Fh115448 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115472));
    vlSelf->mkMac__DOT__y___05Fh68989 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh68856)));
    vlSelf->mkMac__DOT__y___05Fh115581 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115448)));
    vlSelf->mkMac__DOT__y___05Fh68965 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh68989));
    vlSelf->mkMac__DOT__y___05Fh115557 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115581));
    vlSelf->mkMac__DOT__y___05Fh69098 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh68965)));
    vlSelf->mkMac__DOT__y___05Fh115690 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115557)));
    vlSelf->mkMac__DOT__y___05Fh69074 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69098));
    vlSelf->mkMac__DOT__y___05Fh115666 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115690));
    vlSelf->mkMac__DOT__y___05Fh69207 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69074)));
    vlSelf->mkMac__DOT__y___05Fh115799 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115666)));
    vlSelf->mkMac__DOT__y___05Fh69183 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69207));
    vlSelf->mkMac__DOT__y___05Fh115775 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115799));
    vlSelf->mkMac__DOT__y___05Fh69316 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69183)));
    vlSelf->mkMac__DOT__y___05Fh115908 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115775)));
    vlSelf->mkMac__DOT__y___05Fh69292 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69316));
    vlSelf->mkMac__DOT__y___05Fh115884 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115908));
    vlSelf->mkMac__DOT__y___05Fh69425 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69292)));
    vlSelf->mkMac__DOT__y___05Fh116017 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115884)));
    vlSelf->mkMac__DOT__y___05Fh69401 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69425));
    vlSelf->mkMac__DOT__y___05Fh115993 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116017));
    vlSelf->mkMac__DOT__y___05Fh69534 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69401)));
    vlSelf->mkMac__DOT__y___05Fh116126 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115993)));
    vlSelf->mkMac__DOT__y___05Fh69510 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69534));
    vlSelf->mkMac__DOT__y___05Fh116102 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116126));
    vlSelf->mkMac__DOT__y___05Fh69643 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69510)));
    vlSelf->mkMac__DOT__y___05Fh116235 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh116102)));
    vlSelf->mkMac__DOT__y___05Fh69619 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh69643));
    vlSelf->mkMac__DOT__y___05Fh116211 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116235));
    vlSelf->mkMac__DOT__y___05Fh69752 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69619)));
    vlSelf->mkMac__DOT__y___05Fh116344 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh116211)));
    vlSelf->mkMac__DOT__y___05Fh69728 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh69752));
    vlSelf->mkMac__DOT__y___05Fh116320 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116344));
    vlSelf->mkMac__DOT__y___05Fh69861 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69728)));
    vlSelf->mkMac__DOT__y___05Fh116453 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh116320)));
    vlSelf->mkMac__DOT__y___05Fh69837 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh69861));
    vlSelf->mkMac__DOT__y___05Fh116429 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116453));
    vlSelf->mkMac__DOT__y___05Fh69970 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69837)));
    vlSelf->mkMac__DOT__y___05Fh116562 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh116429)));
    vlSelf->mkMac__DOT__y___05Fh69946 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh69970));
    vlSelf->mkMac__DOT__y___05Fh116538 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116562));
    vlSelf->mkMac__DOT__y___05Fh70079 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh69946)));
    vlSelf->mkMac__DOT__y___05Fh116671 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh116538)));
    vlSelf->mkMac__DOT__y___05Fh70055 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70079));
    vlSelf->mkMac__DOT__y___05Fh116647 = ((vlSelf->mkMac__DOT__propagate___05Fh85390 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116671));
    vlSelf->mkMac__DOT__y___05Fh70188 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70055)));
    vlSelf->mkMac__DOT__y___05Fh85404 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh116647) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh116671) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh116562) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh116453) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh116344) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh116235) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh116126) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh116017) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh115908) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh115799) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh115690) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh115581) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh115472) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh115363) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh115254) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh115145) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh115036) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114927) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114818) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114709) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114600) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114491) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114382) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114273) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114164) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh114055) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh113946) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh113837) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh113728) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh113619) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2115)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh70164 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70188));
    vlSelf->mkMac__DOT__product___05Fh85384 = (vlSelf->mkMac__DOT__propagate___05Fh85390 
                                               ^ vlSelf->mkMac__DOT__y___05Fh85404);
    vlSelf->mkMac__DOT__y___05Fh70297 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70164)));
    vlSelf->mkMac__DOT__x___05Fh85325 = ((0x40U & vlSelf->mkMac__DOT__fp_ififo_rv[1U])
                                          ? vlSelf->mkMac__DOT__product___05Fh85384
                                          : vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_37_384_THE_ETC___05F_d2112);
    vlSelf->mkMac__DOT__y___05Fh70273 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70297));
    vlSelf->mkMac__DOT__propagate___05Fh85330 = (vlSelf->mkMac__DOT__x___05Fh85325 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh85326);
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
        = (vlSelf->mkMac__DOT__x___05Fh85325 & vlSelf->mkMac__DOT__y___05Fh85326);
    vlSelf->mkMac__DOT__y___05Fh70406 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70273)));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05F_d2321 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh117953 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259));
    vlSelf->mkMac__DOT__y___05Fh70382 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70406));
    vlSelf->mkMac__DOT__y___05Fh118087 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh117953)));
    vlSelf->mkMac__DOT__y___05Fh70515 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70382)));
    vlSelf->mkMac__DOT__y___05Fh118063 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118087));
    vlSelf->mkMac__DOT__y___05Fh70491 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70515));
    vlSelf->mkMac__DOT__y___05Fh118196 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118063)));
    vlSelf->mkMac__DOT__y___05Fh70624 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70491)));
    vlSelf->mkMac__DOT__y___05Fh118172 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118196));
    vlSelf->mkMac__DOT__y___05Fh70600 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70624));
    vlSelf->mkMac__DOT__y___05Fh118305 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118172)));
    vlSelf->mkMac__DOT__y___05Fh70733 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70600)));
    vlSelf->mkMac__DOT__y___05Fh118281 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118305));
    vlSelf->mkMac__DOT__y___05Fh70709 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70733));
    vlSelf->mkMac__DOT__y___05Fh118414 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118281)));
    vlSelf->mkMac__DOT__y___05Fh70842 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70709)));
    vlSelf->mkMac__DOT__y___05Fh118390 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118414));
    vlSelf->mkMac__DOT__y___05Fh70818 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70842));
    vlSelf->mkMac__DOT__y___05Fh118523 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118390)));
    vlSelf->mkMac__DOT__y___05Fh70951 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70818)));
    vlSelf->mkMac__DOT__y___05Fh118499 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118523));
    vlSelf->mkMac__DOT__y___05Fh70927 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh70951));
    vlSelf->mkMac__DOT__y___05Fh118632 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118499)));
    vlSelf->mkMac__DOT__y___05Fh71060 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh70927)));
    vlSelf->mkMac__DOT__y___05Fh118608 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118632));
    vlSelf->mkMac__DOT__y___05Fh71036 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71060));
    vlSelf->mkMac__DOT__y___05Fh118741 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118608)));
    vlSelf->mkMac__DOT__y___05Fh71169 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71036)));
    vlSelf->mkMac__DOT__y___05Fh118717 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118741));
    vlSelf->mkMac__DOT__y___05Fh71145 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71169));
    vlSelf->mkMac__DOT__y___05Fh118850 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118717)));
    vlSelf->mkMac__DOT__y___05Fh71278 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71145)));
    vlSelf->mkMac__DOT__y___05Fh118826 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh118850));
    vlSelf->mkMac__DOT__y___05Fh71254 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71278));
    vlSelf->mkMac__DOT__y___05Fh118959 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118826)));
    vlSelf->mkMac__DOT__y___05Fh71387 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71254)));
    vlSelf->mkMac__DOT__y___05Fh118935 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118959));
    vlSelf->mkMac__DOT__y___05Fh71363 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71387));
    vlSelf->mkMac__DOT__y___05Fh119068 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh118935)));
    vlSelf->mkMac__DOT__y___05Fh71496 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71363)));
    vlSelf->mkMac__DOT__y___05Fh119044 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119068));
    vlSelf->mkMac__DOT__y___05Fh71472 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71496));
    vlSelf->mkMac__DOT__y___05Fh119177 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119044)));
    vlSelf->mkMac__DOT__y___05Fh71605 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71472)));
    vlSelf->mkMac__DOT__y___05Fh119153 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119177));
    vlSelf->mkMac__DOT__y___05Fh71581 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71605));
    vlSelf->mkMac__DOT__y___05Fh119286 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119153)));
    vlSelf->mkMac__DOT__y___05Fh71714 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71581)));
    vlSelf->mkMac__DOT__y___05Fh119262 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119286));
    vlSelf->mkMac__DOT__y___05Fh71690 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71714));
    vlSelf->mkMac__DOT__y___05Fh119395 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119262)));
    vlSelf->mkMac__DOT__y___05Fh71823 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71690)));
    vlSelf->mkMac__DOT__y___05Fh119371 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119395));
    vlSelf->mkMac__DOT__y___05Fh71799 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71823));
    vlSelf->mkMac__DOT__y___05Fh119504 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119371)));
    vlSelf->mkMac__DOT__y___05Fh71932 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh71799)));
    vlSelf->mkMac__DOT__y___05Fh119480 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119504));
    vlSelf->mkMac__DOT__y___05Fh71908 = ((vlSelf->mkMac__DOT__propagate___05Fh12141 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh71932));
    vlSelf->mkMac__DOT__y___05Fh119613 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119480)));
    vlSelf->mkMac__DOT__y___05Fh12144 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh71908) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh71932) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh71823) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh71714) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh71605) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh71496) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh71387) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh71278) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh71169) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh71060) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh70951) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh70842) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh70733) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh70624) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh70515) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh70406) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh70297) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh70188) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh70079) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69970) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69861) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69752) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69643) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69534) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69425) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69316) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69207) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh69098) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh68989) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh68880) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d959)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh119589 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119613));
    vlSelf->mkMac__DOT__product___05Fh12135 = (vlSelf->mkMac__DOT__propagate___05Fh12141 
                                               ^ vlSelf->mkMac__DOT__y___05Fh12144);
    vlSelf->mkMac__DOT__y___05Fh119722 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119589)));
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1100 
        = ((0x40U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh12135
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d956);
    vlSelf->mkMac__DOT__y___05Fh119698 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119722));
    vlSelf->mkMac__DOT__propagate___05Fh7827 = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1100 
                                                ^ vlSelf->mkMac__DOT__y___05Fh7823);
    vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
        = (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1100 
           & vlSelf->mkMac__DOT__y___05Fh7823);
    vlSelf->mkMac__DOT__y___05Fh119831 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119698)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9___05FETC___05F_d1165 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh73035 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103));
    vlSelf->mkMac__DOT__y___05Fh119807 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119831));
    vlSelf->mkMac__DOT__y___05Fh73169 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73035)));
    vlSelf->mkMac__DOT__y___05Fh119940 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119807)));
    vlSelf->mkMac__DOT__y___05Fh73145 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73169));
    vlSelf->mkMac__DOT__y___05Fh119916 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119940));
    vlSelf->mkMac__DOT__y___05Fh73278 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73145)));
    vlSelf->mkMac__DOT__y___05Fh120049 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh119916)));
    vlSelf->mkMac__DOT__y___05Fh73254 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73278));
    vlSelf->mkMac__DOT__y___05Fh120025 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120049));
    vlSelf->mkMac__DOT__y___05Fh73387 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73254)));
    vlSelf->mkMac__DOT__y___05Fh120158 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120025)));
    vlSelf->mkMac__DOT__y___05Fh73363 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73387));
    vlSelf->mkMac__DOT__y___05Fh120134 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120158));
    vlSelf->mkMac__DOT__y___05Fh73496 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73363)));
    vlSelf->mkMac__DOT__y___05Fh120267 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120134)));
    vlSelf->mkMac__DOT__y___05Fh73472 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73496));
    vlSelf->mkMac__DOT__y___05Fh120243 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120267));
    vlSelf->mkMac__DOT__y___05Fh73605 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73472)));
    vlSelf->mkMac__DOT__y___05Fh120376 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120243)));
    vlSelf->mkMac__DOT__y___05Fh73581 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73605));
    vlSelf->mkMac__DOT__y___05Fh120352 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120376));
    vlSelf->mkMac__DOT__y___05Fh73714 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73581)));
    vlSelf->mkMac__DOT__y___05Fh120485 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120352)));
    vlSelf->mkMac__DOT__y___05Fh73690 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73714));
    vlSelf->mkMac__DOT__y___05Fh120461 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120485));
    vlSelf->mkMac__DOT__y___05Fh73823 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73690)));
    vlSelf->mkMac__DOT__y___05Fh120594 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120461)));
    vlSelf->mkMac__DOT__y___05Fh73799 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73823));
    vlSelf->mkMac__DOT__y___05Fh120570 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120594));
    vlSelf->mkMac__DOT__y___05Fh73932 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73799)));
    vlSelf->mkMac__DOT__y___05Fh120703 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120570)));
    vlSelf->mkMac__DOT__y___05Fh73908 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh73932));
    vlSelf->mkMac__DOT__y___05Fh120679 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120703));
    vlSelf->mkMac__DOT__y___05Fh74041 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh73908)));
    vlSelf->mkMac__DOT__y___05Fh120812 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120679)));
    vlSelf->mkMac__DOT__y___05Fh74017 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74041));
    vlSelf->mkMac__DOT__y___05Fh120788 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120812));
    vlSelf->mkMac__DOT__y___05Fh74150 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74017)));
    vlSelf->mkMac__DOT__y___05Fh120921 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120788)));
    vlSelf->mkMac__DOT__y___05Fh74126 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74150));
    vlSelf->mkMac__DOT__y___05Fh120897 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120921));
    vlSelf->mkMac__DOT__y___05Fh74259 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74126)));
    vlSelf->mkMac__DOT__y___05Fh121030 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh120897)));
    vlSelf->mkMac__DOT__y___05Fh74235 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74259));
    vlSelf->mkMac__DOT__y___05Fh121006 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh121030));
    vlSelf->mkMac__DOT__y___05Fh74368 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74235)));
    vlSelf->mkMac__DOT__y___05Fh121139 = (1U & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh121006)));
    vlSelf->mkMac__DOT__y___05Fh74344 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74368));
    vlSelf->mkMac__DOT__y___05Fh121115 = ((vlSelf->mkMac__DOT__propagate___05Fh85330 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh121139));
    vlSelf->mkMac__DOT__y___05Fh74477 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74344)));
    vlSelf->mkMac__DOT__y___05Fh85344 = ((0x80000000U 
                                          & ((0x80000000U 
                                              & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259 
                                                 << 1U)) 
                                             | ((IData)(vlSelf->mkMac__DOT__y___05Fh121115) 
                                                << 0x1fU))) 
                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh121139) 
                                             << 0x1eU) 
                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh121030) 
                                                << 0x1dU) 
                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh120921) 
                                                   << 0x1cU) 
                                                  | (((IData)(vlSelf->mkMac__DOT__y___05Fh120812) 
                                                      << 0x1bU) 
                                                     | (((IData)(vlSelf->mkMac__DOT__y___05Fh120703) 
                                                         << 0x1aU) 
                                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh120594) 
                                                            << 0x19U) 
                                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh120485) 
                                                               << 0x18U) 
                                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh120376) 
                                                                  << 0x17U) 
                                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh120267) 
                                                                     << 0x16U) 
                                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh120158) 
                                                                        << 0x15U) 
                                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh120049) 
                                                                           << 0x14U) 
                                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh119940) 
                                                                              << 0x13U) 
                                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh119831) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119722) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119613) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119504) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119395) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119286) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119177) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh119068) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118959) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118850) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118741) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118632) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118523) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118414) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118305) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118196) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh118087) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2259)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh74453 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74477));
    vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
        = (vlSelf->mkMac__DOT__propagate___05Fh85330 
           ^ vlSelf->mkMac__DOT__y___05Fh85344);
    vlSelf->mkMac__DOT__y___05Fh74586 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74453)));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05F_d2417 
        = ((0x80U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05F_d2587 
        = ((0x100U & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__mantissa___05F_2___05Fh130051 
        = (0x7fU & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                    >> 8U));
    vlSelf->mkMac__DOT__propagate___05Fh130122 = ((0x7eU 
                                                   & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                      >> 8U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                         >> 8U))));
    vlSelf->mkMac__DOT__mantissa___05F_3___05Fh121395 
        = (0xffU & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                    >> 7U));
    vlSelf->mkMac__DOT__y___05Fh131200 = (IData)((0x300U 
                                                  == 
                                                  (0x300U 
                                                   & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)));
    vlSelf->mkMac__DOT____VdfgTmp_h0f884594__0 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                   >> 6U) 
                                                  & (0x40U 
                                                     != 
                                                     (0xffU 
                                                      & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)));
    vlSelf->mkMac__DOT__propagate___05Fh121477 = ((0xfeU 
                                                   & (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                      >> 7U)) 
                                                  | (1U 
                                                     & (~ 
                                                        (vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                         >> 7U))));
    vlSelf->mkMac__DOT__y___05Fh122555 = (IData)((0x180U 
                                                  == 
                                                  (0x180U 
                                                   & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)));
    vlSelf->mkMac__DOT__y___05Fh74562 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74586));
    vlSelf->mkMac__DOT__y___05Fh131307 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh131200));
    vlSelf->mkMac__DOT__y___05Fh122662 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh122555));
    vlSelf->mkMac__DOT__y___05Fh74695 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74562)));
    vlSelf->mkMac__DOT__y___05Fh131414 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh131307));
    vlSelf->mkMac__DOT__y___05Fh122769 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh122662));
    vlSelf->mkMac__DOT__y___05Fh74671 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74695));
    vlSelf->mkMac__DOT__y___05Fh131521 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh131414));
    vlSelf->mkMac__DOT__y___05Fh122876 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh122769));
    vlSelf->mkMac__DOT__y___05Fh74804 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74671)));
    vlSelf->mkMac__DOT__y___05Fh131628 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh131521));
    vlSelf->mkMac__DOT__y___05Fh122983 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh122876));
    vlSelf->mkMac__DOT__y___05Fh74780 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74804));
    vlSelf->mkMac__DOT__y___05Fh131735 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh131628));
    vlSelf->mkMac__DOT__y___05Fh123090 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh122983));
    vlSelf->mkMac__DOT__y___05Fh74913 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74780)));
    vlSelf->mkMac__DOT__y___05Fh130125 = (((IData)(vlSelf->mkMac__DOT__y___05Fh131735) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh131628) 
                                            << 6U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh131521) 
                                               << 5U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh131414) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh131307) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh131200) 
                                                        << 2U) 
                                                       | ((0x100U 
                                                           & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)
                                                           ? 2U
                                                           : 0U)))))));
    vlSelf->mkMac__DOT__y___05Fh123197 = ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh123090));
    vlSelf->mkMac__DOT__y___05Fh74889 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh74913));
    vlSelf->mkMac__DOT__mantissa___05F_1___05Fh130118 
        = (vlSelf->mkMac__DOT__propagate___05Fh130122 
           ^ vlSelf->mkMac__DOT__y___05Fh130125);
    vlSelf->mkMac__DOT__y___05Fh121480 = (((IData)(vlSelf->mkMac__DOT__y___05Fh123197) 
                                           << 8U) | 
                                          (((IData)(vlSelf->mkMac__DOT__y___05Fh123090) 
                                            << 7U) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh122983) 
                                               << 6U) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh122876) 
                                                  << 5U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh122769) 
                                                     << 4U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh122662) 
                                                        << 3U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh122555) 
                                                           << 2U) 
                                                          | ((0x80U 
                                                              & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)
                                                              ? 2U
                                                              : 0U))))))));
    vlSelf->mkMac__DOT__y___05Fh75022 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74889)));
    vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05Fq6 
        = (((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
             >> 7U) & (0x80U != (0x1ffU & vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399)))
            ? vlSelf->mkMac__DOT__mantissa___05F_1___05Fh130118
            : vlSelf->mkMac__DOT__mantissa___05F_2___05Fh130051);
    vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451 
        = (vlSelf->mkMac__DOT__propagate___05Fh121477 
           ^ vlSelf->mkMac__DOT__y___05Fh121480);
    vlSelf->mkMac__DOT__y___05Fh74998 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75022));
    vlSelf->mkMac__DOT__fraction___05F_1___05Fh130054 
        = (0x7f0000U & (vlSelf->mkMac__DOT__IF_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383___05FETC___05Fq6 
                        << 0x10U));
    vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
        = (0x7fffffffU & ((vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451 
                           >> 1U) ^ (1U & vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451)));
    vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
        = (1U & ((vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451 
                  >> 1U) & vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451));
    vlSelf->mkMac__DOT__y___05Fh80937 = (0x100U | (
                                                   (1U 
                                                    & ((vlSelf->mkMac__DOT__IF_fp_ififo_rv_port0___05Fread___05F332_BIT_38_383_THE_ETC___05F_d2399 
                                                        >> 0xfU) 
                                                       | ((IData)(vlSelf->mkMac__DOT____VdfgTmp_h0f884594__0) 
                                                          & (vlSelf->mkMac__DOT__mantissa___05F_2___05Fh121451 
                                                             >> 8U))))
                                                    ? 0x82U
                                                    : 0x81U));
    vlSelf->mkMac__DOT__y___05Fh75131 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh74998)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BI_ETC___05F_d2671 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh135345 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608));
    vlSelf->mkMac__DOT__propagate___05Fh80941 = (vlSelf->mkMac__DOT__midval___05Fh80851 
                                                 ^ vlSelf->mkMac__DOT__y___05Fh80937);
    vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
        = (vlSelf->mkMac__DOT__midval___05Fh80851 & vlSelf->mkMac__DOT__y___05Fh80937);
    vlSelf->mkMac__DOT__y___05Fh75107 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75131));
    vlSelf->mkMac__DOT__y___05Fh135476 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135345)));
    vlSelf->mkMac__DOT__IF_0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BIT_ETC___05F_d2500 
        = ((1U & vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh126683 = (1U & ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438));
    vlSelf->mkMac__DOT__y___05Fh75240 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75107)));
    vlSelf->mkMac__DOT__y___05Fh135453 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh135476));
    vlSelf->mkMac__DOT__y___05Fh126817 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh126683)));
    vlSelf->mkMac__DOT__y___05Fh75216 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75240));
    vlSelf->mkMac__DOT__y___05Fh135583 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135453)));
    vlSelf->mkMac__DOT__y___05Fh126793 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh126817));
    vlSelf->mkMac__DOT__y___05Fh75349 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75216)));
    vlSelf->mkMac__DOT__y___05Fh135560 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh135583));
    vlSelf->mkMac__DOT__y___05Fh126926 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh126793)));
    vlSelf->mkMac__DOT__y___05Fh75325 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75349));
    vlSelf->mkMac__DOT__y___05Fh135690 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135560)));
    vlSelf->mkMac__DOT__y___05Fh126902 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh126926));
    vlSelf->mkMac__DOT__y___05Fh75458 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75325)));
    vlSelf->mkMac__DOT__y___05Fh135667 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh135690));
    vlSelf->mkMac__DOT__y___05Fh127035 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh126902)));
    vlSelf->mkMac__DOT__y___05Fh75434 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75458));
    vlSelf->mkMac__DOT__y___05Fh135797 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135667)));
    vlSelf->mkMac__DOT__y___05Fh127011 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127035));
    vlSelf->mkMac__DOT__y___05Fh75567 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75434)));
    vlSelf->mkMac__DOT__y___05Fh135774 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh135797));
    vlSelf->mkMac__DOT__y___05Fh127144 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127011)));
    vlSelf->mkMac__DOT__y___05Fh75543 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75567));
    vlSelf->mkMac__DOT__y___05Fh135904 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135774)));
    vlSelf->mkMac__DOT__y___05Fh127120 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127144));
    vlSelf->mkMac__DOT__y___05Fh75676 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75543)));
    vlSelf->mkMac__DOT__y___05Fh135881 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh135904));
    vlSelf->mkMac__DOT__y___05Fh127253 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127120)));
    vlSelf->mkMac__DOT__y___05Fh75652 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75676));
    vlSelf->mkMac__DOT__y___05Fh136011 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135881)));
    vlSelf->mkMac__DOT__y___05Fh127229 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127253));
    vlSelf->mkMac__DOT__y___05Fh75785 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75652)));
    vlSelf->mkMac__DOT__y___05Fh135988 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh136011));
    vlSelf->mkMac__DOT__y___05Fh127362 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127229)));
    vlSelf->mkMac__DOT__y___05Fh75761 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75785));
    vlSelf->mkMac__DOT__y___05Fh136118 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh135988)));
    vlSelf->mkMac__DOT__y___05Fh127338 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127362));
    vlSelf->mkMac__DOT__y___05Fh75894 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75761)));
    vlSelf->mkMac__DOT__y___05Fh136095 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh136118));
    vlSelf->mkMac__DOT__y___05Fh127471 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127338)));
    vlSelf->mkMac__DOT__y___05Fh75870 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh75894));
    vlSelf->mkMac__DOT__y___05Fh136225 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136095)));
    vlSelf->mkMac__DOT__y___05Fh127447 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127471));
    vlSelf->mkMac__DOT__y___05Fh76003 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75870)));
    vlSelf->mkMac__DOT__y___05Fh136202 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh136225));
    vlSelf->mkMac__DOT__y___05Fh127580 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127447)));
    vlSelf->mkMac__DOT__y___05Fh75979 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76003));
    vlSelf->mkMac__DOT__y___05Fh136332 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136202)));
    vlSelf->mkMac__DOT__y___05Fh127556 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127580));
    vlSelf->mkMac__DOT__y___05Fh76112 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75979)));
    vlSelf->mkMac__DOT__y___05Fh136309 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136332));
    vlSelf->mkMac__DOT__y___05Fh127689 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127556)));
    vlSelf->mkMac__DOT__y___05Fh76088 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76112));
    vlSelf->mkMac__DOT__y___05Fh136439 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136309)));
    vlSelf->mkMac__DOT__y___05Fh127665 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh127689));
    vlSelf->mkMac__DOT__y___05Fh76221 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76088)));
    vlSelf->mkMac__DOT__y___05Fh136416 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136439));
    vlSelf->mkMac__DOT__y___05Fh127798 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127665)));
    vlSelf->mkMac__DOT__y___05Fh76197 = ((vlSelf->mkMac__DOT__propagate___05Fh7827 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76221));
    vlSelf->mkMac__DOT__y___05Fh136546 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136416)));
    vlSelf->mkMac__DOT__y___05Fh127774 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh127798));
    vlSelf->mkMac__DOT__y___05Fh7830 = ((0x80000000U 
                                         & ((0x80000000U 
                                             & (vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103 
                                                << 1U)) 
                                            | ((IData)(vlSelf->mkMac__DOT__y___05Fh76197) 
                                               << 0x1fU))) 
                                        | (((IData)(vlSelf->mkMac__DOT__y___05Fh76221) 
                                            << 0x1eU) 
                                           | (((IData)(vlSelf->mkMac__DOT__y___05Fh76112) 
                                               << 0x1dU) 
                                              | (((IData)(vlSelf->mkMac__DOT__y___05Fh76003) 
                                                  << 0x1cU) 
                                                 | (((IData)(vlSelf->mkMac__DOT__y___05Fh75894) 
                                                     << 0x1bU) 
                                                    | (((IData)(vlSelf->mkMac__DOT__y___05Fh75785) 
                                                        << 0x1aU) 
                                                       | (((IData)(vlSelf->mkMac__DOT__y___05Fh75676) 
                                                           << 0x19U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__y___05Fh75567) 
                                                              << 0x18U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__y___05Fh75458) 
                                                                 << 0x17U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh75349) 
                                                                    << 0x16U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__y___05Fh75240) 
                                                                       << 0x15U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__y___05Fh75131) 
                                                                          << 0x14U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__y___05Fh75022) 
                                                                             << 0x13U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__y___05Fh74913) 
                                                                                << 0x12U) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__y___05Fh74804) 
                                                                                << 0x11U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74695) 
                                                                                << 0x10U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74586) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74477) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74368) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74259) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74150) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh74041) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73932) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73823) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73714) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73605) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73496) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73387) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73278) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__y___05Fh73169) 
                                                                                << 2U) 
                                                                                | ((1U 
                                                                                & vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1103)
                                                                                 ? 2U
                                                                                 : 0U)))))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh136523 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136546));
    vlSelf->mkMac__DOT__y___05Fh127907 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127774)));
    vlSelf->mkMac__DOT__product___05Fh7821 = (vlSelf->mkMac__DOT__propagate___05Fh7827 
                                              ^ vlSelf->mkMac__DOT__y___05Fh7830);
    vlSelf->mkMac__DOT__y___05Fh136653 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136523)));
    vlSelf->mkMac__DOT__y___05Fh127883 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh127907));
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh3324 
        = ((0x80U & (IData)(vlSelf->mkMac__DOT__IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THEN_S_ETC___05F_d138))
            ? vlSelf->mkMac__DOT__product___05Fh7821
            : vlSelf->mkMac__DOT__IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_39_9_THE_ETC___05F_d1100);
    vlSelf->mkMac__DOT__y___05Fh136630 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136653));
    vlSelf->mkMac__DOT__y___05Fh128016 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127883)));
    vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
        = (~ vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh3324);
    vlSelf->mkMac__DOT__y___05Fh136760 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136630)));
    vlSelf->mkMac__DOT__y___05Fh127992 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128016));
    vlSelf->mkMac__DOT__IF_INV_IF_IF_int_ififo_rv_port0___05Fread___05F1_BIT_3_ETC___05F_d1280 
        = ((1U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__propagate___05Fh3442 = ((0xfffffffeU 
                                                 & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5) 
                                                | (1U 
                                                   & (~ vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5)));
    vlSelf->mkMac__DOT__y___05Fh77454 = (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5)));
    vlSelf->mkMac__DOT__y___05Fh136737 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136760));
    vlSelf->mkMac__DOT__y___05Fh128125 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127992)));
    vlSelf->mkMac__DOT__y___05Fh77561 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77454));
    vlSelf->mkMac__DOT__y___05Fh136867 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136737)));
    vlSelf->mkMac__DOT__y___05Fh128101 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128125));
    vlSelf->mkMac__DOT__y___05Fh77668 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77561));
    vlSelf->mkMac__DOT__y___05Fh136844 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136867));
    vlSelf->mkMac__DOT__y___05Fh128234 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128101)));
    vlSelf->mkMac__DOT__y___05Fh77775 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77668));
    vlSelf->mkMac__DOT__y___05Fh136974 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136844)));
    vlSelf->mkMac__DOT__y___05Fh128210 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128234));
    vlSelf->mkMac__DOT__y___05Fh77882 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77775));
    vlSelf->mkMac__DOT__y___05Fh136951 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh136974));
    vlSelf->mkMac__DOT__y___05Fh128343 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128210)));
    vlSelf->mkMac__DOT__y___05Fh77989 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77882));
    vlSelf->mkMac__DOT__y___05Fh137081 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh136951)));
    vlSelf->mkMac__DOT__y___05Fh128319 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128343));
    vlSelf->mkMac__DOT__y___05Fh78096 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77989));
    vlSelf->mkMac__DOT__y___05Fh137058 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137081));
    vlSelf->mkMac__DOT__y___05Fh128452 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128319)));
    vlSelf->mkMac__DOT__y___05Fh78203 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh78096));
    vlSelf->mkMac__DOT__y___05Fh137188 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137058)));
    vlSelf->mkMac__DOT__y___05Fh128428 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128452));
    vlSelf->mkMac__DOT__y___05Fh78310 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh78203));
    vlSelf->mkMac__DOT__y___05Fh137165 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137188));
    vlSelf->mkMac__DOT__y___05Fh128561 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128428)));
    vlSelf->mkMac__DOT__y___05Fh78417 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78310));
    vlSelf->mkMac__DOT__y___05Fh137295 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137165)));
    vlSelf->mkMac__DOT__y___05Fh128537 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128561));
    vlSelf->mkMac__DOT__y___05Fh78524 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78417));
    vlSelf->mkMac__DOT__y___05Fh137272 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137295));
    vlSelf->mkMac__DOT__y___05Fh128670 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128537)));
    vlSelf->mkMac__DOT__y___05Fh78631 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78524));
    vlSelf->mkMac__DOT__y___05Fh137402 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137272)));
    vlSelf->mkMac__DOT__y___05Fh128646 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128670));
    vlSelf->mkMac__DOT__y___05Fh78738 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78631));
    vlSelf->mkMac__DOT__y___05Fh137379 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137402));
    vlSelf->mkMac__DOT__y___05Fh128779 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128646)));
    vlSelf->mkMac__DOT__y___05Fh78845 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78738));
    vlSelf->mkMac__DOT__y___05Fh137509 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137379)));
    vlSelf->mkMac__DOT__y___05Fh128755 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128779));
    vlSelf->mkMac__DOT__y___05Fh78952 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78845));
    vlSelf->mkMac__DOT__y___05Fh137486 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137509));
    vlSelf->mkMac__DOT__y___05Fh128888 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128755)));
    vlSelf->mkMac__DOT__y___05Fh79059 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78952));
    vlSelf->mkMac__DOT__y___05Fh137616 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137486)));
    vlSelf->mkMac__DOT__y___05Fh128864 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128888));
    vlSelf->mkMac__DOT__y___05Fh79166 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79059));
    vlSelf->mkMac__DOT__y___05Fh137593 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137616));
    vlSelf->mkMac__DOT__y___05Fh128997 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128864)));
    vlSelf->mkMac__DOT__y___05Fh79273 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79166));
    vlSelf->mkMac__DOT__y___05Fh137723 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137593)));
    vlSelf->mkMac__DOT__y___05Fh128973 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh128997));
    vlSelf->mkMac__DOT__y___05Fh79380 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79273));
    vlSelf->mkMac__DOT__y___05Fh137700 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137723));
    vlSelf->mkMac__DOT__y___05Fh129106 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh128973)));
    vlSelf->mkMac__DOT__y___05Fh79487 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79380));
    vlSelf->mkMac__DOT__y___05Fh137830 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137700)));
    vlSelf->mkMac__DOT__y___05Fh129082 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh129106));
    vlSelf->mkMac__DOT__y___05Fh79594 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79487));
    vlSelf->mkMac__DOT__y___05Fh137807 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137830));
    vlSelf->mkMac__DOT__y___05Fh129215 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh129082)));
    vlSelf->mkMac__DOT__y___05Fh79701 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79594));
    vlSelf->mkMac__DOT__y___05Fh137937 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137807)));
    vlSelf->mkMac__DOT__y___05Fh129191 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh129215));
    vlSelf->mkMac__DOT__y___05Fh79808 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79701));
    vlSelf->mkMac__DOT__y___05Fh137914 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh137937));
    vlSelf->mkMac__DOT__y___05Fh129324 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh129191)));
    vlSelf->mkMac__DOT__y___05Fh79915 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79808));
    vlSelf->mkMac__DOT__y___05Fh138044 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh137914)));
    vlSelf->mkMac__DOT__y___05Fh129300 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh129324));
    vlSelf->mkMac__DOT__y___05Fh80022 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79915));
    vlSelf->mkMac__DOT__y___05Fh138021 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh138044));
    vlSelf->mkMac__DOT__y___05Fh129433 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh129300)));
    vlSelf->mkMac__DOT__y___05Fh80129 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80022));
    vlSelf->mkMac__DOT__y___05Fh138151 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2608 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh138021)));
    vlSelf->mkMac__DOT__y___05Fh129409 = ((vlSelf->mkMac__DOT__propagate___05Fh80941 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh129433));
    vlSelf->mkMac__DOT__y___05Fh80236 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2324___05Fq5 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80129));
    vlSelf->mkMac__DOT__y___05Fh138128 = ((vlSelf->mkMac__DOT___0_CONCAT_IF_fp_ififo_rv_port0___05Fread___05F332_BIT_3_ETC___05F_d2610 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh138151));
    vlSelf->mkMac__DOT__y___05Fh129542 = (1U & ((vlSelf->mkMac__DOT___0b0_CONCAT_fp_ififo_rv_port0___05Fread___05F332_BITS_6_ETC___05F_d2438 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh129409)));
}
