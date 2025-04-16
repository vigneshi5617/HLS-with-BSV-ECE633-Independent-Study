// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    // Body
    vlSelf->mkMac__DOT__y___05Fh293961 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh293711));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3016 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314886) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314711) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh314536) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314361) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3014)))));
    vlSelf->mkMac__DOT__y___05Fh315061 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314886));
    vlSelf->mkMac__DOT__y___05Fh302346 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh302171));
    vlSelf->mkMac__DOT__y___05Fh293889 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293961)));
    vlSelf->mkMac__DOT__y___05Fh315236 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh315061));
    vlSelf->mkMac__DOT__y___05Fh302521 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh302346));
    vlSelf->mkMac__DOT__y___05Fh294139 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh293889));
    vlSelf->mkMac__DOT__y___05Fh315411 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh315236));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3303 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh302521) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh302346) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh302171) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh301996) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3301)))));
    vlSelf->mkMac__DOT__y___05Fh302696 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh302521));
    vlSelf->mkMac__DOT__y___05Fh294067 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294139)));
    vlSelf->mkMac__DOT__y___05Fh315586 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh315411));
    vlSelf->mkMac__DOT__y___05Fh302871 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh302696));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2901 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294067) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh293889) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh293711) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh293533) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2899)))));
    vlSelf->mkMac__DOT__y___05Fh294317 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh294067));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3018 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh315586) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh315411) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh315236) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh315061) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3016)))));
    vlSelf->mkMac__DOT__y___05Fh315761 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh315586));
    vlSelf->mkMac__DOT__y___05Fh303046 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh302871));
    vlSelf->mkMac__DOT__y___05Fh294245 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294317)));
    vlSelf->mkMac__DOT__y___05Fh315936 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh315761));
    vlSelf->mkMac__DOT__y___05Fh303221 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303046));
    vlSelf->mkMac__DOT__y___05Fh294495 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh294245));
    vlSelf->mkMac__DOT__y___05Fh316111 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh315936));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3305 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh303221) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh303046) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh302871) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh302696) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3303)))));
    vlSelf->mkMac__DOT__y___05Fh303396 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303221));
    vlSelf->mkMac__DOT__y___05Fh294423 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294495)));
    vlSelf->mkMac__DOT__y___05Fh316286 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316111));
    vlSelf->mkMac__DOT__y___05Fh303571 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303396));
    vlSelf->mkMac__DOT__y___05Fh294673 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh294423));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3020 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh316286) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh316111) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh315936) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh315761) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3018)))));
    vlSelf->mkMac__DOT__y___05Fh316461 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316286));
    vlSelf->mkMac__DOT__y___05Fh303746 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303571));
    vlSelf->mkMac__DOT__y___05Fh294601 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294673)));
    vlSelf->mkMac__DOT__y___05Fh316636 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316461));
    vlSelf->mkMac__DOT__y___05Fh303921 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303746));
    vlSelf->mkMac__DOT__y___05Fh294851 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh294601));
    vlSelf->mkMac__DOT__y___05Fh316811 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316636));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3307 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh303921) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh303746) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh303571) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh303396) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3305)))));
    vlSelf->mkMac__DOT__y___05Fh304096 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh303921));
    vlSelf->mkMac__DOT__y___05Fh294779 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294851)));
    vlSelf->mkMac__DOT__y___05Fh316986 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316811));
    vlSelf->mkMac__DOT__y___05Fh304271 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304096));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2903 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294779) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh294601) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294423) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh294245) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2901)))));
    vlSelf->mkMac__DOT__y___05Fh295029 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294779));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3022 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh316986) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh316811) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh316636) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh316461) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3020)))));
    vlSelf->mkMac__DOT__y___05Fh317161 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh316986));
    vlSelf->mkMac__DOT__y___05Fh304446 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304271));
    vlSelf->mkMac__DOT__y___05Fh294957 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295029)));
    vlSelf->mkMac__DOT__y___05Fh317336 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh317161));
    vlSelf->mkMac__DOT__y___05Fh304621 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304446));
    vlSelf->mkMac__DOT__y___05Fh295207 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294957));
    vlSelf->mkMac__DOT__y___05Fh317511 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh317336));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3309 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh304621) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh304446) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh304271) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh304096) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3307))));
    vlSelf->mkMac__DOT__y___05Fh304796 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304621));
    vlSelf->mkMac__DOT__y___05Fh295135 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295207)));
    vlSelf->mkMac__DOT__y___05Fh317686 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh317511));
    vlSelf->mkMac__DOT__y___05Fh304971 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304796));
    vlSelf->mkMac__DOT__y___05Fh295385 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295135));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3024 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh317686) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh317511) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh317336) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh317161) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3022))));
    vlSelf->mkMac__DOT__y___05Fh317861 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh317686));
    vlSelf->mkMac__DOT__y___05Fh305146 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh304971));
    vlSelf->mkMac__DOT__y___05Fh295313 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295385)));
    vlSelf->mkMac__DOT__y___05Fh318036 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh317861));
    vlSelf->mkMac__DOT__y___05Fh305321 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305146));
    vlSelf->mkMac__DOT__y___05Fh295563 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295313));
    vlSelf->mkMac__DOT__y___05Fh318211 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318036));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3311 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305321) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305146) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh304971) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh304796) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3309))));
    vlSelf->mkMac__DOT__y___05Fh305496 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305321));
    vlSelf->mkMac__DOT__y___05Fh295491 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295563)));
    vlSelf->mkMac__DOT__y___05Fh318386 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318211));
    vlSelf->mkMac__DOT__y___05Fh305671 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305496));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2905 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295491) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295313) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295135) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh294957) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2903)))));
    vlSelf->mkMac__DOT__y___05Fh295741 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295491));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3026 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318386) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318211) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh318036) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh317861) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3024))));
    vlSelf->mkMac__DOT__y___05Fh318561 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318386));
    vlSelf->mkMac__DOT__y___05Fh305846 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305671));
    vlSelf->mkMac__DOT__y___05Fh295669 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295741)));
    vlSelf->mkMac__DOT__y___05Fh318736 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318561));
    vlSelf->mkMac__DOT__y___05Fh306021 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305846));
    vlSelf->mkMac__DOT__y___05Fh295919 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295669));
    vlSelf->mkMac__DOT__y___05Fh318911 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318736));
    vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh124584 
        = (((0x80000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306021) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305846) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305671) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh305496) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3311))));
    vlSelf->mkMac__DOT__y___05Fh295847 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295919)));
    vlSelf->mkMac__DOT__y___05Fh319086 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318911));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
           ^ vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh124584);
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
           & vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh124584);
    vlSelf->mkMac__DOT__y___05Fh296097 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295847));
    vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh124583 
        = (((0x80000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319086) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318911) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318736) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh318561) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3026))));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq61 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq60 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh306492 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316));
    vlSelf->mkMac__DOT__y___05Fh296025 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296097)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581 
           ^ vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh124583);
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581 
           & vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh124583);
    vlSelf->mkMac__DOT__y___05Fh306420 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh306492)));
    vlSelf->mkMac__DOT__y___05Fh296275 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296025));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq59 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq58 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh319557 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3469 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306420) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314)));
    vlSelf->mkMac__DOT__y___05Fh306670 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh306420));
    vlSelf->mkMac__DOT__y___05Fh296203 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296275)));
    vlSelf->mkMac__DOT__y___05Fh319485 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh319557)));
    vlSelf->mkMac__DOT__y___05Fh306598 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh306670)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2907 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh296203) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh296025) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh295847) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh295669) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2905)))));
    vlSelf->mkMac__DOT__y___05Fh296453 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296203));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3184 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319485) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029)));
    vlSelf->mkMac__DOT__y___05Fh319735 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh319485));
    vlSelf->mkMac__DOT__y___05Fh306848 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh306598));
    vlSelf->mkMac__DOT__y___05Fh296381 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296453)));
    vlSelf->mkMac__DOT__y___05Fh319663 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh319735)));
    vlSelf->mkMac__DOT__y___05Fh306776 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh306848)));
    vlSelf->mkMac__DOT__y___05Fh296631 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296381));
    vlSelf->mkMac__DOT__y___05Fh319913 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh319663));
    vlSelf->mkMac__DOT__y___05Fh307026 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh306776));
    vlSelf->mkMac__DOT__y___05Fh296559 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296631)));
    vlSelf->mkMac__DOT__y___05Fh319841 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh319913)));
    vlSelf->mkMac__DOT__y___05Fh306954 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307026)));
    vlSelf->mkMac__DOT__y___05Fh296809 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296559));
    vlSelf->mkMac__DOT__y___05Fh320091 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh319841));
    vlSelf->mkMac__DOT__y___05Fh307204 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh306954));
    vlSelf->mkMac__DOT__y___05Fh296737 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296809)));
    vlSelf->mkMac__DOT__y___05Fh320019 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320091)));
    vlSelf->mkMac__DOT__y___05Fh307132 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307204)));
    vlSelf->mkMac__DOT__y___05Fh296987 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296737));
    vlSelf->mkMac__DOT__y___05Fh320269 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh320019));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3471 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307132) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306954) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh306776) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh306598) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3469)))));
    vlSelf->mkMac__DOT__y___05Fh307382 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh307132));
    vlSelf->mkMac__DOT__y___05Fh296915 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296987)));
    vlSelf->mkMac__DOT__y___05Fh320197 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320269)));
    vlSelf->mkMac__DOT__y___05Fh307310 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307382)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2909 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh296915) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh296737) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh296559) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh296381) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2907))));
    vlSelf->mkMac__DOT__y___05Fh297165 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh296915));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3186 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320197) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320019) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh319841) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh319663) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3184)))));
    vlSelf->mkMac__DOT__y___05Fh320447 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh320197));
    vlSelf->mkMac__DOT__y___05Fh307560 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh307310));
    vlSelf->mkMac__DOT__y___05Fh297093 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297165)));
    vlSelf->mkMac__DOT__y___05Fh320375 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320447)));
    vlSelf->mkMac__DOT__y___05Fh307488 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307560)));
    vlSelf->mkMac__DOT__y___05Fh297343 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297093));
    vlSelf->mkMac__DOT__y___05Fh320625 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh320375));
    vlSelf->mkMac__DOT__y___05Fh307738 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh307488));
    vlSelf->mkMac__DOT__y___05Fh297271 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297343)));
    vlSelf->mkMac__DOT__y___05Fh320553 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320625)));
    vlSelf->mkMac__DOT__y___05Fh307666 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307738)));
    vlSelf->mkMac__DOT__y___05Fh297521 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297271));
    vlSelf->mkMac__DOT__y___05Fh320803 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh320553));
    vlSelf->mkMac__DOT__y___05Fh307916 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh307666));
    vlSelf->mkMac__DOT__y___05Fh297449 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297521)));
    vlSelf->mkMac__DOT__y___05Fh320731 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320803)));
    vlSelf->mkMac__DOT__y___05Fh307844 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh307916)));
    vlSelf->mkMac__DOT__y___05Fh297699 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297449));
    vlSelf->mkMac__DOT__y___05Fh320981 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh320731));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3473 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307844) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh307666) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307488) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh307310) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3471)))));
    vlSelf->mkMac__DOT__y___05Fh308094 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307844));
    vlSelf->mkMac__DOT__y___05Fh297627 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297699)));
    vlSelf->mkMac__DOT__y___05Fh320909 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh320981)));
    vlSelf->mkMac__DOT__y___05Fh308022 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308094)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2911 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh297627) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh297449) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh297271) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh297093) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2909))));
    vlSelf->mkMac__DOT__y___05Fh297877 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297627));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3188 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320909) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh320731) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320553) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh320375) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3186)))));
    vlSelf->mkMac__DOT__y___05Fh321159 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320909));
    vlSelf->mkMac__DOT__y___05Fh308272 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308022));
    vlSelf->mkMac__DOT__y___05Fh297805 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297877)));
    vlSelf->mkMac__DOT__y___05Fh321087 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh321159)));
    vlSelf->mkMac__DOT__y___05Fh308200 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308272)));
    vlSelf->mkMac__DOT__y___05Fh298055 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297805));
    vlSelf->mkMac__DOT__y___05Fh321337 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321087));
    vlSelf->mkMac__DOT__y___05Fh308450 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308200));
    vlSelf->mkMac__DOT__y___05Fh297983 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298055)));
    vlSelf->mkMac__DOT__y___05Fh321265 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh321337)));
    vlSelf->mkMac__DOT__y___05Fh308378 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308450)));
    vlSelf->mkMac__DOT__y___05Fh298233 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh297983));
    vlSelf->mkMac__DOT__y___05Fh321515 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321265));
    vlSelf->mkMac__DOT__y___05Fh308628 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308378));
    vlSelf->mkMac__DOT__y___05Fh298161 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298233)));
    vlSelf->mkMac__DOT__y___05Fh321443 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh321515)));
    vlSelf->mkMac__DOT__y___05Fh308556 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308628)));
    vlSelf->mkMac__DOT__y___05Fh298411 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh298161));
    vlSelf->mkMac__DOT__y___05Fh321693 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321443));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3475 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308556) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308378) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308200) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh308022) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3473)))));
    vlSelf->mkMac__DOT__y___05Fh308806 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308556));
    vlSelf->mkMac__DOT__y___05Fh298339 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298411)));
    vlSelf->mkMac__DOT__y___05Fh321621 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh321693)));
    vlSelf->mkMac__DOT__y___05Fh308734 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308806)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2913 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh298339) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh298161) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh297983) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh297805) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2911))));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3190 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321621) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321443) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321265) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh321087) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3188)))));
    vlSelf->mkMac__DOT__y___05Fh321871 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321621));
    vlSelf->mkMac__DOT__y___05Fh308984 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308734));
    vlSelf->mkMac__DOT__y___05Fh321799 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh321871)));
    vlSelf->mkMac__DOT__y___05Fh308912 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh308984)));
    vlSelf->mkMac__DOT__y___05Fh322049 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321799));
    vlSelf->mkMac__DOT__y___05Fh309162 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308912));
    vlSelf->mkMac__DOT__y___05Fh321977 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322049)));
    vlSelf->mkMac__DOT__y___05Fh309090 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh309162)));
    vlSelf->mkMac__DOT__y___05Fh322227 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321977));
    vlSelf->mkMac__DOT__y___05Fh309340 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309090));
    vlSelf->mkMac__DOT__y___05Fh322155 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322227)));
    vlSelf->mkMac__DOT__y___05Fh309268 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh309340)));
    vlSelf->mkMac__DOT__y___05Fh322405 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322155));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3477 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309268) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309090) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh308912) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh308734) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3475)))));
    vlSelf->mkMac__DOT__y___05Fh309518 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309268));
    vlSelf->mkMac__DOT__y___05Fh322333 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322405)));
    vlSelf->mkMac__DOT__y___05Fh309446 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh309518)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3192 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322333) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322155) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh321977) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh321799) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3190)))));
    vlSelf->mkMac__DOT__y___05Fh322583 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322333));
    vlSelf->mkMac__DOT__y___05Fh309696 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309446));
    vlSelf->mkMac__DOT__y___05Fh322511 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322583)));
    vlSelf->mkMac__DOT__y___05Fh309624 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh309696)));
    vlSelf->mkMac__DOT__y___05Fh322761 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322511));
    vlSelf->mkMac__DOT__y___05Fh309874 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309624));
    vlSelf->mkMac__DOT__y___05Fh322689 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322761)));
    vlSelf->mkMac__DOT__y___05Fh309802 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh309874)));
    vlSelf->mkMac__DOT__y___05Fh322939 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322689));
    vlSelf->mkMac__DOT__y___05Fh310052 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309802));
    vlSelf->mkMac__DOT__y___05Fh322867 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh322939)));
    vlSelf->mkMac__DOT__y___05Fh309980 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310052)));
    vlSelf->mkMac__DOT__y___05Fh323117 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322867));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3479 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309980) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309802) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh309624) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh309446) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3477))));
    vlSelf->mkMac__DOT__y___05Fh310230 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309980));
    vlSelf->mkMac__DOT__y___05Fh323045 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323117)));
    vlSelf->mkMac__DOT__y___05Fh310158 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310230)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3194 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323045) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322867) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh322689) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh322511) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3192))));
    vlSelf->mkMac__DOT__y___05Fh323295 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323045));
    vlSelf->mkMac__DOT__y___05Fh310408 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh310158));
    vlSelf->mkMac__DOT__y___05Fh323223 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323295)));
    vlSelf->mkMac__DOT__y___05Fh310336 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310408)));
    vlSelf->mkMac__DOT__y___05Fh323473 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323223));
    vlSelf->mkMac__DOT__y___05Fh310586 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh310336));
    vlSelf->mkMac__DOT__y___05Fh323401 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323473)));
    vlSelf->mkMac__DOT__y___05Fh310514 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310586)));
    vlSelf->mkMac__DOT__y___05Fh323651 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323401));
    vlSelf->mkMac__DOT__y___05Fh310764 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh310514));
    vlSelf->mkMac__DOT__y___05Fh323579 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323651)));
    vlSelf->mkMac__DOT__y___05Fh310692 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310764)));
    vlSelf->mkMac__DOT__y___05Fh323829 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323579));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3481 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh310692) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh310514) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh310336) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh310158) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3479))));
    vlSelf->mkMac__DOT__y___05Fh310942 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh310692));
    vlSelf->mkMac__DOT__y___05Fh323757 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323829)));
    vlSelf->mkMac__DOT__y___05Fh310870 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310942)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3196 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323757) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323579) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh323401) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh323223) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3194))));
    vlSelf->mkMac__DOT__y___05Fh324007 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323757));
    vlSelf->mkMac__DOT__y___05Fh311120 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh310870));
    vlSelf->mkMac__DOT__y___05Fh323935 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324007)));
    vlSelf->mkMac__DOT__y___05Fh311048 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311120)));
    vlSelf->mkMac__DOT__y___05Fh324185 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh323935));
    vlSelf->mkMac__DOT__y___05Fh311298 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311048));
    vlSelf->mkMac__DOT__y___05Fh324113 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324185)));
    vlSelf->mkMac__DOT__y___05Fh311226 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311298)));
    vlSelf->mkMac__DOT__y___05Fh324363 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324113));
    vlSelf->mkMac__DOT__y___05Fh311476 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311226));
    vlSelf->mkMac__DOT__y___05Fh324291 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324363)));
    vlSelf->mkMac__DOT__y___05Fh311404 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3316 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311476)));
    vlSelf->mkMac__DOT__y___05Fh324541 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324291));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3483 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh311404) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh311226) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh311048) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3314) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh310870) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3481))));
    vlSelf->mkMac__DOT__y___05Fh324469 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3031 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324541)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3198 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh324469) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh324291) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh324113) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3029) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh323935) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3196))));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485 
        = ((IData)(vlSelf->mkMac__DOT__reg_operand_a_BIT_15_XOR_reg_operand_b_BIT_15___05FETC___05F_d10)
            ? vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2913
            : ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2741)
                ? vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3198
                : vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3483));
    vlSelf->mkMac__DOT__x___05Fh350939 = (0x7ffffeU 
                                          & (vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485 
                                             << 1U));
    if ((0x800000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485)) {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh344364 
            = vlSelf->mkMac__DOT__selected_exponent___05Fh124582;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh344365 
            = (0x7fffffU & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485);
    } else {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh344364 
            = vlSelf->mkMac__DOT__selected_exponent___05F_1___05Fh344366;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh344365 
            = (0x7fffffU & vlSelf->mkMac__DOT__x___05Fh350939);
    }
    vlSelf->mkMac__DOT__normalized_mantissa___05F_1___05Fh324833 
        = (0x7fffffU & (vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485 
                        >> 1U));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
        = (0x7fffffU & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485 
                         >> 1U) ^ (1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485 
                  >> 1U) & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq63 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq62 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh326233 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491));
    vlSelf->mkMac__DOT__y___05Fh326162 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326233)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3609 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh326162) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                        ^ (vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493)));
    vlSelf->mkMac__DOT__y___05Fh326408 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh326162));
    vlSelf->mkMac__DOT__y___05Fh326337 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326408)));
    vlSelf->mkMac__DOT__y___05Fh326583 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh326337));
    vlSelf->mkMac__DOT__y___05Fh326512 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326583)));
    vlSelf->mkMac__DOT__y___05Fh326758 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh326512));
    vlSelf->mkMac__DOT__y___05Fh326687 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326758)));
    vlSelf->mkMac__DOT__y___05Fh326933 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh326687));
    vlSelf->mkMac__DOT__y___05Fh326862 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326933)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3611 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh326862) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh326687) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh326512) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh326337) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3609)))));
    vlSelf->mkMac__DOT__y___05Fh327108 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh326862));
    vlSelf->mkMac__DOT__y___05Fh327037 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327108)));
    vlSelf->mkMac__DOT__y___05Fh327283 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh327037));
    vlSelf->mkMac__DOT__y___05Fh327212 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327283)));
    vlSelf->mkMac__DOT__y___05Fh327458 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh327212));
    vlSelf->mkMac__DOT__y___05Fh327387 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327458)));
    vlSelf->mkMac__DOT__y___05Fh327633 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh327387));
    vlSelf->mkMac__DOT__y___05Fh327562 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327633)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3613 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh327562) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh327387) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh327212) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh327037) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3611)))));
    vlSelf->mkMac__DOT__y___05Fh327808 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327562));
    vlSelf->mkMac__DOT__y___05Fh327737 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327808)));
    vlSelf->mkMac__DOT__y___05Fh327983 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327737));
    vlSelf->mkMac__DOT__y___05Fh327912 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327983)));
    vlSelf->mkMac__DOT__y___05Fh328158 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327912));
    vlSelf->mkMac__DOT__y___05Fh328087 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328158)));
    vlSelf->mkMac__DOT__y___05Fh328333 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328087));
    vlSelf->mkMac__DOT__y___05Fh328262 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328333)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3615 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh328262) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh328087) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh327912) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh327737) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3613)))));
    vlSelf->mkMac__DOT__y___05Fh328508 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328262));
    vlSelf->mkMac__DOT__y___05Fh328437 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328508)));
    vlSelf->mkMac__DOT__y___05Fh328683 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328437));
    vlSelf->mkMac__DOT__y___05Fh328612 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328683)));
    vlSelf->mkMac__DOT__y___05Fh328858 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328612));
    vlSelf->mkMac__DOT__y___05Fh328787 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328858)));
    vlSelf->mkMac__DOT__y___05Fh329033 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328787));
    vlSelf->mkMac__DOT__y___05Fh328962 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329033)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3617 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh328962) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh328787) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh328612) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh328437) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3615)))));
    vlSelf->mkMac__DOT__y___05Fh329208 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh328962));
    vlSelf->mkMac__DOT__y___05Fh329137 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329208)));
    vlSelf->mkMac__DOT__y___05Fh329383 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh329137));
    vlSelf->mkMac__DOT__y___05Fh329312 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329383)));
    vlSelf->mkMac__DOT__y___05Fh329558 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh329312));
    vlSelf->mkMac__DOT__y___05Fh329487 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329558)));
    vlSelf->mkMac__DOT__y___05Fh329733 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh329487));
    vlSelf->mkMac__DOT__y___05Fh329662 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329733)));
    vlSelf->mkMac__DOT__y___05Fh329908 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh329662));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3619 
        = (((IData)(((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493 
                      >> 0x16U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh329662))) 
            << 0x16U) | ((0x200000U & ((0xffe00000U 
                                        & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh329487) 
                                          << 0x15U))) 
                         | ((0x100000U & ((0xfff00000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh329312) 
                                             << 0x14U))) 
                            | ((0x80000U & ((0xfff80000U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3493) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh329137) 
                                               << 0x13U))) 
                               | vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3617))));
    vlSelf->mkMac__DOT__final_mantissa___05Fh324879 
        = (((IData)(((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3491 
                      >> 0x16U) | (IData)(vlSelf->mkMac__DOT__y___05Fh329908))) 
            << 0x17U) | vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3619);
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh324834 
        = ((2U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485)
            ? vlSelf->mkMac__DOT__final_mantissa___05Fh324879
            : vlSelf->mkMac__DOT__normalized_mantissa___05F_1___05Fh324833);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_a_BIT_15_XOR_reg_operand___05FETC___05F_d3683 
        = ((0x800000U & vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh324834)
            ? (((IData)(vlSelf->mkMac__DOT__y___05Fh340318) 
                << 9U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3676))
            : (((IData)(vlSelf->mkMac__DOT__y___05Fh334668) 
                << 8U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh339967) 
                           << 7U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh339792) 
                                      << 6U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh339617) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh339442) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh339267) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh339092) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh338916) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624))))))))))));
    vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh324836 
        = vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_a_BIT_15_XOR_reg_operand___05FETC___05F_d3683;
    if ((0x1000000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_15_XOR_reg_operand_b_BIT___05FETC___05F_d3485)) {
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq71 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh324834;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq70 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh324836;
    } else {
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq71 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh344365;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq70 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh344364;
    }
    vlSelf->mkMac__DOT__x___05Fh124547 = (((IData)(vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh220003) 
                                           << 0x1fU) 
                                          | ((0x7f800000U 
                                              & (vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq70 
                                                 << 0x17U)) 
                                             | (0x7fffffU 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_15_XOR_reg_operand_b_B_ETC___05Fq71)));
    vlSelf->mkMac__DOT__reg_result_D_IN = ((IData)(vlSelf->mkMac__DOT__reg_mode_fp)
                                            ? vlSelf->mkMac__DOT__x___05Fh124547
                                            : vlSelf->mkMac__DOT__x___05Fh292);
}

void Vtop___024root___ico_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_ico\n"); );
    // Body
    if ((1ULL & vlSelf->__VicoTriggered.word(0U))) {
        Vtop___024root___ico_sequent__TOP__0(vlSelf);
        Vtop___024root___ico_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__ico(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__ico\n"); );
    // Init
    CData/*0:0*/ __VicoExecute;
    // Body
    Vtop___024root___eval_triggers__ico(vlSelf);
    __VicoExecute = vlSelf->__VicoTriggered.any();
    if (__VicoExecute) {
        Vtop___024root___eval_ico(vlSelf);
    }
    return (__VicoExecute);
}

void Vtop___024root___eval_act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_act\n"); );
}

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*0:0*/ mkMac__DOT____VdfgTmp_hd79aa637__0;
    mkMac__DOT____VdfgTmp_hd79aa637__0 = 0;
    CData/*7:0*/ mkMac__DOT____VdfgTmp_hbeb72a1d__0;
    mkMac__DOT____VdfgTmp_hbeb72a1d__0 = 0;
    CData/*0:0*/ mkMac__DOT____VdfgTmp_hdf697176__0;
    mkMac__DOT____VdfgTmp_hdf697176__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_hd17fc4c4__0;
    mkMac__DOT____VdfgTmp_hd17fc4c4__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h0a654fb2__0;
    mkMac__DOT____VdfgTmp_h0a654fb2__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h5dbacce7__0;
    mkMac__DOT____VdfgTmp_h5dbacce7__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h37ed68e5__0;
    mkMac__DOT____VdfgTmp_h37ed68e5__0 = 0;
    // Body
    if (vlSelf->RST_N) {
        if (vlSelf->mkMac__DOT__reg_output_valid_EN) {
            vlSelf->mkMac__DOT__reg_output_valid = vlSelf->mkMac__DOT__reg_output_valid_D_IN;
            vlSelf->mkMac__DOT__reg_result = vlSelf->mkMac__DOT__reg_result_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_input_valid_EN) {
            vlSelf->mkMac__DOT__reg_mode_fp = vlSelf->mkMac__DOT__reg_mode_fp_D_IN;
            vlSelf->mkMac__DOT__reg_input_valid = vlSelf->mkMac__DOT__reg_input_valid_D_IN;
            vlSelf->mkMac__DOT__reg_operand_c = vlSelf->mkMac__DOT__reg_operand_c_D_IN;
            vlSelf->mkMac__DOT__reg_operand_b = vlSelf->mkMac__DOT__reg_operand_b_D_IN;
            vlSelf->mkMac__DOT__reg_operand_a = vlSelf->mkMac__DOT__reg_operand_a_D_IN;
        }
    } else {
        vlSelf->mkMac__DOT__reg_output_valid = 0U;
        vlSelf->mkMac__DOT__reg_result = 0U;
        vlSelf->mkMac__DOT__reg_mode_fp = 0U;
        vlSelf->mkMac__DOT__reg_input_valid = 0U;
        vlSelf->mkMac__DOT__reg_operand_c = 0U;
        vlSelf->mkMac__DOT__reg_operand_b = 0U;
        vlSelf->mkMac__DOT__reg_operand_a = 0U;
    }
    vlSelf->RDY_mac_op = vlSelf->mkMac__DOT__reg_output_valid;
    vlSelf->mac_op = vlSelf->mkMac__DOT__reg_result;
    vlSelf->mkMac__DOT__reg_output_valid_EN = vlSelf->mkMac__DOT__reg_input_valid;
    vlSelf->mkMac__DOT__mantissa_b___05Fh124576 = (0x800000U 
                                                   | (0x7fffffU 
                                                      & vlSelf->mkMac__DOT__reg_operand_c));
    vlSelf->mkMac__DOT__exponent_b___05Fh124573 = (0xffU 
                                                   & (vlSelf->mkMac__DOT__reg_operand_c 
                                                      >> 0x17U));
    vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1 
        = (0xffU & (~ (vlSelf->mkMac__DOT__reg_operand_c 
                       >> 0x17U)));
    vlSelf->mkMac__DOT__x___05Fh3461 = (0xffU & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_b)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq2 
        = ((1U & ((IData)(vlSelf->mkMac__DOT__reg_operand_b) 
                  & (IData)(vlSelf->mkMac__DOT__reg_operand_a)))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__sign_a___05Fh124567 = (1U & 
                                               (((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                 ^ (IData)(vlSelf->mkMac__DOT__reg_operand_b)) 
                                                >> 0xfU));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13 
        = (0xffU & (((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                     ^ (IData)(vlSelf->mkMac__DOT__reg_operand_b)) 
                    >> 7U));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15 
        = (0xffU & (((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                     & (IData)(vlSelf->mkMac__DOT__reg_operand_b)) 
                    >> 7U));
    vlSelf->mkMac__DOT__y___05Fh132213 = (0x4000U | 
                                          (0x3f80U 
                                           & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                              << 7U)));
    vlSelf->mkMac__DOT__y___05Fh133483 = ((0x40U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x2000U 
                                              | (0x1fc0U 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 6U)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh134753 = ((0x20U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x1000U 
                                              | (0xfe0U 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 5U)))
                                           : 0U);
    vlSelf->mkMac__DOT__x___05Fh64016 = (0xffU & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a)));
    vlSelf->mkMac__DOT__y___05Fh136023 = ((0x10U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x800U 
                                              | (0x7f0U 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 4U)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh137293 = ((8U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x400U 
                                              | (0x3f8U 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 3U)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh138563 = ((4U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x200U 
                                              | (0x1fcU 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 2U)))
                                           : 0U);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d60 
        = ((1U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
            ? (0x80U | (0x7fU & (IData)(vlSelf->mkMac__DOT__reg_operand_a)))
            : 0U);
    vlSelf->mkMac__DOT__y___05Fh139833 = ((2U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                                           ? (0x100U 
                                              | (0xfeU 
                                                 & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                    << 1U)))
                                           : 0U);
    vlSelf->mkMac__DOT__RDY_mac_op = vlSelf->RDY_mac_op;
    vlSelf->mkMac__DOT__mac_op = vlSelf->mac_op;
    vlSelf->mkMac__DOT__CAN_FIRE_RL_rl_mac_inputs = vlSelf->mkMac__DOT__reg_output_valid_EN;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_rl_mac_inputs 
        = vlSelf->mkMac__DOT__reg_output_valid_EN;
    vlSelf->mkMac__DOT__reg_result_EN = vlSelf->mkMac__DOT__reg_output_valid_EN;
    if ((1U & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1))) {
        vlSelf->mkMac__DOT__IF_INV_INV_reg_operand_c_BITS_30_TO_23_BIT_0_T_ETC___05Fq38 = 0U;
        vlSelf->mkMac__DOT__IF_INV_reg_operand_c_BITS_30_TO_23_BIT_0_THEN___05FETC___05Fq37 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_reg_operand_c_BITS_30_TO_23_BIT_0_T_ETC___05Fq38 = 1U;
        vlSelf->mkMac__DOT__IF_INV_reg_operand_c_BITS_30_TO_23_BIT_0_THEN___05FETC___05Fq37 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh261415 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1))));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751___05F_d3752 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh3461));
    if ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh3461))) {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_reg_operand_b_BITS_7_TO_0_750___05FETC___05Fq73 = 0U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751___05FETC___05Fq72 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_reg_operand_b_BITS_7_TO_0_750___05FETC___05Fq73 = 1U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751___05FETC___05Fq72 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh3693 = (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->mkMac__DOT__x___05Fh3461))));
    vlSelf->mkMac__DOT__reg_operand_a_BIT_15_XOR_reg_operand_b_BIT_15___05FETC___05F_d10 
        = ((IData)(vlSelf->mkMac__DOT__sign_a___05Fh124567) 
           == (vlSelf->mkMac__DOT__reg_operand_c >> 0x1fU));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_operan_ETC___05Fq18 
        = ((1U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_reg_operand_a_BITS_14_TO_7_1_AND_reg_operan_ETC___05Fq17 
        = ((1U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh127049 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15)));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793___05F_d3794 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh64016));
    if ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh64016))) {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_reg_operand_a_BITS_7_TO_0_792___05FETC___05Fq75 = 0U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793___05FETC___05Fq74 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_reg_operand_a_BITS_7_TO_0_792___05FETC___05Fq75 = 1U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793___05FETC___05Fq74 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh64248 = (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->mkMac__DOT__x___05Fh64016))));
    vlSelf->mkMac__DOT__x___05Fh139832 = vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d60;
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
        = (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d60 
           ^ vlSelf->mkMac__DOT__y___05Fh139833);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
        = (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d60 
           & vlSelf->mkMac__DOT__y___05Fh139833);
    vlSelf->mkMac__DOT__y___05Fh261590 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh261415));
    vlSelf->mkMac__DOT__y___05Fh3868 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                         >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh3693));
    vlSelf->mkMac__DOT__y___05Fh126978 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127049)));
    vlSelf->mkMac__DOT__y___05Fh64423 = (((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64248));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq4 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq3 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh149782 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71));
    vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23_283_055_BIT_3___05FETC___05F_d2085 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh261590) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh261415) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1))))));
    vlSelf->mkMac__DOT__y___05Fh261765 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh261590));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751_752_ETC___05F_d3780 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh3868) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh3693) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh3461))))));
    vlSelf->mkMac__DOT__y___05Fh4043 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                         >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh3868));
    vlSelf->mkMac__DOT__y___05Fh127224 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh126978));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793_794_ETC___05F_d3822 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh64423) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh64248) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh64016))))));
    vlSelf->mkMac__DOT__y___05Fh64598 = (((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64423));
    vlSelf->mkMac__DOT__y___05Fh149708 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149782)));
    vlSelf->mkMac__DOT__y___05Fh261940 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh261765));
    vlSelf->mkMac__DOT__y___05Fh4218 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                         >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4043));
    vlSelf->mkMac__DOT__y___05Fh127153 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127224)));
    vlSelf->mkMac__DOT__y___05Fh64773 = (((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64598));
    vlSelf->mkMac__DOT__y___05Fh149971 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149708));
    vlSelf->mkMac__DOT__y___05Fh262115 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh261940));
    vlSelf->mkMac__DOT__y___05Fh4393 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                         >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4218));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d54 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh127153) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh126978) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                              << 1U))) 
                                    | (1U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)))));
    vlSelf->mkMac__DOT__y___05Fh127399 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127153));
    vlSelf->mkMac__DOT__y___05Fh64948 = (((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64773));
    vlSelf->mkMac__DOT__y___05Fh149897 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149971)));
    vlSelf->mkMac__DOT__y___05Fh262290 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh262115));
    vlSelf->mkMac__DOT__y___05Fh4568 = (((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                                         >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh4393));
    vlSelf->mkMac__DOT__y___05Fh127328 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127399)));
    vlSelf->mkMac__DOT__y___05Fh65123 = (((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh64948));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d230 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh149897) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh149708) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69))));
    vlSelf->mkMac__DOT__y___05Fh150160 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh149897));
    vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23_283_055_BIT_7___05FETC___05F_d2087 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh262290))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh262115) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh261940) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh261765) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23_283_055_BIT_3___05FETC___05F_d2085)))));
    vlSelf->mkMac__DOT__y___05Fh266490 = (((IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23___05Fq1) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh262290));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751_752_ETC___05F_d3782 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__x___05Fh3461) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh4568))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh4393) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh4218) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__x___05Fh3461)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh4043) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751_752_ETC___05F_d3780)))));
    vlSelf->mkMac__DOT__y___05Fh127574 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127328));
    vlSelf->mkMac__DOT__SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793_794_ETC___05F_d3824 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__x___05Fh64016) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh65123))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh64948) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh64773) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__x___05Fh64016)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh64598) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793_794_ETC___05F_d3822)))));
    vlSelf->mkMac__DOT__y___05Fh150086 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150160)));
    vlSelf->mkMac__DOT__exponent_b_neg___05Fh124574 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh266490)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_reg_operand_c_BITS_30_TO_23_283_055_BIT_7___05FETC___05F_d2087)))))))))))))))))))))))));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783 
        = (0xffU & ((0x80U & (IData)(vlSelf->mkMac__DOT__reg_operand_b))
                     ? (IData)(vlSelf->mkMac__DOT__SEXT_INV_reg_operand_b_BITS_7_TO_0_750_751_752_ETC___05F_d3782)
                     : (IData)(vlSelf->mkMac__DOT__reg_operand_b)));
    vlSelf->mkMac__DOT__y___05Fh127503 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127574)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825 
        = (0xffU & ((0x80U & (IData)(vlSelf->mkMac__DOT__reg_operand_a))
                     ? (IData)(vlSelf->mkMac__DOT__SEXT_INV_reg_operand_a_BITS_7_TO_0_792_793_794_ETC___05F_d3824)
                     : (IData)(vlSelf->mkMac__DOT__reg_operand_a)));
    vlSelf->mkMac__DOT__y___05Fh150349 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh150086));
    vlSelf->mkMac__DOT__y___05Fh127749 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127503));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_re_ETC___05Fq76 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh8943 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                        << 7U);
    vlSelf->mkMac__DOT__y___05Fh16515 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 6U);
    vlSelf->mkMac__DOT__y___05Fh24087 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 5U);
    vlSelf->mkMac__DOT__y___05Fh31659 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 4U);
    vlSelf->mkMac__DOT__y___05Fh39231 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 3U);
    vlSelf->mkMac__DOT__y___05Fh46803 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 2U);
    vlSelf->mkMac__DOT__y___05Fh54375 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825) 
                                         << 1U);
    vlSelf->mkMac__DOT__product___05Fh61945 = vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_THEN_SEXT_INV_reg_o_ETC___05F_d3825;
    vlSelf->mkMac__DOT__y___05Fh150275 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150349)));
    vlSelf->mkMac__DOT__y___05Fh127678 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127749)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3831 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh61945
            : 0U);
    vlSelf->mkMac__DOT__y___05Fh150538 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh150275));
    vlSelf->mkMac__DOT__y___05Fh127924 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh127678));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3831 
           ^ vlSelf->mkMac__DOT__y___05Fh54375);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3831 
           & vlSelf->mkMac__DOT__y___05Fh54375);
    vlSelf->mkMac__DOT__y___05Fh150464 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150538)));
    vlSelf->mkMac__DOT__y___05Fh127853 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_AND_reg_operand_b_ETC___05F_d15) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh127924)));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq78 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq77 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh75050 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835));
    vlSelf->mkMac__DOT__y___05Fh150727 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh150464));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d56 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh127853))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh127678) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh127503) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d13)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh127328) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d54)))));
    vlSelf->mkMac__DOT__y___05Fh74978 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75050)));
    vlSelf->mkMac__DOT__y___05Fh150653 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150727)));
    vlSelf->mkMac__DOT__y___05Fh75228 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh74978));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d232 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh150653) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh150464) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh150275) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh150086) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d230)))));
    vlSelf->mkMac__DOT__y___05Fh150916 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh150653));
    vlSelf->mkMac__DOT__y___05Fh75156 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75228)));
    vlSelf->mkMac__DOT__y___05Fh150842 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150916)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3994 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh75156) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh74978) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833))));
    vlSelf->mkMac__DOT__y___05Fh75406 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh75156));
    vlSelf->mkMac__DOT__y___05Fh151105 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh150842));
    vlSelf->mkMac__DOT__y___05Fh75334 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75406)));
    vlSelf->mkMac__DOT__y___05Fh151031 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151105)));
    vlSelf->mkMac__DOT__y___05Fh75584 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh75334));
    vlSelf->mkMac__DOT__y___05Fh151294 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh151031));
    vlSelf->mkMac__DOT__y___05Fh75512 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75584)));
    vlSelf->mkMac__DOT__y___05Fh151220 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151294)));
    vlSelf->mkMac__DOT__y___05Fh75762 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh75512));
    vlSelf->mkMac__DOT__y___05Fh151483 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151220));
    vlSelf->mkMac__DOT__y___05Fh75690 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75762)));
    vlSelf->mkMac__DOT__y___05Fh151409 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151483)));
    vlSelf->mkMac__DOT__y___05Fh75940 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh75690));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d234 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151409) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh151220) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151031) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh150842) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d232)))));
    vlSelf->mkMac__DOT__y___05Fh151672 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151409));
    vlSelf->mkMac__DOT__y___05Fh75868 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh75940)));
    vlSelf->mkMac__DOT__y___05Fh151598 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151672)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3996 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh75868) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh75690) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh75512) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh75334) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3994)))));
    vlSelf->mkMac__DOT__y___05Fh76118 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh75868));
    vlSelf->mkMac__DOT__y___05Fh151861 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151598));
    vlSelf->mkMac__DOT__y___05Fh76046 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76118)));
    vlSelf->mkMac__DOT__y___05Fh151787 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151861)));
    vlSelf->mkMac__DOT__y___05Fh76296 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh76046));
    vlSelf->mkMac__DOT__y___05Fh152050 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151787));
    vlSelf->mkMac__DOT__y___05Fh76224 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76296)));
    vlSelf->mkMac__DOT__y___05Fh151976 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152050)));
    vlSelf->mkMac__DOT__y___05Fh76474 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh76224));
    vlSelf->mkMac__DOT__y___05Fh152239 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151976));
    vlSelf->mkMac__DOT__y___05Fh76402 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76474)));
    vlSelf->mkMac__DOT__y___05Fh152165 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152239)));
    vlSelf->mkMac__DOT__y___05Fh76652 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76402));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d236 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh152165) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151976) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151787) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh151598) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d234)))));
    vlSelf->mkMac__DOT__y___05Fh152428 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh152165));
    vlSelf->mkMac__DOT__y___05Fh76580 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76652)));
    vlSelf->mkMac__DOT__y___05Fh152354 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152428)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3998 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh76580) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh76402) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh76224) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh76046) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3996)))));
    vlSelf->mkMac__DOT__y___05Fh76830 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76580));
    vlSelf->mkMac__DOT__y___05Fh152617 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh152354));
    vlSelf->mkMac__DOT__y___05Fh76758 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh76830)));
    vlSelf->mkMac__DOT__y___05Fh152543 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152617)));
    vlSelf->mkMac__DOT__y___05Fh77008 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76758));
    vlSelf->mkMac__DOT__y___05Fh152806 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh152543));
    vlSelf->mkMac__DOT__y___05Fh76936 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77008)));
    vlSelf->mkMac__DOT__y___05Fh152732 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152806)));
    vlSelf->mkMac__DOT__y___05Fh77186 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh76936));
    vlSelf->mkMac__DOT__y___05Fh152995 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh152732));
    vlSelf->mkMac__DOT__y___05Fh77114 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77186)));
    vlSelf->mkMac__DOT__y___05Fh152921 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152995)));
    vlSelf->mkMac__DOT__y___05Fh77364 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh77114));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d238 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh152921) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh152732) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh152543) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh152354) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d236)))));
    vlSelf->mkMac__DOT__y___05Fh153184 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh152921));
    vlSelf->mkMac__DOT__y___05Fh77292 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77364)));
    vlSelf->mkMac__DOT__y___05Fh153110 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153184)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4000 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77292) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77114) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh76936) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh76758) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3998)))));
    vlSelf->mkMac__DOT__y___05Fh77542 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh77292));
    vlSelf->mkMac__DOT__y___05Fh153373 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh153110));
    vlSelf->mkMac__DOT__y___05Fh77470 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77542)));
    vlSelf->mkMac__DOT__y___05Fh153299 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153373)));
    vlSelf->mkMac__DOT__y___05Fh77720 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh77470));
    vlSelf->mkMac__DOT__y___05Fh153562 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh153299));
    vlSelf->mkMac__DOT__y___05Fh77648 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77720)));
    vlSelf->mkMac__DOT__y___05Fh153488 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153562)));
    vlSelf->mkMac__DOT__y___05Fh77898 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh77648));
    vlSelf->mkMac__DOT__y___05Fh153751 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh153488));
    vlSelf->mkMac__DOT__y___05Fh77826 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77898)));
    vlSelf->mkMac__DOT__y___05Fh153677 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153751)));
    vlSelf->mkMac__DOT__y___05Fh78076 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh77826));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d240 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153677) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153488) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh153299) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh153110) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d238))));
    vlSelf->mkMac__DOT__y___05Fh153940 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh153677));
    vlSelf->mkMac__DOT__y___05Fh78004 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78076)));
    vlSelf->mkMac__DOT__y___05Fh153866 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153940)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4002 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78004) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77826) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh77648) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh77470) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4000)))));
    vlSelf->mkMac__DOT__y___05Fh78254 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78004));
    vlSelf->mkMac__DOT__y___05Fh154129 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh153866));
    vlSelf->mkMac__DOT__y___05Fh78182 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78254)));
    vlSelf->mkMac__DOT__y___05Fh154055 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154129)));
    vlSelf->mkMac__DOT__y___05Fh78432 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78182));
    vlSelf->mkMac__DOT__y___05Fh154318 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154055));
    vlSelf->mkMac__DOT__y___05Fh78360 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78432)));
    vlSelf->mkMac__DOT__y___05Fh154244 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154318)));
    vlSelf->mkMac__DOT__y___05Fh78610 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78360));
    vlSelf->mkMac__DOT__y___05Fh154507 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154244));
    vlSelf->mkMac__DOT__y___05Fh78538 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78610)));
    vlSelf->mkMac__DOT__y___05Fh154433 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154507)));
    vlSelf->mkMac__DOT__y___05Fh78788 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78538));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d242 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh154433) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh154244) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh154055) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh153866) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d240))));
    vlSelf->mkMac__DOT__y___05Fh154696 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154433));
    vlSelf->mkMac__DOT__y___05Fh78716 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78788)));
    vlSelf->mkMac__DOT__y___05Fh154622 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154696)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4004 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78716) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78538) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh78360) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh78182) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4002))));
    vlSelf->mkMac__DOT__y___05Fh78966 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78716));
    vlSelf->mkMac__DOT__y___05Fh154885 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154622));
    vlSelf->mkMac__DOT__y___05Fh78894 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78966)));
    vlSelf->mkMac__DOT__y___05Fh154811 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154885)));
    vlSelf->mkMac__DOT__y___05Fh79144 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78894));
    vlSelf->mkMac__DOT__y___05Fh155074 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154811));
    vlSelf->mkMac__DOT__y___05Fh79072 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79144)));
    vlSelf->mkMac__DOT__y___05Fh155000 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155074)));
    vlSelf->mkMac__DOT__y___05Fh79322 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79072));
    vlSelf->mkMac__DOT__y___05Fh155263 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155000));
    vlSelf->mkMac__DOT__y___05Fh79250 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79322)));
    vlSelf->mkMac__DOT__y___05Fh155189 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d71 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155263)));
    vlSelf->mkMac__DOT__y___05Fh79500 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79250));
    vlSelf->mkMac__DOT__x___05Fh138562 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh155189) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh155000) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh154811) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d69) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh154622) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d242))));
    vlSelf->mkMac__DOT__y___05Fh79428 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79500)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
        = (vlSelf->mkMac__DOT__x___05Fh138562 ^ vlSelf->mkMac__DOT__y___05Fh138563);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
        = (vlSelf->mkMac__DOT__x___05Fh138562 & vlSelf->mkMac__DOT__y___05Fh138563);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4006 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh79428) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh79250) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh79072) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh78894) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4004))));
    vlSelf->mkMac__DOT__y___05Fh79678 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79428));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq6 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq5 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh156347 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250));
    vlSelf->mkMac__DOT__y___05Fh79606 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79678)));
    vlSelf->mkMac__DOT__y___05Fh156273 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156347)));
    vlSelf->mkMac__DOT__y___05Fh79856 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79606));
    vlSelf->mkMac__DOT__y___05Fh156536 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh156273));
    vlSelf->mkMac__DOT__y___05Fh79784 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79856)));
    vlSelf->mkMac__DOT__y___05Fh156462 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156536)));
    vlSelf->mkMac__DOT__y___05Fh80034 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79784));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d409 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156462) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156273) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248))));
    vlSelf->mkMac__DOT__y___05Fh156725 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh156462));
    vlSelf->mkMac__DOT__y___05Fh79962 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80034)));
    vlSelf->mkMac__DOT__y___05Fh156651 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156725)));
    vlSelf->mkMac__DOT__y___05Fh80212 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79962));
    vlSelf->mkMac__DOT__y___05Fh156914 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh156651));
    vlSelf->mkMac__DOT__y___05Fh80140 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3835 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80212)));
    vlSelf->mkMac__DOT__y___05Fh156840 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156914)));
    vlSelf->mkMac__DOT__product___05Fh54373 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80140) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh79962) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh79784) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3833) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh79606) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4006))));
    vlSelf->mkMac__DOT__y___05Fh157103 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh156840));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4009 
        = ((2U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh54373
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d3831);
    vlSelf->mkMac__DOT__y___05Fh157029 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157103)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4009 
           ^ vlSelf->mkMac__DOT__y___05Fh46803);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4009 
           & vlSelf->mkMac__DOT__y___05Fh46803);
    vlSelf->mkMac__DOT__y___05Fh157292 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157029));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq80 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq79 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh80618 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013));
    vlSelf->mkMac__DOT__y___05Fh157218 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157292)));
    vlSelf->mkMac__DOT__y___05Fh80546 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80618)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d411 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157218) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157029) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh156840) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156651) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d409)))));
    vlSelf->mkMac__DOT__y___05Fh157481 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157218));
    vlSelf->mkMac__DOT__y___05Fh80796 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh80546));
    vlSelf->mkMac__DOT__y___05Fh157407 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157481)));
    vlSelf->mkMac__DOT__y___05Fh80724 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80796)));
    vlSelf->mkMac__DOT__y___05Fh157670 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157407));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4172 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80724) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80546) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011))));
    vlSelf->mkMac__DOT__y___05Fh80974 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh80724));
    vlSelf->mkMac__DOT__y___05Fh157596 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157670)));
    vlSelf->mkMac__DOT__y___05Fh80902 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80974)));
    vlSelf->mkMac__DOT__y___05Fh157859 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh157596));
    vlSelf->mkMac__DOT__y___05Fh81152 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh80902));
    vlSelf->mkMac__DOT__y___05Fh157785 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157859)));
    vlSelf->mkMac__DOT__y___05Fh81080 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81152)));
    vlSelf->mkMac__DOT__y___05Fh158048 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157785));
    vlSelf->mkMac__DOT__y___05Fh81330 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh81080));
    vlSelf->mkMac__DOT__y___05Fh157974 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158048)));
    vlSelf->mkMac__DOT__y___05Fh81258 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81330)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d413 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157974) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh157785) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157596) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh157407) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d411)))));
    vlSelf->mkMac__DOT__y___05Fh158237 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157974));
    vlSelf->mkMac__DOT__y___05Fh81508 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh81258));
    vlSelf->mkMac__DOT__y___05Fh158163 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158237)));
    vlSelf->mkMac__DOT__y___05Fh81436 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81508)));
    vlSelf->mkMac__DOT__y___05Fh158426 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158163));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4174 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh81436) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh81258) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh81080) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80902) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4172)))));
    vlSelf->mkMac__DOT__y___05Fh81686 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh81436));
    vlSelf->mkMac__DOT__y___05Fh158352 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158426)));
    vlSelf->mkMac__DOT__y___05Fh81614 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81686)));
    vlSelf->mkMac__DOT__y___05Fh158615 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158352));
    vlSelf->mkMac__DOT__y___05Fh81864 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh81614));
    vlSelf->mkMac__DOT__y___05Fh158541 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158615)));
    vlSelf->mkMac__DOT__y___05Fh81792 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81864)));
    vlSelf->mkMac__DOT__y___05Fh158804 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158541));
    vlSelf->mkMac__DOT__y___05Fh82042 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh81792));
    vlSelf->mkMac__DOT__y___05Fh158730 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158804)));
    vlSelf->mkMac__DOT__y___05Fh81970 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82042)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d415 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh158730) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh158541) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh158352) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh158163) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d413)))));
    vlSelf->mkMac__DOT__y___05Fh158993 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158730));
    vlSelf->mkMac__DOT__y___05Fh82220 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81970));
    vlSelf->mkMac__DOT__y___05Fh158919 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158993)));
    vlSelf->mkMac__DOT__y___05Fh82148 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82220)));
    vlSelf->mkMac__DOT__y___05Fh159182 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158919));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4176 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82148) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh81970) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh81792) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh81614) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4174)))));
    vlSelf->mkMac__DOT__y___05Fh82398 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh82148));
    vlSelf->mkMac__DOT__y___05Fh159108 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159182)));
    vlSelf->mkMac__DOT__y___05Fh82326 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82398)));
    vlSelf->mkMac__DOT__y___05Fh159371 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159108));
    vlSelf->mkMac__DOT__y___05Fh82576 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh82326));
    vlSelf->mkMac__DOT__y___05Fh159297 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159371)));
    vlSelf->mkMac__DOT__y___05Fh82504 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82576)));
    vlSelf->mkMac__DOT__y___05Fh159560 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159297));
    vlSelf->mkMac__DOT__y___05Fh82754 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh82504));
    vlSelf->mkMac__DOT__y___05Fh159486 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159560)));
    vlSelf->mkMac__DOT__y___05Fh82682 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82754)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d417 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh159486) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh159297) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh159108) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh158919) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d415)))));
    vlSelf->mkMac__DOT__y___05Fh159749 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159486));
    vlSelf->mkMac__DOT__y___05Fh82932 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh82682));
    vlSelf->mkMac__DOT__y___05Fh159675 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159749)));
    vlSelf->mkMac__DOT__y___05Fh82860 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82932)));
    vlSelf->mkMac__DOT__y___05Fh159938 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159675));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4178 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82860) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82682) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82504) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh82326) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4176)))));
    vlSelf->mkMac__DOT__y___05Fh83110 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh82860));
    vlSelf->mkMac__DOT__y___05Fh159864 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159938)));
    vlSelf->mkMac__DOT__y___05Fh83038 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83110)));
    vlSelf->mkMac__DOT__y___05Fh160127 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh159864));
    vlSelf->mkMac__DOT__y___05Fh83288 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83038));
    vlSelf->mkMac__DOT__y___05Fh160053 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160127)));
    vlSelf->mkMac__DOT__y___05Fh83216 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83288)));
    vlSelf->mkMac__DOT__y___05Fh160316 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160053));
    vlSelf->mkMac__DOT__y___05Fh83466 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83216));
    vlSelf->mkMac__DOT__y___05Fh160242 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160316)));
    vlSelf->mkMac__DOT__y___05Fh83394 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83466)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d419 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160242) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160053) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh159864) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh159675) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d417))));
    vlSelf->mkMac__DOT__y___05Fh160505 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160242));
    vlSelf->mkMac__DOT__y___05Fh83644 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83394));
    vlSelf->mkMac__DOT__y___05Fh160431 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160505)));
    vlSelf->mkMac__DOT__y___05Fh83572 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83644)));
    vlSelf->mkMac__DOT__y___05Fh160694 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160431));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4180 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh83572) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh83394) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh83216) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh83038) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4178)))));
    vlSelf->mkMac__DOT__y___05Fh83822 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83572));
    vlSelf->mkMac__DOT__y___05Fh160620 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160694)));
    vlSelf->mkMac__DOT__y___05Fh83750 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83822)));
    vlSelf->mkMac__DOT__y___05Fh160883 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160620));
    vlSelf->mkMac__DOT__y___05Fh84000 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83750));
    vlSelf->mkMac__DOT__y___05Fh160809 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160883)));
    vlSelf->mkMac__DOT__y___05Fh83928 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84000)));
    vlSelf->mkMac__DOT__y___05Fh161072 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160809));
    vlSelf->mkMac__DOT__y___05Fh84178 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83928));
    vlSelf->mkMac__DOT__y___05Fh160998 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161072)));
    vlSelf->mkMac__DOT__y___05Fh84106 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84178)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d421 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160998) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160809) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh160620) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh160431) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d419))));
    vlSelf->mkMac__DOT__y___05Fh161261 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh160998));
    vlSelf->mkMac__DOT__y___05Fh84356 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84106));
    vlSelf->mkMac__DOT__y___05Fh161187 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161261)));
    vlSelf->mkMac__DOT__y___05Fh84284 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84356)));
    vlSelf->mkMac__DOT__y___05Fh161450 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161187));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4182 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84284) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84106) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh83928) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh83750) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4180))));
    vlSelf->mkMac__DOT__y___05Fh84534 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84284));
    vlSelf->mkMac__DOT__y___05Fh161376 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161450)));
    vlSelf->mkMac__DOT__y___05Fh84462 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84534)));
    vlSelf->mkMac__DOT__y___05Fh161639 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161376));
    vlSelf->mkMac__DOT__y___05Fh84712 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84462));
    vlSelf->mkMac__DOT__y___05Fh161565 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161639)));
    vlSelf->mkMac__DOT__y___05Fh84640 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84712)));
    vlSelf->mkMac__DOT__y___05Fh161828 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161565));
    vlSelf->mkMac__DOT__y___05Fh84890 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84640));
    vlSelf->mkMac__DOT__y___05Fh161754 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d250 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161828)));
    vlSelf->mkMac__DOT__y___05Fh84818 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84890)));
    vlSelf->mkMac__DOT__x___05Fh137292 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh161754) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh161565) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh161376) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d248) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh161187) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d421))));
    vlSelf->mkMac__DOT__y___05Fh85068 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84818));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
        = (vlSelf->mkMac__DOT__x___05Fh137292 ^ vlSelf->mkMac__DOT__y___05Fh137293);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
        = (vlSelf->mkMac__DOT__x___05Fh137292 & vlSelf->mkMac__DOT__y___05Fh137293);
    vlSelf->mkMac__DOT__y___05Fh84996 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85068)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq8 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq7 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh162912 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4184 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84996) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84818) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh84640) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh84462) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4182))));
    vlSelf->mkMac__DOT__y___05Fh85246 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84996));
    vlSelf->mkMac__DOT__y___05Fh162838 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162912)));
    vlSelf->mkMac__DOT__y___05Fh85174 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85246)));
    vlSelf->mkMac__DOT__y___05Fh163101 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh162838));
    vlSelf->mkMac__DOT__y___05Fh85424 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85174));
    vlSelf->mkMac__DOT__y___05Fh163027 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163101)));
    vlSelf->mkMac__DOT__y___05Fh85352 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85424)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d588 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163027) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh162838) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427))));
    vlSelf->mkMac__DOT__y___05Fh163290 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163027));
    vlSelf->mkMac__DOT__y___05Fh85602 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85352));
    vlSelf->mkMac__DOT__y___05Fh163216 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163290)));
    vlSelf->mkMac__DOT__y___05Fh85530 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85602)));
    vlSelf->mkMac__DOT__y___05Fh163479 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163216));
    vlSelf->mkMac__DOT__y___05Fh85780 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85530));
    vlSelf->mkMac__DOT__y___05Fh163405 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163479)));
    vlSelf->mkMac__DOT__y___05Fh85708 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4013 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85780)));
    vlSelf->mkMac__DOT__y___05Fh163668 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163405));
    vlSelf->mkMac__DOT__product___05Fh46801 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh85708) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh85530) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh85352) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4011) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh85174) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4184))));
    vlSelf->mkMac__DOT__y___05Fh163594 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163668)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4187 
        = ((4U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh46801
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4009);
    vlSelf->mkMac__DOT__y___05Fh163857 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163594));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4187 
           ^ vlSelf->mkMac__DOT__y___05Fh39231);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4187 
           & vlSelf->mkMac__DOT__y___05Fh39231);
    vlSelf->mkMac__DOT__y___05Fh163783 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163857)));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq82 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq81 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh86186 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d590 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163783) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163594) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh163405) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163216) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d588)))));
    vlSelf->mkMac__DOT__y___05Fh164046 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163783));
    vlSelf->mkMac__DOT__y___05Fh86114 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86186)));
    vlSelf->mkMac__DOT__y___05Fh163972 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164046)));
    vlSelf->mkMac__DOT__y___05Fh86364 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh86114));
    vlSelf->mkMac__DOT__y___05Fh164235 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh163972));
    vlSelf->mkMac__DOT__y___05Fh86292 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86364)));
    vlSelf->mkMac__DOT__y___05Fh164161 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164235)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4350 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86292) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86114) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189))));
    vlSelf->mkMac__DOT__y___05Fh86542 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh86292));
    vlSelf->mkMac__DOT__y___05Fh164424 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh164161));
    vlSelf->mkMac__DOT__y___05Fh86470 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86542)));
    vlSelf->mkMac__DOT__y___05Fh164350 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164424)));
    vlSelf->mkMac__DOT__y___05Fh86720 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh86470));
    vlSelf->mkMac__DOT__y___05Fh164613 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164350));
    vlSelf->mkMac__DOT__y___05Fh86648 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86720)));
    vlSelf->mkMac__DOT__y___05Fh164539 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164613)));
    vlSelf->mkMac__DOT__y___05Fh86898 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh86648));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d592 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh164539) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh164350) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh164161) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh163972) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d590)))));
    vlSelf->mkMac__DOT__y___05Fh164802 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164539));
    vlSelf->mkMac__DOT__y___05Fh86826 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86898)));
    vlSelf->mkMac__DOT__y___05Fh164728 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164802)));
    vlSelf->mkMac__DOT__y___05Fh87076 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh86826));
    vlSelf->mkMac__DOT__y___05Fh164991 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164728));
    vlSelf->mkMac__DOT__y___05Fh87004 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87076)));
    vlSelf->mkMac__DOT__y___05Fh164917 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164991)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4352 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh87004) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86826) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh86648) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86470) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4350)))));
    vlSelf->mkMac__DOT__y___05Fh87254 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh87004));
    vlSelf->mkMac__DOT__y___05Fh165180 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164917));
    vlSelf->mkMac__DOT__y___05Fh87182 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87254)));
    vlSelf->mkMac__DOT__y___05Fh165106 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165180)));
    vlSelf->mkMac__DOT__y___05Fh87432 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh87182));
    vlSelf->mkMac__DOT__y___05Fh165369 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh165106));
    vlSelf->mkMac__DOT__y___05Fh87360 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87432)));
    vlSelf->mkMac__DOT__y___05Fh165295 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165369)));
    vlSelf->mkMac__DOT__y___05Fh87610 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh87360));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d594 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh165295) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh165106) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh164917) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh164728) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d592)))));
    vlSelf->mkMac__DOT__y___05Fh165558 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh165295));
    vlSelf->mkMac__DOT__y___05Fh87538 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87610)));
    vlSelf->mkMac__DOT__y___05Fh165484 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165558)));
    vlSelf->mkMac__DOT__y___05Fh87788 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87538));
    vlSelf->mkMac__DOT__y___05Fh165747 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh165484));
    vlSelf->mkMac__DOT__y___05Fh87716 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87788)));
    vlSelf->mkMac__DOT__y___05Fh165673 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165747)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4354 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh87716) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh87538) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh87360) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh87182) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4352)))));
    vlSelf->mkMac__DOT__y___05Fh87966 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87716));
    vlSelf->mkMac__DOT__y___05Fh165936 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh165673));
    vlSelf->mkMac__DOT__y___05Fh87894 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87966)));
    vlSelf->mkMac__DOT__y___05Fh165862 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165936)));
    vlSelf->mkMac__DOT__y___05Fh88144 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87894));
    vlSelf->mkMac__DOT__y___05Fh166125 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh165862));
    vlSelf->mkMac__DOT__y___05Fh88072 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88144)));
    vlSelf->mkMac__DOT__y___05Fh166051 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166125)));
    vlSelf->mkMac__DOT__y___05Fh88322 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88072));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d596 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166051) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh165862) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh165673) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh165484) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d594)))));
    vlSelf->mkMac__DOT__y___05Fh166314 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166051));
    vlSelf->mkMac__DOT__y___05Fh88250 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88322)));
    vlSelf->mkMac__DOT__y___05Fh166240 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166314)));
    vlSelf->mkMac__DOT__y___05Fh88500 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88250));
    vlSelf->mkMac__DOT__y___05Fh166503 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166240));
    vlSelf->mkMac__DOT__y___05Fh88428 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88500)));
    vlSelf->mkMac__DOT__y___05Fh166429 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166503)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4356 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88428) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88250) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88072) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh87894) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4354)))));
    vlSelf->mkMac__DOT__y___05Fh88678 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88428));
    vlSelf->mkMac__DOT__y___05Fh166692 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166429));
    vlSelf->mkMac__DOT__y___05Fh88606 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88678)));
    vlSelf->mkMac__DOT__y___05Fh166618 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166692)));
    vlSelf->mkMac__DOT__y___05Fh88856 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88606));
    vlSelf->mkMac__DOT__y___05Fh166881 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166618));
    vlSelf->mkMac__DOT__y___05Fh88784 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88856)));
    vlSelf->mkMac__DOT__y___05Fh166807 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166881)));
    vlSelf->mkMac__DOT__y___05Fh89034 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88784));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d598 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166807) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166618) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh166429) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh166240) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d596))));
    vlSelf->mkMac__DOT__y___05Fh167070 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166807));
    vlSelf->mkMac__DOT__y___05Fh88962 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89034)));
    vlSelf->mkMac__DOT__y___05Fh166996 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167070)));
    vlSelf->mkMac__DOT__y___05Fh89212 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh88962));
    vlSelf->mkMac__DOT__y___05Fh167259 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh166996));
    vlSelf->mkMac__DOT__y___05Fh89140 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89212)));
    vlSelf->mkMac__DOT__y___05Fh167185 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167259)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4358 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89140) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88962) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh88784) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh88606) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4356)))));
    vlSelf->mkMac__DOT__y___05Fh89390 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89140));
    vlSelf->mkMac__DOT__y___05Fh167448 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167185));
    vlSelf->mkMac__DOT__y___05Fh89318 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89390)));
    vlSelf->mkMac__DOT__y___05Fh167374 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167448)));
    vlSelf->mkMac__DOT__y___05Fh89568 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89318));
    vlSelf->mkMac__DOT__y___05Fh167637 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167374));
    vlSelf->mkMac__DOT__y___05Fh89496 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89568)));
    vlSelf->mkMac__DOT__y___05Fh167563 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167637)));
    vlSelf->mkMac__DOT__y___05Fh89746 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89496));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d600 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh167563) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh167374) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh167185) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh166996) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d598))));
    vlSelf->mkMac__DOT__y___05Fh167826 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167563));
    vlSelf->mkMac__DOT__y___05Fh89674 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89746)));
    vlSelf->mkMac__DOT__y___05Fh167752 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167826)));
    vlSelf->mkMac__DOT__y___05Fh89924 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89674));
    vlSelf->mkMac__DOT__y___05Fh168015 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167752));
    vlSelf->mkMac__DOT__y___05Fh89852 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89924)));
    vlSelf->mkMac__DOT__y___05Fh167941 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168015)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4360 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89852) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89674) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh89496) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh89318) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4358))));
    vlSelf->mkMac__DOT__y___05Fh90102 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89852));
    vlSelf->mkMac__DOT__y___05Fh168204 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167941));
    vlSelf->mkMac__DOT__y___05Fh90030 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90102)));
    vlSelf->mkMac__DOT__y___05Fh168130 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168204)));
    vlSelf->mkMac__DOT__y___05Fh90280 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90030));
    vlSelf->mkMac__DOT__y___05Fh168393 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168130));
    vlSelf->mkMac__DOT__y___05Fh90208 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90280)));
    vlSelf->mkMac__DOT__y___05Fh168319 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d429 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168393)));
    vlSelf->mkMac__DOT__y___05Fh90458 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90208));
    vlSelf->mkMac__DOT__x___05Fh136022 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh168319) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh168130) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh167941) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d427) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh167752) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d600))));
    vlSelf->mkMac__DOT__y___05Fh90386 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90458)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
        = (vlSelf->mkMac__DOT__x___05Fh136022 ^ vlSelf->mkMac__DOT__y___05Fh136023);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
        = (vlSelf->mkMac__DOT__x___05Fh136022 & vlSelf->mkMac__DOT__y___05Fh136023);
    vlSelf->mkMac__DOT__y___05Fh90636 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90386));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq10 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq9 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh169477 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608));
    vlSelf->mkMac__DOT__y___05Fh90564 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90636)));
    vlSelf->mkMac__DOT__y___05Fh169403 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169477)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4362 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90564) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90386) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh90208) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh90030) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4360))));
    vlSelf->mkMac__DOT__y___05Fh90814 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90564));
    vlSelf->mkMac__DOT__y___05Fh169666 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh169403));
    vlSelf->mkMac__DOT__y___05Fh90742 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90814)));
    vlSelf->mkMac__DOT__y___05Fh169592 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169666)));
    vlSelf->mkMac__DOT__y___05Fh90992 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90742));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d767 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh169592) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh169403) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606))));
    vlSelf->mkMac__DOT__y___05Fh169855 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh169592));
    vlSelf->mkMac__DOT__y___05Fh90920 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90992)));
    vlSelf->mkMac__DOT__y___05Fh169781 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169855)));
    vlSelf->mkMac__DOT__y___05Fh91170 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90920));
    vlSelf->mkMac__DOT__y___05Fh170044 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh169781));
    vlSelf->mkMac__DOT__y___05Fh91098 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91170)));
    vlSelf->mkMac__DOT__y___05Fh169970 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170044)));
    vlSelf->mkMac__DOT__y___05Fh91348 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91098));
    vlSelf->mkMac__DOT__y___05Fh170233 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh169970));
    vlSelf->mkMac__DOT__y___05Fh91276 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4191 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91348)));
    vlSelf->mkMac__DOT__y___05Fh170159 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170233)));
    vlSelf->mkMac__DOT__product___05Fh39229 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91276) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh91098) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh90920) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4189) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh90742) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4362))));
    vlSelf->mkMac__DOT__y___05Fh170422 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170159));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4365 
        = ((8U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh39229
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4187);
    vlSelf->mkMac__DOT__y___05Fh170348 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170422)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4365 
           ^ vlSelf->mkMac__DOT__y___05Fh31659);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4365 
           & vlSelf->mkMac__DOT__y___05Fh31659);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d769 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170348) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170159) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh169970) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh169781) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d767)))));
    vlSelf->mkMac__DOT__y___05Fh170611 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170348));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq84 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq83 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh91754 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369));
    vlSelf->mkMac__DOT__y___05Fh170537 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170611)));
    vlSelf->mkMac__DOT__y___05Fh91682 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91754)));
    vlSelf->mkMac__DOT__y___05Fh170800 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170537));
    vlSelf->mkMac__DOT__y___05Fh91932 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91682));
    vlSelf->mkMac__DOT__y___05Fh170726 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170800)));
    vlSelf->mkMac__DOT__y___05Fh91860 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91932)));
    vlSelf->mkMac__DOT__y___05Fh170989 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh170726));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4528 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91860) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91682) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367))));
    vlSelf->mkMac__DOT__y___05Fh92110 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh91860));
    vlSelf->mkMac__DOT__y___05Fh170915 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170989)));
    vlSelf->mkMac__DOT__y___05Fh92038 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92110)));
    vlSelf->mkMac__DOT__y___05Fh171178 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170915));
    vlSelf->mkMac__DOT__y___05Fh92288 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92038));
    vlSelf->mkMac__DOT__y___05Fh171104 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171178)));
    vlSelf->mkMac__DOT__y___05Fh92216 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92288)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d771 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh171104) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh170915) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170726) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh170537) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d769)))));
    vlSelf->mkMac__DOT__y___05Fh171367 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171104));
    vlSelf->mkMac__DOT__y___05Fh92466 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92216));
    vlSelf->mkMac__DOT__y___05Fh171293 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171367)));
    vlSelf->mkMac__DOT__y___05Fh92394 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92466)));
    vlSelf->mkMac__DOT__y___05Fh171556 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171293));
    vlSelf->mkMac__DOT__y___05Fh92644 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92394));
    vlSelf->mkMac__DOT__y___05Fh171482 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171556)));
    vlSelf->mkMac__DOT__y___05Fh92572 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92644)));
    vlSelf->mkMac__DOT__y___05Fh171745 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171482));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4530 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92572) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92394) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh92216) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92038) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4528)))));
    vlSelf->mkMac__DOT__y___05Fh92822 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92572));
    vlSelf->mkMac__DOT__y___05Fh171671 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171745)));
    vlSelf->mkMac__DOT__y___05Fh92750 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92822)));
    vlSelf->mkMac__DOT__y___05Fh171934 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171671));
    vlSelf->mkMac__DOT__y___05Fh93000 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92750));
    vlSelf->mkMac__DOT__y___05Fh171860 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171934)));
    vlSelf->mkMac__DOT__y___05Fh92928 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93000)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d773 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh171860) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh171671) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh171482) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh171293) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d771)))));
    vlSelf->mkMac__DOT__y___05Fh172123 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171860));
    vlSelf->mkMac__DOT__y___05Fh93178 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh92928));
    vlSelf->mkMac__DOT__y___05Fh172049 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172123)));
    vlSelf->mkMac__DOT__y___05Fh93106 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93178)));
    vlSelf->mkMac__DOT__y___05Fh172312 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172049));
    vlSelf->mkMac__DOT__y___05Fh93356 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93106));
    vlSelf->mkMac__DOT__y___05Fh172238 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172312)));
    vlSelf->mkMac__DOT__y___05Fh93284 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93356)));
    vlSelf->mkMac__DOT__y___05Fh172501 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172238));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4532 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93284) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh93106) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92928) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh92750) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4530)))));
    vlSelf->mkMac__DOT__y___05Fh93534 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93284));
    vlSelf->mkMac__DOT__y___05Fh172427 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172501)));
    vlSelf->mkMac__DOT__y___05Fh93462 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93534)));
    vlSelf->mkMac__DOT__y___05Fh172690 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172427));
    vlSelf->mkMac__DOT__y___05Fh93712 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93462));
    vlSelf->mkMac__DOT__y___05Fh172616 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172690)));
    vlSelf->mkMac__DOT__y___05Fh93640 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93712)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d775 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh172616) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh172427) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh172238) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh172049) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d773)))));
    vlSelf->mkMac__DOT__y___05Fh172879 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172616));
    vlSelf->mkMac__DOT__y___05Fh93890 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93640));
    vlSelf->mkMac__DOT__y___05Fh172805 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172879)));
    vlSelf->mkMac__DOT__y___05Fh93818 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93890)));
    vlSelf->mkMac__DOT__y___05Fh173068 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172805));
    vlSelf->mkMac__DOT__y___05Fh94068 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93818));
    vlSelf->mkMac__DOT__y___05Fh172994 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173068)));
    vlSelf->mkMac__DOT__y___05Fh93996 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94068)));
    vlSelf->mkMac__DOT__y___05Fh173257 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh172994));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4534 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93996) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93818) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93640) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh93462) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4532)))));
    vlSelf->mkMac__DOT__y___05Fh94246 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93996));
    vlSelf->mkMac__DOT__y___05Fh173183 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173257)));
    vlSelf->mkMac__DOT__y___05Fh94174 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94246)));
    vlSelf->mkMac__DOT__y___05Fh173446 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh173183));
    vlSelf->mkMac__DOT__y___05Fh94424 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94174));
    vlSelf->mkMac__DOT__y___05Fh173372 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173446)));
    vlSelf->mkMac__DOT__y___05Fh94352 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94424)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d777 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173372) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173183) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh172994) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh172805) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d775))));
    vlSelf->mkMac__DOT__y___05Fh173635 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh173372));
    vlSelf->mkMac__DOT__y___05Fh94602 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94352));
    vlSelf->mkMac__DOT__y___05Fh173561 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173635)));
    vlSelf->mkMac__DOT__y___05Fh94530 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94602)));
    vlSelf->mkMac__DOT__y___05Fh173824 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh173561));
    vlSelf->mkMac__DOT__y___05Fh94780 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94530));
    vlSelf->mkMac__DOT__y___05Fh173750 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173824)));
    vlSelf->mkMac__DOT__y___05Fh94708 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94780)));
    vlSelf->mkMac__DOT__y___05Fh174013 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh173750));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4536 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94708) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94530) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh94352) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh94174) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4534)))));
    vlSelf->mkMac__DOT__y___05Fh94958 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94708));
    vlSelf->mkMac__DOT__y___05Fh173939 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174013)));
    vlSelf->mkMac__DOT__y___05Fh94886 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94958)));
    vlSelf->mkMac__DOT__y___05Fh174202 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh173939));
    vlSelf->mkMac__DOT__y___05Fh95136 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh94886));
    vlSelf->mkMac__DOT__y___05Fh174128 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174202)));
    vlSelf->mkMac__DOT__y___05Fh95064 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95136)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d779 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh174128) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173939) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh173750) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh173561) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d777))));
    vlSelf->mkMac__DOT__y___05Fh174391 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174128));
    vlSelf->mkMac__DOT__y___05Fh95314 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95064));
    vlSelf->mkMac__DOT__y___05Fh174317 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174391)));
    vlSelf->mkMac__DOT__y___05Fh95242 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95314)));
    vlSelf->mkMac__DOT__y___05Fh174580 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174317));
    vlSelf->mkMac__DOT__y___05Fh95492 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95242));
    vlSelf->mkMac__DOT__y___05Fh174506 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174580)));
    vlSelf->mkMac__DOT__y___05Fh95420 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95492)));
    vlSelf->mkMac__DOT__y___05Fh174769 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174506));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4538 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95420) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95242) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh95064) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh94886) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4536))));
    vlSelf->mkMac__DOT__y___05Fh95670 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95420));
    vlSelf->mkMac__DOT__y___05Fh174695 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174769)));
    vlSelf->mkMac__DOT__y___05Fh95598 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95670)));
    vlSelf->mkMac__DOT__y___05Fh174958 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174695));
    vlSelf->mkMac__DOT__y___05Fh95848 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95598));
    vlSelf->mkMac__DOT__y___05Fh174884 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d608 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174958)));
    vlSelf->mkMac__DOT__y___05Fh95776 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95848)));
    vlSelf->mkMac__DOT__x___05Fh134752 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh174884) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh174695) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh174506) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d606) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh174317) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d779))));
    vlSelf->mkMac__DOT__y___05Fh96026 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95776));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
        = (vlSelf->mkMac__DOT__x___05Fh134752 ^ vlSelf->mkMac__DOT__y___05Fh134753);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
        = (vlSelf->mkMac__DOT__x___05Fh134752 & vlSelf->mkMac__DOT__y___05Fh134753);
    vlSelf->mkMac__DOT__y___05Fh95954 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96026)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq12 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq11 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh176042 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787));
    vlSelf->mkMac__DOT__y___05Fh96204 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95954));
    vlSelf->mkMac__DOT__y___05Fh175968 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176042)));
    vlSelf->mkMac__DOT__y___05Fh96132 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96204)));
    vlSelf->mkMac__DOT__y___05Fh176231 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh175968));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4540 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh96132) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95954) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh95776) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh95598) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4538))));
    vlSelf->mkMac__DOT__y___05Fh96382 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96132));
    vlSelf->mkMac__DOT__y___05Fh176157 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176231)));
    vlSelf->mkMac__DOT__y___05Fh96310 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96382)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d946 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176157) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh175968) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785))));
    vlSelf->mkMac__DOT__y___05Fh176420 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh176157));
    vlSelf->mkMac__DOT__y___05Fh96560 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96310));
    vlSelf->mkMac__DOT__y___05Fh176346 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176420)));
    vlSelf->mkMac__DOT__y___05Fh96488 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96560)));
    vlSelf->mkMac__DOT__y___05Fh176609 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh176346));
    vlSelf->mkMac__DOT__y___05Fh96738 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96488));
    vlSelf->mkMac__DOT__y___05Fh176535 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176609)));
    vlSelf->mkMac__DOT__y___05Fh96666 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96738)));
    vlSelf->mkMac__DOT__y___05Fh176798 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh176535));
    vlSelf->mkMac__DOT__y___05Fh96916 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96666));
    vlSelf->mkMac__DOT__y___05Fh176724 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176798)));
    vlSelf->mkMac__DOT__y___05Fh96844 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4369 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96916)));
    vlSelf->mkMac__DOT__y___05Fh176987 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh176724));
    vlSelf->mkMac__DOT__product___05Fh31657 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh96844) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh96666) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh96488) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4367) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh96310) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4540))));
    vlSelf->mkMac__DOT__y___05Fh176913 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176987)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4543 
        = ((0x10U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh31657
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4365);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d948 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176913) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176724) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh176535) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176346) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d946)))));
    vlSelf->mkMac__DOT__y___05Fh177176 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh176913));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4543 
           ^ vlSelf->mkMac__DOT__y___05Fh24087);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4543 
           & vlSelf->mkMac__DOT__y___05Fh24087);
    vlSelf->mkMac__DOT__y___05Fh177102 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177176)));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq86 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq85 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh97322 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547));
    vlSelf->mkMac__DOT__y___05Fh177365 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh177102));
    vlSelf->mkMac__DOT__y___05Fh97250 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97322)));
    vlSelf->mkMac__DOT__y___05Fh177291 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177365)));
    vlSelf->mkMac__DOT__y___05Fh97500 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh97250));
    vlSelf->mkMac__DOT__y___05Fh177554 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh177291));
    vlSelf->mkMac__DOT__y___05Fh97428 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97500)));
    vlSelf->mkMac__DOT__y___05Fh177480 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177554)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4706 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97428) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97250) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545))));
    vlSelf->mkMac__DOT__y___05Fh97678 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh97428));
    vlSelf->mkMac__DOT__y___05Fh177743 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177480));
    vlSelf->mkMac__DOT__y___05Fh97606 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97678)));
    vlSelf->mkMac__DOT__y___05Fh177669 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177743)));
    vlSelf->mkMac__DOT__y___05Fh97856 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh97606));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d950 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh177669) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh177480) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh177291) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh177102) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d948)))));
    vlSelf->mkMac__DOT__y___05Fh177932 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177669));
    vlSelf->mkMac__DOT__y___05Fh97784 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97856)));
    vlSelf->mkMac__DOT__y___05Fh177858 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177932)));
    vlSelf->mkMac__DOT__y___05Fh98034 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh97784));
    vlSelf->mkMac__DOT__y___05Fh178121 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177858));
    vlSelf->mkMac__DOT__y___05Fh97962 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98034)));
    vlSelf->mkMac__DOT__y___05Fh178047 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178121)));
    vlSelf->mkMac__DOT__y___05Fh98212 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh97962));
    vlSelf->mkMac__DOT__y___05Fh178310 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178047));
    vlSelf->mkMac__DOT__y___05Fh98140 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98212)));
    vlSelf->mkMac__DOT__y___05Fh178236 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178310)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4708 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh98140) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97962) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh97784) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97606) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4706)))));
    vlSelf->mkMac__DOT__y___05Fh98390 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh98140));
    vlSelf->mkMac__DOT__y___05Fh178499 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178236));
    vlSelf->mkMac__DOT__y___05Fh98318 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98390)));
    vlSelf->mkMac__DOT__y___05Fh178425 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178499)));
    vlSelf->mkMac__DOT__y___05Fh98568 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh98318));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d952 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh178425) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh178236) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh178047) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh177858) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d950)))));
    vlSelf->mkMac__DOT__y___05Fh178688 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178425));
    vlSelf->mkMac__DOT__y___05Fh98496 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98568)));
    vlSelf->mkMac__DOT__y___05Fh178614 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178688)));
    vlSelf->mkMac__DOT__y___05Fh98746 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh98496));
    vlSelf->mkMac__DOT__y___05Fh178877 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178614));
    vlSelf->mkMac__DOT__y___05Fh98674 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98746)));
    vlSelf->mkMac__DOT__y___05Fh178803 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178877)));
    vlSelf->mkMac__DOT__y___05Fh98924 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98674));
    vlSelf->mkMac__DOT__y___05Fh179066 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178803));
    vlSelf->mkMac__DOT__y___05Fh98852 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98924)));
    vlSelf->mkMac__DOT__y___05Fh178992 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179066)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4710 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh98852) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh98674) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh98496) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh98318) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4708)))));
    vlSelf->mkMac__DOT__y___05Fh99102 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98852));
    vlSelf->mkMac__DOT__y___05Fh179255 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178992));
    vlSelf->mkMac__DOT__y___05Fh99030 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99102)));
    vlSelf->mkMac__DOT__y___05Fh179181 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179255)));
    vlSelf->mkMac__DOT__y___05Fh99280 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh99030));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d954 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179181) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh178992) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh178803) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh178614) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d952)))));
    vlSelf->mkMac__DOT__y___05Fh179444 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179181));
    vlSelf->mkMac__DOT__y___05Fh99208 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99280)));
    vlSelf->mkMac__DOT__y___05Fh179370 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179444)));
    vlSelf->mkMac__DOT__y___05Fh99458 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh99208));
    vlSelf->mkMac__DOT__y___05Fh179633 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179370));
    vlSelf->mkMac__DOT__y___05Fh99386 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99458)));
    vlSelf->mkMac__DOT__y___05Fh179559 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179633)));
    vlSelf->mkMac__DOT__y___05Fh99636 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh99386));
    vlSelf->mkMac__DOT__y___05Fh179822 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179559));
    vlSelf->mkMac__DOT__y___05Fh99564 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99636)));
    vlSelf->mkMac__DOT__y___05Fh179748 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179822)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4712 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99564) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99386) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99208) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh99030) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4710)))));
    vlSelf->mkMac__DOT__y___05Fh99814 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh99564));
    vlSelf->mkMac__DOT__y___05Fh180011 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179748));
    vlSelf->mkMac__DOT__y___05Fh99742 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99814)));
    vlSelf->mkMac__DOT__y___05Fh179937 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180011)));
    vlSelf->mkMac__DOT__y___05Fh99992 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh99742));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d956 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179937) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179748) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh179559) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh179370) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d954))));
    vlSelf->mkMac__DOT__y___05Fh180200 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh179937));
    vlSelf->mkMac__DOT__y___05Fh99920 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99992)));
    vlSelf->mkMac__DOT__y___05Fh180126 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180200)));
    vlSelf->mkMac__DOT__y___05Fh100170 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh99920));
    vlSelf->mkMac__DOT__y___05Fh180389 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180126));
    vlSelf->mkMac__DOT__y___05Fh100098 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100170)));
    vlSelf->mkMac__DOT__y___05Fh180315 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180389)));
    vlSelf->mkMac__DOT__y___05Fh100348 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100098));
    vlSelf->mkMac__DOT__y___05Fh180578 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180315));
    vlSelf->mkMac__DOT__y___05Fh100276 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100348)));
    vlSelf->mkMac__DOT__y___05Fh180504 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180578)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4714 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100276) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100098) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh99920) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh99742) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4712)))));
    vlSelf->mkMac__DOT__y___05Fh100526 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100276));
    vlSelf->mkMac__DOT__y___05Fh180767 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180504));
    vlSelf->mkMac__DOT__y___05Fh100454 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100526)));
    vlSelf->mkMac__DOT__y___05Fh180693 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180767)));
    vlSelf->mkMac__DOT__y___05Fh100704 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100454));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d958 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh180693) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh180504) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh180315) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh180126) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d956))));
    vlSelf->mkMac__DOT__y___05Fh180956 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180693));
    vlSelf->mkMac__DOT__y___05Fh100632 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100704)));
    vlSelf->mkMac__DOT__y___05Fh180882 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180956)));
    vlSelf->mkMac__DOT__y___05Fh100882 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100632));
    vlSelf->mkMac__DOT__y___05Fh181145 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180882));
    vlSelf->mkMac__DOT__y___05Fh100810 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100882)));
    vlSelf->mkMac__DOT__y___05Fh181071 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181145)));
    vlSelf->mkMac__DOT__y___05Fh101060 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100810));
    vlSelf->mkMac__DOT__y___05Fh181334 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181071));
    vlSelf->mkMac__DOT__y___05Fh100988 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101060)));
    vlSelf->mkMac__DOT__y___05Fh181260 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181334)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4716 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100988) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100810) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh100632) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh100454) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4714))));
    vlSelf->mkMac__DOT__y___05Fh101238 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100988));
    vlSelf->mkMac__DOT__y___05Fh181523 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181260));
    vlSelf->mkMac__DOT__y___05Fh101166 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101238)));
    vlSelf->mkMac__DOT__y___05Fh181449 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d787 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181523)));
    vlSelf->mkMac__DOT__y___05Fh101416 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101166));
    vlSelf->mkMac__DOT__x___05Fh133482 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh181449) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh181260) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh181071) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d785) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh180882) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d958))));
    vlSelf->mkMac__DOT__y___05Fh101344 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101416)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
        = (vlSelf->mkMac__DOT__x___05Fh133482 ^ vlSelf->mkMac__DOT__y___05Fh133483);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
        = (vlSelf->mkMac__DOT__x___05Fh133482 & vlSelf->mkMac__DOT__y___05Fh133483);
    vlSelf->mkMac__DOT__y___05Fh101594 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101344));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq14 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq13 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh182607 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966));
    vlSelf->mkMac__DOT__y___05Fh101522 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101594)));
    vlSelf->mkMac__DOT__y___05Fh182533 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182607)));
    vlSelf->mkMac__DOT__y___05Fh101772 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101522));
    vlSelf->mkMac__DOT__y___05Fh182796 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh182533));
    vlSelf->mkMac__DOT__y___05Fh101700 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101772)));
    vlSelf->mkMac__DOT__y___05Fh182722 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182796)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4718 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh101700) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh101522) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh101344) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh101166) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4716))));
    vlSelf->mkMac__DOT__y___05Fh101950 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101700));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1125 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh182722) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh182533) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964))));
    vlSelf->mkMac__DOT__y___05Fh182985 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh182722));
    vlSelf->mkMac__DOT__y___05Fh101878 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101950)));
    vlSelf->mkMac__DOT__y___05Fh182911 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182985)));
    vlSelf->mkMac__DOT__y___05Fh102128 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101878));
    vlSelf->mkMac__DOT__y___05Fh183174 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh182911));
    vlSelf->mkMac__DOT__y___05Fh102056 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102128)));
    vlSelf->mkMac__DOT__y___05Fh183100 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183174)));
    vlSelf->mkMac__DOT__y___05Fh102306 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102056));
    vlSelf->mkMac__DOT__y___05Fh183363 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183100));
    vlSelf->mkMac__DOT__y___05Fh102234 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102306)));
    vlSelf->mkMac__DOT__y___05Fh183289 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183363)));
    vlSelf->mkMac__DOT__y___05Fh102484 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102234));
    vlSelf->mkMac__DOT__y___05Fh183552 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183289));
    vlSelf->mkMac__DOT__y___05Fh102412 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4547 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102484)));
    vlSelf->mkMac__DOT__y___05Fh183478 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183552)));
    vlSelf->mkMac__DOT__product___05Fh24085 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102412) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh102234) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh102056) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4545) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh101878) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4718))));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1127 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183478) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183289) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh183100) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh182911) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1125)))));
    vlSelf->mkMac__DOT__y___05Fh183741 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183478));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4721 
        = ((0x20U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh24085
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4543);
    vlSelf->mkMac__DOT__y___05Fh183667 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183741)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4721 
           ^ vlSelf->mkMac__DOT__y___05Fh16515);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4721 
           & vlSelf->mkMac__DOT__y___05Fh16515);
    vlSelf->mkMac__DOT__y___05Fh183930 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183667));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq88 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq87 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh102890 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725));
    vlSelf->mkMac__DOT__y___05Fh183856 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183930)));
    vlSelf->mkMac__DOT__y___05Fh102818 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102890)));
    vlSelf->mkMac__DOT__y___05Fh184119 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh183856));
    vlSelf->mkMac__DOT__y___05Fh103068 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh102818));
    vlSelf->mkMac__DOT__y___05Fh184045 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184119)));
    vlSelf->mkMac__DOT__y___05Fh102996 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103068)));
    vlSelf->mkMac__DOT__y___05Fh184308 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184045));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4884 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102996) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102818) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723))));
    vlSelf->mkMac__DOT__y___05Fh103246 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh102996));
    vlSelf->mkMac__DOT__y___05Fh184234 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184308)));
    vlSelf->mkMac__DOT__y___05Fh103174 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103246)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1129 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184234) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh184045) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183856) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh183667) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1127)))));
    vlSelf->mkMac__DOT__y___05Fh184497 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184234));
    vlSelf->mkMac__DOT__y___05Fh103424 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh103174));
    vlSelf->mkMac__DOT__y___05Fh184423 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184497)));
    vlSelf->mkMac__DOT__y___05Fh103352 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103424)));
    vlSelf->mkMac__DOT__y___05Fh184686 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184423));
    vlSelf->mkMac__DOT__y___05Fh103602 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh103352));
    vlSelf->mkMac__DOT__y___05Fh184612 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184686)));
    vlSelf->mkMac__DOT__y___05Fh103530 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103602)));
    vlSelf->mkMac__DOT__y___05Fh184875 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184612));
    vlSelf->mkMac__DOT__y___05Fh103780 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh103530));
    vlSelf->mkMac__DOT__y___05Fh184801 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184875)));
    vlSelf->mkMac__DOT__y___05Fh103708 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103780)));
    vlSelf->mkMac__DOT__y___05Fh185064 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184801));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4886 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh103708) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh103530) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh103352) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh103174) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4884)))));
    vlSelf->mkMac__DOT__y___05Fh103958 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh103708));
    vlSelf->mkMac__DOT__y___05Fh184990 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185064)));
    vlSelf->mkMac__DOT__y___05Fh103886 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103958)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1131 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184990) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184801) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184612) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh184423) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1129)))));
    vlSelf->mkMac__DOT__y___05Fh185253 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184990));
    vlSelf->mkMac__DOT__y___05Fh104136 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh103886));
    vlSelf->mkMac__DOT__y___05Fh185179 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185253)));
    vlSelf->mkMac__DOT__y___05Fh104064 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104136)));
    vlSelf->mkMac__DOT__y___05Fh185442 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185179));
    vlSelf->mkMac__DOT__y___05Fh104314 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104064));
    vlSelf->mkMac__DOT__y___05Fh185368 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185442)));
    vlSelf->mkMac__DOT__y___05Fh104242 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104314)));
    vlSelf->mkMac__DOT__y___05Fh185631 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185368));
    vlSelf->mkMac__DOT__y___05Fh104492 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104242));
    vlSelf->mkMac__DOT__y___05Fh185557 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185631)));
    vlSelf->mkMac__DOT__y___05Fh104420 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104492)));
    vlSelf->mkMac__DOT__y___05Fh185820 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185557));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4888 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104420) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh104242) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104064) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh103886) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4886)))));
    vlSelf->mkMac__DOT__y___05Fh104670 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104420));
    vlSelf->mkMac__DOT__y___05Fh185746 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185820)));
    vlSelf->mkMac__DOT__y___05Fh104598 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104670)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1133 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh185746) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh185557) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh185368) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh185179) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1131)))));
    vlSelf->mkMac__DOT__y___05Fh186009 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185746));
    vlSelf->mkMac__DOT__y___05Fh104848 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104598));
    vlSelf->mkMac__DOT__y___05Fh185935 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186009)));
    vlSelf->mkMac__DOT__y___05Fh104776 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104848)));
    vlSelf->mkMac__DOT__y___05Fh186198 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh185935));
    vlSelf->mkMac__DOT__y___05Fh105026 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104776));
    vlSelf->mkMac__DOT__y___05Fh186124 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186198)));
    vlSelf->mkMac__DOT__y___05Fh104954 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105026)));
    vlSelf->mkMac__DOT__y___05Fh186387 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh186124));
    vlSelf->mkMac__DOT__y___05Fh105204 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104954));
    vlSelf->mkMac__DOT__y___05Fh186313 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186387)));
    vlSelf->mkMac__DOT__y___05Fh105132 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105204)));
    vlSelf->mkMac__DOT__y___05Fh186576 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh186313));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4890 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105132) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104954) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104776) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh104598) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4888)))));
    vlSelf->mkMac__DOT__y___05Fh105382 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105132));
    vlSelf->mkMac__DOT__y___05Fh186502 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186576)));
    vlSelf->mkMac__DOT__y___05Fh105310 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105382)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1135 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh186502) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh186313) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh186124) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh185935) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1133))));
    vlSelf->mkMac__DOT__y___05Fh186765 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh186502));
    vlSelf->mkMac__DOT__y___05Fh105560 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105310));
    vlSelf->mkMac__DOT__y___05Fh186691 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186765)));
    vlSelf->mkMac__DOT__y___05Fh105488 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105560)));
    vlSelf->mkMac__DOT__y___05Fh186954 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh186691));
    vlSelf->mkMac__DOT__y___05Fh105738 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105488));
    vlSelf->mkMac__DOT__y___05Fh186880 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186954)));
    vlSelf->mkMac__DOT__y___05Fh105666 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105738)));
    vlSelf->mkMac__DOT__y___05Fh187143 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh186880));
    vlSelf->mkMac__DOT__y___05Fh105916 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105666));
    vlSelf->mkMac__DOT__y___05Fh187069 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187143)));
    vlSelf->mkMac__DOT__y___05Fh105844 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105916)));
    vlSelf->mkMac__DOT__y___05Fh187332 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187069));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4892 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105844) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105666) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh105488) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh105310) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4890)))));
    vlSelf->mkMac__DOT__y___05Fh106094 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh105844));
    vlSelf->mkMac__DOT__y___05Fh187258 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187332)));
    vlSelf->mkMac__DOT__y___05Fh106022 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106094)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1137 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh187258) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh187069) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh186880) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh186691) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1135))));
    vlSelf->mkMac__DOT__y___05Fh187521 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187258));
    vlSelf->mkMac__DOT__y___05Fh106272 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106022));
    vlSelf->mkMac__DOT__y___05Fh187447 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187521)));
    vlSelf->mkMac__DOT__y___05Fh106200 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106272)));
    vlSelf->mkMac__DOT__y___05Fh187710 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187447));
    vlSelf->mkMac__DOT__y___05Fh106450 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106200));
    vlSelf->mkMac__DOT__y___05Fh187636 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187710)));
    vlSelf->mkMac__DOT__y___05Fh106378 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106450)));
    vlSelf->mkMac__DOT__y___05Fh187899 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187636));
    vlSelf->mkMac__DOT__y___05Fh106628 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106378));
    vlSelf->mkMac__DOT__y___05Fh187825 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187899)));
    vlSelf->mkMac__DOT__y___05Fh106556 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106628)));
    vlSelf->mkMac__DOT__y___05Fh188088 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187825));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4894 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106556) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106378) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh106200) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh106022) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4892))));
    vlSelf->mkMac__DOT__y___05Fh106806 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106556));
    vlSelf->mkMac__DOT__y___05Fh188014 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d966 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188088)));
    vlSelf->mkMac__DOT__y___05Fh106734 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106806)));
    vlSelf->mkMac__DOT__x___05Fh132212 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh188014) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh187825) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh187636) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d964) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh187447) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1137))));
    vlSelf->mkMac__DOT__y___05Fh106984 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106734));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
        = (vlSelf->mkMac__DOT__x___05Fh132212 ^ vlSelf->mkMac__DOT__y___05Fh132213);
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
        = (vlSelf->mkMac__DOT__x___05Fh132212 & vlSelf->mkMac__DOT__y___05Fh132213);
    vlSelf->mkMac__DOT__y___05Fh106912 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106984)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq16 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq15 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh189171 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143));
    vlSelf->mkMac__DOT__y___05Fh107162 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106912));
    vlSelf->mkMac__DOT__y___05Fh189097 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189171)));
    vlSelf->mkMac__DOT__y___05Fh107090 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107162)));
    vlSelf->mkMac__DOT__y___05Fh189360 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh189097));
    vlSelf->mkMac__DOT__y___05Fh107340 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107090));
    vlSelf->mkMac__DOT__y___05Fh189286 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189360)));
    vlSelf->mkMac__DOT__y___05Fh107268 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107340)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1215 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh189286) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh189097) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141))));
    vlSelf->mkMac__DOT__y___05Fh189549 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh189286));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4896 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107268) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107090) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh106912) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh106734) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4894))));
    vlSelf->mkMac__DOT__y___05Fh107518 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107268));
    vlSelf->mkMac__DOT__y___05Fh189475 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189549)));
    vlSelf->mkMac__DOT__y___05Fh107446 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107518)));
    vlSelf->mkMac__DOT__y___05Fh189738 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh189475));
    vlSelf->mkMac__DOT__y___05Fh107696 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107446));
    vlSelf->mkMac__DOT__y___05Fh189664 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189738)));
    vlSelf->mkMac__DOT__y___05Fh107624 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107696)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1216 
        = ((0x20U & ((0xffffffe0U & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh189664) 
                        << 5U))) | ((0x10U & ((0xfffffff0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh189475) 
                                                 << 4U))) 
                                    | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1215)));
    vlSelf->mkMac__DOT__y___05Fh189927 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh189664));
    vlSelf->mkMac__DOT__y___05Fh107874 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107624));
    vlSelf->mkMac__DOT__y___05Fh189853 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh189927)));
    vlSelf->mkMac__DOT__y___05Fh107802 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107874)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1202 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                  >> 6U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh189853)));
    vlSelf->mkMac__DOT__y___05Fh190116 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh189853));
    vlSelf->mkMac__DOT__y___05Fh108052 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107802));
    vlSelf->mkMac__DOT__y___05Fh190042 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190116)));
    vlSelf->mkMac__DOT__y___05Fh107980 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4725 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108052)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                  >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190042)));
    vlSelf->mkMac__DOT__y___05Fh190305 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh190042));
    vlSelf->mkMac__DOT__product___05Fh16513 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107980) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh107802) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh107624) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4723) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh107446) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4896))));
    if (vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203) {
        vlSelf->mkMac__DOT__IF_INV_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT___05FETC___05Fq22 = 0U;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq21 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT___05FETC___05Fq22 = 1U;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq21 = 0ULL;
    }
    mkMac__DOT____VdfgTmp_hbeb72a1d__0 = (((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1202) 
                                            << 6U) 
                                           | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1216)));
    vlSelf->mkMac__DOT__y___05Fh190231 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190305)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4899 
        = ((0x40U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh16513
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4721);
    mkMac__DOT____VdfgTmp_hd79aa637__0 = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1202) 
                                          & (0x40U 
                                             != (IData)(mkMac__DOT____VdfgTmp_hbeb72a1d__0)));
    vlSelf->mkMac__DOT__x___05Fh195960 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190231)));
    vlSelf->mkMac__DOT__y___05Fh190494 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh190231));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4899 
           ^ vlSelf->mkMac__DOT__y___05Fh8943);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
        = (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4899 
           & vlSelf->mkMac__DOT__y___05Fh8943);
    if (vlSelf->mkMac__DOT__x___05Fh195960) {
        vlSelf->mkMac__DOT__IF_INV_x95960_THEN_1_ELSE_0___05Fq26 = 0U;
        vlSelf->mkMac__DOT__IF_x95960_THEN_2_ELSE_0___05Fq25 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_x95960_THEN_1_ELSE_0___05Fq26 = 1U;
        vlSelf->mkMac__DOT__IF_x95960_THEN_2_ELSE_0___05Fq25 = 0ULL;
    }
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1325 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh195960) 
           ^ (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203));
    vlSelf->mkMac__DOT__y___05Fh196137 = ((IData)(vlSelf->mkMac__DOT__x___05Fh195960) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203));
    vlSelf->mkMac__DOT__y___05Fh190420 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190494)));
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq90 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_ETC___05Fq89 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh108458 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903));
    mkMac__DOT____VdfgTmp_hdf697176__0 = (1U ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203) 
                                                ^ (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1325)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1329 
        = ((~ (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203)) 
           & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1325));
    vlSelf->mkMac__DOT__x___05Fh214551 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190420)));
    vlSelf->mkMac__DOT__y___05Fh190683 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh190420));
    vlSelf->mkMac__DOT__y___05Fh108386 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108458)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq24 
        = ((IData)(mkMac__DOT____VdfgTmp_hdf697176__0)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq23 
        = ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1329)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh214728 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                                          & (IData)(vlSelf->mkMac__DOT__x___05Fh195960));
    vlSelf->mkMac__DOT__x___05Fh207973 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh196137));
    vlSelf->mkMac__DOT__y___05Fh196312 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196137));
    vlSelf->mkMac__DOT__y___05Fh190609 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190683)));
    vlSelf->mkMac__DOT__y___05Fh108636 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh108386));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1350 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh207973) 
             ^ (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1329)) 
            << 1U) | (IData)(mkMac__DOT____VdfgTmp_hdf697176__0));
    vlSelf->mkMac__DOT__y___05Fh208149 = ((IData)(vlSelf->mkMac__DOT__x___05Fh207973) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1329));
    vlSelf->mkMac__DOT__x___05Fh214727 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190609)));
    vlSelf->mkMac__DOT__y___05Fh190872 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190609));
    vlSelf->mkMac__DOT__y___05Fh108564 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108636)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1307 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh214728)) 
            << 2U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                        ^ (IData)(vlSelf->mkMac__DOT__x___05Fh195960)) 
                       << 1U) | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh195960)))));
    vlSelf->mkMac__DOT__y___05Fh214903 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214728));
    vlSelf->mkMac__DOT__x___05Fh208148 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh196312));
    vlSelf->mkMac__DOT__y___05Fh196487 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196312));
    vlSelf->mkMac__DOT__y___05Fh190798 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh190872)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5062 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh108564) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh108386) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901))));
    vlSelf->mkMac__DOT__y___05Fh108814 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh108564));
    vlSelf->mkMac__DOT__y___05Fh208324 = ((IData)(vlSelf->mkMac__DOT__x___05Fh208148) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh208149));
    vlSelf->mkMac__DOT__x___05Fh214902 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190798)));
    vlSelf->mkMac__DOT__y___05Fh191061 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190798));
    vlSelf->mkMac__DOT__y___05Fh108742 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108814)));
    vlSelf->mkMac__DOT__y___05Fh215078 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh214903));
    vlSelf->mkMac__DOT__x___05Fh208323 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh196487));
    vlSelf->mkMac__DOT__y___05Fh196662 = ((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196487));
    vlSelf->mkMac__DOT__y___05Fh190987 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191061)));
    vlSelf->mkMac__DOT__y___05Fh108992 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh108742));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1351 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh208323) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh208324)) 
            << 3U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh208148) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh208149)) 
                       << 2U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1350)));
    vlSelf->mkMac__DOT__y___05Fh208499 = ((IData)(vlSelf->mkMac__DOT__x___05Fh208323) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh208324));
    vlSelf->mkMac__DOT__x___05Fh215077 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh190987)));
    vlSelf->mkMac__DOT__y___05Fh191250 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh190987));
    vlSelf->mkMac__DOT__y___05Fh108920 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108992)));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1308 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh215078)) 
            << 4U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh214903)) 
                       << 3U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1307)));
    vlSelf->mkMac__DOT__y___05Fh215253 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh215078));
    vlSelf->mkMac__DOT__x___05Fh208498 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh196662));
    vlSelf->mkMac__DOT__y___05Fh196837 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196662));
    vlSelf->mkMac__DOT__y___05Fh191176 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191250)));
    vlSelf->mkMac__DOT__y___05Fh109170 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh108920));
    vlSelf->mkMac__DOT__y___05Fh208674 = ((IData)(vlSelf->mkMac__DOT__x___05Fh208498) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh208499));
    vlSelf->mkMac__DOT__x___05Fh215252 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh191176)));
    vlSelf->mkMac__DOT__y___05Fh191439 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh191176));
    vlSelf->mkMac__DOT__y___05Fh109098 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109170)));
    vlSelf->mkMac__DOT__y___05Fh215428 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh215253));
    vlSelf->mkMac__DOT__x___05Fh208673 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh196837));
    vlSelf->mkMac__DOT__y___05Fh197012 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh196837));
    vlSelf->mkMac__DOT__y___05Fh191365 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191439)));
    vlSelf->mkMac__DOT__y___05Fh109348 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109098));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1352 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh208673) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh208674)) 
            << 5U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh208498) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh208499)) 
                       << 4U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1351)));
    vlSelf->mkMac__DOT__y___05Fh208849 = ((IData)(vlSelf->mkMac__DOT__x___05Fh208673) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh208674));
    vlSelf->mkMac__DOT__y___05Fh191628 = ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh191365));
    vlSelf->mkMac__DOT__x___05Fh215427 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh191365)));
    vlSelf->mkMac__DOT__y___05Fh109276 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109348)));
    vlSelf->mkMac__DOT__y___05Fh191554 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1143 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh191628)));
    vlSelf->mkMac__DOT__y___05Fh215603 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh215428));
    vlSelf->mkMac__DOT__x___05Fh195887 = (((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                                            << 6U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
                                               << 5U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh195960) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203))))))));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1309 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh215428)) 
            << 6U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh215253)) 
                       << 5U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1308)));
    vlSelf->mkMac__DOT__x___05Fh214478 = (((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
                                           << 6U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh215252) 
                                            << 5U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh215077) 
                                               << 4U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh214902) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh214727) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh214551) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->mkMac__DOT__x___05Fh195960)))))));
    vlSelf->mkMac__DOT__x___05Fh208848 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh197012));
    vlSelf->mkMac__DOT__y___05Fh197187 = ((IData)(vlSelf->mkMac__DOT__x___05Fh215427) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh197012));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5064 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109276) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109098) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh108920) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh108742) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5062)))));
    vlSelf->mkMac__DOT__y___05Fh109526 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109276));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1201 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1141 
                  >> 0xfU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh191554)));
    vlSelf->mkMac__DOT__mantissa_extended___05Fh194794 
        = vlSelf->mkMac__DOT__x___05Fh195887;
    vlSelf->mkMac__DOT__mantissa_extended___05F_1___05Fh213463 
        = (((IData)(vlSelf->mkMac__DOT__y___05Fh215603) 
            << 7U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1309));
    vlSelf->mkMac__DOT__mantissa_extended___05Fh213396 
        = vlSelf->mkMac__DOT__x___05Fh214478;
    vlSelf->mkMac__DOT__y___05Fh209024 = ((IData)(vlSelf->mkMac__DOT__x___05Fh208848) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh208849));
    vlSelf->mkMac__DOT__y___05Fh109454 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109526)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1237 
        = (((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1201) 
            | ((IData)(mkMac__DOT____VdfgTmp_hd79aa637__0) 
               & (IData)(vlSelf->mkMac__DOT__y___05Fh197187)))
            ? 0x82U : 0x81U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq34 
        = (((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203) 
            & (0x80U != (((IData)(vlSelf->mkMac__DOT__x___05Fh195960) 
                          << 8U) | (IData)(mkMac__DOT____VdfgTmp_hbeb72a1d__0))))
            ? vlSelf->mkMac__DOT__mantissa_extended___05F_1___05Fh213463
            : vlSelf->mkMac__DOT__mantissa_extended___05Fh213396);
    vlSelf->mkMac__DOT__y___05Fh209199 = ((IData)(vlSelf->mkMac__DOT__y___05Fh197187) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh209024));
    vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1353 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh197187) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh209024)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh208848) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh208849)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1352)));
    vlSelf->mkMac__DOT__y___05Fh109704 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109454));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240 
        = ((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d56) 
           & (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1237));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238 
        = ((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d56) 
           ^ (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1237));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1358 
        = ((IData)(vlSelf->mkMac__DOT__y___05Fh197187)
            ? (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1353)
            : (((IData)(vlSelf->mkMac__DOT__x___05Fh208848) 
                << 7U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh208673) 
                           << 6U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh208498) 
                                      << 5U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh208323) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh208148) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh207973) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1325) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1203)))))))))));
    vlSelf->mkMac__DOT__y___05Fh109632 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109704)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_operan_ETC___05Fq19 
        = ((1U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240))
            ? 2ULL : 0ULL);
    if ((1U & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238))) {
        vlSelf->mkMac__DOT__IF_INV_IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_ETC___05Fq27 = 0ULL;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_ope_ETC___05Fq28 = 1U;
    } else {
        vlSelf->mkMac__DOT__IF_INV_IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_ETC___05Fq27 = 2ULL;
        vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_ope_ETC___05Fq28 = 0U;
    }
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1274 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 1U) ^ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240)));
    vlSelf->mkMac__DOT__y___05Fh201693 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240)));
    vlSelf->mkMac__DOT___theResult___05F_fst___05Fh194852 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh197187) 
             & (IData)(vlSelf->mkMac__DOT__y___05Fh209199)) 
            << 8U) | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1358));
    vlSelf->mkMac__DOT__y___05Fh109882 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh109632));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_operan_ETC___05Fq20 
        = vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BITS_14_TO_7_1_XOR_reg_ope_ETC___05Fq28;
    vlSelf->mkMac__DOT__x___05Fh222223 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1274)));
    vlSelf->mkMac__DOT__y___05Fh201622 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201693)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1365 
        = ((IData)(mkMac__DOT____VdfgTmp_hd79aa637__0)
            ? vlSelf->mkMac__DOT___theResult___05F_fst___05Fh194852
            : vlSelf->mkMac__DOT__mantissa_extended___05Fh194794);
    vlSelf->mkMac__DOT__y___05Fh109810 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109882)));
    vlSelf->mkMac__DOT__y___05Fh222400 = ((IData)(vlSelf->mkMac__DOT__x___05Fh222223) 
                                          & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238)));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1271 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 2U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh201622)));
    vlSelf->mkMac__DOT__y___05Fh201868 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh201622));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1367 
        = (0x7fU & ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg_ope_ETC___05F_d1201)
                     ? vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05Fq34
                     : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1365));
    vlSelf->mkMac__DOT__y___05Fh110060 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109810));
    vlSelf->mkMac__DOT__x___05Fh222399 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1271)));
    vlSelf->mkMac__DOT__y___05Fh201797 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh201868)));
    vlSelf->mkMac__DOT__x___05Fh220083 = ((IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_0_7_THEN_1_CONCAT_reg___05FETC___05F_d1367) 
                                          << 0x10U);
    vlSelf->mkMac__DOT__y___05Fh109988 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110060)));
    vlSelf->mkMac__DOT__y___05Fh222575 = ((IData)(vlSelf->mkMac__DOT__x___05Fh222399) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222400));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1270 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 3U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh201797)));
    vlSelf->mkMac__DOT__y___05Fh202043 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh201797));
    vlSelf->mkMac__DOT__mantissa_a___05Fh124571 = (0x800000U 
                                                   | vlSelf->mkMac__DOT__x___05Fh220083);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5066 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109988) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh109810) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109632) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh109454) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5064)))));
    vlSelf->mkMac__DOT__y___05Fh110238 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109988));
    vlSelf->mkMac__DOT__x___05Fh222574 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1270)));
    vlSelf->mkMac__DOT__y___05Fh201972 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202043)));
    vlSelf->mkMac__DOT__y___05Fh110166 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110238)));
    vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1398 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh222574) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh222575)) 
            << 3U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh222399) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh222400)) 
                       << 2U) | ((2U & (((IData)(vlSelf->mkMac__DOT__x___05Fh222223) 
                                         ^ (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238))) 
                                        << 1U)) | (1U 
                                                   & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238)))));
    vlSelf->mkMac__DOT__y___05Fh222750 = ((IData)(vlSelf->mkMac__DOT__x___05Fh222574) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222575));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1269 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 4U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh201972)));
    vlSelf->mkMac__DOT__y___05Fh202218 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh201972));
    vlSelf->mkMac__DOT__y___05Fh110416 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110166));
    vlSelf->mkMac__DOT__x___05Fh222749 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1269)));
    vlSelf->mkMac__DOT__y___05Fh202147 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202218)));
    vlSelf->mkMac__DOT__y___05Fh110344 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110416)));
    vlSelf->mkMac__DOT__y___05Fh222925 = ((IData)(vlSelf->mkMac__DOT__x___05Fh222749) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222750));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1268 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 5U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh202147)));
    vlSelf->mkMac__DOT__y___05Fh202393 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh202147));
    vlSelf->mkMac__DOT__y___05Fh110594 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110344));
    vlSelf->mkMac__DOT__x___05Fh222924 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1268)));
    vlSelf->mkMac__DOT__y___05Fh202322 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202393)));
    vlSelf->mkMac__DOT__y___05Fh110522 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110594)));
    vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1399 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh222924) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh222925)) 
            << 5U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh222749) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh222750)) 
                       << 4U) | (IData)(vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1398)));
    vlSelf->mkMac__DOT__y___05Fh223100 = ((IData)(vlSelf->mkMac__DOT__x___05Fh222924) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh222925));
    vlSelf->mkMac__DOT__y___05Fh202568 = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh202322));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1267 
        = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                  >> 6U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh202322)));
    vlSelf->mkMac__DOT__y___05Fh110772 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110522));
    vlSelf->mkMac__DOT__y___05Fh202497 = (1U & (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1240) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh202568)));
    vlSelf->mkMac__DOT__x___05Fh223099 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1267)));
    vlSelf->mkMac__DOT__y___05Fh110700 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110772)));
    vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1266 
        = (IData)((((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238) 
                    >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh202497)));
    vlSelf->mkMac__DOT__y___05Fh223275 = ((IData)(vlSelf->mkMac__DOT__x___05Fh223099) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223100));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5068 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110700) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110522) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110344) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh110166) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5066)))));
    vlSelf->mkMac__DOT__y___05Fh110950 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110700));
    vlSelf->mkMac__DOT__final_exponent___05Fh124620 
        = (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1266) 
            << 7U) | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1267) 
                       << 6U) | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1268) 
                                  << 5U) | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1269) 
                                             << 4U) 
                                            | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1270) 
                                                << 3U) 
                                               | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1271) 
                                                   << 2U) 
                                                  | (((IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1274) 
                                                      << 1U) 
                                                     | (1U 
                                                        & (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1238)))))))));
    vlSelf->mkMac__DOT__x___05Fh223274 = (1U & (~ (IData)(vlSelf->mkMac__DOT__reg_operand_a_BITS_14_TO_7_1_XOR_reg_operand_b_ETC___05F_d1266)));
    vlSelf->mkMac__DOT__y___05Fh110878 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110950)));
    vlSelf->mkMac__DOT__exponent_a___05Fh124568 = vlSelf->mkMac__DOT__final_exponent___05Fh124620;
    vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1400 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh223274) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh223275)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh223099) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh223100)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1399)));
    vlSelf->mkMac__DOT__y___05Fh227475 = ((IData)(vlSelf->mkMac__DOT__x___05Fh223274) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh223275));
    vlSelf->mkMac__DOT__y___05Fh111128 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh110878));
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d1285 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh124568 
           <= vlSelf->mkMac__DOT__exponent_b___05Fh124573);
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh124568 
           & vlSelf->mkMac__DOT__exponent_b_neg___05Fh124574);
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh124568 
           ^ vlSelf->mkMac__DOT__exponent_b_neg___05Fh124574);
    vlSelf->mkMac__DOT__exponent_a_neg___05Fh124569 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh227475)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_reg_operand_a_BITS_14_TO_7_1_XOR_reg_opera_ETC___05F_d1400)))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh111056 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111128)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05Fq39 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102)
            ? 2ULL : 0ULL);
    if ((1U & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100)) {
        vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05Fq40 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq41 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7___05FETC___05Fq42 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05Fq40 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq41 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7___05FETC___05Fq42 = 1U;
    }
    vlSelf->mkMac__DOT__x___05Fh274620 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 1U) 
                                                ^ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102));
    vlSelf->mkMac__DOT__y___05Fh266961 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102));
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
        = (vlSelf->mkMac__DOT__exponent_b___05Fh124573 
           & vlSelf->mkMac__DOT__exponent_a_neg___05Fh124569);
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
        = (vlSelf->mkMac__DOT__exponent_b___05Fh124573 
           ^ vlSelf->mkMac__DOT__exponent_a_neg___05Fh124569);
    vlSelf->mkMac__DOT__y___05Fh111306 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111056));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624 
        = (0xffU & ((IData)(vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d1285)
                     ? (vlSelf->mkMac__DOT__reg_operand_c 
                        >> 0x17U) : (IData)(vlSelf->mkMac__DOT__final_exponent___05Fh124620)));
    if ((1U & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624))) {
        vlSelf->mkMac__DOT__IF_IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_ETC___05Fq67 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_INV_IF_0_CONCAT_reg_operand_a_BITS_1_ETC___05Fq68 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq65 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7___05FETC___05Fq66 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_ETC___05Fq67 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_INV_IF_0_CONCAT_reg_operand_a_BITS_1_ETC___05Fq68 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq65 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7___05FETC___05Fq66 = 1U;
    }
    vlSelf->mkMac__DOT__selected_exponent___05Fh124582 
        = vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624;
    vlSelf->mkMac__DOT__x___05Fh338916 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 1U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64 
        = (0xffU & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624)));
    vlSelf->mkMac__DOT__y___05Fh333618 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624))));
    vlSelf->mkMac__DOT__x___05Fh274372 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh274620)));
    vlSelf->mkMac__DOT__y___05Fh266889 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh266961)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_28_ETC___05Fq29 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415)
            ? 2ULL : 0ULL);
    if ((1U & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413)) {
        vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_28_ETC___05Fq30 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_ETC___05Fq31 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_ETC___05Fq32 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_28_ETC___05Fq30 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_ETC___05Fq31 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_c_BITS_30_TO_23_ETC___05Fq32 = 1U;
    }
    vlSelf->mkMac__DOT__x___05Fh241694 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 1U) 
                                                ^ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415));
    vlSelf->mkMac__DOT__y___05Fh227946 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415));
    vlSelf->mkMac__DOT__y___05Fh111234 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111306)));
    vlSelf->mkMac__DOT__y___05Fh339093 = ((~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624)) 
                                          & (IData)(vlSelf->mkMac__DOT__x___05Fh338916));
    vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7___05FETC___05Fq69 
        = ((1U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh345681 = (1U & (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624)));
    vlSelf->mkMac__DOT__x___05Fh339092 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh333618)));
    vlSelf->mkMac__DOT__y___05Fh333793 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh333618));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2387 
        = (1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh274372) 
                 ^ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100));
    vlSelf->mkMac__DOT__y___05Fh274621 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274372) 
                                          & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100);
    vlSelf->mkMac__DOT__x___05Fh274797 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh266889)));
    vlSelf->mkMac__DOT__y___05Fh267139 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh266889));
    vlSelf->mkMac__DOT__x___05Fh241446 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh241694)));
    vlSelf->mkMac__DOT__y___05Fh227874 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh227946)));
    vlSelf->mkMac__DOT__y___05Fh111484 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111234));
    vlSelf->mkMac__DOT__y___05Fh345609 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh345681)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3673 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh339092) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339093)) 
            << 2U) | ((2U & (((~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624)) 
                              ^ (IData)(vlSelf->mkMac__DOT__x___05Fh338916)) 
                             << 1U)) | (1U & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624))));
    vlSelf->mkMac__DOT__y___05Fh339268 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339092) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339093));
    vlSelf->mkMac__DOT__x___05Fh339267 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh333793)));
    vlSelf->mkMac__DOT__y___05Fh333968 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh333793));
    vlSelf->mkMac__DOT__y___05Fh274549 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274620) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh274621));
    vlSelf->mkMac__DOT__x___05Fh274548 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh274797)));
    vlSelf->mkMac__DOT__y___05Fh267067 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh267139)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1699 
        = (1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh241446) 
                 ^ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413));
    vlSelf->mkMac__DOT__y___05Fh241695 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241446) 
                                          & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413);
    vlSelf->mkMac__DOT__x___05Fh241871 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh227874)));
    vlSelf->mkMac__DOT__y___05Fh228124 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh227874));
    vlSelf->mkMac__DOT__y___05Fh111412 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111484)));
    vlSelf->mkMac__DOT__y___05Fh345858 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh345609));
    vlSelf->mkMac__DOT__y___05Fh339443 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339267) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339268));
    vlSelf->mkMac__DOT__x___05Fh339442 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh333968)));
    vlSelf->mkMac__DOT__y___05Fh334143 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh333968));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2384 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh274548) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274549));
    vlSelf->mkMac__DOT__y___05Fh274798 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274548) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274549));
    vlSelf->mkMac__DOT__x___05Fh274974 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267067)));
    vlSelf->mkMac__DOT__y___05Fh267317 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267067));
    vlSelf->mkMac__DOT__y___05Fh241623 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241694) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh241695));
    vlSelf->mkMac__DOT__x___05Fh241622 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh241871)));
    vlSelf->mkMac__DOT__y___05Fh228052 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh228124)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5070 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111412) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111234) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh111056) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh110878) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5068)))));
    vlSelf->mkMac__DOT__y___05Fh111662 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111412));
    vlSelf->mkMac__DOT__y___05Fh345786 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh345858)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3674 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh339442) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339443)) 
            << 4U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh339267) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339268)) 
                       << 3U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3673)));
    vlSelf->mkMac__DOT__y___05Fh339618 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339442) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339443));
    vlSelf->mkMac__DOT__x___05Fh339617 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh334143)));
    vlSelf->mkMac__DOT__y___05Fh334318 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh334143));
    vlSelf->mkMac__DOT__y___05Fh274726 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274797) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh274798));
    vlSelf->mkMac__DOT__x___05Fh274725 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh274974)));
    vlSelf->mkMac__DOT__y___05Fh267245 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh267317)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1696 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh241622) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh241623));
    vlSelf->mkMac__DOT__y___05Fh241872 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241622) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh241623));
    vlSelf->mkMac__DOT__x___05Fh242048 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228052)));
    vlSelf->mkMac__DOT__y___05Fh228302 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228052));
    vlSelf->mkMac__DOT__y___05Fh111590 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111662)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3721 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh345786) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh345609) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                              << 1U))) 
                                    | (1U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)))));
    vlSelf->mkMac__DOT__y___05Fh346035 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh345786));
    vlSelf->mkMac__DOT__y___05Fh339793 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339617) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339618));
    vlSelf->mkMac__DOT__x___05Fh339792 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh334318)));
    vlSelf->mkMac__DOT__y___05Fh334493 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh334318));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2383 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh274725) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274726));
    vlSelf->mkMac__DOT__y___05Fh274975 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274725) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274726));
    vlSelf->mkMac__DOT__x___05Fh275151 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267245)));
    vlSelf->mkMac__DOT__y___05Fh267495 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267245));
    vlSelf->mkMac__DOT__y___05Fh241800 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241871) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh241872));
    vlSelf->mkMac__DOT__x___05Fh241799 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242048)));
    vlSelf->mkMac__DOT__y___05Fh228230 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh228302)));
    vlSelf->mkMac__DOT__y___05Fh111840 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111590));
    vlSelf->mkMac__DOT__y___05Fh345963 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh346035)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3675 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh339792) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339793)) 
            << 6U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh339617) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339618)) 
                       << 5U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3674)));
    vlSelf->mkMac__DOT__y___05Fh339968 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339792) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339793));
    vlSelf->mkMac__DOT__y___05Fh334668 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh334493));
    vlSelf->mkMac__DOT__x___05Fh339967 = (IData)((((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSelf->mkMac__DOT__y___05Fh334493)));
    vlSelf->mkMac__DOT__y___05Fh274903 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274974) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh274975));
    mkMac__DOT____VdfgTmp_h5dbacce7__0 = (((IData)(vlSelf->mkMac__DOT__x___05Fh275151) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh274974) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh274797) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh274620) 
                                                  << 1U) 
                                                 | (1U 
                                                    & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100)))));
    vlSelf->mkMac__DOT__x___05Fh274902 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh275151)));
    vlSelf->mkMac__DOT__y___05Fh267423 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh267495)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1695 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh241799) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh241800));
    vlSelf->mkMac__DOT__y___05Fh242049 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241799) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh241800));
    vlSelf->mkMac__DOT__x___05Fh242225 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228230)));
    vlSelf->mkMac__DOT__y___05Fh228480 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228230));
    vlSelf->mkMac__DOT__y___05Fh111768 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111840)));
    vlSelf->mkMac__DOT__y___05Fh346212 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh345963));
    vlSelf->mkMac__DOT__y___05Fh340143 = ((IData)(vlSelf->mkMac__DOT__x___05Fh339967) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh339968));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_BI_ETC___05F_d2127 
        = (1U & (vlSelf->mkMac__DOT__mantissa_b___05Fh124576 
                 >> (IData)(mkMac__DOT____VdfgTmp_h5dbacce7__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2382 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh274902) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274903));
    vlSelf->mkMac__DOT__y___05Fh275152 = ((IData)(vlSelf->mkMac__DOT__x___05Fh274902) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274903));
    vlSelf->mkMac__DOT__x___05Fh275328 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267423)));
    vlSelf->mkMac__DOT__y___05Fh267673 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267423));
    vlSelf->mkMac__DOT__y___05Fh241977 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242048) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242049));
    mkMac__DOT____VdfgTmp_h37ed68e5__0 = (((IData)(vlSelf->mkMac__DOT__x___05Fh242225) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh242048) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh241871) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh241694) 
                                                  << 1U) 
                                                 | (1U 
                                                    & vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413)))));
    vlSelf->mkMac__DOT__x___05Fh241976 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242225)));
    vlSelf->mkMac__DOT__y___05Fh228408 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh228480)));
    vlSelf->mkMac__DOT__y___05Fh112018 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111768));
    vlSelf->mkMac__DOT__y___05Fh346140 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh346212)));
    vlSelf->mkMac__DOT__y___05Fh340318 = ((IData)(vlSelf->mkMac__DOT__y___05Fh334668) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh340143));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3676 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh334668) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh340143)) 
            << 8U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh339967) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh339968)) 
                       << 7U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3675)));
    mkMac__DOT____VdfgTmp_hd17fc4c4__0 = (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2382) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2383) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2384) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2387) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100))))));
    vlSelf->mkMac__DOT__y___05Fh275080 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275151) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh275152));
    vlSelf->mkMac__DOT__x___05Fh275079 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh275328)));
    vlSelf->mkMac__DOT__y___05Fh267601 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh267673)));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1440 
        = (1U & (vlSelf->mkMac__DOT__mantissa_a___05Fh124571 
                 >> (IData)(mkMac__DOT____VdfgTmp_h37ed68e5__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1694 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh241976) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh241977));
    vlSelf->mkMac__DOT__y___05Fh242226 = ((IData)(vlSelf->mkMac__DOT__x___05Fh241976) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh241977));
    vlSelf->mkMac__DOT__x___05Fh242402 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228408)));
    vlSelf->mkMac__DOT__y___05Fh228658 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228408));
    vlSelf->mkMac__DOT__y___05Fh111946 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112018)));
    vlSelf->mkMac__DOT__y___05Fh346389 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh346140));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_BI_ETC___05F_d2561 
        = (1U & (vlSelf->mkMac__DOT__mantissa_b___05Fh124576 
                 >> (IData)(mkMac__DOT____VdfgTmp_hd17fc4c4__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2393 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh275079) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275080)) 
            << 5U) | (IData)(mkMac__DOT____VdfgTmp_hd17fc4c4__0));
    vlSelf->mkMac__DOT__y___05Fh275329 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275079) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275080));
    vlSelf->mkMac__DOT__x___05Fh275505 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267601)));
    vlSelf->mkMac__DOT__y___05Fh267851 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267601));
    mkMac__DOT____VdfgTmp_h0a654fb2__0 = (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1694) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1695) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1696) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1699) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413))))));
    vlSelf->mkMac__DOT__y___05Fh242154 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242225) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242226));
    vlSelf->mkMac__DOT__x___05Fh242153 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242402)));
    vlSelf->mkMac__DOT__y___05Fh228586 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh228658)));
    vlSelf->mkMac__DOT__y___05Fh112196 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111946));
    vlSelf->mkMac__DOT__y___05Fh346317 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh346389)));
    vlSelf->mkMac__DOT__y___05Fh285458 = vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_BI_ETC___05F_d2561;
    vlSelf->mkMac__DOT__y___05Fh275257 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275328) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh275329));
    vlSelf->mkMac__DOT__x___05Fh275256 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh275505)));
    vlSelf->mkMac__DOT__y___05Fh267779 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh267851)));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1873 
        = (1U & (vlSelf->mkMac__DOT__mantissa_a___05Fh124571 
                 >> (IData)(mkMac__DOT____VdfgTmp_h0a654fb2__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1705 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh242153) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh242154)) 
            << 5U) | (IData)(mkMac__DOT____VdfgTmp_h0a654fb2__0));
    vlSelf->mkMac__DOT__y___05Fh242403 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242153) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh242154));
    vlSelf->mkMac__DOT__x___05Fh242579 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228586)));
    vlSelf->mkMac__DOT__y___05Fh228836 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228586));
    vlSelf->mkMac__DOT__y___05Fh112124 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112196)));
    vlSelf->mkMac__DOT__y___05Fh346566 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh346317));
    vlSelf->mkMac__DOT__y___05Fh275506 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275256) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275257));
    vlSelf->mkMac__DOT__x___05Fh275682 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267779)));
    vlSelf->mkMac__DOT__y___05Fh268029 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267779));
    vlSelf->mkMac__DOT__y___05Fh252532 = vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1873;
    vlSelf->mkMac__DOT__y___05Fh242331 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242402) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242403));
    vlSelf->mkMac__DOT__x___05Fh242330 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242579)));
    vlSelf->mkMac__DOT__y___05Fh228764 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh228836)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5072 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112124) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111946) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh111768) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh111590) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5070))));
    vlSelf->mkMac__DOT__y___05Fh112374 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112124));
    vlSelf->mkMac__DOT__y___05Fh346494 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh346566)));
    vlSelf->mkMac__DOT__y___05Fh275434 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275505) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh275506));
    vlSelf->mkMac__DOT__x___05Fh275433 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh275682)));
    vlSelf->mkMac__DOT__y___05Fh267957 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268029)));
    vlSelf->mkMac__DOT__y___05Fh242580 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242330) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh242331));
    vlSelf->mkMac__DOT__x___05Fh242756 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228764)));
    vlSelf->mkMac__DOT__y___05Fh229014 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228764));
    vlSelf->mkMac__DOT__y___05Fh112302 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112374)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3723 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh346494))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh346317) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh346140) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh345963) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3721)))));
    vlSelf->mkMac__DOT__y___05Fh346743 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05Fq64) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh346494));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2394 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh275433) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275434)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh275256) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275257)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2393)));
    vlSelf->mkMac__DOT__y___05Fh275683 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275433) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275434));
    vlSelf->mkMac__DOT__x___05Fh275859 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh267957)));
    vlSelf->mkMac__DOT__y___05Fh268207 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh267957));
    vlSelf->mkMac__DOT__y___05Fh242508 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242579) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242580));
    vlSelf->mkMac__DOT__x___05Fh242507 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242756)));
    vlSelf->mkMac__DOT__y___05Fh228942 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229014)));
    vlSelf->mkMac__DOT__y___05Fh112552 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112302));
    vlSelf->mkMac__DOT__y___05Fh350742 = (IData)((((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d3624) 
                                                   >> 7U) 
                                                  | (IData)(vlSelf->mkMac__DOT__y___05Fh346743)));
    vlSelf->mkMac__DOT__y___05Fh275611 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275682) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh275683));
    vlSelf->mkMac__DOT__x___05Fh275610 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh275859)));
    vlSelf->mkMac__DOT__y___05Fh268135 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268207)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1706 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh242507) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh242508)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh242330) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh242331)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1705)));
    vlSelf->mkMac__DOT__y___05Fh242757 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242507) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh242508));
    vlSelf->mkMac__DOT__x___05Fh242933 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh228942)));
    vlSelf->mkMac__DOT__y___05Fh229192 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh228942));
    vlSelf->mkMac__DOT__y___05Fh112480 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112552)));
    vlSelf->mkMac__DOT__selected_exponent___05F_1___05Fh344366 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh350742)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3723)))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh275860 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275610) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275611));
    vlSelf->mkMac__DOT__x___05Fh276036 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh268135)));
    vlSelf->mkMac__DOT__y___05Fh268385 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh268135));
    vlSelf->mkMac__DOT__y___05Fh242685 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242756) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242757));
    vlSelf->mkMac__DOT__x___05Fh242684 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh242933)));
    vlSelf->mkMac__DOT__y___05Fh229120 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229192)));
    vlSelf->mkMac__DOT__y___05Fh112730 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112480));
    vlSelf->mkMac__DOT__y___05Fh275788 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275859) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh275860));
    vlSelf->mkMac__DOT__x___05Fh275787 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276036)));
    vlSelf->mkMac__DOT__y___05Fh268313 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268385)));
    vlSelf->mkMac__DOT__y___05Fh242934 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242684) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh242685));
    vlSelf->mkMac__DOT__x___05Fh243110 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh229120)));
    vlSelf->mkMac__DOT__y___05Fh229370 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh229120));
    vlSelf->mkMac__DOT__y___05Fh112658 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112730)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2395 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh275787) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275788)) 
            << 9U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh275610) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275611)) 
                       << 8U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2394)));
    vlSelf->mkMac__DOT__y___05Fh276037 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275787) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275788));
    vlSelf->mkMac__DOT__x___05Fh276213 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh268313)));
    vlSelf->mkMac__DOT__y___05Fh268563 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh268313));
    vlSelf->mkMac__DOT__y___05Fh242862 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242933) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh242934));
    vlSelf->mkMac__DOT__x___05Fh242861 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243110)));
    vlSelf->mkMac__DOT__y___05Fh229298 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229370)));
    vlSelf->mkMac__DOT__y___05Fh112908 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112658));
    vlSelf->mkMac__DOT__y___05Fh275965 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276036) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276037));
    vlSelf->mkMac__DOT__x___05Fh275964 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276213)));
    vlSelf->mkMac__DOT__y___05Fh268491 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268563)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1707 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh242861) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh242862)) 
            << 9U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh242684) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh242685)) 
                       << 8U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1706)));
    vlSelf->mkMac__DOT__y___05Fh243111 = ((IData)(vlSelf->mkMac__DOT__x___05Fh242861) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh242862));
    vlSelf->mkMac__DOT__x___05Fh243287 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh229298)));
    vlSelf->mkMac__DOT__y___05Fh229548 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh229298));
    vlSelf->mkMac__DOT__y___05Fh112836 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112908)));
    vlSelf->mkMac__DOT__y___05Fh276214 = ((IData)(vlSelf->mkMac__DOT__x___05Fh275964) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275965));
    vlSelf->mkMac__DOT__x___05Fh276390 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh268491)));
    vlSelf->mkMac__DOT__y___05Fh268741 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh268491));
    vlSelf->mkMac__DOT__y___05Fh243039 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243110) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243111));
    vlSelf->mkMac__DOT__x___05Fh243038 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243287)));
    vlSelf->mkMac__DOT__y___05Fh229476 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229548)));
    vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5074 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112836) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112658) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh112480) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh112302) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5072))));
    vlSelf->mkMac__DOT__y___05Fh113086 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112836));
    vlSelf->mkMac__DOT__y___05Fh276142 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276213) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276214));
    vlSelf->mkMac__DOT__x___05Fh276141 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276390)));
    vlSelf->mkMac__DOT__y___05Fh268669 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268741)));
    vlSelf->mkMac__DOT__y___05Fh243288 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243038) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243039));
    vlSelf->mkMac__DOT__x___05Fh243464 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh229476)));
    vlSelf->mkMac__DOT__y___05Fh229726 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh229476));
    vlSelf->mkMac__DOT__y___05Fh113014 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113086)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2396 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh276141) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh276142)) 
            << 0xbU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh275964) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275965)) 
                         << 0xaU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2395)));
    vlSelf->mkMac__DOT__y___05Fh276391 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276141) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh276142));
    vlSelf->mkMac__DOT__x___05Fh276567 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh268669)));
    vlSelf->mkMac__DOT__y___05Fh268919 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh268669));
    vlSelf->mkMac__DOT__y___05Fh243216 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243287) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243288));
    vlSelf->mkMac__DOT__x___05Fh243215 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243464)));
    vlSelf->mkMac__DOT__y___05Fh229654 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229726)));
    vlSelf->mkMac__DOT__y___05Fh113264 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113014));
    vlSelf->mkMac__DOT__y___05Fh276319 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276390) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276391));
    vlSelf->mkMac__DOT__x___05Fh276318 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276567)));
    vlSelf->mkMac__DOT__y___05Fh268847 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh268919)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1708 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh243215) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243216)) 
            << 0xbU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh243038) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243039)) 
                         << 0xaU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1707)));
    vlSelf->mkMac__DOT__y___05Fh243465 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243215) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243216));
    vlSelf->mkMac__DOT__x___05Fh243641 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh229654)));
    vlSelf->mkMac__DOT__y___05Fh229904 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh229654));
    vlSelf->mkMac__DOT__y___05Fh113192 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113264)));
    vlSelf->mkMac__DOT__y___05Fh276568 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276318) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh276319));
    vlSelf->mkMac__DOT__x___05Fh276744 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh268847)));
    vlSelf->mkMac__DOT__y___05Fh269097 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh268847));
    vlSelf->mkMac__DOT__y___05Fh243393 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243464) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243465));
    vlSelf->mkMac__DOT__x___05Fh243392 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243641)));
    vlSelf->mkMac__DOT__y___05Fh229832 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh229904)));
    vlSelf->mkMac__DOT__y___05Fh113442 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113192));
    vlSelf->mkMac__DOT__y___05Fh276496 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276567) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276568));
    vlSelf->mkMac__DOT__x___05Fh276495 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276744)));
    vlSelf->mkMac__DOT__y___05Fh269025 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269097)));
    vlSelf->mkMac__DOT__y___05Fh243642 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243392) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243393));
    vlSelf->mkMac__DOT__x___05Fh243818 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh229832)));
    vlSelf->mkMac__DOT__y___05Fh230082 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh229832));
    vlSelf->mkMac__DOT__y___05Fh113370 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113442)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2397 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh276495) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh276496)) 
            << 0xdU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh276318) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh276319)) 
                         << 0xcU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2396)));
    vlSelf->mkMac__DOT__y___05Fh276745 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276495) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh276496));
    vlSelf->mkMac__DOT__x___05Fh276921 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269025)));
    vlSelf->mkMac__DOT__y___05Fh269275 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269025));
    vlSelf->mkMac__DOT__y___05Fh243570 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243641) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243642));
    vlSelf->mkMac__DOT__x___05Fh243569 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243818)));
    vlSelf->mkMac__DOT__y___05Fh230010 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230082)));
    vlSelf->mkMac__DOT__y___05Fh113620 = ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113370));
    vlSelf->mkMac__DOT__y___05Fh276673 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276744) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276745));
    vlSelf->mkMac__DOT__x___05Fh276672 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh276921)));
    vlSelf->mkMac__DOT__y___05Fh269203 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269275)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1709 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh243569) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243570)) 
            << 0xdU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh243392) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243393)) 
                         << 0xcU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1708)));
    vlSelf->mkMac__DOT__y___05Fh243819 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243569) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243570));
    vlSelf->mkMac__DOT__x___05Fh243995 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230010)));
    vlSelf->mkMac__DOT__y___05Fh230260 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230010));
    vlSelf->mkMac__DOT__y___05Fh113548 = (1U & ((vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4903 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113620)));
    vlSelf->mkMac__DOT__y___05Fh276922 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276672) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh276673));
    vlSelf->mkMac__DOT__x___05Fh277098 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0xfU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269203)));
    vlSelf->mkMac__DOT__y___05Fh269453 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269203));
    vlSelf->mkMac__DOT__y___05Fh243747 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243818) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243819));
    vlSelf->mkMac__DOT__x___05Fh243746 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh243995)));
    vlSelf->mkMac__DOT__y___05Fh230188 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230260)));
    vlSelf->mkMac__DOT__product___05Fh8941 = (((0x80000000U 
                                                & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh113548) 
                                                  << 0x1fU)) 
                                              | ((0x40000000U 
                                                  & ((0xc0000000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh113370) 
                                                      << 0x1eU))) 
                                                 | ((0x20000000U 
                                                     & ((0xe0000000U 
                                                         & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                        ^ 
                                                        ((IData)(vlSelf->mkMac__DOT__y___05Fh113192) 
                                                         << 0x1dU))) 
                                                    | ((0x10000000U 
                                                        & ((0xf0000000U 
                                                            & vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4901) 
                                                           ^ 
                                                           ((IData)(vlSelf->mkMac__DOT__y___05Fh113014) 
                                                            << 0x1cU))) 
                                                       | vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d5074))));
    vlSelf->mkMac__DOT__y___05Fh276850 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276921) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh276922));
    vlSelf->mkMac__DOT__x___05Fh276849 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277098)));
    vlSelf->mkMac__DOT__y___05Fh269381 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269453)));
    vlSelf->mkMac__DOT__y___05Fh243996 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243746) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243747));
    vlSelf->mkMac__DOT__x___05Fh244172 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0xfU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230188)));
    vlSelf->mkMac__DOT__y___05Fh230438 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230188));
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh1207 
        = ((0x80U & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_reg_o_ETC___05F_d3783))
            ? vlSelf->mkMac__DOT__product___05Fh8941
            : vlSelf->mkMac__DOT__IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_INV_re_ETC___05F_d4899);
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2398 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh276849) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh276850)) 
            << 0xfU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh276672) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh276673)) 
                         << 0xeU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2397)));
    vlSelf->mkMac__DOT__y___05Fh277099 = ((IData)(vlSelf->mkMac__DOT__x___05Fh276849) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh276850));
    vlSelf->mkMac__DOT__x___05Fh277275 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x10U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269381)));
    vlSelf->mkMac__DOT__y___05Fh269631 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269381));
    vlSelf->mkMac__DOT__y___05Fh243924 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243995) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh243996));
    vlSelf->mkMac__DOT__x___05Fh243923 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh244172)));
    vlSelf->mkMac__DOT__y___05Fh230366 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230438)));
    vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
        = (~ vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh1207);
    vlSelf->mkMac__DOT__y___05Fh277027 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277098) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277099));
    vlSelf->mkMac__DOT__x___05Fh277026 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277275)));
    vlSelf->mkMac__DOT__y___05Fh269559 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269631)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1710 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh243923) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243924)) 
            << 0xfU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh243746) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh243747)) 
                         << 0xeU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1709)));
    vlSelf->mkMac__DOT__y___05Fh244173 = ((IData)(vlSelf->mkMac__DOT__x___05Fh243923) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh243924));
    vlSelf->mkMac__DOT__x___05Fh244349 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x10U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230366)));
    vlSelf->mkMac__DOT__y___05Fh230616 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230366));
    if ((1U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91)) {
        vlSelf->mkMac__DOT__IF_INV_INV_theResult___05F___05F_22071_BIT_0_THEN_1_EL_ETC___05Fq93 = 0U;
        vlSelf->mkMac__DOT__IF_INV_theResult___05F___05F_22071_BIT_0_THEN_2_ELSE_0___05Fq92 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_theResult___05F___05F_22071_BIT_0_THEN_1_EL_ETC___05Fq93 = 1U;
        vlSelf->mkMac__DOT__IF_INV_theResult___05F___05F_22071_BIT_0_THEN_2_ELSE_0___05Fq92 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh113952 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91)));
    vlSelf->mkMac__DOT__y___05Fh277276 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277026) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277027));
    vlSelf->mkMac__DOT__x___05Fh277452 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x11U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269559)));
    vlSelf->mkMac__DOT__y___05Fh269809 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269559));
    vlSelf->mkMac__DOT__y___05Fh244101 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244172) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh244173));
    vlSelf->mkMac__DOT__x___05Fh244100 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh244349)));
    vlSelf->mkMac__DOT__y___05Fh230544 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230616)));
    vlSelf->mkMac__DOT__y___05Fh114127 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh113952));
    vlSelf->mkMac__DOT__y___05Fh277204 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277275) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277276));
    vlSelf->mkMac__DOT__x___05Fh277203 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277452)));
    vlSelf->mkMac__DOT__y___05Fh269737 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269809)));
    vlSelf->mkMac__DOT__y___05Fh244350 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244100) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244101));
    vlSelf->mkMac__DOT__x___05Fh244526 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x11U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230544)));
    vlSelf->mkMac__DOT__y___05Fh230794 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230544));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5178 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114127) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh113952) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                           ^ (vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91)))));
    vlSelf->mkMac__DOT__y___05Fh114302 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114127));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2399 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh277203) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277204)) 
            << 0x11U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh277026) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277027)) 
                          << 0x10U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2398)));
    vlSelf->mkMac__DOT__y___05Fh277453 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277203) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277204));
    vlSelf->mkMac__DOT__x___05Fh277629 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x12U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269737)));
    vlSelf->mkMac__DOT__y___05Fh269987 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269737));
    vlSelf->mkMac__DOT__y___05Fh244278 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244349) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh244350));
    vlSelf->mkMac__DOT__x___05Fh244277 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh244526)));
    vlSelf->mkMac__DOT__y___05Fh230722 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230794)));
    vlSelf->mkMac__DOT__y___05Fh114477 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114302));
    vlSelf->mkMac__DOT__y___05Fh277381 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277452) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277453));
    vlSelf->mkMac__DOT__x___05Fh277380 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277629)));
    vlSelf->mkMac__DOT__y___05Fh269915 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh269987)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1711 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh244277) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244278)) 
            << 0x11U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh244100) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244101)) 
                          << 0x10U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1710)));
    vlSelf->mkMac__DOT__y___05Fh244527 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244277) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244278));
    vlSelf->mkMac__DOT__x___05Fh244703 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x12U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230722)));
    vlSelf->mkMac__DOT__y___05Fh230972 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230722));
    vlSelf->mkMac__DOT__y___05Fh114652 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114477));
    vlSelf->mkMac__DOT__y___05Fh277630 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277380) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277381));
    vlSelf->mkMac__DOT__x___05Fh277806 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x13U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh269915)));
    vlSelf->mkMac__DOT__y___05Fh270165 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh269915));
    vlSelf->mkMac__DOT__y___05Fh244455 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244526) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh244527));
    vlSelf->mkMac__DOT__x___05Fh244454 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh244703)));
    vlSelf->mkMac__DOT__y___05Fh230900 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh230972)));
    vlSelf->mkMac__DOT__y___05Fh114827 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114652));
    vlSelf->mkMac__DOT__y___05Fh277558 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277629) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277630));
    vlSelf->mkMac__DOT__x___05Fh277557 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277806)));
    vlSelf->mkMac__DOT__y___05Fh270093 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270165)));
    vlSelf->mkMac__DOT__y___05Fh244704 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244454) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244455));
    vlSelf->mkMac__DOT__x___05Fh244880 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x13U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh230900)));
    vlSelf->mkMac__DOT__y___05Fh231150 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh230900));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5180 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114827) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114652) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh114477) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114302) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5178)))));
    vlSelf->mkMac__DOT__y___05Fh115002 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh114827));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2400 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh277557) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277558)) 
            << 0x13U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh277380) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277381)) 
                          << 0x12U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2399));
    vlSelf->mkMac__DOT__y___05Fh277807 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277557) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277558));
    vlSelf->mkMac__DOT__x___05Fh277983 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x14U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270093)));
    vlSelf->mkMac__DOT__y___05Fh270343 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270093));
    vlSelf->mkMac__DOT__y___05Fh244632 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244703) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh244704));
    vlSelf->mkMac__DOT__x___05Fh244631 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh244880)));
    vlSelf->mkMac__DOT__y___05Fh231078 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231150)));
    vlSelf->mkMac__DOT__y___05Fh115177 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh115002));
    vlSelf->mkMac__DOT__y___05Fh277735 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277806) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277807));
    vlSelf->mkMac__DOT__x___05Fh277734 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh277983)));
    vlSelf->mkMac__DOT__y___05Fh270271 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270343)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1712 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh244631) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244632)) 
            << 0x13U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh244454) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244455)) 
                          << 0x12U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1711));
    vlSelf->mkMac__DOT__y___05Fh244881 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244631) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244632));
    vlSelf->mkMac__DOT__x___05Fh245057 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x14U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231078)));
    vlSelf->mkMac__DOT__y___05Fh231328 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231078));
    vlSelf->mkMac__DOT__y___05Fh115352 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh115177));
    vlSelf->mkMac__DOT__y___05Fh277984 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277734) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277735));
    vlSelf->mkMac__DOT__x___05Fh278160 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x15U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270271)));
    vlSelf->mkMac__DOT__y___05Fh270521 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270271));
    vlSelf->mkMac__DOT__y___05Fh244809 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244880) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh244881));
    vlSelf->mkMac__DOT__x___05Fh244808 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245057)));
    vlSelf->mkMac__DOT__y___05Fh231256 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231328)));
    vlSelf->mkMac__DOT__y___05Fh115527 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115352));
    vlSelf->mkMac__DOT__y___05Fh277912 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277983) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh277984));
    vlSelf->mkMac__DOT__x___05Fh277911 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278160)));
    vlSelf->mkMac__DOT__y___05Fh270449 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270521)));
    vlSelf->mkMac__DOT__y___05Fh245058 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244808) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244809));
    vlSelf->mkMac__DOT__x___05Fh245234 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x15U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231256)));
    vlSelf->mkMac__DOT__y___05Fh231506 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231256));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5182 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh115527) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh115352) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh115177) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh115002) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5180)))));
    vlSelf->mkMac__DOT__y___05Fh115702 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115527));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2401 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh277911) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277912)) 
            << 0x15U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh277734) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh277735)) 
                          << 0x14U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2400));
    vlSelf->mkMac__DOT__y___05Fh278161 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277911) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh277912));
    vlSelf->mkMac__DOT__x___05Fh278337 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x16U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270449)));
    vlSelf->mkMac__DOT__y___05Fh270699 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270449));
    vlSelf->mkMac__DOT__y___05Fh244986 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245057) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245058));
    vlSelf->mkMac__DOT__x___05Fh244985 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245234)));
    vlSelf->mkMac__DOT__y___05Fh231434 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231506)));
    vlSelf->mkMac__DOT__y___05Fh115877 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115702));
    vlSelf->mkMac__DOT__y___05Fh278089 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278160) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278161));
    vlSelf->mkMac__DOT__x___05Fh278088 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278337)));
    vlSelf->mkMac__DOT__y___05Fh270627 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270699)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1713 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh244985) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244986)) 
            << 0x15U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh244808) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh244809)) 
                          << 0x14U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1712));
    vlSelf->mkMac__DOT__y___05Fh245235 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244985) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh244986));
    vlSelf->mkMac__DOT__x___05Fh245411 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x16U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231434)));
    vlSelf->mkMac__DOT__y___05Fh231684 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231434));
    vlSelf->mkMac__DOT__y___05Fh116052 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115877));
    vlSelf->mkMac__DOT__y___05Fh278338 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278088) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278089));
    vlSelf->mkMac__DOT__x___05Fh278514 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x17U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270627)));
    vlSelf->mkMac__DOT__y___05Fh270877 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270627));
    vlSelf->mkMac__DOT__y___05Fh245163 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245234) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245235));
    vlSelf->mkMac__DOT__x___05Fh245162 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245411)));
    vlSelf->mkMac__DOT__y___05Fh231612 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231684)));
    vlSelf->mkMac__DOT__y___05Fh116227 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116052));
    vlSelf->mkMac__DOT__y___05Fh278266 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278337) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278338));
    vlSelf->mkMac__DOT__x___05Fh278265 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278514)));
    vlSelf->mkMac__DOT__y___05Fh270805 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270877)));
    vlSelf->mkMac__DOT__y___05Fh245412 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245162) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245163));
    vlSelf->mkMac__DOT__x___05Fh245588 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x17U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231612)));
    vlSelf->mkMac__DOT__y___05Fh231862 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231612));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5184 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116227) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116052) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh115877) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh115702) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5182)))));
    vlSelf->mkMac__DOT__y___05Fh116402 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116227));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2402 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh278265) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278266)) 
            << 0x17U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh278088) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278089)) 
                          << 0x16U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2401));
    vlSelf->mkMac__DOT__y___05Fh278515 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278265) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278266));
    vlSelf->mkMac__DOT__x___05Fh278691 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x18U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270805)));
    vlSelf->mkMac__DOT__y___05Fh271055 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270805));
    vlSelf->mkMac__DOT__y___05Fh245340 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245411) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245412));
    vlSelf->mkMac__DOT__x___05Fh245339 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245588)));
    vlSelf->mkMac__DOT__y___05Fh231790 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231862)));
    vlSelf->mkMac__DOT__y___05Fh116577 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116402));
    vlSelf->mkMac__DOT__y___05Fh278443 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278514) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278515));
    vlSelf->mkMac__DOT__x___05Fh278442 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278691)));
    vlSelf->mkMac__DOT__y___05Fh270983 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271055)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1714 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh245339) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245340)) 
            << 0x17U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh245162) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245163)) 
                          << 0x16U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1713));
    vlSelf->mkMac__DOT__y___05Fh245589 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245339) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245340));
    vlSelf->mkMac__DOT__x___05Fh245765 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x18U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231790)));
    vlSelf->mkMac__DOT__y___05Fh232040 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231790));
    vlSelf->mkMac__DOT__y___05Fh116752 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116577));
    vlSelf->mkMac__DOT__y___05Fh278692 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278442) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278443));
    vlSelf->mkMac__DOT__x___05Fh278868 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x19U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270983)));
    vlSelf->mkMac__DOT__y___05Fh271233 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh270983));
    vlSelf->mkMac__DOT__y___05Fh245517 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245588) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245589));
    vlSelf->mkMac__DOT__x___05Fh245516 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245765)));
    vlSelf->mkMac__DOT__y___05Fh231968 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232040)));
    vlSelf->mkMac__DOT__y___05Fh116927 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116752));
    vlSelf->mkMac__DOT__y___05Fh278620 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278691) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278692));
    vlSelf->mkMac__DOT__x___05Fh278619 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278868)));
    vlSelf->mkMac__DOT__y___05Fh271161 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271233)));
    vlSelf->mkMac__DOT__y___05Fh245766 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245516) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245517));
    vlSelf->mkMac__DOT__x___05Fh245942 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x19U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231968)));
    vlSelf->mkMac__DOT__y___05Fh232218 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh231968));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5186 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116927) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116752) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh116577) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh116402) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5184)))));
    vlSelf->mkMac__DOT__y___05Fh117102 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh116927));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2403 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh278619) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278620)) 
            << 0x19U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh278442) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278443)) 
                          << 0x18U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2402));
    vlSelf->mkMac__DOT__y___05Fh278869 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278619) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278620));
    vlSelf->mkMac__DOT__x___05Fh279045 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x1aU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271161)));
    vlSelf->mkMac__DOT__y___05Fh271411 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271161));
    vlSelf->mkMac__DOT__y___05Fh245694 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245765) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245766));
    vlSelf->mkMac__DOT__x___05Fh245693 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245942)));
    vlSelf->mkMac__DOT__y___05Fh232146 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232218)));
    vlSelf->mkMac__DOT__y___05Fh117277 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117102));
    vlSelf->mkMac__DOT__y___05Fh278797 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278868) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278869));
    vlSelf->mkMac__DOT__x___05Fh278796 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279045)));
    vlSelf->mkMac__DOT__y___05Fh271339 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271411)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1715 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh245693) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245694)) 
            << 0x19U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh245516) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245517)) 
                          << 0x18U) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1714));
    vlSelf->mkMac__DOT__y___05Fh245943 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245693) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245694));
    vlSelf->mkMac__DOT__x___05Fh246119 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x1aU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232146)));
    vlSelf->mkMac__DOT__y___05Fh232396 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232146));
    vlSelf->mkMac__DOT__y___05Fh117452 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117277));
    vlSelf->mkMac__DOT__y___05Fh279046 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278796) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278797));
    vlSelf->mkMac__DOT__x___05Fh279222 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x1bU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271339)));
    vlSelf->mkMac__DOT__y___05Fh271589 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271339));
    vlSelf->mkMac__DOT__y___05Fh245871 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245942) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245943));
    vlSelf->mkMac__DOT__x___05Fh245870 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246119)));
    vlSelf->mkMac__DOT__y___05Fh232324 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232396)));
    vlSelf->mkMac__DOT__y___05Fh117627 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117452));
    vlSelf->mkMac__DOT__y___05Fh278974 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279045) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279046));
    vlSelf->mkMac__DOT__x___05Fh278973 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279222)));
    vlSelf->mkMac__DOT__y___05Fh271517 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271589)));
    vlSelf->mkMac__DOT__y___05Fh246120 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245870) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245871));
    vlSelf->mkMac__DOT__x___05Fh246296 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x1bU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232324)));
    vlSelf->mkMac__DOT__y___05Fh232574 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232324));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5188 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh117627) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh117452) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh117277) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh117102) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5186))));
    vlSelf->mkMac__DOT__y___05Fh117802 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117627));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2404 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh278973) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278974)) 
            << 0x1bU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh278796) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278797)) 
                          << 0x1aU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2403));
    vlSelf->mkMac__DOT__y___05Fh279223 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278973) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278974));
    vlSelf->mkMac__DOT__x___05Fh279399 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x1cU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271517)));
    vlSelf->mkMac__DOT__y___05Fh271767 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271517));
    vlSelf->mkMac__DOT__y___05Fh246048 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246119) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246120));
    vlSelf->mkMac__DOT__x___05Fh246047 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246296)));
    vlSelf->mkMac__DOT__y___05Fh232502 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232574)));
    vlSelf->mkMac__DOT__y___05Fh117977 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117802));
    vlSelf->mkMac__DOT__y___05Fh279151 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279222) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279223));
    vlSelf->mkMac__DOT__x___05Fh279150 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279399)));
    vlSelf->mkMac__DOT__y___05Fh271695 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271767)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1716 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246047) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246048)) 
            << 0x1bU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh245870) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245871)) 
                          << 0x1aU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1715));
    vlSelf->mkMac__DOT__y___05Fh246297 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246047) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246048));
    vlSelf->mkMac__DOT__x___05Fh246473 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x1cU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232502)));
    vlSelf->mkMac__DOT__y___05Fh232752 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232502));
    vlSelf->mkMac__DOT__y___05Fh118152 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117977));
    vlSelf->mkMac__DOT__y___05Fh279400 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279150) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279151));
    vlSelf->mkMac__DOT__x___05Fh279576 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x1dU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271695)));
    vlSelf->mkMac__DOT__y___05Fh271945 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271695));
    vlSelf->mkMac__DOT__y___05Fh246225 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246296) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246297));
    vlSelf->mkMac__DOT__x___05Fh246224 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246473)));
    vlSelf->mkMac__DOT__y___05Fh232680 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232752)));
    vlSelf->mkMac__DOT__y___05Fh118327 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118152));
    vlSelf->mkMac__DOT__y___05Fh279328 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279399) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279400));
    vlSelf->mkMac__DOT__x___05Fh279327 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279576)));
    vlSelf->mkMac__DOT__y___05Fh271873 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271945)));
    vlSelf->mkMac__DOT__y___05Fh246474 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246224) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246225));
    vlSelf->mkMac__DOT__x___05Fh246650 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x1dU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232680)));
    vlSelf->mkMac__DOT__y___05Fh232930 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232680));
    vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5190 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118327) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118152) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh117977) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh117802) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5188))));
    vlSelf->mkMac__DOT__y___05Fh118502 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118327));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2405 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh279327) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279328)) 
            << 0x1dU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh279150) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279151)) 
                          << 0x1cU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2404));
    vlSelf->mkMac__DOT__y___05Fh279577 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279327) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279328));
    vlSelf->mkMac__DOT__y___05Fh272123 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271873));
    vlSelf->mkMac__DOT__x___05Fh279753 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
                                                 >> 0x1eU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271873)));
    vlSelf->mkMac__DOT__y___05Fh246402 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246473) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246474));
    vlSelf->mkMac__DOT__x___05Fh246401 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246650)));
    vlSelf->mkMac__DOT__y___05Fh232858 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232930)));
    vlSelf->mkMac__DOT__y___05Fh118677 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118502));
    vlSelf->mkMac__DOT__y___05Fh279505 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279576) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279577));
    vlSelf->mkMac__DOT__y___05Fh272051 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2102 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272123)));
    vlSelf->mkMac__DOT__x___05Fh279504 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279753)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1717 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246401) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246402)) 
            << 0x1dU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh246224) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246225)) 
                          << 0x1cU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1716));
    vlSelf->mkMac__DOT__y___05Fh246651 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246401) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246402));
    vlSelf->mkMac__DOT__y___05Fh233108 = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232858));
    vlSelf->mkMac__DOT__x___05Fh246827 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
                                                 >> 0x1eU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232858)));
    vlSelf->mkMac__DOT__y___05Fh118852 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118677));
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2237 
        = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2100 
            >> 0x1fU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272051));
    vlSelf->mkMac__DOT__y___05Fh279754 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279504) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279505));
    vlSelf->mkMac__DOT__y___05Fh246579 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246650) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246651));
    vlSelf->mkMac__DOT__y___05Fh233036 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_A_ETC___05F_d1415 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233108)));
    vlSelf->mkMac__DOT__x___05Fh246578 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246827)));
    vlSelf->mkMac__DOT__y___05Fh119027 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118852));
    vlSelf->mkMac__DOT__x___05Fh279681 = (1U & (~ (IData)(vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2237)));
    vlSelf->mkMac__DOT__exponent_diff___05Fh220068 
        = (((IData)(vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d2237) 
            << 0x1fU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh279753) 
                          << 0x1eU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh279576) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkMac__DOT__x___05Fh279399) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkMac__DOT__x___05Fh279222) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh279045) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh278868) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh278691) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh278514) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh278337) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__x___05Fh278160) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__x___05Fh277983) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh277806) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh277629) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh277452) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh277275) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__x___05Fh277098) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__x___05Fh276921) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh276744) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh276567) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh276390) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh276213) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh276036) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh275859) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh275682) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh275505) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh275328) 
                                                                                << 5U) 
                                                                                | (IData)(mkMac__DOT____VdfgTmp_h5dbacce7__0))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh279682 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279753) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279754));
    vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1549 
        = ((vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1413 
            >> 0x1fU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233036));
    vlSelf->mkMac__DOT__y___05Fh246828 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246578) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246579));
    vlSelf->mkMac__DOT__product___05Fh1299 = (((0x80000000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh119027) 
                                                  << 0x1fU)) 
                                              | ((0x40000000U 
                                                  & ((0xc0000000U 
                                                      & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh118852) 
                                                      << 0x1eU))) 
                                                 | ((0x20000000U 
                                                     & ((0xe0000000U 
                                                         & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                        ^ 
                                                        ((IData)(vlSelf->mkMac__DOT__y___05Fh118677) 
                                                         << 0x1dU))) 
                                                    | ((0x10000000U 
                                                        & ((0xf0000000U 
                                                            & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2207___05Fq91) 
                                                           ^ 
                                                           ((IData)(vlSelf->mkMac__DOT__y___05Fh118502) 
                                                            << 0x1cU))) 
                                                       | vlSelf->mkMac__DOT__INV_IF_IF_reg_operand_b_BIT_7_748_THEN_SEXT_IN_ETC___05F_d5190))));
    vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285434 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mantissa_b___05Fh124576, vlSelf->mkMac__DOT__exponent_diff___05Fh220068);
    vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220069 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh279681) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279682)) 
            << 0x1fU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh279504) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279505)) 
                          << 0x1eU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR___05FETC___05F_d2405));
    vlSelf->mkMac__DOT__x___05Fh246755 = (1U & (~ (IData)(vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1549)));
    vlSelf->mkMac__DOT__exponent_diff___05Fh220128 
        = (((IData)(vlSelf->mkMac__DOT___0_CONCAT_reg_operand_c_BITS_30_TO_23_283_284_X_ETC___05F_d1549) 
            << 0x1fU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh246827) 
                          << 0x1eU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh246650) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkMac__DOT__x___05Fh246473) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkMac__DOT__x___05Fh246296) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh246119) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh245942) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh245765) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh245588) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh245411) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__x___05Fh245234) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__x___05Fh245057) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh244880) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh244703) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh244526) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh244349) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__x___05Fh244172) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__x___05Fh243995) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh243818) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh243641) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh243464) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh243287) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh243110) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh242933) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh242756) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh242579) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh242402) 
                                                                                << 5U) 
                                                                                | (IData)(mkMac__DOT____VdfgTmp_h37ed68e5__0))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh246756 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246827) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246828));
    vlSelf->mkMac__DOT__int_product___05Fh270 = ((0x80U 
                                                  & ((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                                     ^ (IData)(vlSelf->mkMac__DOT__reg_operand_b)))
                                                  ? vlSelf->mkMac__DOT__product___05Fh1299
                                                  : vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh1207);
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285434 
           ^ vlSelf->mkMac__DOT__y___05Fh285458);
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285434 
           & vlSelf->mkMac__DOT__y___05Fh285458);
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_T_ETC___05Fq44 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220069))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220069);
    vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252508 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mantissa_a___05Fh124571, vlSelf->mkMac__DOT__exponent_diff___05Fh220128);
    vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220129 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246755) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246756)) 
            << 0x1fU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh246578) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246579)) 
                          << 0x1eU) | vlSelf->mkMac__DOT__INV_0_CONCAT_reg_operand_c_BITS_30_TO_23_283_2_ETC___05F_d1717));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
        = (vlSelf->mkMac__DOT__int_product___05Fh270 
           ^ vlSelf->mkMac__DOT__reg_operand_c);
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
        = (vlSelf->mkMac__DOT__int_product___05Fh270 
           & vlSelf->mkMac__DOT__reg_operand_c);
    vlSelf->mkMac__DOT__IF_1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_ETC___05Fq50 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_ETC___05Fq49 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh286808 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
        = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407);
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252508 
           ^ vlSelf->mkMac__DOT__y___05Fh252532);
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252508 
           & vlSelf->mkMac__DOT__y___05Fh252532);
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_T_ETC___05Fq35 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220129))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220129);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_7_747_XOR_reg_operand___05FETC___05Fq95 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_reg_operand_a_BIT_7_747_XOR_reg_operand___05FETC___05Fq94 
        = ((1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh119480 = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196));
    vlSelf->mkMac__DOT__y___05Fh286736 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286808)));
    vlSelf->mkMac__DOT__IF_INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS___05FETC___05Fq45 
        = ((1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh280168 = (1U & ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220069)));
    vlSelf->mkMac__DOT__IF_1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_ETC___05Fq47 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_ETC___05Fq46 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh253882 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
        = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719);
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5259 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 1U) | (IData)(vlSelf->mkMac__DOT__y___05Fh119480)));
    vlSelf->mkMac__DOT__y___05Fh286986 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh286736));
    vlSelf->mkMac__DOT__y___05Fh280096 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh280168)));
    vlSelf->mkMac__DOT__y___05Fh253810 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253882)));
    vlSelf->mkMac__DOT__IF_INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS___05FETC___05Fq36 
        = ((1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh247242 = (1U & ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220129)));
    vlSelf->mkMac__DOT__y___05Fh119651 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5259));
    vlSelf->mkMac__DOT__y___05Fh286914 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286986)));
    vlSelf->mkMac__DOT__y___05Fh280346 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280096));
    vlSelf->mkMac__DOT__y___05Fh254060 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh253810));
    vlSelf->mkMac__DOT__y___05Fh247170 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh247242)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5261 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 2U) | (IData)(vlSelf->mkMac__DOT__y___05Fh119651)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2724 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh286914) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh286736) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                           ^ (vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563))));
    vlSelf->mkMac__DOT__y___05Fh287164 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh286914));
    vlSelf->mkMac__DOT__y___05Fh280274 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh280346)));
    vlSelf->mkMac__DOT__y___05Fh253988 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254060)));
    vlSelf->mkMac__DOT__y___05Fh247420 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh247170));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5355 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                  ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5261) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5259) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                           ^ (vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194))));
    vlSelf->mkMac__DOT__y___05Fh119822 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5261));
    vlSelf->mkMac__DOT__y___05Fh287092 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287164)));
    vlSelf->mkMac__DOT__y___05Fh280524 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280274));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2036 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253988) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253810) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                           ^ (vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875))));
    vlSelf->mkMac__DOT__y___05Fh254238 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh253988));
    vlSelf->mkMac__DOT__y___05Fh247348 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh247420)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5263 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 3U) | (IData)(vlSelf->mkMac__DOT__y___05Fh119822)));
    vlSelf->mkMac__DOT__y___05Fh287342 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287092));
    vlSelf->mkMac__DOT__y___05Fh280452 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh280524)));
    vlSelf->mkMac__DOT__y___05Fh254166 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254238)));
    vlSelf->mkMac__DOT__y___05Fh247598 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh247348));
    vlSelf->mkMac__DOT__y___05Fh119993 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5263));
    vlSelf->mkMac__DOT__y___05Fh287270 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287342)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2528 
        = ((0x10U & ((0xfffffff0U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh280452) 
                        << 4U))) | ((8U & ((0xfffffff8U 
                                            & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh280274) 
                                              << 3U))) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh280096) 
                                                 << 2U))) 
                                       | ((2U & ((0xfffffffeU 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                 ^ 
                                                 (VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220069) 
                                                  << 1U))) 
                                          | (1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43)))));
    vlSelf->mkMac__DOT__y___05Fh280702 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280452));
    vlSelf->mkMac__DOT__y___05Fh254416 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh254166));
    vlSelf->mkMac__DOT__y___05Fh247526 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh247598)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5265 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 4U) | (IData)(vlSelf->mkMac__DOT__y___05Fh119993)));
    vlSelf->mkMac__DOT__y___05Fh287520 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287270));
    vlSelf->mkMac__DOT__y___05Fh280630 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh280702)));
    vlSelf->mkMac__DOT__y___05Fh254344 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254416)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1840 
        = ((0x10U & ((0xfffffff0U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh247526) 
                        << 4U))) | ((8U & ((0xfffffff8U 
                                            & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh247348) 
                                              << 3U))) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh247170) 
                                                 << 2U))) 
                                       | ((2U & ((0xfffffffeU 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                 ^ 
                                                 (VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh220129) 
                                                  << 1U))) 
                                          | (1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33)))));
    vlSelf->mkMac__DOT__y___05Fh247776 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh247526));
    vlSelf->mkMac__DOT__y___05Fh120164 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5265));
    vlSelf->mkMac__DOT__y___05Fh287448 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287520)));
    vlSelf->mkMac__DOT__y___05Fh280880 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280630));
    vlSelf->mkMac__DOT__y___05Fh254594 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh254344));
    vlSelf->mkMac__DOT__y___05Fh247704 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh247776)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5267 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 5U) | (IData)(vlSelf->mkMac__DOT__y___05Fh120164)));
    vlSelf->mkMac__DOT__y___05Fh287698 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287448));
    vlSelf->mkMac__DOT__y___05Fh280808 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh280880)));
    vlSelf->mkMac__DOT__y___05Fh254522 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254594)));
    vlSelf->mkMac__DOT__y___05Fh247954 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh247704));
    vlSelf->mkMac__DOT__y___05Fh120335 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5267));
    vlSelf->mkMac__DOT__y___05Fh287626 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287698)));
    vlSelf->mkMac__DOT__y___05Fh281058 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280808));
    vlSelf->mkMac__DOT__y___05Fh254772 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh254522));
    vlSelf->mkMac__DOT__y___05Fh247882 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh247954)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5269 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 6U) | (IData)(vlSelf->mkMac__DOT__y___05Fh120335)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2726 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287626) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287448) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh287270) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287092) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2724)))));
    vlSelf->mkMac__DOT__y___05Fh287876 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287626));
    vlSelf->mkMac__DOT__y___05Fh280986 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281058)));
    vlSelf->mkMac__DOT__y___05Fh254700 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254772)));
    vlSelf->mkMac__DOT__y___05Fh248132 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh247882));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5357 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                     ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5269) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5267) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5265) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5263) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5355)))));
    vlSelf->mkMac__DOT__y___05Fh120506 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5269));
    vlSelf->mkMac__DOT__y___05Fh287804 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287876)));
    vlSelf->mkMac__DOT__y___05Fh281236 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh280986));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2038 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254700) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254522) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh254344) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254166) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2036)))));
    vlSelf->mkMac__DOT__y___05Fh254950 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh254700));
    vlSelf->mkMac__DOT__y___05Fh248060 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh248132)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5271 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 7U) | (IData)(vlSelf->mkMac__DOT__y___05Fh120506)));
    vlSelf->mkMac__DOT__y___05Fh288054 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287804));
    vlSelf->mkMac__DOT__y___05Fh281164 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281236)));
    vlSelf->mkMac__DOT__y___05Fh254878 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254950)));
    vlSelf->mkMac__DOT__y___05Fh248310 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh248060));
    vlSelf->mkMac__DOT__y___05Fh120677 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5271));
    vlSelf->mkMac__DOT__y___05Fh287982 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288054)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2530 
        = ((0x100U & ((0xffffff00U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh281164) 
                         << 8U))) | ((0x80U & ((0xffffff80U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh280986) 
                                                  << 7U))) 
                                     | ((0x40U & ((0xffffffc0U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh280808) 
                                                   << 6U))) 
                                        | ((0x20U & 
                                            ((0xffffffe0U 
                                              & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh280630) 
                                                << 5U))) 
                                           | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2528)))));
    vlSelf->mkMac__DOT__y___05Fh281414 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh281164));
    vlSelf->mkMac__DOT__y___05Fh255128 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh254878));
    vlSelf->mkMac__DOT__y___05Fh248238 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh248310)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5273 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 8U) | (IData)(vlSelf->mkMac__DOT__y___05Fh120677)));
    vlSelf->mkMac__DOT__y___05Fh288232 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh287982));
    vlSelf->mkMac__DOT__y___05Fh281342 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281414)));
    vlSelf->mkMac__DOT__y___05Fh255056 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh255128)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1842 
        = ((0x100U & ((0xffffff00U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh248238) 
                         << 8U))) | ((0x80U & ((0xffffff80U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh248060) 
                                                  << 7U))) 
                                     | ((0x40U & ((0xffffffc0U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh247882) 
                                                   << 6U))) 
                                        | ((0x20U & 
                                            ((0xffffffe0U 
                                              & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh247704) 
                                                << 5U))) 
                                           | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1840)))));
    vlSelf->mkMac__DOT__y___05Fh248488 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh248238));
    vlSelf->mkMac__DOT__y___05Fh120848 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5273));
    vlSelf->mkMac__DOT__y___05Fh288160 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288232)));
    vlSelf->mkMac__DOT__y___05Fh281592 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh281342));
    vlSelf->mkMac__DOT__y___05Fh255306 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh255056));
    vlSelf->mkMac__DOT__y___05Fh248416 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh248488)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5275 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 9U) | (IData)(vlSelf->mkMac__DOT__y___05Fh120848)));
    vlSelf->mkMac__DOT__y___05Fh288410 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh288160));
    vlSelf->mkMac__DOT__y___05Fh281520 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281592)));
    vlSelf->mkMac__DOT__y___05Fh255234 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh255306)));
    vlSelf->mkMac__DOT__y___05Fh248666 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh248416));
    vlSelf->mkMac__DOT__y___05Fh121019 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5275));
    vlSelf->mkMac__DOT__y___05Fh288338 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288410)));
    vlSelf->mkMac__DOT__y___05Fh281770 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281520));
    vlSelf->mkMac__DOT__y___05Fh255484 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh255234));
    vlSelf->mkMac__DOT__y___05Fh248594 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh248666)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5277 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xaU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121019)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2728 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh288338) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh288160) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287982) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh287804) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2726)))));
    vlSelf->mkMac__DOT__y___05Fh288588 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh288338));
    vlSelf->mkMac__DOT__y___05Fh281698 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281770)));
    vlSelf->mkMac__DOT__y___05Fh255412 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh255484)));
    vlSelf->mkMac__DOT__y___05Fh248844 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248594));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5359 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                      ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5277) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5275) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5273) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5271) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5357)))));
    vlSelf->mkMac__DOT__y___05Fh121190 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5277));
    vlSelf->mkMac__DOT__y___05Fh288516 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288588)));
    vlSelf->mkMac__DOT__y___05Fh281948 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281698));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2040 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh255412) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh255234) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh255056) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh254878) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2038)))));
    vlSelf->mkMac__DOT__y___05Fh255662 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh255412));
    vlSelf->mkMac__DOT__y___05Fh248772 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh248844)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5279 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xbU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121190)));
    vlSelf->mkMac__DOT__y___05Fh288766 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh288516));
    vlSelf->mkMac__DOT__y___05Fh281876 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh281948)));
    vlSelf->mkMac__DOT__y___05Fh255590 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh255662)));
    vlSelf->mkMac__DOT__y___05Fh249022 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248772));
    vlSelf->mkMac__DOT__y___05Fh121361 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5279));
    vlSelf->mkMac__DOT__y___05Fh288694 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288766)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2532 
        = ((0x1000U & ((0xfffff000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh281876) 
                          << 0xcU))) | ((0x800U & (
                                                   (0xfffff800U 
                                                    & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh281698) 
                                                    << 0xbU))) 
                                        | ((0x400U 
                                            & ((0xfffffc00U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh281520) 
                                                  << 0xaU))) 
                                           | ((0x200U 
                                               & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh281342) 
                                                   << 9U))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2530)))));
    vlSelf->mkMac__DOT__y___05Fh282126 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281876));
    vlSelf->mkMac__DOT__y___05Fh255840 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh255590));
    vlSelf->mkMac__DOT__y___05Fh248950 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249022)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5281 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xcU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121361)));
    vlSelf->mkMac__DOT__y___05Fh288944 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh288694));
    vlSelf->mkMac__DOT__y___05Fh282054 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh282126)));
    vlSelf->mkMac__DOT__y___05Fh255768 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh255840)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1844 
        = ((0x1000U & ((0xfffff000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh248950) 
                          << 0xcU))) | ((0x800U & (
                                                   (0xfffff800U 
                                                    & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh248772) 
                                                    << 0xbU))) 
                                        | ((0x400U 
                                            & ((0xfffffc00U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh248594) 
                                                  << 0xaU))) 
                                           | ((0x200U 
                                               & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh248416) 
                                                   << 9U))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1842)))));
    vlSelf->mkMac__DOT__y___05Fh249200 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248950));
    vlSelf->mkMac__DOT__y___05Fh121532 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5281));
    vlSelf->mkMac__DOT__y___05Fh288872 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh288944)));
    vlSelf->mkMac__DOT__y___05Fh282304 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282054));
    vlSelf->mkMac__DOT__y___05Fh256018 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh255768));
    vlSelf->mkMac__DOT__y___05Fh249128 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249200)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5283 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xdU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121532)));
    vlSelf->mkMac__DOT__y___05Fh289122 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh288872));
    vlSelf->mkMac__DOT__y___05Fh282232 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh282304)));
    vlSelf->mkMac__DOT__y___05Fh255946 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256018)));
    vlSelf->mkMac__DOT__y___05Fh249378 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249128));
    vlSelf->mkMac__DOT__y___05Fh121703 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5283));
    vlSelf->mkMac__DOT__y___05Fh289050 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh289122)));
    vlSelf->mkMac__DOT__y___05Fh282482 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282232));
    vlSelf->mkMac__DOT__y___05Fh256196 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh255946));
    vlSelf->mkMac__DOT__y___05Fh249306 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249378)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5285 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xeU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121703)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2730 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh289050) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh288872) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh288694) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh288516) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2728)))));
    vlSelf->mkMac__DOT__y___05Fh289300 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289050));
    vlSelf->mkMac__DOT__y___05Fh282410 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh282482)));
    vlSelf->mkMac__DOT__y___05Fh256124 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256196)));
    vlSelf->mkMac__DOT__y___05Fh249556 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249306));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5361 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                       ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5285) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5283) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5281) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5279) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5359)))));
    vlSelf->mkMac__DOT__y___05Fh121874 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5285));
    vlSelf->mkMac__DOT__y___05Fh289228 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh289300)));
    vlSelf->mkMac__DOT__y___05Fh282660 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282410));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2042 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh256124) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh255946) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh255768) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh255590) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2040)))));
    vlSelf->mkMac__DOT__y___05Fh256374 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh256124));
    vlSelf->mkMac__DOT__y___05Fh249484 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249556)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5287 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0xfU) | (IData)(vlSelf->mkMac__DOT__y___05Fh121874)));
    vlSelf->mkMac__DOT__y___05Fh289478 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289228));
    vlSelf->mkMac__DOT__y___05Fh282588 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh282660)));
    vlSelf->mkMac__DOT__y___05Fh256302 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256374)));
    vlSelf->mkMac__DOT__y___05Fh249734 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249484));
    vlSelf->mkMac__DOT__y___05Fh122045 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5287));
    vlSelf->mkMac__DOT__y___05Fh289406 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh289478)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2534 
        = ((0x10000U & ((0xffff0000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh282588) 
                           << 0x10U))) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh282410) 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh282232) 
                                                  << 0xeU))) 
                                             | ((0x2000U 
                                                 & ((0xffffe000U 
                                                     & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh282054) 
                                                     << 0xdU))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2532)))));
    vlSelf->mkMac__DOT__y___05Fh282838 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282588));
    vlSelf->mkMac__DOT__y___05Fh256552 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh256302));
    vlSelf->mkMac__DOT__y___05Fh249662 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249734)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5289 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x10U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122045)));
    vlSelf->mkMac__DOT__y___05Fh289656 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289406));
    vlSelf->mkMac__DOT__y___05Fh282766 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh282838)));
    vlSelf->mkMac__DOT__y___05Fh256480 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256552)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1846 
        = ((0x10000U & ((0xffff0000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh249662) 
                           << 0x10U))) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh249484) 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh249306) 
                                                  << 0xeU))) 
                                             | ((0x2000U 
                                                 & ((0xffffe000U 
                                                     & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh249128) 
                                                     << 0xdU))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1844)))));
    vlSelf->mkMac__DOT__y___05Fh249912 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249662));
    vlSelf->mkMac__DOT__y___05Fh122216 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5289));
    vlSelf->mkMac__DOT__y___05Fh289584 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh289656)));
    vlSelf->mkMac__DOT__y___05Fh283016 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282766));
    vlSelf->mkMac__DOT__y___05Fh256730 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh256480));
    vlSelf->mkMac__DOT__y___05Fh249840 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh249912)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5291 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x11U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122216)));
    vlSelf->mkMac__DOT__y___05Fh289834 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289584));
    vlSelf->mkMac__DOT__y___05Fh282944 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283016)));
    vlSelf->mkMac__DOT__y___05Fh256658 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256730)));
    vlSelf->mkMac__DOT__y___05Fh250090 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249840));
    vlSelf->mkMac__DOT__y___05Fh122387 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5291));
    vlSelf->mkMac__DOT__y___05Fh289762 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh289834)));
    vlSelf->mkMac__DOT__y___05Fh283194 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282944));
    vlSelf->mkMac__DOT__y___05Fh256908 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh256658));
    vlSelf->mkMac__DOT__y___05Fh250018 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250090)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5293 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x12U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122387)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2732 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh289762) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh289584) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh289406) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh289228) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2730)))));
    vlSelf->mkMac__DOT__y___05Fh290012 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289762));
    vlSelf->mkMac__DOT__y___05Fh283122 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283194)));
    vlSelf->mkMac__DOT__y___05Fh256836 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh256908)));
    vlSelf->mkMac__DOT__y___05Fh250268 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250018));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5363 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                        ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5293) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5291) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5289) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5287) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5361)))));
    vlSelf->mkMac__DOT__y___05Fh122558 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5293));
    vlSelf->mkMac__DOT__y___05Fh289940 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290012)));
    vlSelf->mkMac__DOT__y___05Fh283372 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh283122));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2044 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh256836) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh256658) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh256480) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh256302) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2042)))));
    vlSelf->mkMac__DOT__y___05Fh257086 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh256836));
    vlSelf->mkMac__DOT__y___05Fh250196 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250268)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5295 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x13U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122558)));
    vlSelf->mkMac__DOT__y___05Fh290190 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh289940));
    vlSelf->mkMac__DOT__y___05Fh283300 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283372)));
    vlSelf->mkMac__DOT__y___05Fh257014 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257086)));
    vlSelf->mkMac__DOT__y___05Fh250446 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250196));
    vlSelf->mkMac__DOT__y___05Fh122729 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5295));
    vlSelf->mkMac__DOT__y___05Fh290118 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290190)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2536 
        = ((0x100000U & ((0xfff00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283300) 
                            << 0x14U))) | ((0x80000U 
                                            & ((0xfff80000U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283122) 
                                                  << 0x13U))) 
                                           | ((0x40000U 
                                               & ((0xfffc0000U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh282944) 
                                                   << 0x12U))) 
                                              | ((0x20000U 
                                                  & ((0xfffe0000U 
                                                      & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh282766) 
                                                      << 0x11U))) 
                                                 | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2534))));
    vlSelf->mkMac__DOT__y___05Fh283550 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh283300));
    vlSelf->mkMac__DOT__y___05Fh257264 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257014));
    vlSelf->mkMac__DOT__y___05Fh250374 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250446)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5297 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x14U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122729)));
    vlSelf->mkMac__DOT__y___05Fh290368 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh290118));
    vlSelf->mkMac__DOT__y___05Fh283478 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283550)));
    vlSelf->mkMac__DOT__y___05Fh257192 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257264)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1848 
        = ((0x100000U & ((0xfff00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250374) 
                            << 0x14U))) | ((0x80000U 
                                            & ((0xfff80000U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250196) 
                                                  << 0x13U))) 
                                           | ((0x40000U 
                                               & ((0xfffc0000U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh250018) 
                                                   << 0x12U))) 
                                              | ((0x20000U 
                                                  & ((0xfffe0000U 
                                                      & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh249840) 
                                                      << 0x11U))) 
                                                 | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1846))));
    vlSelf->mkMac__DOT__y___05Fh250624 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250374));
    vlSelf->mkMac__DOT__y___05Fh122900 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5297));
    vlSelf->mkMac__DOT__y___05Fh290296 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290368)));
    vlSelf->mkMac__DOT__y___05Fh283728 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh283478));
    vlSelf->mkMac__DOT__y___05Fh257442 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257192));
    vlSelf->mkMac__DOT__y___05Fh250552 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250624)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5299 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x15U) | (IData)(vlSelf->mkMac__DOT__y___05Fh122900)));
    vlSelf->mkMac__DOT__y___05Fh290546 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh290296));
    vlSelf->mkMac__DOT__y___05Fh283656 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283728)));
    vlSelf->mkMac__DOT__y___05Fh257370 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257442)));
    vlSelf->mkMac__DOT__y___05Fh250802 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250552));
    vlSelf->mkMac__DOT__y___05Fh123071 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5299));
    vlSelf->mkMac__DOT__y___05Fh290474 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290546)));
    vlSelf->mkMac__DOT__y___05Fh283906 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh283656));
    vlSelf->mkMac__DOT__y___05Fh257620 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257370));
    vlSelf->mkMac__DOT__y___05Fh250730 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250802)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5301 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x16U) | (IData)(vlSelf->mkMac__DOT__y___05Fh123071)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2734 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290474) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290296) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh290118) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh289940) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2732))));
    vlSelf->mkMac__DOT__y___05Fh290724 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh290474));
    vlSelf->mkMac__DOT__y___05Fh283834 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14_TO_7_ETC___05F_d2407 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283906)));
    vlSelf->mkMac__DOT__y___05Fh257548 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257620)));
    vlSelf->mkMac__DOT__y___05Fh250980 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250730));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5365 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                         ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5301) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5299) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5297) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5295) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5363))));
    vlSelf->mkMac__DOT__y___05Fh123242 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5301));
    vlSelf->mkMac__DOT__y___05Fh290652 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290724)));
    vlSelf->mkMac__DOT__NOT_1_CONCAT_reg_operand_c_BITS_22_TO_0_053_05_ETC___05F_d2541 
        = ((~ (IData)(vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_BI_ETC___05F_d2127)) 
           & (0U == ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                   ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283834) 
                                      << 0x17U))) | 
                     (((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283656) 
                                        << 0x16U))) 
                       | ((0x200000U & ((0xffe00000U 
                                         & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05Fq43) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283478) 
                                           << 0x15U))) 
                          | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_a_BITS_14___05FETC___05F_d2536)) 
                      & vlSelf->mkMac__DOT__reg_operand_c))));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2046 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh257548) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh257370) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh257192) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh257014) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2044))));
    vlSelf->mkMac__DOT__y___05Fh257798 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257548));
    vlSelf->mkMac__DOT__y___05Fh250908 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30_TO_2_ETC___05F_d1719 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250980)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5303 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x17U) | (IData)(vlSelf->mkMac__DOT__y___05Fh123242)));
    vlSelf->mkMac__DOT__y___05Fh290902 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh290652));
    vlSelf->mkMac__DOT__y___05Fh257726 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257798)));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1853 
        = ((IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1440) 
           & (0U == ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                   ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250908) 
                                      << 0x17U))) | 
                     (((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250730) 
                                        << 0x16U))) 
                       | ((0x200000U & ((0xffe00000U 
                                         & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05Fq33) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250552) 
                                           << 0x15U))) 
                          | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_reg_operand_c_BITS_30___05FETC___05F_d1848)) 
                      & vlSelf->mkMac__DOT__x___05Fh220083))));
    vlSelf->mkMac__DOT__y___05Fh123413 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5303));
    vlSelf->mkMac__DOT__y___05Fh290830 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290902)));
    vlSelf->mkMac__DOT__y___05Fh257976 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257726));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5305 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x18U) | (IData)(vlSelf->mkMac__DOT__y___05Fh123413)));
    vlSelf->mkMac__DOT__y___05Fh291080 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh290830));
    vlSelf->mkMac__DOT__y___05Fh257904 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257976)));
    vlSelf->mkMac__DOT__y___05Fh123584 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5305));
    vlSelf->mkMac__DOT__y___05Fh291008 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291080)));
    vlSelf->mkMac__DOT__y___05Fh258154 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh257904));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5307 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x19U) | (IData)(vlSelf->mkMac__DOT__y___05Fh123584)));
    vlSelf->mkMac__DOT__y___05Fh291258 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291008));
    vlSelf->mkMac__DOT__y___05Fh258082 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258154)));
    vlSelf->mkMac__DOT__y___05Fh123755 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5307));
    vlSelf->mkMac__DOT__y___05Fh291186 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291258)));
    vlSelf->mkMac__DOT__y___05Fh258332 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258082));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5309 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x1aU) | (IData)(vlSelf->mkMac__DOT__y___05Fh123755)));
    vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2736 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291186) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291008) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh290830) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh290652) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2734))));
    vlSelf->mkMac__DOT__y___05Fh291436 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291186));
    vlSelf->mkMac__DOT__y___05Fh258260 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258332)));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5367 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                          ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5309) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5307) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5305) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5303) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5365))));
    vlSelf->mkMac__DOT__y___05Fh123926 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5309));
    vlSelf->mkMac__DOT__y___05Fh291364 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291436)));
    vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2048 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258260) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258082) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh257904) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh257726) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2046))));
    vlSelf->mkMac__DOT__y___05Fh258510 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258260));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5311 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x1bU) | (IData)(vlSelf->mkMac__DOT__y___05Fh123926)));
    vlSelf->mkMac__DOT__y___05Fh291614 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291364));
    vlSelf->mkMac__DOT__y___05Fh258438 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258510)));
    vlSelf->mkMac__DOT__y___05Fh124097 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5311));
    vlSelf->mkMac__DOT__y___05Fh291542 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291614)));
    vlSelf->mkMac__DOT__y___05Fh258688 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258438));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5313 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x1cU) | (IData)(vlSelf->mkMac__DOT__y___05Fh124097)));
    vlSelf->mkMac__DOT__y___05Fh291792 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291542));
    vlSelf->mkMac__DOT__y___05Fh258616 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258688)));
    vlSelf->mkMac__DOT__y___05Fh124268 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5313));
    vlSelf->mkMac__DOT__y___05Fh291720 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291792)));
    vlSelf->mkMac__DOT__y___05Fh258866 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258616));
    vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5315 
        = (1U & ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                  >> 0x1dU) | (IData)(vlSelf->mkMac__DOT__y___05Fh124268)));
    vlSelf->mkMac__DOT__y___05Fh291970 = ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291720));
    vlSelf->mkMac__DOT__y___05Fh258794 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258866)));
    vlSelf->mkMac__DOT__y___05Fh124439 = ((vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5315));
    vlSelf->mkMac__DOT__y___05Fh291898 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2565 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291970)));
    vlSelf->mkMac__DOT__y___05Fh259044 = ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258794));
    vlSelf->mkMac__DOT__x___05Fh292 = ((0x80000000U 
                                        & ((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                           ^ ((0x80000000U 
                                               & (vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5196 
                                                  << 1U)) 
                                              | ((IData)(vlSelf->mkMac__DOT__y___05Fh124439) 
                                                 << 0x1fU)))) 
                                       | ((0x40000000U 
                                           & ((0xc0000000U 
                                               & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5315) 
                                                 << 0x1eU))) 
                                          | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5313) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5194) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5311) 
                                                     << 0x1cU))) 
                                                | vlSelf->mkMac__DOT__IF_reg_operand_a_BIT_7_747_XOR_reg_operand_b_B_ETC___05F_d5367))));
    vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285456 
        = (((0x80000000U & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291898) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291720) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291542) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2563) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh291364) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT___1_CONCAT_reg_operand_c_BITS_22_TO_0_053_054_SR_ETC___05F_d2736))));
    vlSelf->mkMac__DOT__y___05Fh258972 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1877 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259044)));
    vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh259147 
        = ((IData)(vlSelf->mkMac__DOT__NOT_1_CONCAT_reg_operand_c_BITS_22_TO_0_053_05_ETC___05F_d2541)
            ? vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285434
            : vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh285456);
    vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252530 
        = (((0x80000000U & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258972) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258794) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258616) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1875) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh258438) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d2048))));
    vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh220132 
        = ((IData)(vlSelf->mkMac__DOT___1_CONCAT_IF_IF_reg_operand_b_BIT_0_7_THEN_1_CO_ETC___05F_d1853)
            ? vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252508
            : vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh252530);
    if (vlSelf->mkMac__DOT___0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_reg___05FETC___05F_d1285) {
        vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581 
            = vlSelf->mkMac__DOT__mantissa_b___05Fh124576;
        vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
            = vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh220132;
    } else {
        vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581 
            = vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh259147;
        vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
            = vlSelf->mkMac__DOT__mantissa_a___05Fh124571;
    }
    vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
        = (~ vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581);
    if ((1U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51)) {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_b245811_BIT_0_THEN_ETC___05Fq55 = 0U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_b245811_BIT_0_THEN_2_E_ETC___05Fq54 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_b245811_BIT_0_THEN_ETC___05Fq55 = 1U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_b245811_BIT_0_THEN_2_E_ETC___05Fq54 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh300946 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2741 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
           < vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581);
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
           ^ vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581);
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579 
           & vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh124581);
    vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
        = (~ vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh124579);
    vlSelf->mkMac__DOT__y___05Fh301121 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh300946));
    vlSelf->mkMac__DOT__result_sign___05Fh220007 = 
        (1U & ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2741)
                ? (vlSelf->mkMac__DOT__reg_operand_c 
                   >> 0x1fU) : (IData)(vlSelf->mkMac__DOT__sign_a___05Fh124567)));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq57 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XO_ETC___05Fq56 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh293427 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746));
    if ((1U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48)) {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_a245798_BIT_0_THEN_ETC___05Fq53 = 0U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_a245798_BIT_0_THEN_2_E_ETC___05Fq52 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_a245798_BIT_0_THEN_ETC___05Fq53 = 1U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_a245798_BIT_0_THEN_2_E_ETC___05Fq52 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh314011 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3299 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301121) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh300946) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                           ^ (vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51)))));
    vlSelf->mkMac__DOT__y___05Fh301296 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301121));
    vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh220003 
        = ((IData)(vlSelf->mkMac__DOT__reg_operand_a_BIT_15_XOR_reg_operand_b_BIT_15___05FETC___05F_d10)
            ? (IData)(vlSelf->mkMac__DOT__sign_a___05Fh124567)
            : (IData)(vlSelf->mkMac__DOT__result_sign___05Fh220007));
    vlSelf->mkMac__DOT__y___05Fh293355 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293427)));
    vlSelf->mkMac__DOT__y___05Fh314186 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314011));
    vlSelf->mkMac__DOT__y___05Fh301471 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301296));
    vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2899 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh293355) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744)));
    vlSelf->mkMac__DOT__y___05Fh293605 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh293355));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3014 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314186) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314011) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48) 
                                           ^ (vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48)))));
    vlSelf->mkMac__DOT__y___05Fh314361 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314186));
    vlSelf->mkMac__DOT__y___05Fh301646 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301471));
    vlSelf->mkMac__DOT__y___05Fh293533 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293605)));
    vlSelf->mkMac__DOT__y___05Fh314536 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314361));
    vlSelf->mkMac__DOT__y___05Fh301821 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301646));
    vlSelf->mkMac__DOT__y___05Fh293783 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2744 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh293533));
    vlSelf->mkMac__DOT__y___05Fh314711 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314536));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3301 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301821) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301646) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh301471) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301296) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_X_ETC___05F_d3299)))));
}
