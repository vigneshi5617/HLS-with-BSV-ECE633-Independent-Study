// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___nba_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ mkMac__DOT____VdfgTmp_hc85c1ed6__0;
    mkMac__DOT____VdfgTmp_hc85c1ed6__0 = 0;
    CData/*7:0*/ mkMac__DOT____VdfgTmp_haae52e5b__0;
    mkMac__DOT____VdfgTmp_haae52e5b__0 = 0;
    CData/*0:0*/ mkMac__DOT____VdfgTmp_h4b4f87a5__0;
    mkMac__DOT____VdfgTmp_h4b4f87a5__0 = 0;
    // Body
    vlSelf->mkMac__DOT__y___05Fh178344 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh178081));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1014 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102987) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102809) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh102631) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh102453) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1012))));
    vlSelf->mkMac__DOT__y___05Fh103237 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102987));
    vlSelf->mkMac__DOT__y___05Fh178270 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178344)));
    vlSelf->mkMac__DOT__y___05Fh103165 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103237)));
    vlSelf->mkMac__DOT__x___05Fh130303 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh178270) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh178081) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh177892) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh177703) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2450))));
    vlSelf->mkMac__DOT__y___05Fh103415 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103165));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
        = (vlSelf->mkMac__DOT__x___05Fh130303 ^ vlSelf->mkMac__DOT__y___05Fh130304);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
        = (vlSelf->mkMac__DOT__x___05Fh130303 & vlSelf->mkMac__DOT__y___05Fh130304);
    vlSelf->mkMac__DOT__y___05Fh103343 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103415)));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq35 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq34 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh179428 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458));
    vlSelf->mkMac__DOT__y___05Fh103593 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103343));
    vlSelf->mkMac__DOT__y___05Fh179354 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179428)));
    vlSelf->mkMac__DOT__y___05Fh103521 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103593)));
    vlSelf->mkMac__DOT__y___05Fh179617 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179354));
    vlSelf->mkMac__DOT__y___05Fh103771 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103521));
    vlSelf->mkMac__DOT__y___05Fh179543 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179617)));
    vlSelf->mkMac__DOT__y___05Fh103699 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103771)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2617 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179543) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179354) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456))));
    vlSelf->mkMac__DOT__y___05Fh179806 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179543));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1016 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh103699) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh103521) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh103343) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh103165) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1014))));
    vlSelf->mkMac__DOT__y___05Fh103949 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103699));
    vlSelf->mkMac__DOT__y___05Fh179732 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179806)));
    vlSelf->mkMac__DOT__y___05Fh103877 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103949)));
    vlSelf->mkMac__DOT__y___05Fh179995 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179732));
    vlSelf->mkMac__DOT__y___05Fh104127 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh103877));
    vlSelf->mkMac__DOT__y___05Fh179921 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh179995)));
    vlSelf->mkMac__DOT__y___05Fh104055 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104127)));
    vlSelf->mkMac__DOT__y___05Fh180184 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh179921));
    vlSelf->mkMac__DOT__y___05Fh104305 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104055));
    vlSelf->mkMac__DOT__y___05Fh180110 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180184)));
    vlSelf->mkMac__DOT__y___05Fh104233 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104305)));
    vlSelf->mkMac__DOT__y___05Fh180373 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh180110));
    vlSelf->mkMac__DOT__y___05Fh104483 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh104233));
    vlSelf->mkMac__DOT__y___05Fh180299 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180373)));
    vlSelf->mkMac__DOT__y___05Fh104411 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104483)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2619 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh180299) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh180110) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh179921) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh179732) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2617)))));
    vlSelf->mkMac__DOT__y___05Fh180562 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh180299));
    vlSelf->mkMac__DOT__product___05Fh26084 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104411) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh104233) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh104055) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh103877) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1016))));
    vlSelf->mkMac__DOT__y___05Fh180488 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180562)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1019 
        = ((0x20U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh26084
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d841);
    vlSelf->mkMac__DOT__y___05Fh180751 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh180488));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1019 
           ^ vlSelf->mkMac__DOT__y___05Fh18514);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1019 
           & vlSelf->mkMac__DOT__y___05Fh18514);
    vlSelf->mkMac__DOT__y___05Fh180677 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180751)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq19 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq18 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh104889 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023));
    vlSelf->mkMac__DOT__y___05Fh180940 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh180677));
    vlSelf->mkMac__DOT__y___05Fh104817 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh104889)));
    vlSelf->mkMac__DOT__y___05Fh180866 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh180940)));
    vlSelf->mkMac__DOT__y___05Fh105067 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104817));
    vlSelf->mkMac__DOT__y___05Fh181129 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh180866));
    vlSelf->mkMac__DOT__y___05Fh104995 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105067)));
    vlSelf->mkMac__DOT__y___05Fh181055 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181129)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1182 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104995) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh104817) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021))));
    vlSelf->mkMac__DOT__y___05Fh105245 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh104995));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2621 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh181055) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh180866) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh180677) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh180488) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2619)))));
    vlSelf->mkMac__DOT__y___05Fh181318 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181055));
    vlSelf->mkMac__DOT__y___05Fh105173 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105245)));
    vlSelf->mkMac__DOT__y___05Fh181244 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181318)));
    vlSelf->mkMac__DOT__y___05Fh105423 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105173));
    vlSelf->mkMac__DOT__y___05Fh181507 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181244));
    vlSelf->mkMac__DOT__y___05Fh105351 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105423)));
    vlSelf->mkMac__DOT__y___05Fh181433 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181507)));
    vlSelf->mkMac__DOT__y___05Fh105601 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105351));
    vlSelf->mkMac__DOT__y___05Fh181696 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181433));
    vlSelf->mkMac__DOT__y___05Fh105529 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105601)));
    vlSelf->mkMac__DOT__y___05Fh181622 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181696)));
    vlSelf->mkMac__DOT__y___05Fh105779 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105529));
    vlSelf->mkMac__DOT__y___05Fh181885 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181622));
    vlSelf->mkMac__DOT__y___05Fh105707 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105779)));
    vlSelf->mkMac__DOT__y___05Fh181811 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh181885)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1184 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105707) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105529) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh105351) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh105173) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1182)))));
    vlSelf->mkMac__DOT__y___05Fh105957 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105707));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2623 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh181811) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh181622) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh181433) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh181244) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2621)))));
    vlSelf->mkMac__DOT__y___05Fh182074 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh181811));
    vlSelf->mkMac__DOT__y___05Fh105885 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh105957)));
    vlSelf->mkMac__DOT__y___05Fh182000 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182074)));
    vlSelf->mkMac__DOT__y___05Fh106135 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh105885));
    vlSelf->mkMac__DOT__y___05Fh182263 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182000));
    vlSelf->mkMac__DOT__y___05Fh106063 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106135)));
    vlSelf->mkMac__DOT__y___05Fh182189 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182263)));
    vlSelf->mkMac__DOT__y___05Fh106313 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh106063));
    vlSelf->mkMac__DOT__y___05Fh182452 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182189));
    vlSelf->mkMac__DOT__y___05Fh106241 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106313)));
    vlSelf->mkMac__DOT__y___05Fh182378 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182452)));
    vlSelf->mkMac__DOT__y___05Fh106491 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106241));
    vlSelf->mkMac__DOT__y___05Fh182641 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182378));
    vlSelf->mkMac__DOT__y___05Fh106419 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106491)));
    vlSelf->mkMac__DOT__y___05Fh182567 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182641)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1186 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106419) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh106241) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106063) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh105885) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1184)))));
    vlSelf->mkMac__DOT__y___05Fh106669 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106419));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2625 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh182567) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh182378) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh182189) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh182000) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2623)))));
    vlSelf->mkMac__DOT__y___05Fh182830 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182567));
    vlSelf->mkMac__DOT__y___05Fh106597 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106669)));
    vlSelf->mkMac__DOT__y___05Fh182756 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh182830)));
    vlSelf->mkMac__DOT__y___05Fh106847 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106597));
    vlSelf->mkMac__DOT__y___05Fh183019 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182756));
    vlSelf->mkMac__DOT__y___05Fh106775 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh106847)));
    vlSelf->mkMac__DOT__y___05Fh182945 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183019)));
    vlSelf->mkMac__DOT__y___05Fh107025 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106775));
    vlSelf->mkMac__DOT__y___05Fh183208 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh182945));
    vlSelf->mkMac__DOT__y___05Fh106953 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107025)));
    vlSelf->mkMac__DOT__y___05Fh183134 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183208)));
    vlSelf->mkMac__DOT__y___05Fh107203 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh106953));
    vlSelf->mkMac__DOT__y___05Fh183397 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183134));
    vlSelf->mkMac__DOT__y___05Fh107131 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107203)));
    vlSelf->mkMac__DOT__y___05Fh183323 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183397)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1188 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107131) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106953) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh106775) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh106597) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1186)))));
    vlSelf->mkMac__DOT__y___05Fh107381 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107131));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2627 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183323) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183134) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh182945) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh182756) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2625))));
    vlSelf->mkMac__DOT__y___05Fh183586 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183323));
    vlSelf->mkMac__DOT__y___05Fh107309 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107381)));
    vlSelf->mkMac__DOT__y___05Fh183512 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183586)));
    vlSelf->mkMac__DOT__y___05Fh107559 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107309));
    vlSelf->mkMac__DOT__y___05Fh183775 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183512));
    vlSelf->mkMac__DOT__y___05Fh107487 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107559)));
    vlSelf->mkMac__DOT__y___05Fh183701 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183775)));
    vlSelf->mkMac__DOT__y___05Fh107737 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107487));
    vlSelf->mkMac__DOT__y___05Fh183964 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183701));
    vlSelf->mkMac__DOT__y___05Fh107665 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107737)));
    vlSelf->mkMac__DOT__y___05Fh183890 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh183964)));
    vlSelf->mkMac__DOT__y___05Fh107915 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107665));
    vlSelf->mkMac__DOT__y___05Fh184153 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh183890));
    vlSelf->mkMac__DOT__y___05Fh107843 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh107915)));
    vlSelf->mkMac__DOT__y___05Fh184079 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184153)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1190 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107843) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh107665) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh107487) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh107309) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1188)))));
    vlSelf->mkMac__DOT__y___05Fh108093 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh107843));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2629 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184079) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh183890) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh183701) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh183512) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2627))));
    vlSelf->mkMac__DOT__y___05Fh184342 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184079));
    vlSelf->mkMac__DOT__y___05Fh108021 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108093)));
    vlSelf->mkMac__DOT__y___05Fh184268 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184342)));
    vlSelf->mkMac__DOT__y___05Fh108271 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108021));
    vlSelf->mkMac__DOT__y___05Fh184531 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184268));
    vlSelf->mkMac__DOT__y___05Fh108199 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108271)));
    vlSelf->mkMac__DOT__y___05Fh184457 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184531)));
    vlSelf->mkMac__DOT__y___05Fh108449 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108199));
    vlSelf->mkMac__DOT__y___05Fh184720 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184457));
    vlSelf->mkMac__DOT__y___05Fh108377 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108449)));
    vlSelf->mkMac__DOT__y___05Fh184646 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184720)));
    vlSelf->mkMac__DOT__y___05Fh108627 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108377));
    vlSelf->mkMac__DOT__y___05Fh184909 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh184646));
    vlSelf->mkMac__DOT__y___05Fh108555 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108627)));
    vlSelf->mkMac__DOT__y___05Fh184835 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2458 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh184909)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1192 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh108555) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh108377) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh108199) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh108021) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1190))));
    vlSelf->mkMac__DOT__y___05Fh108805 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108555));
    vlSelf->mkMac__DOT__x___05Fh129033 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh184835) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh184646) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh184457) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2456) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh184268) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2629))));
    vlSelf->mkMac__DOT__y___05Fh108733 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108805)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
        = (vlSelf->mkMac__DOT__x___05Fh129033 ^ vlSelf->mkMac__DOT__y___05Fh129034);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
        = (vlSelf->mkMac__DOT__x___05Fh129033 & vlSelf->mkMac__DOT__y___05Fh129034);
    vlSelf->mkMac__DOT__y___05Fh108983 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108733));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq37 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq36 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh185992 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635));
    vlSelf->mkMac__DOT__y___05Fh108911 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh108983)));
    vlSelf->mkMac__DOT__y___05Fh185918 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh185992)));
    vlSelf->mkMac__DOT__y___05Fh109161 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh108911));
    vlSelf->mkMac__DOT__y___05Fh186181 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh185918));
    vlSelf->mkMac__DOT__y___05Fh109089 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109161)));
    vlSelf->mkMac__DOT__y___05Fh186107 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186181)));
    vlSelf->mkMac__DOT__y___05Fh109339 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109089));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2707 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh186107) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh185918) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633))));
    vlSelf->mkMac__DOT__y___05Fh186370 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh186107));
    vlSelf->mkMac__DOT__y___05Fh109267 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109339)));
    vlSelf->mkMac__DOT__y___05Fh186296 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186370)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1194 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109267) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109089) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh108911) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh108733) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1192))));
    vlSelf->mkMac__DOT__y___05Fh109517 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109267));
    vlSelf->mkMac__DOT__y___05Fh186559 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh186296));
    vlSelf->mkMac__DOT__y___05Fh109445 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109517)));
    vlSelf->mkMac__DOT__y___05Fh186485 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186559)));
    vlSelf->mkMac__DOT__y___05Fh109695 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109445));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2708 
        = ((0x20U & ((0xffffffe0U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh186485) 
                        << 5U))) | ((0x10U & ((0xfffffff0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh186296) 
                                                 << 4U))) 
                                    | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2707)));
    vlSelf->mkMac__DOT__y___05Fh186748 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh186485));
    vlSelf->mkMac__DOT__y___05Fh109623 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109695)));
    vlSelf->mkMac__DOT__y___05Fh186674 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186748)));
    vlSelf->mkMac__DOT__y___05Fh109873 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109623));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2694 
        = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                  >> 6U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh186674)));
    vlSelf->mkMac__DOT__y___05Fh186937 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh186674));
    vlSelf->mkMac__DOT__y___05Fh109801 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh109873)));
    vlSelf->mkMac__DOT__y___05Fh186863 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh186937)));
    vlSelf->mkMac__DOT__y___05Fh110051 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh109801));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695 
        = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                  >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh186863)));
    vlSelf->mkMac__DOT__y___05Fh187126 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh186863));
    vlSelf->mkMac__DOT__y___05Fh109979 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1023 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110051)));
    if (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695) {
        vlSelf->mkMac__DOT__IF_INV_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT___05FETC___05Fq41 = 0U;
        vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq40 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT___05FETC___05Fq41 = 1U;
        vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq40 = 0ULL;
    }
    mkMac__DOT____VdfgTmp_haae52e5b__0 = (((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2694) 
                                            << 6U) 
                                           | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2708)));
    vlSelf->mkMac__DOT__y___05Fh187052 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187126)));
    vlSelf->mkMac__DOT__product___05Fh18512 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh109979) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh109801) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh109623) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1021) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh109445) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1194))));
    mkMac__DOT____VdfgTmp_hc85c1ed6__0 = ((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2694) 
                                          & (0x40U 
                                             != (IData)(mkMac__DOT____VdfgTmp_haae52e5b__0)));
    vlSelf->mkMac__DOT__x___05Fh192781 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187052)));
    vlSelf->mkMac__DOT__y___05Fh187315 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187052));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1197 
        = ((0x40U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh18512
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1019);
    if (vlSelf->mkMac__DOT__x___05Fh192781) {
        vlSelf->mkMac__DOT__IF_INV_x92781_THEN_1_ELSE_0___05Fq45 = 0U;
        vlSelf->mkMac__DOT__IF_x92781_THEN_2_ELSE_0___05Fq44 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_x92781_THEN_1_ELSE_0___05Fq45 = 1U;
        vlSelf->mkMac__DOT__IF_x92781_THEN_2_ELSE_0___05Fq44 = 0ULL;
    }
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2813 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh192781) 
           ^ (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695));
    vlSelf->mkMac__DOT__y___05Fh192958 = ((IData)(vlSelf->mkMac__DOT__x___05Fh192781) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695));
    vlSelf->mkMac__DOT__y___05Fh187241 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187315)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1197 
           ^ vlSelf->mkMac__DOT__y___05Fh10942);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1197 
           & vlSelf->mkMac__DOT__y___05Fh10942);
    mkMac__DOT____VdfgTmp_h4b4f87a5__0 = (1U ^ ((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695) 
                                                ^ (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2813)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2817 
        = ((~ (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695)) 
           & (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2813));
    vlSelf->mkMac__DOT__x___05Fh211372 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187241)));
    vlSelf->mkMac__DOT__y___05Fh187504 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh187241));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq21 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq20 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh110457 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq43 
        = ((IData)(mkMac__DOT____VdfgTmp_h4b4f87a5__0)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq42 
        = ((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2817)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh211549 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                                          & (IData)(vlSelf->mkMac__DOT__x___05Fh192781));
    vlSelf->mkMac__DOT__x___05Fh204794 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh192958));
    vlSelf->mkMac__DOT__y___05Fh193133 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh192958));
    vlSelf->mkMac__DOT__y___05Fh187430 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187504)));
    vlSelf->mkMac__DOT__y___05Fh110385 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110457)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2838 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh204794) 
             ^ (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2817)) 
            << 1U) | (IData)(mkMac__DOT____VdfgTmp_h4b4f87a5__0));
    vlSelf->mkMac__DOT__y___05Fh204970 = ((IData)(vlSelf->mkMac__DOT__x___05Fh204794) 
                                          & (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2817));
    vlSelf->mkMac__DOT__x___05Fh211548 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187430)));
    vlSelf->mkMac__DOT__y___05Fh187693 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187430));
    vlSelf->mkMac__DOT__y___05Fh110635 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh110385));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2795 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh211549)) 
            << 2U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                        ^ (IData)(vlSelf->mkMac__DOT__x___05Fh192781)) 
                       << 1U) | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh192781)))));
    vlSelf->mkMac__DOT__y___05Fh211724 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211549));
    vlSelf->mkMac__DOT__x___05Fh204969 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh193133));
    vlSelf->mkMac__DOT__y___05Fh193308 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193133));
    vlSelf->mkMac__DOT__y___05Fh187619 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187693)));
    vlSelf->mkMac__DOT__y___05Fh110563 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110635)));
    vlSelf->mkMac__DOT__y___05Fh205145 = ((IData)(vlSelf->mkMac__DOT__x___05Fh204969) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh204970));
    vlSelf->mkMac__DOT__x___05Fh211723 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187619)));
    vlSelf->mkMac__DOT__y___05Fh187882 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187619));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1360 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110563) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110385) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199))));
    vlSelf->mkMac__DOT__y___05Fh110813 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh110563));
    vlSelf->mkMac__DOT__y___05Fh211899 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211724));
    vlSelf->mkMac__DOT__x___05Fh205144 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh193308));
    vlSelf->mkMac__DOT__y___05Fh193483 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193308));
    vlSelf->mkMac__DOT__y___05Fh187808 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh187882)));
    vlSelf->mkMac__DOT__y___05Fh110741 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110813)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2839 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh205144) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh205145)) 
            << 3U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh204969) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh204970)) 
                       << 2U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2838)));
    vlSelf->mkMac__DOT__y___05Fh205320 = ((IData)(vlSelf->mkMac__DOT__x___05Fh205144) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205145));
    vlSelf->mkMac__DOT__x___05Fh211898 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187808)));
    vlSelf->mkMac__DOT__y___05Fh188071 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187808));
    vlSelf->mkMac__DOT__y___05Fh110991 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh110741));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2796 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh211899)) 
            << 4U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh211724)) 
                       << 3U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2795)));
    vlSelf->mkMac__DOT__y___05Fh212074 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh211899));
    vlSelf->mkMac__DOT__x___05Fh205319 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh193483));
    vlSelf->mkMac__DOT__y___05Fh193658 = ((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193483));
    vlSelf->mkMac__DOT__y___05Fh187997 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188071)));
    vlSelf->mkMac__DOT__y___05Fh110919 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh110991)));
    vlSelf->mkMac__DOT__y___05Fh205495 = ((IData)(vlSelf->mkMac__DOT__x___05Fh205319) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205320));
    vlSelf->mkMac__DOT__x___05Fh212073 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh187997)));
    vlSelf->mkMac__DOT__y___05Fh188260 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh187997));
    vlSelf->mkMac__DOT__y___05Fh111169 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh110919));
    vlSelf->mkMac__DOT__y___05Fh212249 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh212074));
    vlSelf->mkMac__DOT__x___05Fh205494 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh193658));
    vlSelf->mkMac__DOT__y___05Fh193833 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193658));
    vlSelf->mkMac__DOT__y___05Fh188186 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188260)));
    vlSelf->mkMac__DOT__y___05Fh111097 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111169)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2840 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh205494) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh205495)) 
            << 5U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh205319) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh205320)) 
                       << 4U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2839)));
    vlSelf->mkMac__DOT__y___05Fh205670 = ((IData)(vlSelf->mkMac__DOT__x___05Fh205494) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205495));
    vlSelf->mkMac__DOT__y___05Fh188449 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh188186));
    vlSelf->mkMac__DOT__x___05Fh212248 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh188186)));
    vlSelf->mkMac__DOT__y___05Fh111347 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh111097));
    vlSelf->mkMac__DOT__y___05Fh188375 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2635 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh188449)));
    vlSelf->mkMac__DOT__y___05Fh212424 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh212249));
    vlSelf->mkMac__DOT__x___05Fh192708 = (((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
                                           << 7U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                                            << 6U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
                                               << 5U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                                                  << 4U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
                                                     << 3U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                                                        << 2U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh192781) 
                                                           << 1U) 
                                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695))))))));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2797 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh212249)) 
            << 6U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh212074)) 
                       << 5U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2796)));
    vlSelf->mkMac__DOT__x___05Fh211299 = (((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
                                           << 6U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh212073) 
                                            << 5U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh211898) 
                                               << 4U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh211723) 
                                                  << 3U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh211548) 
                                                     << 2U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh211372) 
                                                        << 1U) 
                                                       | (IData)(vlSelf->mkMac__DOT__x___05Fh192781)))))));
    vlSelf->mkMac__DOT__x___05Fh205669 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
                                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh193833));
    vlSelf->mkMac__DOT__y___05Fh194008 = ((IData)(vlSelf->mkMac__DOT__x___05Fh212248) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh193833));
    vlSelf->mkMac__DOT__y___05Fh111275 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111347)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2693 
        = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2633 
                  >> 0xfU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh188375)));
    vlSelf->mkMac__DOT__mantissa_extended___05Fh191615 
        = vlSelf->mkMac__DOT__x___05Fh192708;
    vlSelf->mkMac__DOT__mantissa_extended___05F_1___05Fh210284 
        = (((IData)(vlSelf->mkMac__DOT__y___05Fh212424) 
            << 7U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2797));
    vlSelf->mkMac__DOT__mantissa_extended___05Fh210217 
        = vlSelf->mkMac__DOT__x___05Fh211299;
    vlSelf->mkMac__DOT__y___05Fh205845 = ((IData)(vlSelf->mkMac__DOT__x___05Fh205669) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205670));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1362 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111275) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111097) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh110919) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh110741) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1360)))));
    vlSelf->mkMac__DOT__y___05Fh111525 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh111275));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2729 
        = (((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2693) 
            | ((IData)(mkMac__DOT____VdfgTmp_hc85c1ed6__0) 
               & (IData)(vlSelf->mkMac__DOT__y___05Fh194008)))
            ? 0x82U : 0x81U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq48 
        = (((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695) 
            & (0x80U != (((IData)(vlSelf->mkMac__DOT__x___05Fh192781) 
                          << 8U) | (IData)(mkMac__DOT____VdfgTmp_haae52e5b__0))))
            ? vlSelf->mkMac__DOT__mantissa_extended___05F_1___05Fh210284
            : vlSelf->mkMac__DOT__mantissa_extended___05Fh210217);
    vlSelf->mkMac__DOT__y___05Fh206020 = ((IData)(vlSelf->mkMac__DOT__y___05Fh194008) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh205845));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2841 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh194008) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh205845)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh205669) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh205670)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2840)));
    vlSelf->mkMac__DOT__y___05Fh111453 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111525)));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730 
        = ((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1548) 
           ^ (IData)(vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2729));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732 
        = ((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1548) 
           & (IData)(vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2729));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2846 
        = ((IData)(vlSelf->mkMac__DOT__y___05Fh194008)
            ? (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2841)
            : (((IData)(vlSelf->mkMac__DOT__x___05Fh205669) 
                << 7U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh205494) 
                           << 6U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh205319) 
                                      << 5U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh205144) 
                                                 << 4U) 
                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh204969) 
                                                    << 3U) 
                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh204794) 
                                                       << 2U) 
                                                      | (((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2813) 
                                                          << 1U) 
                                                         | (1U 
                                                            & (~ (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2695)))))))))));
    vlSelf->mkMac__DOT__y___05Fh111703 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh111453));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO___05FETC___05Fq47 
        = ((1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO___05FETC___05Fq46 
        = ((1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh198514 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732)));
    vlSelf->mkMac__DOT___theResult___05F_fst___05Fh191673 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh194008) 
             & (IData)(vlSelf->mkMac__DOT__y___05Fh206020)) 
            << 8U) | (IData)(vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2846));
    vlSelf->mkMac__DOT__y___05Fh111631 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111703)));
    vlSelf->mkMac__DOT__y___05Fh198443 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh198514)));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2853 
        = ((IData)(mkMac__DOT____VdfgTmp_hc85c1ed6__0)
            ? vlSelf->mkMac__DOT___theResult___05F_fst___05Fh191673
            : vlSelf->mkMac__DOT__mantissa_extended___05Fh191615);
    vlSelf->mkMac__DOT__y___05Fh111881 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh111631));
    vlSelf->mkMac__DOT__y___05Fh198689 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh198443));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2855 
        = (0x7fU & ((IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2693)
                     ? vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq48
                     : vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2853));
    vlSelf->mkMac__DOT__y___05Fh111809 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh111881)));
    vlSelf->mkMac__DOT__y___05Fh198618 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh198689)));
    vlSelf->mkMac__DOT___theResult___05F_fst___05Fh191609 
        = ((IData)(vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05F_d2855) 
           << 0x10U);
    vlSelf->mkMac__DOT__y___05Fh112059 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111809));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2771 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh198618) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh198443) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                              << 1U))) 
                                    | (1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)))));
    vlSelf->mkMac__DOT__y___05Fh198864 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh198618));
    vlSelf->mkMac__DOT__y___05Fh111987 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112059)));
    vlSelf->mkMac__DOT__y___05Fh198793 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh198864)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1364 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111987) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh111809) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh111631) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh111453) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1362)))));
    vlSelf->mkMac__DOT__y___05Fh112237 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh111987));
    vlSelf->mkMac__DOT__y___05Fh199039 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh198793));
    vlSelf->mkMac__DOT__y___05Fh112165 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112237)));
    vlSelf->mkMac__DOT__y___05Fh198968 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh199039)));
    vlSelf->mkMac__DOT__y___05Fh112415 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112165));
    vlSelf->mkMac__DOT__y___05Fh199214 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh198968));
    vlSelf->mkMac__DOT__y___05Fh112343 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112415)));
    vlSelf->mkMac__DOT__y___05Fh199143 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh199214)));
    vlSelf->mkMac__DOT__y___05Fh112593 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112343));
    vlSelf->mkMac__DOT__y___05Fh199389 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh199143));
    vlSelf->mkMac__DOT__y___05Fh112521 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112593)));
    vlSelf->mkMac__DOT__y___05Fh199318 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2732) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh199389)));
    vlSelf->mkMac__DOT__y___05Fh112771 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112521));
    vlSelf->mkMac__DOT__final_exponent___05Fh121420 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh199318))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh199143) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh198968) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2730)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh198793) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d2771)))));
    vlSelf->mkMac__DOT__y___05Fh112699 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112771)));
    vlSelf->mkMac__DOT__x___05Fh121404 = (((IData)(vlSelf->mkMac__DOT__final_sign___05Fh121418) 
                                           << 0x1fU) 
                                          | (((IData)(vlSelf->mkMac__DOT__final_exponent___05Fh121420) 
                                              << 0x17U) 
                                             | vlSelf->mkMac__DOT___theResult___05F_fst___05Fh191609));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1366 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112699) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112521) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh112343) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh112165) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1364)))));
    vlSelf->mkMac__DOT__y___05Fh112949 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112699));
    vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)(vlSelf->mkMac__DOT__x___05Fh121404)) 
                    << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv[0U]))));
    vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mkMac__DOT__x___05Fh121404)) 
                     << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv[0U]))) 
                   >> 0x20U));
    vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[2U] = 1U;
    vlSelf->mkMac__DOT__y___05Fh112877 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh112949)));
    if (vlSelf->mkMac__DOT__reg_add_bf_valid_D_IN) {
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[2U];
    }
    vlSelf->mkMac__DOT__y___05Fh113127 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh112877));
    vlSelf->mkMac__DOT__fp_add_fifo_rv_D_IN[0U] = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__fp_add_fifo_rv_D_IN[1U] = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__fp_add_fifo_rv_D_IN[2U] = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[2U];
    vlSelf->mkMac__DOT__y___05Fh113055 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113127)));
    vlSelf->mkMac__DOT__y___05Fh113305 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113055));
    vlSelf->mkMac__DOT__y___05Fh113233 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113305)));
    vlSelf->mkMac__DOT__y___05Fh113483 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113233));
    vlSelf->mkMac__DOT__y___05Fh113411 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113483)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1368 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh113411) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh113233) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh113055) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh112877) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1366)))));
    vlSelf->mkMac__DOT__y___05Fh113661 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113411));
    vlSelf->mkMac__DOT__y___05Fh113589 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113661)));
    vlSelf->mkMac__DOT__y___05Fh113839 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113589));
    vlSelf->mkMac__DOT__y___05Fh113767 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh113839)));
    vlSelf->mkMac__DOT__y___05Fh114017 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113767));
    vlSelf->mkMac__DOT__y___05Fh113945 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114017)));
    vlSelf->mkMac__DOT__y___05Fh114195 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh113945));
    vlSelf->mkMac__DOT__y___05Fh114123 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114195)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1370 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114123) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh113945) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh113767) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh113589) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1368))));
    vlSelf->mkMac__DOT__y___05Fh114373 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114123));
    vlSelf->mkMac__DOT__y___05Fh114301 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114373)));
    vlSelf->mkMac__DOT__y___05Fh114551 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114301));
    vlSelf->mkMac__DOT__y___05Fh114479 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114551)));
    vlSelf->mkMac__DOT__y___05Fh114729 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114479));
    vlSelf->mkMac__DOT__y___05Fh114657 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114729)));
    vlSelf->mkMac__DOT__y___05Fh114907 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114657));
    vlSelf->mkMac__DOT__y___05Fh114835 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh114907)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1372 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114835) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh114657) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh114479) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh114301) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1370))));
    vlSelf->mkMac__DOT__y___05Fh115085 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh114835));
    vlSelf->mkMac__DOT__y___05Fh115013 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115085)));
    vlSelf->mkMac__DOT__y___05Fh115263 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115013));
    vlSelf->mkMac__DOT__y___05Fh115191 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115263)));
    vlSelf->mkMac__DOT__y___05Fh115441 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115191));
    vlSelf->mkMac__DOT__y___05Fh115369 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115441)));
    vlSelf->mkMac__DOT__y___05Fh115619 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh115369));
    vlSelf->mkMac__DOT__y___05Fh115547 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1201 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh115619)));
    vlSelf->mkMac__DOT__product___05Fh10940 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh115547) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh115369) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh115191) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1199) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh115013) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1372))));
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh3185 
        = ((0x80U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh10940
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1197);
    vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
        = (~ vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh3185);
    if ((1U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22)) {
        vlSelf->mkMac__DOT__IF_INV_INV_theResult___05F___05F_21852_BIT_0_THEN_1_EL_ETC___05Fq50 = 0U;
        vlSelf->mkMac__DOT__IF_INV_theResult___05F___05F_21852_BIT_0_THEN_2_ELSE_0___05Fq49 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_theResult___05F___05F_21852_BIT_0_THEN_1_EL_ETC___05Fq50 = 1U;
        vlSelf->mkMac__DOT__IF_INV_theResult___05F___05F_21852_BIT_0_THEN_2_ELSE_0___05Fq49 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh115951 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22)));
    vlSelf->mkMac__DOT__y___05Fh116126 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh115951));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1476 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116126) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh115951) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                           ^ (vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22)))));
    vlSelf->mkMac__DOT__y___05Fh116301 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh116126));
    vlSelf->mkMac__DOT__y___05Fh116476 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh116301));
    vlSelf->mkMac__DOT__y___05Fh116651 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh116476));
    vlSelf->mkMac__DOT__y___05Fh116826 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh116651));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1478 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116826) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116651) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh116476) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh116301) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1476)))));
    vlSelf->mkMac__DOT__y___05Fh117001 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh116826));
    vlSelf->mkMac__DOT__y___05Fh117176 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh117001));
    vlSelf->mkMac__DOT__y___05Fh117351 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh117176));
    vlSelf->mkMac__DOT__y___05Fh117526 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117351));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1480 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh117526) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh117351) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh117176) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh117001) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1478)))));
    vlSelf->mkMac__DOT__y___05Fh117701 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117526));
    vlSelf->mkMac__DOT__y___05Fh117876 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117701));
    vlSelf->mkMac__DOT__y___05Fh118051 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh117876));
    vlSelf->mkMac__DOT__y___05Fh118226 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118051));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1482 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118226) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118051) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh117876) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh117701) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1480)))));
    vlSelf->mkMac__DOT__y___05Fh118401 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118226));
    vlSelf->mkMac__DOT__y___05Fh118576 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118401));
    vlSelf->mkMac__DOT__y___05Fh118751 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118576));
    vlSelf->mkMac__DOT__y___05Fh118926 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118751));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1484 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118926) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh118751) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh118576) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh118401) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1482)))));
    vlSelf->mkMac__DOT__y___05Fh119101 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh118926));
    vlSelf->mkMac__DOT__y___05Fh119276 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119101));
    vlSelf->mkMac__DOT__y___05Fh119451 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119276));
    vlSelf->mkMac__DOT__y___05Fh119626 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119451));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1486 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh119626) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh119451) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh119276) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh119101) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1484))));
    vlSelf->mkMac__DOT__y___05Fh119801 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119626));
    vlSelf->mkMac__DOT__y___05Fh119976 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119801));
    vlSelf->mkMac__DOT__y___05Fh120151 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh119976));
    vlSelf->mkMac__DOT__y___05Fh120326 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120151));
    vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1488 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh120326) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh120151) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh119976) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh119801) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1486))));
    vlSelf->mkMac__DOT__y___05Fh120501 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120326));
    vlSelf->mkMac__DOT__y___05Fh120676 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120501));
    vlSelf->mkMac__DOT__y___05Fh120851 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120676));
    vlSelf->mkMac__DOT__y___05Fh121026 = ((vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh120851));
    vlSelf->mkMac__DOT__product___05Fh3298 = (((0x80000000U 
                                                & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh121026) 
                                                  << 0x1fU)) 
                                              | ((0x40000000U 
                                                  & ((0xc0000000U 
                                                      & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh120851) 
                                                      << 0x1eU))) 
                                                 | ((0x20000000U 
                                                     & ((0xe0000000U 
                                                         & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                        ^ 
                                                        ((IData)(vlSelf->mkMac__DOT__y___05Fh120676) 
                                                         << 0x1dU))) 
                                                    | ((0x10000000U 
                                                        & ((0xf0000000U 
                                                            & vlSelf->mkMac__DOT__INV_theResult___05F___05F_2185___05Fq22) 
                                                           ^ 
                                                           ((IData)(vlSelf->mkMac__DOT__y___05Fh120501) 
                                                            << 0x1cU))) 
                                                       | vlSelf->mkMac__DOT__INV_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_3_ETC___05F_d1488))));
    vlSelf->mkMac__DOT__x___05Fh3178 = ((1U & VL_REDXOR_32(
                                                           (0x800080U 
                                                            & vlSelf->mkMac__DOT__int_mul_fifo_rv[1U])))
                                         ? vlSelf->mkMac__DOT__product___05Fh3298
                                         : vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh3185);
    vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)(vlSelf->mkMac__DOT__x___05Fh3178)) 
                    << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__int_mul_fifo_rv[0U]))));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mkMac__DOT__x___05Fh3178)) 
                     << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__int_mul_fifo_rv[0U]))) 
                   >> 0x20U));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[2U] = 1U;
    if (vlSelf->mkMac__DOT__reg_add_int_valid_D_IN) {
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[2U];
    }
    vlSelf->mkMac__DOT__int_add_fifo_rv_D_IN[0U] = 
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__int_add_fifo_rv_D_IN[1U] = 
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__int_add_fifo_rv_D_IN[2U] = 
        vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[2U];
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
            VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Pipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "Input combinational region did not converge.");
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
            VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Pipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "NBA region did not converge.");
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
                VL_FATAL_MT("/home/vignesh/ECE-633-Independent-Study/HLS-with-BSV-ECE633-Independent-Study/Project_1_MAC_Analysis/Pipelined_Project_TestCases/mac/verilog/mkMac.v", 37, "", "Active region did not converge.");
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
