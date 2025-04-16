// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Body
    vlSelf->mkMac__DOT__y___05Fh301996 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301821));
    vlSelf->mkMac__DOT__y___05Fh293711 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_reg_operand_a_BITS_14_TO_7_1_XOR_r_ETC___05F_d2746 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293783)));
    vlSelf->mkMac__DOT__y___05Fh314886 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a24579___05Fq48 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh314711));
    vlSelf->mkMac__DOT__y___05Fh302171 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b24581___05Fq51 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh301996));
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

void Vtop___024root___nba_sequent__TOP__0(Vtop___024root* vlSelf);

void Vtop___024root___eval_nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_nba\n"); );
    // Body
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        Vtop___024root___nba_sequent__TOP__0(vlSelf);
        Vtop___024root___nba_sequent__TOP__1(vlSelf);
    }
}

void Vtop___024root___eval_triggers__act(Vtop___024root* vlSelf);
void Vtop___024root___eval_act(Vtop___024root* vlSelf);

bool Vtop___024root___eval_phase__act(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__act\n"); );
    // Init
    VlTriggerVec<1> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtop___024root___eval_triggers__act(vlSelf);
    __VactExecute = vlSelf->__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
        vlSelf->__VnbaTriggered.thisOr(vlSelf->__VactTriggered);
        Vtop___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtop___024root___eval_phase__nba(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_phase__nba\n"); );
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelf->__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtop___024root___eval_nba(vlSelf);
        vlSelf->__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__ico(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
bool Vtop___024root___eval_phase__ico(Vtop___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__nba(Vtop___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop___024root___dump_triggers__act(Vtop___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Init
    IData/*31:0*/ __VicoIterCount;
    CData/*0:0*/ __VicoContinue;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VicoIterCount = 0U;
    vlSelf->__VicoFirstIteration = 1U;
    __VicoContinue = 1U;
    while (__VicoContinue) {
        if (VL_UNLIKELY((0x64U < __VicoIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__ico(vlSelf);
#endif
            VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Unpipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "Input combinational region did not converge.");
        }
        __VicoIterCount = ((IData)(1U) + __VicoIterCount);
        __VicoContinue = 0U;
        if (Vtop___024root___eval_phase__ico(vlSelf)) {
            __VicoContinue = 1U;
        }
        vlSelf->__VicoFirstIteration = 0U;
    }
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtop___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Unpipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                Vtop___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Unpipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "Active region did not converge.");
            }
            vlSelf->__VactIterCount = ((IData)(1U) 
                                       + vlSelf->__VactIterCount);
            vlSelf->__VactContinue = 0U;
            if (Vtop___024root___eval_phase__act(vlSelf)) {
                vlSelf->__VactContinue = 1U;
            }
        }
        if (Vtop___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->CLK & 0xfeU))) {
        Verilated::overWidthError("CLK");}
    if (VL_UNLIKELY((vlSelf->RST_N & 0xfeU))) {
        Verilated::overWidthError("RST_N");}
    if (VL_UNLIKELY((vlSelf->get_inputs_s & 0xfeU))) {
        Verilated::overWidthError("get_inputs_s");}
    if (VL_UNLIKELY((vlSelf->EN_get_inputs & 0xfeU))) {
        Verilated::overWidthError("EN_get_inputs");}
}
#endif  // VL_DEBUG
