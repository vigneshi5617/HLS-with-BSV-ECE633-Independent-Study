// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop__pch.h"
#include "Vtop___024root.h"

VL_INLINE_OPT void Vtop___024root___ico_sequent__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ico_sequent__TOP__1\n"); );
    // Init
    CData/*0:0*/ mkMac__DOT____VdfgTmp_hc85c1ed6__0;
    mkMac__DOT____VdfgTmp_hc85c1ed6__0 = 0;
    CData/*7:0*/ mkMac__DOT____VdfgTmp_haae52e5b__0;
    mkMac__DOT____VdfgTmp_haae52e5b__0 = 0;
    CData/*0:0*/ mkMac__DOT____VdfgTmp_h4b4f87a5__0;
    mkMac__DOT____VdfgTmp_h4b4f87a5__0 = 0;
    // Body
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
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h67a0818d__0;
    mkMac__DOT____VdfgTmp_h67a0818d__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h8550b14b__0;
    mkMac__DOT____VdfgTmp_h8550b14b__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_h70a41801__0;
    mkMac__DOT____VdfgTmp_h70a41801__0 = 0;
    CData/*4:0*/ mkMac__DOT____VdfgTmp_hd10129e7__0;
    mkMac__DOT____VdfgTmp_hd10129e7__0 = 0;
    // Body
    if (vlSelf->RST_N) {
        if (vlSelf->mkMac__DOT__reg_output_valid_EN) {
            vlSelf->mkMac__DOT__reg_output_valid = vlSelf->mkMac__DOT__reg_output_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_mult_bf_valid_EN) {
            vlSelf->mkMac__DOT__reg_mult_bf_valid = vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN_port1___05Fwrite;
        }
        if (vlSelf->mkMac__DOT__reg_mult_int_valid_EN) {
            vlSelf->mkMac__DOT__reg_mult_int_valid 
                = vlSelf->mkMac__DOT__int_mul_fifo_rv_EN_port1___05Fwrite;
        }
        if (vlSelf->mkMac__DOT__reg_result_EN) {
            vlSelf->mkMac__DOT__reg_result = vlSelf->mkMac__DOT__reg_result_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_out_int_valid_EN) {
            vlSelf->mkMac__DOT__reg_out_int_valid = vlSelf->mkMac__DOT__reg_out_int_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_out_bf_valid_EN) {
            vlSelf->mkMac__DOT__reg_out_bf_valid = vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_add_bf_valid_EN) {
            vlSelf->mkMac__DOT__reg_add_bf_valid = vlSelf->mkMac__DOT__reg_add_bf_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_add_int_valid_EN) {
            vlSelf->mkMac__DOT__reg_add_int_valid = vlSelf->mkMac__DOT__reg_add_int_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__reg_input_valid_D_IN) {
            vlSelf->mkMac__DOT__reg_operand_c = vlSelf->mkMac__DOT__reg_operand_c_D_IN;
            vlSelf->mkMac__DOT__reg_operand_a = vlSelf->mkMac__DOT__reg_operand_a_D_IN;
            vlSelf->mkMac__DOT__reg_operand_b = vlSelf->mkMac__DOT__reg_operand_b_D_IN;
            vlSelf->mkMac__DOT__reg_mode_fp = vlSelf->mkMac__DOT__reg_mode_fp_D_IN;
        }
        if (vlSelf->mkMac__DOT__int_out_fifo_rv_EN) {
            vlSelf->mkMac__DOT__int_out_fifo_rv = vlSelf->mkMac__DOT__int_out_fifo_rv_port2___05Fread;
        }
        if (vlSelf->mkMac__DOT__fp_out_fifo_rv_EN) {
            vlSelf->mkMac__DOT__fp_out_fifo_rv = vlSelf->mkMac__DOT__fp_out_fifo_rv_port2___05Fread;
        }
        if (vlSelf->mkMac__DOT__reg_input_valid_EN) {
            vlSelf->mkMac__DOT__reg_input_valid = vlSelf->mkMac__DOT__reg_input_valid_D_IN;
        }
        if (vlSelf->mkMac__DOT__int_add_fifo_rv_EN) {
            vlSelf->mkMac__DOT__int_add_fifo_rv[0U] 
                = vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[0U];
            vlSelf->mkMac__DOT__int_add_fifo_rv[1U] 
                = vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[1U];
            vlSelf->mkMac__DOT__int_add_fifo_rv[2U] 
                = vlSelf->mkMac__DOT__int_add_fifo_rv_port2___05Fread[2U];
        }
        if (vlSelf->mkMac__DOT__fp_add_fifo_rv_EN) {
            vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[0U];
            vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[1U];
            vlSelf->mkMac__DOT__fp_add_fifo_rv[2U] 
                = vlSelf->mkMac__DOT__fp_add_fifo_rv_port2___05Fread[2U];
        }
        if (vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN) {
            vlSelf->mkMac__DOT__fp_mul_fifo_rv[0U] 
                = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[0U];
            vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[1U];
            vlSelf->mkMac__DOT__fp_mul_fifo_rv[2U] 
                = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[2U];
        }
        if (vlSelf->mkMac__DOT__int_mul_fifo_rv_EN) {
            vlSelf->mkMac__DOT__int_mul_fifo_rv[0U] 
                = vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[0U];
            vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] 
                = vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[1U];
            vlSelf->mkMac__DOT__int_mul_fifo_rv[2U] 
                = vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[2U];
        }
    } else {
        vlSelf->mkMac__DOT__reg_output_valid = 0U;
        vlSelf->mkMac__DOT__reg_mult_bf_valid = 0U;
        vlSelf->mkMac__DOT__reg_mult_int_valid = 0U;
        vlSelf->mkMac__DOT__reg_result = 0U;
        vlSelf->mkMac__DOT__reg_out_int_valid = 0U;
        vlSelf->mkMac__DOT__reg_out_bf_valid = 0U;
        vlSelf->mkMac__DOT__reg_add_bf_valid = 0U;
        vlSelf->mkMac__DOT__reg_add_int_valid = 0U;
        vlSelf->mkMac__DOT__reg_operand_c = 0U;
        vlSelf->mkMac__DOT__reg_operand_a = 0U;
        vlSelf->mkMac__DOT__reg_operand_b = 0U;
        vlSelf->mkMac__DOT__int_out_fifo_rv = 0ULL;
        vlSelf->mkMac__DOT__reg_mode_fp = 0U;
        vlSelf->mkMac__DOT__fp_out_fifo_rv = 0ULL;
        vlSelf->mkMac__DOT__reg_input_valid = 0U;
        vlSelf->mkMac__DOT__int_add_fifo_rv[0U] = 0U;
        vlSelf->mkMac__DOT__int_add_fifo_rv[1U] = 0U;
        vlSelf->mkMac__DOT__int_add_fifo_rv[2U] = 0U;
        vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] = 0U;
        vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] = 0U;
        vlSelf->mkMac__DOT__fp_add_fifo_rv[2U] = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv[0U] = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv[2U] = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv[0U] = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv[2U] = 0U;
    }
    vlSelf->RDY_mac_op = vlSelf->mkMac__DOT__reg_output_valid;
    vlSelf->mac_op = vlSelf->mkMac__DOT__reg_result;
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[0U] 
        = (IData)((((QData)((IData)((((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                      << 0x10U) | (IData)(vlSelf->mkMac__DOT__reg_operand_b)))) 
                    << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__reg_operand_c))));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[1U] 
        = (IData)(((((QData)((IData)((((IData)(vlSelf->mkMac__DOT__reg_operand_a) 
                                       << 0x10U) | (IData)(vlSelf->mkMac__DOT__reg_operand_b)))) 
                     << 0x20U) | (QData)((IData)(vlSelf->mkMac__DOT__reg_operand_c))) 
                   >> 0x20U));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[2U] = 1U;
    vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int = (1U 
                                                   & (IData)(
                                                             (vlSelf->mkMac__DOT__int_out_fifo_rv 
                                                              >> 0x20U)));
    vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp = (1U 
                                                  & (IData)(
                                                            (vlSelf->mkMac__DOT__fp_out_fifo_rv 
                                                             >> 0x20U)));
    vlSelf->mkMac__DOT__CAN_FIRE_RL_rl_mac_inputs = vlSelf->mkMac__DOT__reg_input_valid;
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN_port1___05Fwrite 
        = ((IData)(vlSelf->mkMac__DOT__reg_input_valid) 
           & (IData)(vlSelf->mkMac__DOT__reg_mode_fp));
    vlSelf->mkMac__DOT__int_mul_fifo_rv_EN_port1___05Fwrite 
        = ((~ (IData)(vlSelf->mkMac__DOT__reg_mode_fp)) 
           & (IData)(vlSelf->mkMac__DOT__reg_input_valid));
    vlSelf->mkMac__DOT__reg_out_int_valid_D_IN = (1U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv[2U]);
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
        = (vlSelf->mkMac__DOT__int_add_fifo_rv[1U] 
           ^ vlSelf->mkMac__DOT__int_add_fifo_rv[0U]);
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
        = (vlSelf->mkMac__DOT__int_add_fifo_rv[1U] 
           & vlSelf->mkMac__DOT__int_add_fifo_rv[0U]);
    vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN = (1U 
                                                 & vlSelf->mkMac__DOT__fp_add_fifo_rv[2U]);
    vlSelf->mkMac__DOT__fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050_EQ___05FETC___05F_d3052 
        = ((vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
            >> 0x1fU) == (vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                          >> 0x1fU));
    vlSelf->mkMac__DOT__mantissa_a___05Fh223453 = (0x800000U 
                                                   | (0x7fffffU 
                                                      & vlSelf->mkMac__DOT__fp_add_fifo_rv[1U]));
    vlSelf->mkMac__DOT__mantissa_b___05Fh223458 = (0x800000U 
                                                   | (0x7fffffU 
                                                      & vlSelf->mkMac__DOT__fp_add_fifo_rv[0U]));
    vlSelf->mkMac__DOT__exponent_a___05Fh223450 = (0xffU 
                                                   & (vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                                                      >> 0x17U));
    vlSelf->mkMac__DOT__exponent_b___05Fh223455 = (0xffU 
                                                   & (vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                                                      >> 0x17U));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2 
        = (0xffU & (~ ((vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                        << 9U) | (vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                                  >> 0x17U))));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1 
        = (0xffU & (~ ((vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                        << 9U) | (vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                                  >> 0x17U))));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq23 
        = ((IData)((0x10001U == (0x10001U & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__final_sign___05Fh121418 = (1U 
                                                   & VL_REDXOR_32(
                                                                  (0x80008000U 
                                                                   & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])));
    vlSelf->mkMac__DOT__reg_add_bf_valid_D_IN = (1U 
                                                 & vlSelf->mkMac__DOT__fp_mul_fifo_rv[2U]);
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505 
        = (0xffU & (((vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                      << 9U) | (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                >> 0x17U)) ^ ((vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                               << 0x19U) 
                                              | (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                 >> 7U))));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507 
        = (0xffU & (((vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                      << 9U) | (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                >> 0x17U)) & ((vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                               << 0x19U) 
                                              | (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                 >> 7U))));
    vlSelf->mkMac__DOT__y___05Fh129034 = (0x4000U | 
                                          (0x3f80U 
                                           & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                              >> 9U)));
    vlSelf->mkMac__DOT__y___05Fh130304 = ((0x40U & 
                                           vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x2000U 
                                              | (0x1fc0U 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xaU)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh131574 = ((0x20U & 
                                           vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x1000U 
                                              | (0xfe0U 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xbU)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh132844 = ((0x10U & 
                                           vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x800U 
                                              | (0x7f0U 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xcU)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh134114 = ((8U & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x400U 
                                              | (0x3f8U 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xdU)))
                                           : 0U);
    vlSelf->mkMac__DOT__y___05Fh135384 = ((4U & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x200U 
                                              | (0x1fcU 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xeU)))
                                           : 0U);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1552 
        = ((1U & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
            ? (0x80U | (0x7fU & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                 >> 0x10U))) : 0U);
    vlSelf->mkMac__DOT__y___05Fh136654 = ((2U & vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U])
                                           ? (0x100U 
                                              | (0xfeU 
                                                 & (vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U] 
                                                    >> 0xfU)))
                                           : 0U);
    vlSelf->mkMac__DOT__reg_add_int_valid_D_IN = (1U 
                                                  & vlSelf->mkMac__DOT__int_mul_fifo_rv[2U]);
    vlSelf->mkMac__DOT__x___05Fh5460 = (0xffU & (~ 
                                                 vlSelf->mkMac__DOT__int_mul_fifo_rv[1U]));
    vlSelf->mkMac__DOT__x___05Fh66015 = (0xffU & (~ 
                                                  ((vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] 
                                                      >> 0x10U))));
    vlSelf->mkMac__DOT__RDY_mac_op = vlSelf->RDY_mac_op;
    vlSelf->mkMac__DOT__mac_op = vlSelf->mac_op;
    if (vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int) {
        vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_int = 1U;
        vlSelf->mkMac__DOT__int_out_fifo_rv_port1___05Fread = 0ULL;
    } else {
        vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_int = 0U;
        vlSelf->mkMac__DOT__int_out_fifo_rv_port1___05Fread 
            = vlSelf->mkMac__DOT__int_out_fifo_rv;
    }
    vlSelf->mkMac__DOT__WILL_FIRE_RL_dequeue_fp = vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp;
    vlSelf->mkMac__DOT__reg_output_valid_EN = ((IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp) 
                                               | (IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int));
    vlSelf->mkMac__DOT__reg_result_EN = ((IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_int) 
                                         | (IData)(vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp));
    if (vlSelf->mkMac__DOT__CAN_FIRE_RL_dequeue_fp) {
        vlSelf->mkMac__DOT__reg_result_D_IN = (IData)(vlSelf->mkMac__DOT__fp_out_fifo_rv);
        vlSelf->mkMac__DOT__fp_out_fifo_rv_port1___05Fread = 0ULL;
    } else {
        vlSelf->mkMac__DOT__reg_result_D_IN = (IData)(vlSelf->mkMac__DOT__int_out_fifo_rv);
        vlSelf->mkMac__DOT__fp_out_fifo_rv_port1___05Fread 
            = vlSelf->mkMac__DOT__fp_out_fifo_rv;
    }
    vlSelf->mkMac__DOT__WILL_FIRE_RL_rl_mac_inputs 
        = vlSelf->mkMac__DOT__CAN_FIRE_RL_rl_mac_inputs;
    vlSelf->mkMac__DOT__reg_mult_bf_valid_1_whas = vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__reg_mult_bf_valid_D_IN = vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__reg_mult_int_valid_1_whas = vlSelf->mkMac__DOT__int_mul_fifo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__reg_mult_int_valid_D_IN = vlSelf->mkMac__DOT__int_mul_fifo_rv_EN_port1___05Fwrite;
    vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage2 
        = vlSelf->mkMac__DOT__reg_out_int_valid_D_IN;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage2 
        = vlSelf->mkMac__DOT__reg_out_int_valid_D_IN;
    vlSelf->mkMac__DOT__IF_int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_ETC___05Fq94 
        = ((1U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_ETC___05Fq93 
        = ((1U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh218183 = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870));
    vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage2 
        = vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN;
    vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage2 
        = vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN;
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3057 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh223450 
           <= vlSelf->mkMac__DOT__exponent_b___05Fh223455);
    if ((1U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2))) {
        vlSelf->mkMac__DOT__IF_INV_INV_fp_add_fifo_rv_BITS_30_TO_23_BIT_0___05FETC___05Fq61 = 0U;
        vlSelf->mkMac__DOT__IF_INV_fp_add_fifo_rv_BITS_30_TO_23_BIT_0_THEN_ETC___05Fq60 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_fp_add_fifo_rv_BITS_30_TO_23_BIT_0___05FETC___05Fq61 = 1U;
        vlSelf->mkMac__DOT__IF_INV_fp_add_fifo_rv_BITS_30_TO_23_BIT_0_THEN_ETC___05Fq60 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh264948 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2))));
    if ((1U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1))) {
        vlSelf->mkMac__DOT__IF_INV_INV_fp_add_fifo_rv_BITS_62_TO_55_BIT_0___05FETC___05Fq52 = 0U;
        vlSelf->mkMac__DOT__IF_INV_fp_add_fifo_rv_BITS_62_TO_55_BIT_0_THEN_ETC___05Fq51 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_fp_add_fifo_rv_BITS_62_TO_55_BIT_0___05FETC___05Fq52 = 1U;
        vlSelf->mkMac__DOT__IF_INV_fp_add_fifo_rv_BITS_62_TO_55_BIT_0_THEN_ETC___05Fq51 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh225933 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1))));
    if (vlSelf->mkMac__DOT__reg_add_bf_valid_D_IN) {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_fp_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_fp_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv[0U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv[1U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv[2U];
    }
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO___05FETC___05Fq39 
        = ((1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO___05FETC___05Fq38 
        = ((1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh123870 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507)));
    vlSelf->mkMac__DOT__x___05Fh136653 = vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1552;
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
        = (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1552 
           ^ vlSelf->mkMac__DOT__y___05Fh136654);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
        = (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1552 
           & vlSelf->mkMac__DOT__y___05Fh136654);
    if (vlSelf->mkMac__DOT__reg_add_int_valid_D_IN) {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage1 = 1U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__CAN_FIRE_RL_int_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__WILL_FIRE_RL_int_pipe_stage1 = 0U;
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv[0U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv[1U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv[2U];
    }
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_3_ETC___05F_d50 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh5460));
    if ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh5460))) {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_ETC___05Fq4 = 0U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BIT_ETC___05Fq3 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_ETC___05Fq4 = 1U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BIT_ETC___05Fq3 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh5692 = (IData)((3U 
                                                == 
                                                (3U 
                                                 & (IData)(vlSelf->mkMac__DOT__x___05Fh5460))));
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_5_ETC___05F_d92 
        = (((- (IData)((1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                              >> 7U)))) << 8U) | (IData)(vlSelf->mkMac__DOT__x___05Fh66015));
    if ((1U & (IData)(vlSelf->mkMac__DOT__x___05Fh66015))) {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_ETC___05Fq6 = 0U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BIT_ETC___05Fq5 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_ETC___05Fq6 = 1U;
        vlSelf->mkMac__DOT__IF_SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BIT_ETC___05Fq5 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh66247 = (IData)((3U 
                                                 == 
                                                 (3U 
                                                  & (IData)(vlSelf->mkMac__DOT__x___05Fh66015))));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2933 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 1U) | (IData)(vlSelf->mkMac__DOT__y___05Fh218183)));
    vlSelf->mkMac__DOT__y___05Fh265123 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh264948));
    vlSelf->mkMac__DOT__y___05Fh226108 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh225933));
    if (vlSelf->mkMac__DOT__fp_mul_fifo_rv_EN_port1___05Fwrite) {
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fread[2U];
    }
    vlSelf->mkMac__DOT__y___05Fh123799 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh123870)));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq25 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq24 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh146603 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563));
    if (vlSelf->mkMac__DOT__int_mul_fifo_rv_EN_port1___05Fwrite) {
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[0U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[1U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port1___05Fwrite_1[2U];
    } else {
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[0U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[1U];
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_mul_fifo_rv_port1___05Fread[2U];
    }
    vlSelf->mkMac__DOT__y___05Fh5867 = (((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                         >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5692));
    vlSelf->mkMac__DOT__y___05Fh66422 = (((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh66247));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3028 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                  ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2933) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                        ^ (vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868)));
    vlSelf->mkMac__DOT__y___05Fh218354 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2933));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316 
        = (0xffU & ((IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3057)
                     ? ((vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                         << 9U) | (vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                                   >> 0x17U)) : ((vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                                                  << 9U) 
                                                 | (vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                                                    >> 0x17U))));
    if ((1U & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316))) {
        vlSelf->mkMac__DOT__IF_IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fre_ETC___05Fq90 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0_ETC___05Fq91 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq88 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq89 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fre_ETC___05Fq90 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0_ETC___05Fq91 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq88 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq89 = 1U;
    }
    vlSelf->mkMac__DOT__selected_exponent___05Fh223464 
        = vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316;
    vlSelf->mkMac__DOT__x___05Fh342448 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 1U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87 
        = (0xffU & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316)));
    vlSelf->mkMac__DOT__y___05Fh337150 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316))));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_30_TO_ETC___05F_d3777 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh265123) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh264948) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2))))));
    vlSelf->mkMac__DOT__y___05Fh265298 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh265123));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_62_TO_ETC___05F_d3090 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh226108) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh225933) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1))))));
    vlSelf->mkMac__DOT__y___05Fh226283 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226108));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_D_IN[0U] = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_D_IN[1U] = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_D_IN[2U] = vlSelf->mkMac__DOT__fp_mul_fifo_rv_port2___05Fread[2U];
    vlSelf->mkMac__DOT__y___05Fh124045 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh123799));
    vlSelf->mkMac__DOT__y___05Fh146529 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh146603)));
    vlSelf->mkMac__DOT__int_mul_fifo_rv_D_IN[0U] = 
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[0U];
    vlSelf->mkMac__DOT__int_mul_fifo_rv_D_IN[1U] = 
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[1U];
    vlSelf->mkMac__DOT__int_mul_fifo_rv_D_IN[2U] = 
        vlSelf->mkMac__DOT__int_mul_fifo_rv_port2___05Fread[2U];
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_3_ETC___05F_d78 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh5867) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh5692) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh5460))))));
    vlSelf->mkMac__DOT__y___05Fh6042 = (((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                         >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh5867));
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_5_ETC___05F_d120 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh66422) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh66247) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                              << 1U))) 
                                    | (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh66015))))));
    vlSelf->mkMac__DOT__y___05Fh66597 = (((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh66422));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2935 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 2U) | (IData)(vlSelf->mkMac__DOT__y___05Fh218354)));
    vlSelf->mkMac__DOT__y___05Fh342625 = ((~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316)) 
                                          & (IData)(vlSelf->mkMac__DOT__x___05Fh342448));
    vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq92 
        = ((1U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh349213 = (1U & (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                                 >> 1U) 
                                                & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316)));
    vlSelf->mkMac__DOT__x___05Fh342624 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh337150)));
    vlSelf->mkMac__DOT__y___05Fh337325 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh337150));
    vlSelf->mkMac__DOT__y___05Fh265473 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh265298));
    vlSelf->mkMac__DOT__y___05Fh226458 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226283));
    vlSelf->mkMac__DOT__y___05Fh123974 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh124045)));
    vlSelf->mkMac__DOT__y___05Fh146792 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh146529));
    vlSelf->mkMac__DOT__y___05Fh6217 = (((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                         >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6042));
    vlSelf->mkMac__DOT__y___05Fh66772 = (((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh66597));
    vlSelf->mkMac__DOT__y___05Fh218525 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2935));
    vlSelf->mkMac__DOT__y___05Fh349141 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh349213)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5365 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh342624) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh342625)) 
            << 2U) | ((2U & (((~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316)) 
                              ^ (IData)(vlSelf->mkMac__DOT__x___05Fh342448)) 
                             << 1U)) | (1U & (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316))));
    vlSelf->mkMac__DOT__y___05Fh342800 = ((IData)(vlSelf->mkMac__DOT__x___05Fh342624) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh342625));
    vlSelf->mkMac__DOT__x___05Fh342799 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh337325)));
    vlSelf->mkMac__DOT__y___05Fh337500 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh337325));
    vlSelf->mkMac__DOT__y___05Fh265648 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh265473));
    vlSelf->mkMac__DOT__y___05Fh226633 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226458));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1546 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh123974) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh123799) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                              << 1U))) 
                                    | (1U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)))));
    vlSelf->mkMac__DOT__y___05Fh124220 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh123974));
    vlSelf->mkMac__DOT__y___05Fh146718 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh146792)));
    vlSelf->mkMac__DOT__y___05Fh6392 = (((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                         >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6217));
    vlSelf->mkMac__DOT__y___05Fh66947 = (((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh66772));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2937 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 3U) | (IData)(vlSelf->mkMac__DOT__y___05Fh218525)));
    vlSelf->mkMac__DOT__y___05Fh349390 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh349141));
    vlSelf->mkMac__DOT__y___05Fh342975 = ((IData)(vlSelf->mkMac__DOT__x___05Fh342799) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh342800));
    vlSelf->mkMac__DOT__x___05Fh342974 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh337500)));
    vlSelf->mkMac__DOT__y___05Fh337675 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh337500));
    vlSelf->mkMac__DOT__y___05Fh265823 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh265648));
    vlSelf->mkMac__DOT__y___05Fh226808 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226633));
    vlSelf->mkMac__DOT__y___05Fh124149 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh124220)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1722 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh146718) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh146529) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561))));
    vlSelf->mkMac__DOT__y___05Fh146981 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh146718));
    vlSelf->mkMac__DOT__y___05Fh6567 = (((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                                         >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh6392));
    vlSelf->mkMac__DOT__y___05Fh67122 = (((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh66947));
    vlSelf->mkMac__DOT__y___05Fh218696 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2937));
    vlSelf->mkMac__DOT__y___05Fh349318 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh349390)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5366 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh342974) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh342975)) 
            << 4U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh342799) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh342800)) 
                       << 3U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5365)));
    vlSelf->mkMac__DOT__y___05Fh343150 = ((IData)(vlSelf->mkMac__DOT__x___05Fh342974) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh342975));
    vlSelf->mkMac__DOT__x___05Fh343149 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh337675)));
    vlSelf->mkMac__DOT__y___05Fh337850 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh337675));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_30_TO_ETC___05F_d3779 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh265823))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh265648) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh265473) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh265298) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_30_TO_ETC___05F_d3777)))));
    vlSelf->mkMac__DOT__y___05Fh270023 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_30_TO_23___05Fq2) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh265823));
    vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_62_TO_ETC___05F_d3092 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh226808))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh226633) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh226458) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh226283) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_62_TO_ETC___05F_d3090)))));
    vlSelf->mkMac__DOT__y___05Fh231008 = (((IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_BITS_62_TO_55___05Fq1) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh226808));
    vlSelf->mkMac__DOT__y___05Fh124395 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh124149));
    vlSelf->mkMac__DOT__y___05Fh146907 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh146981)));
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_3_ETC___05F_d80 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__x___05Fh5460) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh6567))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh6392) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh6217) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__x___05Fh5460)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh6042) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_3_ETC___05F_d78)))));
    vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_5_ETC___05F_d122 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__x___05Fh66015) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh67122))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh66947) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh66772) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__x___05Fh66015)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh66597) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_5_ETC___05F_d120)))));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2939 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 4U) | (IData)(vlSelf->mkMac__DOT__y___05Fh218696)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5413 
        = ((8U & ((0xfffffff8U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh349318) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh349141) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                              << 1U))) 
                                    | (1U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)))));
    vlSelf->mkMac__DOT__y___05Fh349567 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh349318));
    vlSelf->mkMac__DOT__y___05Fh343325 = ((IData)(vlSelf->mkMac__DOT__x___05Fh343149) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh343150));
    vlSelf->mkMac__DOT__x___05Fh343324 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh337850)));
    vlSelf->mkMac__DOT__y___05Fh338025 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh337850));
    vlSelf->mkMac__DOT__exponent_b_neg___05Fh223456 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh270023)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_30_TO_ETC___05F_d3779)))))))))))))))))))))))));
    vlSelf->mkMac__DOT__exponent_a_neg___05Fh223451 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh231008)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_fp_add_fifo_rv_port0___05Fread___05F044_BITS_62_TO_ETC___05F_d3092)))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh124324 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh124395)));
    vlSelf->mkMac__DOT__y___05Fh147170 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh146907));
    vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81 
        = (0xffU & ((0x80U & vlSelf->mkMac__DOT__int_mul_fifo_rv[1U])
                     ? (IData)(vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_3_ETC___05F_d80)
                     : vlSelf->mkMac__DOT__int_mul_fifo_rv[1U]));
    vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123 
        = (0xffU & ((0x800000U & vlSelf->mkMac__DOT__int_mul_fifo_rv[1U])
                     ? (IData)(vlSelf->mkMac__DOT__SEXT_INV_int_mul_fifo_rv_port0___05Fread___05F8_BITS_5_ETC___05F_d122)
                     : ((vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] 
                         << 0x10U) | (vlSelf->mkMac__DOT__int_mul_fifo_rv[1U] 
                                      >> 0x10U))));
    vlSelf->mkMac__DOT__y___05Fh218867 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2939));
    vlSelf->mkMac__DOT__y___05Fh349495 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh349567)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5367 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh343324) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh343325)) 
            << 6U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh343149) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh343150)) 
                       << 5U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5366)));
    vlSelf->mkMac__DOT__y___05Fh343500 = ((IData)(vlSelf->mkMac__DOT__x___05Fh343324) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh343325));
    vlSelf->mkMac__DOT__y___05Fh338200 = (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh338025));
    vlSelf->mkMac__DOT__x___05Fh343499 = (IData)((((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                   >> 7U) 
                                                  ^ (IData)(vlSelf->mkMac__DOT__y___05Fh338025)));
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh223450 
           & vlSelf->mkMac__DOT__exponent_b_neg___05Fh223456);
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
        = (vlSelf->mkMac__DOT__exponent_a___05Fh223450 
           ^ vlSelf->mkMac__DOT__exponent_b_neg___05Fh223456);
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
        = (vlSelf->mkMac__DOT__exponent_b___05Fh223455 
           & vlSelf->mkMac__DOT__exponent_a_neg___05Fh223451);
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
        = (vlSelf->mkMac__DOT__exponent_b___05Fh223455 
           ^ vlSelf->mkMac__DOT__exponent_a_neg___05Fh223451);
    vlSelf->mkMac__DOT__y___05Fh124570 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh124324));
    vlSelf->mkMac__DOT__y___05Fh147096 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh147170)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5___05FETC___05Fq7 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123))
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh10942 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 7U);
    vlSelf->mkMac__DOT__y___05Fh18514 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 6U);
    vlSelf->mkMac__DOT__y___05Fh26086 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 5U);
    vlSelf->mkMac__DOT__y___05Fh33658 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 4U);
    vlSelf->mkMac__DOT__y___05Fh41230 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 3U);
    vlSelf->mkMac__DOT__y___05Fh48802 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 2U);
    vlSelf->mkMac__DOT__y___05Fh56374 = ((IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123) 
                                         << 1U);
    vlSelf->mkMac__DOT__product___05Fh63944 = vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_55_5_THE_ETC___05F_d123;
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2941 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 5U) | (IData)(vlSelf->mkMac__DOT__y___05Fh218867)));
    vlSelf->mkMac__DOT__y___05Fh349744 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh349495));
    vlSelf->mkMac__DOT__y___05Fh343675 = ((IData)(vlSelf->mkMac__DOT__x___05Fh343499) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh343500));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq62 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794)
            ? 2ULL : 0ULL);
    if ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792)) {
        vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq63 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq64 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq65 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq63 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq64 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq65 = 1U;
    }
    vlSelf->mkMac__DOT__x___05Fh278152 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 1U) 
                                                ^ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794));
    vlSelf->mkMac__DOT__y___05Fh270494 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq53 
        = ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107)
            ? 2ULL : 0ULL);
    if ((1U & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105)) {
        vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq54 = 1U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq55 = 2ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq56 = 0U;
    } else {
        vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq54 = 0U;
        vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq55 = 0ULL;
        vlSelf->mkMac__DOT__IF_INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05FETC___05Fq56 = 1U;
    }
    vlSelf->mkMac__DOT__x___05Fh245227 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 1U) 
                                                ^ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107));
    vlSelf->mkMac__DOT__y___05Fh231479 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107));
    vlSelf->mkMac__DOT__y___05Fh124499 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh124570)));
    vlSelf->mkMac__DOT__y___05Fh147359 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh147096));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d129 
        = ((1U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh63944
            : 0U);
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3030 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                     ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2941) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2939) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2937) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2935) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3028)))));
    vlSelf->mkMac__DOT__y___05Fh219038 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2941));
    vlSelf->mkMac__DOT__y___05Fh349672 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh349744)));
    vlSelf->mkMac__DOT__y___05Fh343850 = ((IData)(vlSelf->mkMac__DOT__y___05Fh338200) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh343675));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5368 
        = ((((IData)(vlSelf->mkMac__DOT__y___05Fh338200) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh343675)) 
            << 8U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh343499) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh343500)) 
                       << 7U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5367)));
    vlSelf->mkMac__DOT__x___05Fh277904 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278152)));
    vlSelf->mkMac__DOT__y___05Fh270422 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270494)));
    vlSelf->mkMac__DOT__x___05Fh244979 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245227)));
    vlSelf->mkMac__DOT__y___05Fh231407 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231479)));
    vlSelf->mkMac__DOT__y___05Fh124745 = (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh124499));
    vlSelf->mkMac__DOT__y___05Fh147285 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh147359)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d129 
           ^ vlSelf->mkMac__DOT__y___05Fh56374);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d129 
           & vlSelf->mkMac__DOT__y___05Fh56374);
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2943 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 6U) | (IData)(vlSelf->mkMac__DOT__y___05Fh219038)));
    vlSelf->mkMac__DOT__y___05Fh349921 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh349672));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4079 
        = (1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh277904) 
                 ^ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792));
    vlSelf->mkMac__DOT__y___05Fh278153 = ((IData)(vlSelf->mkMac__DOT__x___05Fh277904) 
                                          & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792);
    vlSelf->mkMac__DOT__x___05Fh278329 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270422)));
    vlSelf->mkMac__DOT__y___05Fh270672 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh270422));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3391 
        = (1U & ((IData)(vlSelf->mkMac__DOT__x___05Fh244979) 
                 ^ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105));
    vlSelf->mkMac__DOT__y___05Fh245228 = ((IData)(vlSelf->mkMac__DOT__x___05Fh244979) 
                                          & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105);
    vlSelf->mkMac__DOT__x___05Fh245404 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 2U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231407)));
    vlSelf->mkMac__DOT__y___05Fh231657 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh231407));
    vlSelf->mkMac__DOT__y___05Fh124674 = (1U & (((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1507) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh124745)));
    vlSelf->mkMac__DOT__y___05Fh147548 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh147285));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq9 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq8 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh77049 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133));
    vlSelf->mkMac__DOT__y___05Fh219209 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2943));
    vlSelf->mkMac__DOT__y___05Fh349849 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh349921)));
    vlSelf->mkMac__DOT__y___05Fh278081 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278152) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278153));
    vlSelf->mkMac__DOT__x___05Fh278080 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278329)));
    vlSelf->mkMac__DOT__y___05Fh270600 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270672)));
    vlSelf->mkMac__DOT__y___05Fh245156 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245227) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245228));
    vlSelf->mkMac__DOT__x___05Fh245155 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245404)));
    vlSelf->mkMac__DOT__y___05Fh231585 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231657)));
    vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1548 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh124674))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh124499) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh124324) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1505)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh124149) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__fp_mul_fifo_rv_port0___05Fread___05F494_BITS_62_TO_55___05FETC___05F_d1546)))));
    vlSelf->mkMac__DOT__y___05Fh147474 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh147548)));
    vlSelf->mkMac__DOT__y___05Fh76977 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77049)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2945 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 7U) | (IData)(vlSelf->mkMac__DOT__y___05Fh219209)));
    vlSelf->mkMac__DOT__y___05Fh350098 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh349849));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4076 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh278080) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278081));
    vlSelf->mkMac__DOT__y___05Fh278330 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278080) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278081));
    vlSelf->mkMac__DOT__x___05Fh278506 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270600)));
    vlSelf->mkMac__DOT__y___05Fh270850 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh270600));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3388 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh245155) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245156));
    vlSelf->mkMac__DOT__y___05Fh245405 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245155) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245156));
    vlSelf->mkMac__DOT__x___05Fh245581 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 3U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231585)));
    vlSelf->mkMac__DOT__y___05Fh231835 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh231585));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1724 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh147474) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh147285) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh147096) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh146907) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1722)))));
    vlSelf->mkMac__DOT__y___05Fh147737 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh147474));
    vlSelf->mkMac__DOT__y___05Fh77227 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh76977));
    vlSelf->mkMac__DOT__y___05Fh219380 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2945));
    vlSelf->mkMac__DOT__y___05Fh350026 = (1U & (((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh350098)));
    vlSelf->mkMac__DOT__y___05Fh278258 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278329) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278330));
    vlSelf->mkMac__DOT__x___05Fh278257 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278506)));
    vlSelf->mkMac__DOT__y___05Fh270778 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh270850)));
    vlSelf->mkMac__DOT__y___05Fh245333 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245404) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245405));
    vlSelf->mkMac__DOT__x___05Fh245332 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245581)));
    vlSelf->mkMac__DOT__y___05Fh231763 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh231835)));
    vlSelf->mkMac__DOT__y___05Fh147663 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh147737)));
    vlSelf->mkMac__DOT__y___05Fh77155 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77227)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2947 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 8U) | (IData)(vlSelf->mkMac__DOT__y___05Fh219380)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5415 
        = (((IData)((((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                      >> 7U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh350026))) 
            << 7U) | ((0x40U & ((0xffffffc0U & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh349849) 
                                   << 6U))) | ((0x20U 
                                                & ((0xffffffe0U 
                                                    & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh349672) 
                                                    << 5U))) 
                                               | ((0x10U 
                                                   & ((0xfffffff0U 
                                                       & (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87)) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh349495) 
                                                       << 4U))) 
                                                  | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5413)))));
    vlSelf->mkMac__DOT__y___05Fh350275 = (((IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05Fq87) 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh350026));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4075 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh278257) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278258));
    vlSelf->mkMac__DOT__y___05Fh278507 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278257) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278258));
    vlSelf->mkMac__DOT__x___05Fh278683 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270778)));
    vlSelf->mkMac__DOT__y___05Fh271028 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh270778));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3387 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh245332) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245333));
    vlSelf->mkMac__DOT__y___05Fh245582 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245332) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245333));
    vlSelf->mkMac__DOT__x___05Fh245758 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 4U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231763)));
    vlSelf->mkMac__DOT__y___05Fh232013 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh231763));
    vlSelf->mkMac__DOT__y___05Fh147926 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh147663));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d292 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77155) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh76977) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131))));
    vlSelf->mkMac__DOT__y___05Fh77405 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77155));
    vlSelf->mkMac__DOT__y___05Fh219551 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2947));
    vlSelf->mkMac__DOT__y___05Fh354274 = (IData)((((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316) 
                                                   >> 7U) 
                                                  | (IData)(vlSelf->mkMac__DOT__y___05Fh350275)));
    vlSelf->mkMac__DOT__y___05Fh278435 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278506) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278507));
    mkMac__DOT____VdfgTmp_h70a41801__0 = (((IData)(vlSelf->mkMac__DOT__x___05Fh278683) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh278506) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh278329) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh278152) 
                                                  << 1U) 
                                                 | (1U 
                                                    & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792)))));
    vlSelf->mkMac__DOT__x___05Fh278434 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278683)));
    vlSelf->mkMac__DOT__y___05Fh270956 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271028)));
    vlSelf->mkMac__DOT__y___05Fh245510 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245581) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245582));
    mkMac__DOT____VdfgTmp_hd10129e7__0 = (((IData)(vlSelf->mkMac__DOT__x___05Fh245758) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__x___05Fh245581) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh245404) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh245227) 
                                                  << 1U) 
                                                 | (1U 
                                                    & vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105)))));
    vlSelf->mkMac__DOT__x___05Fh245509 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245758)));
    vlSelf->mkMac__DOT__y___05Fh231941 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232013)));
    vlSelf->mkMac__DOT__y___05Fh147852 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh147926)));
    vlSelf->mkMac__DOT__y___05Fh77333 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77405)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2949 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 9U) | (IData)(vlSelf->mkMac__DOT__y___05Fh219551)));
    vlSelf->mkMac__DOT__selected_exponent___05F_1___05Fh347898 
        = (((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
            << 0x1fU) | ((0x40000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                         << 0x1eU)) 
                         | ((0x20000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                            << 0x1dU)) 
                            | ((0x10000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                               << 0x1cU)) 
                               | ((0x8000000U & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                 << 0x1bU)) 
                                  | ((0x4000000U & 
                                      ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                       << 0x1aU)) | 
                                     ((0x2000000U & 
                                       ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                        << 0x19U)) 
                                      | ((0x1000000U 
                                          & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                             << 0x18U)) 
                                         | ((0x800000U 
                                             & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                << 0x17U)) 
                                            | ((0x400000U 
                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                   << 0x16U)) 
                                               | ((0x200000U 
                                                   & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                      << 0x15U)) 
                                                  | ((0x100000U 
                                                      & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                         << 0x14U)) 
                                                     | ((0x80000U 
                                                         & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                            << 0x13U)) 
                                                        | ((0x40000U 
                                                            & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                               << 0x12U)) 
                                                           | ((0x20000U 
                                                               & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                  << 0x11U)) 
                                                              | ((0x10000U 
                                                                  & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                     << 0x10U)) 
                                                                 | ((0x8000U 
                                                                     & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                        << 0xfU)) 
                                                                    | ((0x4000U 
                                                                        & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                           << 0xeU)) 
                                                                       | ((0x2000U 
                                                                           & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                              << 0xdU)) 
                                                                          | ((0x1000U 
                                                                              & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                                << 0xcU)) 
                                                                             | ((0x800U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & ((~ (IData)(vlSelf->mkMac__DOT__y___05Fh354274)) 
                                                                                << 8U)) 
                                                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5415)))))))))))))))))))))))));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3819 
        = (1U & (vlSelf->mkMac__DOT__mantissa_b___05Fh223458 
                 >> (IData)(mkMac__DOT____VdfgTmp_h70a41801__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4074 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh278434) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278435));
    vlSelf->mkMac__DOT__y___05Fh278684 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278434) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278435));
    vlSelf->mkMac__DOT__x___05Fh278860 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh270956)));
    vlSelf->mkMac__DOT__y___05Fh271206 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh270956));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3132 
        = (1U & (vlSelf->mkMac__DOT__mantissa_a___05Fh223453 
                 >> (IData)(mkMac__DOT____VdfgTmp_hd10129e7__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3386 
        = ((IData)(vlSelf->mkMac__DOT__x___05Fh245509) 
           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245510));
    vlSelf->mkMac__DOT__y___05Fh245759 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245509) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245510));
    vlSelf->mkMac__DOT__x___05Fh245935 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 5U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh231941)));
    vlSelf->mkMac__DOT__y___05Fh232191 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh231941));
    vlSelf->mkMac__DOT__y___05Fh148115 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh147852));
    vlSelf->mkMac__DOT__y___05Fh77583 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77333));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3032 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                      ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2949) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2947) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2945) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2943) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3030)))));
    vlSelf->mkMac__DOT__y___05Fh219722 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2949));
    mkMac__DOT____VdfgTmp_h8550b14b__0 = (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4074) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4075) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4076) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4079) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792))))));
    vlSelf->mkMac__DOT__y___05Fh278612 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278683) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278684));
    vlSelf->mkMac__DOT__x___05Fh278611 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh278860)));
    vlSelf->mkMac__DOT__y___05Fh271134 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271206)));
    mkMac__DOT____VdfgTmp_h67a0818d__0 = (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3386) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3387) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3388) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3391) 
                                                  << 1U) 
                                                 | (1U 
                                                    & (~ vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105))))));
    vlSelf->mkMac__DOT__y___05Fh245687 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245758) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245759));
    vlSelf->mkMac__DOT__x___05Fh245686 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh245935)));
    vlSelf->mkMac__DOT__y___05Fh232119 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232191)));
    vlSelf->mkMac__DOT__y___05Fh148041 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148115)));
    vlSelf->mkMac__DOT__y___05Fh77511 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77583)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2951 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xaU) | (IData)(vlSelf->mkMac__DOT__y___05Fh219722)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4253 
        = (1U & (vlSelf->mkMac__DOT__mantissa_b___05Fh223458 
                 >> (IData)(mkMac__DOT____VdfgTmp_h8550b14b__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4085 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh278611) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278612)) 
            << 5U) | (IData)(mkMac__DOT____VdfgTmp_h8550b14b__0));
    vlSelf->mkMac__DOT__y___05Fh278861 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278611) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278612));
    vlSelf->mkMac__DOT__x___05Fh279037 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271134)));
    vlSelf->mkMac__DOT__y___05Fh271384 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh271134));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3565 
        = (1U & (vlSelf->mkMac__DOT__mantissa_a___05Fh223453 
                 >> (IData)(mkMac__DOT____VdfgTmp_h67a0818d__0)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3397 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh245686) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245687)) 
            << 5U) | (IData)(mkMac__DOT____VdfgTmp_h67a0818d__0));
    vlSelf->mkMac__DOT__y___05Fh245936 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245686) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245687));
    vlSelf->mkMac__DOT__x___05Fh246112 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 6U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232119)));
    vlSelf->mkMac__DOT__y___05Fh232369 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh232119));
    vlSelf->mkMac__DOT__y___05Fh148304 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148041));
    vlSelf->mkMac__DOT__y___05Fh77761 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77511));
    vlSelf->mkMac__DOT__y___05Fh219893 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2951));
    vlSelf->mkMac__DOT__y___05Fh288990 = vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4253;
    vlSelf->mkMac__DOT__y___05Fh278789 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278860) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh278861));
    vlSelf->mkMac__DOT__x___05Fh278788 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279037)));
    vlSelf->mkMac__DOT__y___05Fh271312 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271384)));
    vlSelf->mkMac__DOT__y___05Fh256065 = vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3565;
    vlSelf->mkMac__DOT__y___05Fh245864 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245935) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh245936));
    vlSelf->mkMac__DOT__x___05Fh245863 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246112)));
    vlSelf->mkMac__DOT__y___05Fh232297 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232369)));
    vlSelf->mkMac__DOT__y___05Fh148230 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148304)));
    vlSelf->mkMac__DOT__y___05Fh77689 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77761)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2953 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xbU) | (IData)(vlSelf->mkMac__DOT__y___05Fh219893)));
    vlSelf->mkMac__DOT__y___05Fh279038 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278788) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278789));
    vlSelf->mkMac__DOT__x___05Fh279214 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271312)));
    vlSelf->mkMac__DOT__y___05Fh271562 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh271312));
    vlSelf->mkMac__DOT__y___05Fh246113 = ((IData)(vlSelf->mkMac__DOT__x___05Fh245863) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh245864));
    vlSelf->mkMac__DOT__x___05Fh246289 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 7U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232297)));
    vlSelf->mkMac__DOT__y___05Fh232547 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh232297));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1726 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh148230) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh148041) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh147852) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh147663) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1724)))));
    vlSelf->mkMac__DOT__y___05Fh148493 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148230));
    vlSelf->mkMac__DOT__y___05Fh77939 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77689));
    vlSelf->mkMac__DOT__y___05Fh220064 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2953));
    vlSelf->mkMac__DOT__y___05Fh278966 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279037) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279038));
    vlSelf->mkMac__DOT__x___05Fh278965 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279214)));
    vlSelf->mkMac__DOT__y___05Fh271490 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271562)));
    vlSelf->mkMac__DOT__y___05Fh246041 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246112) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246113));
    vlSelf->mkMac__DOT__x___05Fh246040 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246289)));
    vlSelf->mkMac__DOT__y___05Fh232475 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232547)));
    vlSelf->mkMac__DOT__y___05Fh148419 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148493)));
    vlSelf->mkMac__DOT__y___05Fh77867 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh77939)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2955 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xcU) | (IData)(vlSelf->mkMac__DOT__y___05Fh220064)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4086 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh278965) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278966)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh278788) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh278789)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4085)));
    vlSelf->mkMac__DOT__y___05Fh279215 = ((IData)(vlSelf->mkMac__DOT__x___05Fh278965) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh278966));
    vlSelf->mkMac__DOT__x___05Fh279391 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271490)));
    vlSelf->mkMac__DOT__y___05Fh271740 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh271490));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3398 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246040) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246041)) 
            << 7U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh245863) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh245864)) 
                       << 6U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3397)));
    vlSelf->mkMac__DOT__y___05Fh246290 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246040) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246041));
    vlSelf->mkMac__DOT__x___05Fh246466 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 8U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232475)));
    vlSelf->mkMac__DOT__y___05Fh232725 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh232475));
    vlSelf->mkMac__DOT__y___05Fh148682 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148419));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d294 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77867) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77689) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh77511) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh77333) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d292)))));
    vlSelf->mkMac__DOT__y___05Fh78117 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh77867));
    vlSelf->mkMac__DOT__y___05Fh220235 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2955));
    vlSelf->mkMac__DOT__y___05Fh279143 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279214) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279215));
    vlSelf->mkMac__DOT__x___05Fh279142 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279391)));
    vlSelf->mkMac__DOT__y___05Fh271668 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271740)));
    vlSelf->mkMac__DOT__y___05Fh246218 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246289) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246290));
    vlSelf->mkMac__DOT__x___05Fh246217 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246466)));
    vlSelf->mkMac__DOT__y___05Fh232653 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232725)));
    vlSelf->mkMac__DOT__y___05Fh148608 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148682)));
    vlSelf->mkMac__DOT__y___05Fh78045 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78117)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2957 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xdU) | (IData)(vlSelf->mkMac__DOT__y___05Fh220235)));
    vlSelf->mkMac__DOT__y___05Fh279392 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279142) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279143));
    vlSelf->mkMac__DOT__x___05Fh279568 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271668)));
    vlSelf->mkMac__DOT__y___05Fh271918 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh271668));
    vlSelf->mkMac__DOT__y___05Fh246467 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246217) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246218));
    vlSelf->mkMac__DOT__x___05Fh246643 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 9U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232653)));
    vlSelf->mkMac__DOT__y___05Fh232903 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh232653));
    vlSelf->mkMac__DOT__y___05Fh148871 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148608));
    vlSelf->mkMac__DOT__y___05Fh78295 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh78045));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3034 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                       ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2957) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2955) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2953) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2951) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3032)))));
    vlSelf->mkMac__DOT__y___05Fh220406 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2957));
    vlSelf->mkMac__DOT__y___05Fh279320 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279391) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279392));
    vlSelf->mkMac__DOT__x___05Fh279319 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279568)));
    vlSelf->mkMac__DOT__y___05Fh271846 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh271918)));
    vlSelf->mkMac__DOT__y___05Fh246395 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246466) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246467));
    vlSelf->mkMac__DOT__x___05Fh246394 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246643)));
    vlSelf->mkMac__DOT__y___05Fh232831 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh232903)));
    vlSelf->mkMac__DOT__y___05Fh148797 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh148871)));
    vlSelf->mkMac__DOT__y___05Fh78223 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78295)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2959 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xeU) | (IData)(vlSelf->mkMac__DOT__y___05Fh220406)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4087 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh279319) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279320)) 
            << 9U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh279142) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279143)) 
                       << 8U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4086)));
    vlSelf->mkMac__DOT__y___05Fh279569 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279319) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279320));
    vlSelf->mkMac__DOT__x___05Fh279745 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh271846)));
    vlSelf->mkMac__DOT__y___05Fh272096 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh271846));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3399 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246394) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246395)) 
            << 9U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh246217) 
                        ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246218)) 
                       << 8U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3398)));
    vlSelf->mkMac__DOT__y___05Fh246644 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246394) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246395));
    vlSelf->mkMac__DOT__x___05Fh246820 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xaU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh232831)));
    vlSelf->mkMac__DOT__y___05Fh233081 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh232831));
    vlSelf->mkMac__DOT__y___05Fh149060 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148797));
    vlSelf->mkMac__DOT__y___05Fh78473 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh78223));
    vlSelf->mkMac__DOT__y___05Fh220577 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2959));
    vlSelf->mkMac__DOT__y___05Fh279497 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279568) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279569));
    vlSelf->mkMac__DOT__x___05Fh279496 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279745)));
    vlSelf->mkMac__DOT__y___05Fh272024 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272096)));
    vlSelf->mkMac__DOT__y___05Fh246572 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246643) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246644));
    vlSelf->mkMac__DOT__x___05Fh246571 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246820)));
    vlSelf->mkMac__DOT__y___05Fh233009 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233081)));
    vlSelf->mkMac__DOT__y___05Fh148986 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149060)));
    vlSelf->mkMac__DOT__y___05Fh78401 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78473)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2961 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0xfU) | (IData)(vlSelf->mkMac__DOT__y___05Fh220577)));
    vlSelf->mkMac__DOT__y___05Fh279746 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279496) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279497));
    vlSelf->mkMac__DOT__x___05Fh279922 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272024)));
    vlSelf->mkMac__DOT__y___05Fh272274 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272024));
    vlSelf->mkMac__DOT__y___05Fh246821 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246571) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246572));
    vlSelf->mkMac__DOT__x___05Fh246997 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xbU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233009)));
    vlSelf->mkMac__DOT__y___05Fh233259 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233009));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1728 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh148986) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh148797) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh148608) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh148419) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1726)))));
    vlSelf->mkMac__DOT__y___05Fh149249 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh148986));
    vlSelf->mkMac__DOT__y___05Fh78651 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78401));
    vlSelf->mkMac__DOT__y___05Fh220748 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2961));
    vlSelf->mkMac__DOT__y___05Fh279674 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279745) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279746));
    vlSelf->mkMac__DOT__x___05Fh279673 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh279922)));
    vlSelf->mkMac__DOT__y___05Fh272202 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272274)));
    vlSelf->mkMac__DOT__y___05Fh246749 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246820) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246821));
    vlSelf->mkMac__DOT__x___05Fh246748 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh246997)));
    vlSelf->mkMac__DOT__y___05Fh233187 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233259)));
    vlSelf->mkMac__DOT__y___05Fh149175 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149249)));
    vlSelf->mkMac__DOT__y___05Fh78579 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78651)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2963 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x10U) | (IData)(vlSelf->mkMac__DOT__y___05Fh220748)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4088 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh279673) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279674)) 
            << 0xbU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh279496) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279497)) 
                         << 0xaU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4087)));
    vlSelf->mkMac__DOT__y___05Fh279923 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279673) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279674));
    vlSelf->mkMac__DOT__x___05Fh280099 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272202)));
    vlSelf->mkMac__DOT__y___05Fh272452 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272202));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3400 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh246748) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246749)) 
            << 0xbU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh246571) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246572)) 
                         << 0xaU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3399)));
    vlSelf->mkMac__DOT__y___05Fh246998 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246748) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246749));
    vlSelf->mkMac__DOT__x___05Fh247174 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xcU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233187)));
    vlSelf->mkMac__DOT__y___05Fh233437 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233187));
    vlSelf->mkMac__DOT__y___05Fh149438 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149175));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d296 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78579) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh78401) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78223) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh78045) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d294)))));
    vlSelf->mkMac__DOT__y___05Fh78829 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78579));
    vlSelf->mkMac__DOT__y___05Fh220919 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2963));
    vlSelf->mkMac__DOT__y___05Fh279851 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279922) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh279923));
    vlSelf->mkMac__DOT__x___05Fh279850 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280099)));
    vlSelf->mkMac__DOT__y___05Fh272380 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272452)));
    vlSelf->mkMac__DOT__y___05Fh246926 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246997) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh246998));
    vlSelf->mkMac__DOT__x___05Fh246925 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh247174)));
    vlSelf->mkMac__DOT__y___05Fh233365 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233437)));
    vlSelf->mkMac__DOT__y___05Fh149364 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149438)));
    vlSelf->mkMac__DOT__y___05Fh78757 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh78829)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2965 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x11U) | (IData)(vlSelf->mkMac__DOT__y___05Fh220919)));
    vlSelf->mkMac__DOT__y___05Fh280100 = ((IData)(vlSelf->mkMac__DOT__x___05Fh279850) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh279851));
    vlSelf->mkMac__DOT__x___05Fh280276 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272380)));
    vlSelf->mkMac__DOT__y___05Fh272630 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272380));
    vlSelf->mkMac__DOT__y___05Fh247175 = ((IData)(vlSelf->mkMac__DOT__x___05Fh246925) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh246926));
    vlSelf->mkMac__DOT__x___05Fh247351 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xdU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233365)));
    vlSelf->mkMac__DOT__y___05Fh233615 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233365));
    vlSelf->mkMac__DOT__y___05Fh149627 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149364));
    vlSelf->mkMac__DOT__y___05Fh79007 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78757));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3036 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                        ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2965) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2963) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2961) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2959) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3034)))));
    vlSelf->mkMac__DOT__y___05Fh221090 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2965));
    vlSelf->mkMac__DOT__y___05Fh280028 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280099) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280100));
    vlSelf->mkMac__DOT__x___05Fh280027 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280276)));
    vlSelf->mkMac__DOT__y___05Fh272558 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272630)));
    vlSelf->mkMac__DOT__y___05Fh247103 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247174) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh247175));
    vlSelf->mkMac__DOT__x___05Fh247102 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh247351)));
    vlSelf->mkMac__DOT__y___05Fh233543 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233615)));
    vlSelf->mkMac__DOT__y___05Fh149553 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149627)));
    vlSelf->mkMac__DOT__y___05Fh78935 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79007)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2967 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x12U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221090)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4089 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh280027) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280028)) 
            << 0xdU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh279850) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh279851)) 
                         << 0xcU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4088)));
    vlSelf->mkMac__DOT__y___05Fh280277 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280027) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280028));
    vlSelf->mkMac__DOT__x___05Fh280453 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272558)));
    vlSelf->mkMac__DOT__y___05Fh272808 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272558));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3401 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh247102) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247103)) 
            << 0xdU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh246925) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh246926)) 
                         << 0xcU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3400)));
    vlSelf->mkMac__DOT__y___05Fh247352 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247102) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247103));
    vlSelf->mkMac__DOT__x___05Fh247528 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xeU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233543)));
    vlSelf->mkMac__DOT__y___05Fh233793 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233543));
    vlSelf->mkMac__DOT__y___05Fh149816 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149553));
    vlSelf->mkMac__DOT__y___05Fh79185 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh78935));
    vlSelf->mkMac__DOT__y___05Fh221261 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2967));
    vlSelf->mkMac__DOT__y___05Fh280205 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280276) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280277));
    vlSelf->mkMac__DOT__x___05Fh280204 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280453)));
    vlSelf->mkMac__DOT__y___05Fh272736 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272808)));
    vlSelf->mkMac__DOT__y___05Fh247280 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247351) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh247352));
    vlSelf->mkMac__DOT__x___05Fh247279 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh247528)));
    vlSelf->mkMac__DOT__y___05Fh233721 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233793)));
    vlSelf->mkMac__DOT__y___05Fh149742 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh149816)));
    vlSelf->mkMac__DOT__y___05Fh79113 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79185)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2969 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x13U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221261)));
    vlSelf->mkMac__DOT__y___05Fh280454 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280204) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280205));
    vlSelf->mkMac__DOT__x___05Fh280630 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0xfU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272736)));
    vlSelf->mkMac__DOT__y___05Fh272986 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272736));
    vlSelf->mkMac__DOT__y___05Fh247529 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247279) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247280));
    vlSelf->mkMac__DOT__x___05Fh247705 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0xfU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233721)));
    vlSelf->mkMac__DOT__y___05Fh233971 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233721));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1730 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh149742) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh149553) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh149364) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh149175) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1728)))));
    vlSelf->mkMac__DOT__y___05Fh150005 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149742));
    vlSelf->mkMac__DOT__y___05Fh79363 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79113));
    vlSelf->mkMac__DOT__y___05Fh221432 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2969));
    vlSelf->mkMac__DOT__y___05Fh280382 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280453) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280454));
    vlSelf->mkMac__DOT__x___05Fh280381 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280630)));
    vlSelf->mkMac__DOT__y___05Fh272914 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh272986)));
    vlSelf->mkMac__DOT__y___05Fh247457 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247528) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh247529));
    vlSelf->mkMac__DOT__x___05Fh247456 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh247705)));
    vlSelf->mkMac__DOT__y___05Fh233899 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh233971)));
    vlSelf->mkMac__DOT__y___05Fh149931 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150005)));
    vlSelf->mkMac__DOT__y___05Fh79291 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79363)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2971 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x14U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221432)));
    if (vlSelf->mkMac__DOT__reg_out_int_valid_D_IN) {
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv[0U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv[1U];
        vlSelf->mkMac__DOT__int_add_fifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__int_add_fifo_rv[2U];
    }
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4090 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh280381) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280382)) 
            << 0xfU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh280204) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280205)) 
                         << 0xeU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4089)));
    vlSelf->mkMac__DOT__y___05Fh280631 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280381) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280382));
    vlSelf->mkMac__DOT__x___05Fh280807 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x10U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh272914)));
    vlSelf->mkMac__DOT__y___05Fh273164 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh272914));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3402 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh247456) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247457)) 
            << 0xfU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh247279) 
                          ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247280)) 
                         << 0xeU) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3401)));
    if (vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN) {
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[0U] = 0U;
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[1U] = 0U;
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[2U] = 0U;
    } else {
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[0U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv[0U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[1U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv[1U];
        vlSelf->mkMac__DOT__fp_add_fifo_rv_port1___05Fread[2U] 
            = vlSelf->mkMac__DOT__fp_add_fifo_rv[2U];
    }
    vlSelf->mkMac__DOT__y___05Fh247706 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247456) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247457));
    vlSelf->mkMac__DOT__x___05Fh247882 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x10U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh233899)));
    vlSelf->mkMac__DOT__y___05Fh234149 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh233899));
    vlSelf->mkMac__DOT__y___05Fh150194 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh149931));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d298 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh79291) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh79113) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh78935) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh78757) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d296)))));
    vlSelf->mkMac__DOT__y___05Fh79541 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79291));
    vlSelf->mkMac__DOT__y___05Fh221603 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2971));
    vlSelf->mkMac__DOT__y___05Fh280559 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280630) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280631));
    vlSelf->mkMac__DOT__x___05Fh280558 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280807)));
    vlSelf->mkMac__DOT__y___05Fh273092 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh273164)));
    vlSelf->mkMac__DOT__y___05Fh247634 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247705) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh247706));
    vlSelf->mkMac__DOT__x___05Fh247633 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh247882)));
    vlSelf->mkMac__DOT__y___05Fh234077 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh234149)));
    vlSelf->mkMac__DOT__y___05Fh150120 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150194)));
    vlSelf->mkMac__DOT__y___05Fh79469 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79541)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2973 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x15U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221603)));
    vlSelf->mkMac__DOT__y___05Fh280808 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280558) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280559));
    vlSelf->mkMac__DOT__x___05Fh280984 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x11U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273092)));
    vlSelf->mkMac__DOT__y___05Fh273342 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273092));
    vlSelf->mkMac__DOT__y___05Fh247883 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247633) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247634));
    vlSelf->mkMac__DOT__x___05Fh248059 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x11U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234077)));
    vlSelf->mkMac__DOT__y___05Fh234327 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234077));
    vlSelf->mkMac__DOT__y___05Fh150383 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150120));
    vlSelf->mkMac__DOT__y___05Fh79719 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79469));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3038 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                         ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2973) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2971) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2969) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2967) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3036))));
    vlSelf->mkMac__DOT__y___05Fh221774 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2973));
    vlSelf->mkMac__DOT__y___05Fh280736 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280807) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280808));
    vlSelf->mkMac__DOT__x___05Fh280735 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh280984)));
    vlSelf->mkMac__DOT__y___05Fh273270 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh273342)));
    vlSelf->mkMac__DOT__y___05Fh247811 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247882) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh247883));
    vlSelf->mkMac__DOT__x___05Fh247810 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248059)));
    vlSelf->mkMac__DOT__y___05Fh234255 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh234327)));
    vlSelf->mkMac__DOT__y___05Fh150309 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150383)));
    vlSelf->mkMac__DOT__y___05Fh79647 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79719)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2975 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x16U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221774)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4091 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh280735) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280736)) 
            << 0x11U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh280558) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280559)) 
                          << 0x10U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4090)));
    vlSelf->mkMac__DOT__y___05Fh280985 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280735) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280736));
    vlSelf->mkMac__DOT__x___05Fh281161 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x12U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273270)));
    vlSelf->mkMac__DOT__y___05Fh273520 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273270));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3403 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh247810) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247811)) 
            << 0x11U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh247633) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247634)) 
                          << 0x10U) | (IData)(vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3402)));
    vlSelf->mkMac__DOT__y___05Fh248060 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247810) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247811));
    vlSelf->mkMac__DOT__x___05Fh248236 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x12U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234255)));
    vlSelf->mkMac__DOT__y___05Fh234505 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234255));
    vlSelf->mkMac__DOT__y___05Fh150572 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150309));
    vlSelf->mkMac__DOT__y___05Fh79897 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79647));
    vlSelf->mkMac__DOT__y___05Fh221945 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2975));
    vlSelf->mkMac__DOT__y___05Fh280913 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280984) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh280985));
    vlSelf->mkMac__DOT__x___05Fh280912 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh281161)));
    vlSelf->mkMac__DOT__y___05Fh273448 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh273520)));
    vlSelf->mkMac__DOT__y___05Fh247988 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248059) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248060));
    vlSelf->mkMac__DOT__x___05Fh247987 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248236)));
    vlSelf->mkMac__DOT__y___05Fh234433 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh234505)));
    vlSelf->mkMac__DOT__y___05Fh150498 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150572)));
    vlSelf->mkMac__DOT__y___05Fh79825 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh79897)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2977 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x17U) | (IData)(vlSelf->mkMac__DOT__y___05Fh221945)));
    vlSelf->mkMac__DOT__y___05Fh281162 = ((IData)(vlSelf->mkMac__DOT__x___05Fh280912) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh280913));
    vlSelf->mkMac__DOT__x___05Fh281338 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x13U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273448)));
    vlSelf->mkMac__DOT__y___05Fh273698 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273448));
    vlSelf->mkMac__DOT__y___05Fh248237 = ((IData)(vlSelf->mkMac__DOT__x___05Fh247987) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh247988));
    vlSelf->mkMac__DOT__x___05Fh248413 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x13U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234433)));
    vlSelf->mkMac__DOT__y___05Fh234683 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234433));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1732 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh150498) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh150309) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh150120) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh149931) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1730))));
    vlSelf->mkMac__DOT__y___05Fh150761 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150498));
    vlSelf->mkMac__DOT__y___05Fh80075 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh79825));
    vlSelf->mkMac__DOT__y___05Fh222116 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2977));
    vlSelf->mkMac__DOT__y___05Fh281090 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281161) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh281162));
    vlSelf->mkMac__DOT__x___05Fh281089 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh281338)));
    vlSelf->mkMac__DOT__y___05Fh273626 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh273698)));
    vlSelf->mkMac__DOT__y___05Fh248165 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248236) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248237));
    vlSelf->mkMac__DOT__x___05Fh248164 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248413)));
    vlSelf->mkMac__DOT__y___05Fh234611 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh234683)));
    vlSelf->mkMac__DOT__y___05Fh150687 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150761)));
    vlSelf->mkMac__DOT__y___05Fh80003 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80075)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2979 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x18U) | (IData)(vlSelf->mkMac__DOT__y___05Fh222116)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4092 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh281089) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281090)) 
            << 0x13U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh280912) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh280913)) 
                          << 0x12U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4091));
    vlSelf->mkMac__DOT__y___05Fh281339 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281089) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281090));
    vlSelf->mkMac__DOT__x___05Fh281515 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x14U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273626)));
    vlSelf->mkMac__DOT__y___05Fh273876 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273626));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3404 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh248164) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh248165)) 
            << 0x13U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh247987) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh247988)) 
                          << 0x12U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3403));
    vlSelf->mkMac__DOT__y___05Fh248414 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248164) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248165));
    vlSelf->mkMac__DOT__x___05Fh248590 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x14U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234611)));
    vlSelf->mkMac__DOT__y___05Fh234861 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234611));
    vlSelf->mkMac__DOT__y___05Fh150950 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150687));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d300 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80003) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh79825) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh79647) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh79469) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d298)))));
    vlSelf->mkMac__DOT__y___05Fh80253 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80003));
    vlSelf->mkMac__DOT__y___05Fh222287 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2979));
    vlSelf->mkMac__DOT__y___05Fh281267 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281338) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh281339));
    vlSelf->mkMac__DOT__x___05Fh281266 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh281515)));
    vlSelf->mkMac__DOT__y___05Fh273804 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh273876)));
    vlSelf->mkMac__DOT__y___05Fh248342 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248413) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248414));
    vlSelf->mkMac__DOT__x___05Fh248341 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248590)));
    vlSelf->mkMac__DOT__y___05Fh234789 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh234861)));
    vlSelf->mkMac__DOT__y___05Fh150876 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh150950)));
    vlSelf->mkMac__DOT__y___05Fh80181 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80253)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2981 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x19U) | (IData)(vlSelf->mkMac__DOT__y___05Fh222287)));
    vlSelf->mkMac__DOT__y___05Fh281516 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281266) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281267));
    vlSelf->mkMac__DOT__x___05Fh281692 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x15U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273804)));
    vlSelf->mkMac__DOT__y___05Fh274054 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273804));
    vlSelf->mkMac__DOT__y___05Fh248591 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248341) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248342));
    vlSelf->mkMac__DOT__x___05Fh248767 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x15U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234789)));
    vlSelf->mkMac__DOT__y___05Fh235039 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234789));
    vlSelf->mkMac__DOT__y___05Fh151139 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh150876));
    vlSelf->mkMac__DOT__y___05Fh80431 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80181));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3040 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                          ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2981) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2979) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2977) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2975) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3038))));
    vlSelf->mkMac__DOT__y___05Fh222458 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2981));
    vlSelf->mkMac__DOT__y___05Fh281444 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281515) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh281516));
    vlSelf->mkMac__DOT__x___05Fh281443 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh281692)));
    vlSelf->mkMac__DOT__y___05Fh273982 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274054)));
    vlSelf->mkMac__DOT__y___05Fh248519 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248590) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248591));
    vlSelf->mkMac__DOT__x___05Fh248518 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248767)));
    vlSelf->mkMac__DOT__y___05Fh234967 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235039)));
    vlSelf->mkMac__DOT__y___05Fh151065 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151139)));
    vlSelf->mkMac__DOT__y___05Fh80359 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80431)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2983 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x1aU) | (IData)(vlSelf->mkMac__DOT__y___05Fh222458)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4093 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh281443) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281444)) 
            << 0x15U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh281266) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281267)) 
                          << 0x14U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4092));
    vlSelf->mkMac__DOT__y___05Fh281693 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281443) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281444));
    vlSelf->mkMac__DOT__x___05Fh281869 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x16U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh273982)));
    vlSelf->mkMac__DOT__y___05Fh274232 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh273982));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3405 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh248518) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh248519)) 
            << 0x15U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh248341) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh248342)) 
                          << 0x14U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3404));
    vlSelf->mkMac__DOT__y___05Fh248768 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248518) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248519));
    vlSelf->mkMac__DOT__x___05Fh248944 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x16U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh234967)));
    vlSelf->mkMac__DOT__y___05Fh235217 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh234967));
    vlSelf->mkMac__DOT__y___05Fh151328 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151065));
    vlSelf->mkMac__DOT__y___05Fh80609 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80359));
    vlSelf->mkMac__DOT__y___05Fh222629 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2983));
    vlSelf->mkMac__DOT__y___05Fh281621 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281692) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh281693));
    vlSelf->mkMac__DOT__x___05Fh281620 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh281869)));
    vlSelf->mkMac__DOT__y___05Fh274160 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274232)));
    vlSelf->mkMac__DOT__y___05Fh248696 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248767) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248768));
    vlSelf->mkMac__DOT__x___05Fh248695 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh248944)));
    vlSelf->mkMac__DOT__y___05Fh235145 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235217)));
    vlSelf->mkMac__DOT__y___05Fh151254 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151328)));
    vlSelf->mkMac__DOT__y___05Fh80537 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80609)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2985 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x1bU) | (IData)(vlSelf->mkMac__DOT__y___05Fh222629)));
    vlSelf->mkMac__DOT__y___05Fh281870 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281620) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281621));
    vlSelf->mkMac__DOT__x___05Fh282046 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x17U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274160)));
    vlSelf->mkMac__DOT__y___05Fh274410 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274160));
    vlSelf->mkMac__DOT__y___05Fh248945 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248695) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248696));
    vlSelf->mkMac__DOT__x___05Fh249121 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x17U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh235145)));
    vlSelf->mkMac__DOT__y___05Fh235395 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh235145));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1734 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151254) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh151065) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh150876) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh150687) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1732))));
    vlSelf->mkMac__DOT__y___05Fh151517 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151254));
    vlSelf->mkMac__DOT__y___05Fh80787 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80537));
    vlSelf->mkMac__DOT__y___05Fh222800 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2985));
    vlSelf->mkMac__DOT__y___05Fh281798 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281869) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh281870));
    vlSelf->mkMac__DOT__x___05Fh281797 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282046)));
    vlSelf->mkMac__DOT__y___05Fh274338 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274410)));
    vlSelf->mkMac__DOT__y___05Fh248873 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248944) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh248945));
    vlSelf->mkMac__DOT__x___05Fh248872 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh249121)));
    vlSelf->mkMac__DOT__y___05Fh235323 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235395)));
    vlSelf->mkMac__DOT__y___05Fh151443 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151517)));
    vlSelf->mkMac__DOT__y___05Fh80715 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80787)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2987 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x1cU) | (IData)(vlSelf->mkMac__DOT__y___05Fh222800)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4094 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh281797) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281798)) 
            << 0x17U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh281620) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281621)) 
                          << 0x16U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4093));
    vlSelf->mkMac__DOT__y___05Fh282047 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281797) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281798));
    vlSelf->mkMac__DOT__x___05Fh282223 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x18U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274338)));
    vlSelf->mkMac__DOT__y___05Fh274588 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274338));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3406 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh248872) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh248873)) 
            << 0x17U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh248695) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh248696)) 
                          << 0x16U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3405));
    vlSelf->mkMac__DOT__y___05Fh249122 = ((IData)(vlSelf->mkMac__DOT__x___05Fh248872) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh248873));
    vlSelf->mkMac__DOT__x___05Fh249298 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x18U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh235323)));
    vlSelf->mkMac__DOT__y___05Fh235573 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh235323));
    vlSelf->mkMac__DOT__y___05Fh151706 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151443));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d302 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80715) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh80537) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh80359) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh80181) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d300))));
    vlSelf->mkMac__DOT__y___05Fh80965 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80715));
    vlSelf->mkMac__DOT__y___05Fh222971 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2987));
    vlSelf->mkMac__DOT__y___05Fh281975 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282046) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282047));
    vlSelf->mkMac__DOT__x___05Fh281974 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282223)));
    vlSelf->mkMac__DOT__y___05Fh274516 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274588)));
    vlSelf->mkMac__DOT__y___05Fh249050 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249121) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh249122));
    vlSelf->mkMac__DOT__x___05Fh249049 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh249298)));
    vlSelf->mkMac__DOT__y___05Fh235501 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235573)));
    vlSelf->mkMac__DOT__y___05Fh151632 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151706)));
    vlSelf->mkMac__DOT__y___05Fh80893 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh80965)));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2989 
        = (1U & ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                  >> 0x1dU) | (IData)(vlSelf->mkMac__DOT__y___05Fh222971)));
    vlSelf->mkMac__DOT__y___05Fh282224 = ((IData)(vlSelf->mkMac__DOT__x___05Fh281974) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh281975));
    vlSelf->mkMac__DOT__x___05Fh282400 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x19U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274516)));
    vlSelf->mkMac__DOT__y___05Fh274766 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274516));
    vlSelf->mkMac__DOT__y___05Fh249299 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249049) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249050));
    vlSelf->mkMac__DOT__x___05Fh249475 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x19U) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh235501)));
    vlSelf->mkMac__DOT__y___05Fh235751 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh235501));
    vlSelf->mkMac__DOT__y___05Fh151895 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151632));
    vlSelf->mkMac__DOT__y___05Fh81143 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh80893));
    vlSelf->mkMac__DOT__y___05Fh223142 = ((vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2989));
    vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3042 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                           ^ ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2989) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2987) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2985) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2983) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3040))));
    vlSelf->mkMac__DOT__y___05Fh282152 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282223) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282224));
    vlSelf->mkMac__DOT__x___05Fh282151 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282400)));
    vlSelf->mkMac__DOT__y___05Fh274694 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274766)));
    vlSelf->mkMac__DOT__y___05Fh249227 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249298) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh249299));
    vlSelf->mkMac__DOT__x___05Fh249226 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh249475)));
    vlSelf->mkMac__DOT__y___05Fh235679 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235751)));
    vlSelf->mkMac__DOT__y___05Fh151821 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh151895)));
    vlSelf->mkMac__DOT__y___05Fh81071 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81143)));
    vlSelf->mkMac__DOT__int_out_fifo_rv_port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)(((0x80000000U 
                                              & ((0x80000000U 
                                                  & vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2868) 
                                                 ^ 
                                                 ((0x80000000U 
                                                   & (vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d2870 
                                                      << 1U)) 
                                                  | ((IData)(vlSelf->mkMac__DOT__y___05Fh223142) 
                                                     << 0x1fU)))) 
                                             | vlSelf->mkMac__DOT__int_add_fifo_rv_port0___05Fread___05F860_BITS_63_TO_32_ETC___05F_d3042))));
    vlSelf->mkMac__DOT__int_out_fifo_rv_port2___05Fread 
        = ((IData)(vlSelf->mkMac__DOT__reg_out_int_valid_D_IN)
            ? vlSelf->mkMac__DOT__int_out_fifo_rv_port1___05Fwrite_1
            : vlSelf->mkMac__DOT__int_out_fifo_rv_port1___05Fread);
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4095 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh282151) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh282152)) 
            << 0x19U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh281974) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh281975)) 
                          << 0x18U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4094));
    vlSelf->mkMac__DOT__y___05Fh282401 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282151) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282152));
    vlSelf->mkMac__DOT__x___05Fh282577 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x1aU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274694)));
    vlSelf->mkMac__DOT__y___05Fh274944 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274694));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3407 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh249226) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249227)) 
            << 0x19U) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh249049) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249050)) 
                          << 0x18U) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3406));
    vlSelf->mkMac__DOT__y___05Fh249476 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249226) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249227));
    vlSelf->mkMac__DOT__x___05Fh249652 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x1aU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh235679)));
    vlSelf->mkMac__DOT__y___05Fh235929 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh235679));
    vlSelf->mkMac__DOT__y___05Fh152084 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh151821));
    vlSelf->mkMac__DOT__y___05Fh81321 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81071));
    vlSelf->mkMac__DOT__y___05Fh282329 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282400) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282401));
    vlSelf->mkMac__DOT__x___05Fh282328 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282577)));
    vlSelf->mkMac__DOT__y___05Fh274872 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh274944)));
    vlSelf->mkMac__DOT__y___05Fh249404 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249475) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh249476));
    vlSelf->mkMac__DOT__x___05Fh249403 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh249652)));
    vlSelf->mkMac__DOT__y___05Fh235857 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh235929)));
    vlSelf->mkMac__DOT__y___05Fh152010 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1563 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh152084)));
    vlSelf->mkMac__DOT__y___05Fh81249 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81321)));
    vlSelf->mkMac__DOT__int_out_fifo_rv_D_IN = vlSelf->mkMac__DOT__int_out_fifo_rv_port2___05Fread;
    vlSelf->mkMac__DOT__y___05Fh282578 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282328) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282329));
    vlSelf->mkMac__DOT__x___05Fh282754 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x1bU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh274872)));
    vlSelf->mkMac__DOT__y___05Fh275122 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh274872));
    vlSelf->mkMac__DOT__y___05Fh249653 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249403) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249404));
    vlSelf->mkMac__DOT__x___05Fh249829 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x1bU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh235857)));
    vlSelf->mkMac__DOT__y___05Fh236107 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh235857));
    vlSelf->mkMac__DOT__x___05Fh135383 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh152010) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh151821) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh151632) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1561) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh151443) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1734))));
    vlSelf->mkMac__DOT__y___05Fh81499 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81249));
    vlSelf->mkMac__DOT__y___05Fh282506 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282577) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282578));
    vlSelf->mkMac__DOT__x___05Fh282505 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282754)));
    vlSelf->mkMac__DOT__y___05Fh275050 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh275122)));
    vlSelf->mkMac__DOT__y___05Fh249581 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249652) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh249653));
    vlSelf->mkMac__DOT__x___05Fh249580 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh249829)));
    vlSelf->mkMac__DOT__y___05Fh236035 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh236107)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
        = (vlSelf->mkMac__DOT__x___05Fh135383 ^ vlSelf->mkMac__DOT__y___05Fh135384);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
        = (vlSelf->mkMac__DOT__x___05Fh135383 & vlSelf->mkMac__DOT__y___05Fh135384);
    vlSelf->mkMac__DOT__y___05Fh81427 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81499)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4096 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh282505) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh282506)) 
            << 0x1bU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh282328) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh282329)) 
                          << 0x1aU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4095));
    vlSelf->mkMac__DOT__y___05Fh282755 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282505) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282506));
    vlSelf->mkMac__DOT__x___05Fh282931 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x1cU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275050)));
    vlSelf->mkMac__DOT__y___05Fh275300 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275050));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3408 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh249580) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249581)) 
            << 0x1bU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh249403) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249404)) 
                          << 0x1aU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3407));
    vlSelf->mkMac__DOT__y___05Fh249830 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249580) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249581));
    vlSelf->mkMac__DOT__x___05Fh250006 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x1cU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh236035)));
    vlSelf->mkMac__DOT__y___05Fh236285 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh236035));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq27 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq26 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh153168 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d304 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh81427) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh81249) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh81071) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh80893) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d302))));
    vlSelf->mkMac__DOT__y___05Fh81677 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81427));
    vlSelf->mkMac__DOT__y___05Fh282683 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282754) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282755));
    vlSelf->mkMac__DOT__x___05Fh282682 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh282931)));
    vlSelf->mkMac__DOT__y___05Fh275228 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh275300)));
    vlSelf->mkMac__DOT__y___05Fh249758 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249829) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh249830));
    vlSelf->mkMac__DOT__x___05Fh249757 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh250006)));
    vlSelf->mkMac__DOT__y___05Fh236213 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh236285)));
    vlSelf->mkMac__DOT__y___05Fh153094 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153168)));
    vlSelf->mkMac__DOT__y___05Fh81605 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81677)));
    vlSelf->mkMac__DOT__y___05Fh282932 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282682) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282683));
    vlSelf->mkMac__DOT__x___05Fh283108 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x1dU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275228)));
    vlSelf->mkMac__DOT__y___05Fh275478 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275228));
    vlSelf->mkMac__DOT__y___05Fh250007 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249757) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249758));
    vlSelf->mkMac__DOT__x___05Fh250183 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x1dU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh236213)));
    vlSelf->mkMac__DOT__y___05Fh236463 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh236213));
    vlSelf->mkMac__DOT__y___05Fh153357 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh153094));
    vlSelf->mkMac__DOT__y___05Fh81855 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81605));
    vlSelf->mkMac__DOT__y___05Fh282860 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282931) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh282932));
    vlSelf->mkMac__DOT__x___05Fh282859 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh283108)));
    vlSelf->mkMac__DOT__y___05Fh275406 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh275478)));
    vlSelf->mkMac__DOT__y___05Fh249935 = ((IData)(vlSelf->mkMac__DOT__x___05Fh250006) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh250007));
    vlSelf->mkMac__DOT__x___05Fh249934 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh250183)));
    vlSelf->mkMac__DOT__y___05Fh236391 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh236463)));
    vlSelf->mkMac__DOT__y___05Fh153283 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153357)));
    vlSelf->mkMac__DOT__y___05Fh81783 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh81855)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4097 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh282859) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh282860)) 
            << 0x1dU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh282682) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh282683)) 
                          << 0x1cU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4096));
    vlSelf->mkMac__DOT__y___05Fh283109 = ((IData)(vlSelf->mkMac__DOT__x___05Fh282859) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh282860));
    vlSelf->mkMac__DOT__y___05Fh275656 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh275406));
    vlSelf->mkMac__DOT__x___05Fh283285 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
                                                 >> 0x1eU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275406)));
    vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3409 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh249934) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249935)) 
            << 0x1dU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh249757) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh249758)) 
                          << 0x1cU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3408));
    vlSelf->mkMac__DOT__y___05Fh250184 = ((IData)(vlSelf->mkMac__DOT__x___05Fh249934) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh249935));
    vlSelf->mkMac__DOT__y___05Fh236641 = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh236391));
    vlSelf->mkMac__DOT__x___05Fh250360 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
                                                 >> 0x1eU) 
                                                ^ (IData)(vlSelf->mkMac__DOT__y___05Fh236391)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1901 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153283) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153094) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740))));
    vlSelf->mkMac__DOT__y___05Fh153546 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh153283));
    vlSelf->mkMac__DOT__y___05Fh82033 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81783));
    vlSelf->mkMac__DOT__y___05Fh283037 = ((IData)(vlSelf->mkMac__DOT__x___05Fh283108) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh283109));
    vlSelf->mkMac__DOT__y___05Fh275584 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3794 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh275656)));
    vlSelf->mkMac__DOT__x___05Fh283036 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh283285)));
    vlSelf->mkMac__DOT__y___05Fh250112 = ((IData)(vlSelf->mkMac__DOT__x___05Fh250183) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh250184));
    vlSelf->mkMac__DOT__y___05Fh236569 = (1U & ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3107 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh236641)));
    vlSelf->mkMac__DOT__x___05Fh250111 = (1U & (~ (IData)(vlSelf->mkMac__DOT__x___05Fh250360)));
    vlSelf->mkMac__DOT__y___05Fh153472 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153546)));
    vlSelf->mkMac__DOT__y___05Fh81961 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82033)));
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3929 
        = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3792 
            >> 0x1fU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh275584));
    vlSelf->mkMac__DOT__y___05Fh283286 = ((IData)(vlSelf->mkMac__DOT__x___05Fh283036) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh283037));
    vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3241 
        = ((vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3105 
            >> 0x1fU) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh236569));
    vlSelf->mkMac__DOT__y___05Fh250361 = ((IData)(vlSelf->mkMac__DOT__x___05Fh250111) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh250112));
    vlSelf->mkMac__DOT__y___05Fh153735 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh153472));
    vlSelf->mkMac__DOT__y___05Fh82211 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh81961));
    vlSelf->mkMac__DOT__x___05Fh283213 = (1U & (~ (IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3929)));
    vlSelf->mkMac__DOT__exponent_diff___05Fh223601 
        = (((IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3929) 
            << 0x1fU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh283285) 
                          << 0x1eU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh283108) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkMac__DOT__x___05Fh282931) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkMac__DOT__x___05Fh282754) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh282577) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh282400) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh282223) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh282046) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh281869) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__x___05Fh281692) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__x___05Fh281515) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh281338) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh281161) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh280984) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh280807) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__x___05Fh280630) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__x___05Fh280453) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh280276) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh280099) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279922) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279745) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279568) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279391) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279214) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh279037) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh278860) 
                                                                                << 5U) 
                                                                                | (IData)(mkMac__DOT____VdfgTmp_h70a41801__0))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh283214 = ((IData)(vlSelf->mkMac__DOT__x___05Fh283285) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh283286));
    vlSelf->mkMac__DOT__x___05Fh250288 = (1U & (~ (IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3241)));
    vlSelf->mkMac__DOT__exponent_diff___05Fh223661 
        = (((IData)(vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3241) 
            << 0x1fU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh250360) 
                          << 0x1eU) | (((IData)(vlSelf->mkMac__DOT__x___05Fh250183) 
                                        << 0x1dU) | 
                                       (((IData)(vlSelf->mkMac__DOT__x___05Fh250006) 
                                         << 0x1cU) 
                                        | (((IData)(vlSelf->mkMac__DOT__x___05Fh249829) 
                                            << 0x1bU) 
                                           | (((IData)(vlSelf->mkMac__DOT__x___05Fh249652) 
                                               << 0x1aU) 
                                              | (((IData)(vlSelf->mkMac__DOT__x___05Fh249475) 
                                                  << 0x19U) 
                                                 | (((IData)(vlSelf->mkMac__DOT__x___05Fh249298) 
                                                     << 0x18U) 
                                                    | (((IData)(vlSelf->mkMac__DOT__x___05Fh249121) 
                                                        << 0x17U) 
                                                       | (((IData)(vlSelf->mkMac__DOT__x___05Fh248944) 
                                                           << 0x16U) 
                                                          | (((IData)(vlSelf->mkMac__DOT__x___05Fh248767) 
                                                              << 0x15U) 
                                                             | (((IData)(vlSelf->mkMac__DOT__x___05Fh248590) 
                                                                 << 0x14U) 
                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh248413) 
                                                                    << 0x13U) 
                                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh248236) 
                                                                       << 0x12U) 
                                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh248059) 
                                                                          << 0x11U) 
                                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh247882) 
                                                                             << 0x10U) 
                                                                            | (((IData)(vlSelf->mkMac__DOT__x___05Fh247705) 
                                                                                << 0xfU) 
                                                                               | (((IData)(vlSelf->mkMac__DOT__x___05Fh247528) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh247351) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh247174) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246997) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246820) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246643) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246466) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246289) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh246112) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh245935) 
                                                                                << 5U) 
                                                                                | (IData)(mkMac__DOT____VdfgTmp_hd10129e7__0))))))))))))))))))))))))))));
    vlSelf->mkMac__DOT__y___05Fh250289 = ((IData)(vlSelf->mkMac__DOT__x___05Fh250360) 
                                          | (IData)(vlSelf->mkMac__DOT__y___05Fh250361));
    vlSelf->mkMac__DOT__y___05Fh153661 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153735)));
    vlSelf->mkMac__DOT__y___05Fh82139 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d133 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82211)));
    vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288966 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mantissa_b___05Fh223458, vlSelf->mkMac__DOT__exponent_diff___05Fh223601);
    vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223602 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh283213) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh283214)) 
            << 0x1fU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh283036) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh283037)) 
                          << 0x1eU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4097));
    vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256041 
        = VL_SHIFTR_III(32,32,32, vlSelf->mkMac__DOT__mantissa_a___05Fh223453, vlSelf->mkMac__DOT__exponent_diff___05Fh223661);
    vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223662 
        = ((((IData)(vlSelf->mkMac__DOT__x___05Fh250288) 
             ^ (IData)(vlSelf->mkMac__DOT__y___05Fh250289)) 
            << 0x1fU) | ((((IData)(vlSelf->mkMac__DOT__x___05Fh250111) 
                           ^ (IData)(vlSelf->mkMac__DOT__y___05Fh250112)) 
                          << 0x1eU) | vlSelf->mkMac__DOT__INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d3409));
    vlSelf->mkMac__DOT__y___05Fh153924 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh153661));
    vlSelf->mkMac__DOT__product___05Fh56372 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82139) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh81961) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh81783) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d131) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh81605) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d304))));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288966 
           ^ vlSelf->mkMac__DOT__y___05Fh288990);
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288966 
           & vlSelf->mkMac__DOT__y___05Fh288990);
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fr_ETC___05Fq67 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223602))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223602);
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256041 
           ^ vlSelf->mkMac__DOT__y___05Fh256065);
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256041 
           & vlSelf->mkMac__DOT__y___05Fh256065);
    vlSelf->mkMac__DOT__IF_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fr_ETC___05Fq58 
        = ((1U & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223662))
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
        = VL_SHIFTL_III(32,32,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223662);
    vlSelf->mkMac__DOT__y___05Fh153850 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh153924)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d307 
        = ((2U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh56372
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d129);
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq73 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq72 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh290340 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
        = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099);
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq70 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05Fq69 
        = ((1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh257415 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
        = (~ vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411);
    vlSelf->mkMac__DOT__y___05Fh154113 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh153850));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d307 
           ^ vlSelf->mkMac__DOT__y___05Fh48802);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d307 
           & vlSelf->mkMac__DOT__y___05Fh48802);
    vlSelf->mkMac__DOT__y___05Fh290268 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290340)));
    vlSelf->mkMac__DOT__IF_INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port_ETC___05Fq68 
        = ((1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh283700 = (1U & ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223602)));
    vlSelf->mkMac__DOT__y___05Fh257343 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257415)));
    vlSelf->mkMac__DOT__IF_INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port_ETC___05Fq59 
        = ((1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__y___05Fh250775 = (1U & ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                                 >> 1U) 
                                                & VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223662)));
    vlSelf->mkMac__DOT__y___05Fh154039 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154113)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq11 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq10 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh82617 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311));
    vlSelf->mkMac__DOT__y___05Fh290518 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh290268));
    vlSelf->mkMac__DOT__y___05Fh283628 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283700)));
    vlSelf->mkMac__DOT__y___05Fh257593 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh257343));
    vlSelf->mkMac__DOT__y___05Fh250703 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250775)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1903 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh154039) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153850) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh153661) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh153472) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1901)))));
    vlSelf->mkMac__DOT__y___05Fh154302 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh154039));
    vlSelf->mkMac__DOT__y___05Fh82545 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82617)));
    vlSelf->mkMac__DOT__y___05Fh290446 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290518)));
    vlSelf->mkMac__DOT__y___05Fh283878 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh283628));
    vlSelf->mkMac__DOT__y___05Fh257521 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257593)));
    vlSelf->mkMac__DOT__y___05Fh250953 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh250703));
    vlSelf->mkMac__DOT__y___05Fh154228 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154302)));
    vlSelf->mkMac__DOT__y___05Fh82795 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82545));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4416 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290446) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290268) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                           ^ (vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255))));
    vlSelf->mkMac__DOT__y___05Fh290696 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh290446));
    vlSelf->mkMac__DOT__y___05Fh283806 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh283878)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3728 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh257521) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh257343) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                           ^ (vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567))));
    vlSelf->mkMac__DOT__y___05Fh257771 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh257521));
    vlSelf->mkMac__DOT__y___05Fh250881 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh250953)));
    vlSelf->mkMac__DOT__y___05Fh154491 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh154228));
    vlSelf->mkMac__DOT__y___05Fh82723 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82795)));
    vlSelf->mkMac__DOT__y___05Fh290624 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290696)));
    vlSelf->mkMac__DOT__y___05Fh284056 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh283806));
    vlSelf->mkMac__DOT__y___05Fh257699 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257771)));
    vlSelf->mkMac__DOT__y___05Fh251131 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh250881));
    vlSelf->mkMac__DOT__y___05Fh154417 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154491)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d470 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82723) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82545) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309))));
    vlSelf->mkMac__DOT__y___05Fh82973 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82723));
    vlSelf->mkMac__DOT__y___05Fh290874 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh290624));
    vlSelf->mkMac__DOT__y___05Fh283984 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284056)));
    vlSelf->mkMac__DOT__y___05Fh257949 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh257699));
    vlSelf->mkMac__DOT__y___05Fh251059 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh251131)));
    vlSelf->mkMac__DOT__y___05Fh154680 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh154417));
    vlSelf->mkMac__DOT__y___05Fh82901 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh82973)));
    vlSelf->mkMac__DOT__y___05Fh290802 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh290874)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4220 
        = ((0x10U & ((0xfffffff0U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283984) 
                        << 4U))) | ((8U & ((0xfffffff8U 
                                            & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283806) 
                                              << 3U))) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh283628) 
                                                 << 2U))) 
                                       | ((2U & ((0xfffffffeU 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                 ^ 
                                                 (VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223602) 
                                                  << 1U))) 
                                          | (1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66)))));
    vlSelf->mkMac__DOT__y___05Fh284234 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh283984));
    vlSelf->mkMac__DOT__y___05Fh257877 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh257949)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3532 
        = ((0x10U & ((0xfffffff0U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh251059) 
                        << 4U))) | ((8U & ((0xfffffff8U 
                                            & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250881) 
                                              << 3U))) 
                                    | ((4U & ((0xfffffffcU 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh250703) 
                                                 << 2U))) 
                                       | ((2U & ((0xfffffffeU 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                 ^ 
                                                 (VL_SHIFTL_III(1,1,32, (IData)(1U), vlSelf->mkMac__DOT__exp_diff_minus_1___05Fh223662) 
                                                  << 1U))) 
                                          | (1U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57)))));
    vlSelf->mkMac__DOT__y___05Fh251309 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251059));
    vlSelf->mkMac__DOT__y___05Fh154606 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154680)));
    vlSelf->mkMac__DOT__y___05Fh83151 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh82901));
    vlSelf->mkMac__DOT__y___05Fh291052 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh290802));
    vlSelf->mkMac__DOT__y___05Fh284162 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284234)));
    vlSelf->mkMac__DOT__y___05Fh258127 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh257877));
    vlSelf->mkMac__DOT__y___05Fh251237 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh251309)));
    vlSelf->mkMac__DOT__y___05Fh154869 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154606));
    vlSelf->mkMac__DOT__y___05Fh83079 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83151)));
    vlSelf->mkMac__DOT__y___05Fh290980 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291052)));
    vlSelf->mkMac__DOT__y___05Fh284412 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh284162));
    vlSelf->mkMac__DOT__y___05Fh258055 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258127)));
    vlSelf->mkMac__DOT__y___05Fh251487 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251237));
    vlSelf->mkMac__DOT__y___05Fh154795 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh154869)));
    vlSelf->mkMac__DOT__y___05Fh83329 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh83079));
    vlSelf->mkMac__DOT__y___05Fh291230 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh290980));
    vlSelf->mkMac__DOT__y___05Fh284340 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284412)));
    vlSelf->mkMac__DOT__y___05Fh258305 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh258055));
    vlSelf->mkMac__DOT__y___05Fh251415 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh251487)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1905 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh154795) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh154606) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh154417) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh154228) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1903)))));
    vlSelf->mkMac__DOT__y___05Fh155058 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154795));
    vlSelf->mkMac__DOT__y___05Fh83257 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83329)));
    vlSelf->mkMac__DOT__y___05Fh291158 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291230)));
    vlSelf->mkMac__DOT__y___05Fh284590 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh284340));
    vlSelf->mkMac__DOT__y___05Fh258233 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258305)));
    vlSelf->mkMac__DOT__y___05Fh251665 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251415));
    vlSelf->mkMac__DOT__y___05Fh154984 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155058)));
    vlSelf->mkMac__DOT__y___05Fh83507 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh83257));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4418 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291158) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290980) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh290802) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh290624) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4416)))));
    vlSelf->mkMac__DOT__y___05Fh291408 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh291158));
    vlSelf->mkMac__DOT__y___05Fh284518 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284590)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3730 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258233) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258055) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh257877) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh257699) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3728)))));
    vlSelf->mkMac__DOT__y___05Fh258483 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh258233));
    vlSelf->mkMac__DOT__y___05Fh251593 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh251665)));
    vlSelf->mkMac__DOT__y___05Fh155247 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh154984));
    vlSelf->mkMac__DOT__y___05Fh83435 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83507)));
    vlSelf->mkMac__DOT__y___05Fh291336 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291408)));
    vlSelf->mkMac__DOT__y___05Fh284768 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh284518));
    vlSelf->mkMac__DOT__y___05Fh258411 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258483)));
    vlSelf->mkMac__DOT__y___05Fh251843 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251593));
    vlSelf->mkMac__DOT__y___05Fh155173 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155247)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d472 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh83435) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh83257) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh83079) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh82901) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d470)))));
    vlSelf->mkMac__DOT__y___05Fh83685 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh83435));
    vlSelf->mkMac__DOT__y___05Fh291586 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh291336));
    vlSelf->mkMac__DOT__y___05Fh284696 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284768)));
    vlSelf->mkMac__DOT__y___05Fh258661 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh258411));
    vlSelf->mkMac__DOT__y___05Fh251771 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh251843)));
    vlSelf->mkMac__DOT__y___05Fh155436 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155173));
    vlSelf->mkMac__DOT__y___05Fh83613 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83685)));
    vlSelf->mkMac__DOT__y___05Fh291514 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291586)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4222 
        = ((0x100U & ((0xffffff00U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh284696) 
                         << 8U))) | ((0x80U & ((0xffffff80U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh284518) 
                                                  << 7U))) 
                                     | ((0x40U & ((0xffffffc0U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh284340) 
                                                   << 6U))) 
                                        | ((0x20U & 
                                            ((0xffffffe0U 
                                              & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh284162) 
                                                << 5U))) 
                                           | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4220)))));
    vlSelf->mkMac__DOT__y___05Fh284946 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh284696));
    vlSelf->mkMac__DOT__y___05Fh258589 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258661)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3534 
        = ((0x100U & ((0xffffff00U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh251771) 
                         << 8U))) | ((0x80U & ((0xffffff80U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh251593) 
                                                  << 7U))) 
                                     | ((0x40U & ((0xffffffc0U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh251415) 
                                                   << 6U))) 
                                        | ((0x20U & 
                                            ((0xffffffe0U 
                                              & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh251237) 
                                                << 5U))) 
                                           | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3532)))));
    vlSelf->mkMac__DOT__y___05Fh252021 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251771));
    vlSelf->mkMac__DOT__y___05Fh155362 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155436)));
    vlSelf->mkMac__DOT__y___05Fh83863 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh83613));
    vlSelf->mkMac__DOT__y___05Fh291764 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh291514));
    vlSelf->mkMac__DOT__y___05Fh284874 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh284946)));
    vlSelf->mkMac__DOT__y___05Fh258839 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh258589));
    vlSelf->mkMac__DOT__y___05Fh251949 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252021)));
    vlSelf->mkMac__DOT__y___05Fh155625 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155362));
    vlSelf->mkMac__DOT__y___05Fh83791 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh83863)));
    vlSelf->mkMac__DOT__y___05Fh291692 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291764)));
    vlSelf->mkMac__DOT__y___05Fh285124 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh284874));
    vlSelf->mkMac__DOT__y___05Fh258767 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh258839)));
    vlSelf->mkMac__DOT__y___05Fh252199 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh251949));
    vlSelf->mkMac__DOT__y___05Fh155551 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155625)));
    vlSelf->mkMac__DOT__y___05Fh84041 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh83791));
    vlSelf->mkMac__DOT__y___05Fh291942 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291692));
    vlSelf->mkMac__DOT__y___05Fh285052 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh285124)));
    vlSelf->mkMac__DOT__y___05Fh259017 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258767));
    vlSelf->mkMac__DOT__y___05Fh252127 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252199)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1907 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh155551) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh155362) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh155173) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh154984) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1905)))));
    vlSelf->mkMac__DOT__y___05Fh155814 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155551));
    vlSelf->mkMac__DOT__y___05Fh83969 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84041)));
    vlSelf->mkMac__DOT__y___05Fh291870 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh291942)));
    vlSelf->mkMac__DOT__y___05Fh285302 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285052));
    vlSelf->mkMac__DOT__y___05Fh258945 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259017)));
    vlSelf->mkMac__DOT__y___05Fh252377 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh252127));
    vlSelf->mkMac__DOT__y___05Fh155740 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh155814)));
    vlSelf->mkMac__DOT__y___05Fh84219 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh83969));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4420 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291870) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh291692) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh291514) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh291336) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4418)))));
    vlSelf->mkMac__DOT__y___05Fh292120 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh291870));
    vlSelf->mkMac__DOT__y___05Fh285230 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh285302)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3732 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258945) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh258767) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh258589) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh258411) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3730)))));
    vlSelf->mkMac__DOT__y___05Fh259195 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh258945));
    vlSelf->mkMac__DOT__y___05Fh252305 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252377)));
    vlSelf->mkMac__DOT__y___05Fh156003 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155740));
    vlSelf->mkMac__DOT__y___05Fh84147 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84219)));
    vlSelf->mkMac__DOT__y___05Fh292048 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh292120)));
    vlSelf->mkMac__DOT__y___05Fh285480 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285230));
    vlSelf->mkMac__DOT__y___05Fh259123 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259195)));
    vlSelf->mkMac__DOT__y___05Fh252555 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh252305));
    vlSelf->mkMac__DOT__y___05Fh155929 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156003)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d474 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84147) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh83969) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh83791) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh83613) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d472)))));
    vlSelf->mkMac__DOT__y___05Fh84397 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84147));
    vlSelf->mkMac__DOT__y___05Fh292298 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292048));
    vlSelf->mkMac__DOT__y___05Fh285408 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh285480)));
    vlSelf->mkMac__DOT__y___05Fh259373 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh259123));
    vlSelf->mkMac__DOT__y___05Fh252483 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252555)));
    vlSelf->mkMac__DOT__y___05Fh156192 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh155929));
    vlSelf->mkMac__DOT__y___05Fh84325 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84397)));
    vlSelf->mkMac__DOT__y___05Fh292226 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh292298)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4224 
        = ((0x1000U & ((0xfffff000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh285408) 
                          << 0xcU))) | ((0x800U & (
                                                   (0xfffff800U 
                                                    & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh285230) 
                                                    << 0xbU))) 
                                        | ((0x400U 
                                            & ((0xfffffc00U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh285052) 
                                                  << 0xaU))) 
                                           | ((0x200U 
                                               & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh284874) 
                                                   << 9U))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4222)))));
    vlSelf->mkMac__DOT__y___05Fh285658 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285408));
    vlSelf->mkMac__DOT__y___05Fh259301 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259373)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3536 
        = ((0x1000U & ((0xfffff000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh252483) 
                          << 0xcU))) | ((0x800U & (
                                                   (0xfffff800U 
                                                    & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh252305) 
                                                    << 0xbU))) 
                                        | ((0x400U 
                                            & ((0xfffffc00U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh252127) 
                                                  << 0xaU))) 
                                           | ((0x200U 
                                               & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh251949) 
                                                   << 9U))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3534)))));
    vlSelf->mkMac__DOT__y___05Fh252733 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh252483));
    vlSelf->mkMac__DOT__y___05Fh156118 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156192)));
    vlSelf->mkMac__DOT__y___05Fh84575 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84325));
    vlSelf->mkMac__DOT__y___05Fh292476 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292226));
    vlSelf->mkMac__DOT__y___05Fh285586 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh285658)));
    vlSelf->mkMac__DOT__y___05Fh259551 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh259301));
    vlSelf->mkMac__DOT__y___05Fh252661 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252733)));
    vlSelf->mkMac__DOT__y___05Fh156381 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh156118));
    vlSelf->mkMac__DOT__y___05Fh84503 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84575)));
    vlSelf->mkMac__DOT__y___05Fh292404 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh292476)));
    vlSelf->mkMac__DOT__y___05Fh285836 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285586));
    vlSelf->mkMac__DOT__y___05Fh259479 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259551)));
    vlSelf->mkMac__DOT__y___05Fh252911 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh252661));
    vlSelf->mkMac__DOT__y___05Fh156307 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156381)));
    vlSelf->mkMac__DOT__y___05Fh84753 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84503));
    vlSelf->mkMac__DOT__y___05Fh292654 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292404));
    vlSelf->mkMac__DOT__y___05Fh285764 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh285836)));
    vlSelf->mkMac__DOT__y___05Fh259729 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh259479));
    vlSelf->mkMac__DOT__y___05Fh252839 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh252911)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1909 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156307) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156118) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh155929) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh155740) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1907)))));
    vlSelf->mkMac__DOT__y___05Fh156570 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh156307));
    vlSelf->mkMac__DOT__y___05Fh84681 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84753)));
    vlSelf->mkMac__DOT__y___05Fh292582 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh292654)));
    vlSelf->mkMac__DOT__y___05Fh286014 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285764));
    vlSelf->mkMac__DOT__y___05Fh259657 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259729)));
    vlSelf->mkMac__DOT__y___05Fh253089 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh252839));
    vlSelf->mkMac__DOT__y___05Fh156496 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156570)));
    vlSelf->mkMac__DOT__y___05Fh84931 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84681));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4422 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh292582) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh292404) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh292226) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh292048) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4420)))));
    vlSelf->mkMac__DOT__y___05Fh292832 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292582));
    vlSelf->mkMac__DOT__y___05Fh285942 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286014)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3734 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh259657) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh259479) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh259301) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh259123) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3732)))));
    vlSelf->mkMac__DOT__y___05Fh259907 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh259657));
    vlSelf->mkMac__DOT__y___05Fh253017 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253089)));
    vlSelf->mkMac__DOT__y___05Fh156759 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh156496));
    vlSelf->mkMac__DOT__y___05Fh84859 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh84931)));
    vlSelf->mkMac__DOT__y___05Fh292760 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh292832)));
    vlSelf->mkMac__DOT__y___05Fh286192 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh285942));
    vlSelf->mkMac__DOT__y___05Fh259835 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh259907)));
    vlSelf->mkMac__DOT__y___05Fh253267 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253017));
    vlSelf->mkMac__DOT__y___05Fh156685 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156759)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d476 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84859) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84681) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh84503) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh84325) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d474)))));
    vlSelf->mkMac__DOT__y___05Fh85109 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh84859));
    vlSelf->mkMac__DOT__y___05Fh293010 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292760));
    vlSelf->mkMac__DOT__y___05Fh286120 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286192)));
    vlSelf->mkMac__DOT__y___05Fh260085 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh259835));
    vlSelf->mkMac__DOT__y___05Fh253195 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253267)));
    vlSelf->mkMac__DOT__y___05Fh156948 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh156685));
    vlSelf->mkMac__DOT__y___05Fh85037 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85109)));
    vlSelf->mkMac__DOT__y___05Fh292938 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293010)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4226 
        = ((0x10000U & ((0xffff0000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh286120) 
                           << 0x10U))) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh285942) 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh285764) 
                                                  << 0xeU))) 
                                             | ((0x2000U 
                                                 & ((0xffffe000U 
                                                     & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh285586) 
                                                     << 0xdU))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4224)))));
    vlSelf->mkMac__DOT__y___05Fh286370 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh286120));
    vlSelf->mkMac__DOT__y___05Fh260013 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260085)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3538 
        = ((0x10000U & ((0xffff0000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253195) 
                           << 0x10U))) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253017) 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & ((0xffffc000U 
                                                  & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh252839) 
                                                  << 0xeU))) 
                                             | ((0x2000U 
                                                 & ((0xffffe000U 
                                                     & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh252661) 
                                                     << 0xdU))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3536)))));
    vlSelf->mkMac__DOT__y___05Fh253445 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253195));
    vlSelf->mkMac__DOT__y___05Fh156874 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh156948)));
    vlSelf->mkMac__DOT__y___05Fh85287 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85037));
    vlSelf->mkMac__DOT__y___05Fh293188 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh292938));
    vlSelf->mkMac__DOT__y___05Fh286298 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286370)));
    vlSelf->mkMac__DOT__y___05Fh260263 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260013));
    vlSelf->mkMac__DOT__y___05Fh253373 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253445)));
    vlSelf->mkMac__DOT__y___05Fh157137 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh156874));
    vlSelf->mkMac__DOT__y___05Fh85215 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85287)));
    vlSelf->mkMac__DOT__y___05Fh293116 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293188)));
    vlSelf->mkMac__DOT__y___05Fh286548 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh286298));
    vlSelf->mkMac__DOT__y___05Fh260191 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260263)));
    vlSelf->mkMac__DOT__y___05Fh253623 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253373));
    vlSelf->mkMac__DOT__y___05Fh157063 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157137)));
    vlSelf->mkMac__DOT__y___05Fh85465 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85215));
    vlSelf->mkMac__DOT__y___05Fh293366 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh293116));
    vlSelf->mkMac__DOT__y___05Fh286476 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286548)));
    vlSelf->mkMac__DOT__y___05Fh260441 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260191));
    vlSelf->mkMac__DOT__y___05Fh253551 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253623)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1911 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157063) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh156874) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh156685) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh156496) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1909))));
    vlSelf->mkMac__DOT__y___05Fh157326 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157063));
    vlSelf->mkMac__DOT__y___05Fh85393 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85465)));
    vlSelf->mkMac__DOT__y___05Fh293294 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293366)));
    vlSelf->mkMac__DOT__y___05Fh286726 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh286476));
    vlSelf->mkMac__DOT__y___05Fh260369 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260441)));
    vlSelf->mkMac__DOT__y___05Fh253801 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253551));
    vlSelf->mkMac__DOT__y___05Fh157252 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157326)));
    vlSelf->mkMac__DOT__y___05Fh85643 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85393));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4424 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh293294) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh293116) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh292938) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh292760) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4422)))));
    vlSelf->mkMac__DOT__y___05Fh293544 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh293294));
    vlSelf->mkMac__DOT__y___05Fh286654 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286726)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3736 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh260369) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh260191) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh260013) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh259835) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3734)))));
    vlSelf->mkMac__DOT__y___05Fh260619 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260369));
    vlSelf->mkMac__DOT__y___05Fh253729 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253801)));
    vlSelf->mkMac__DOT__y___05Fh157515 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157252));
    vlSelf->mkMac__DOT__y___05Fh85571 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85643)));
    vlSelf->mkMac__DOT__y___05Fh293472 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293544)));
    vlSelf->mkMac__DOT__y___05Fh286904 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh286654));
    vlSelf->mkMac__DOT__y___05Fh260547 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260619)));
    vlSelf->mkMac__DOT__y___05Fh253979 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253729));
    vlSelf->mkMac__DOT__y___05Fh157441 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157515)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d478 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh85571) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh85393) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh85215) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh85037) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d476)))));
    vlSelf->mkMac__DOT__y___05Fh85821 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85571));
    vlSelf->mkMac__DOT__y___05Fh293722 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh293472));
    vlSelf->mkMac__DOT__y___05Fh286832 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh286904)));
    vlSelf->mkMac__DOT__y___05Fh260797 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260547));
    vlSelf->mkMac__DOT__y___05Fh253907 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh253979)));
    vlSelf->mkMac__DOT__y___05Fh157704 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157441));
    vlSelf->mkMac__DOT__y___05Fh85749 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85821)));
    vlSelf->mkMac__DOT__y___05Fh293650 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293722)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4228 
        = ((0x100000U & ((0xfff00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh286832) 
                            << 0x14U))) | ((0x80000U 
                                            & ((0xfff80000U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh286654) 
                                                  << 0x13U))) 
                                           | ((0x40000U 
                                               & ((0xfffc0000U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh286476) 
                                                   << 0x12U))) 
                                              | ((0x20000U 
                                                  & ((0xfffe0000U 
                                                      & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh286298) 
                                                      << 0x11U))) 
                                                 | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4226))));
    vlSelf->mkMac__DOT__y___05Fh287082 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh286832));
    vlSelf->mkMac__DOT__y___05Fh260725 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260797)));
    vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3540 
        = ((0x100000U & ((0xfff00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253907) 
                            << 0x14U))) | ((0x80000U 
                                            & ((0xfff80000U 
                                                & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh253729) 
                                                  << 0x13U))) 
                                           | ((0x40000U 
                                               & ((0xfffc0000U 
                                                   & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh253551) 
                                                   << 0x12U))) 
                                              | ((0x20000U 
                                                  & ((0xfffe0000U 
                                                      & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh253373) 
                                                      << 0x11U))) 
                                                 | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3538))));
    vlSelf->mkMac__DOT__y___05Fh254157 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh253907));
    vlSelf->mkMac__DOT__y___05Fh157630 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157704)));
    vlSelf->mkMac__DOT__y___05Fh85999 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85749));
    vlSelf->mkMac__DOT__y___05Fh293900 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh293650));
    vlSelf->mkMac__DOT__y___05Fh287010 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287082)));
    vlSelf->mkMac__DOT__y___05Fh260975 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260725));
    vlSelf->mkMac__DOT__y___05Fh254085 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254157)));
    vlSelf->mkMac__DOT__y___05Fh157893 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157630));
    vlSelf->mkMac__DOT__y___05Fh85927 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh85999)));
    vlSelf->mkMac__DOT__y___05Fh293828 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh293900)));
    vlSelf->mkMac__DOT__y___05Fh287260 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh287010));
    vlSelf->mkMac__DOT__y___05Fh260903 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh260975)));
    vlSelf->mkMac__DOT__y___05Fh254335 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh254085));
    vlSelf->mkMac__DOT__y___05Fh157819 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh157893)));
    vlSelf->mkMac__DOT__y___05Fh86177 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh85927));
    vlSelf->mkMac__DOT__y___05Fh294078 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh293828));
    vlSelf->mkMac__DOT__y___05Fh287188 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287260)));
    vlSelf->mkMac__DOT__y___05Fh261153 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh260903));
    vlSelf->mkMac__DOT__y___05Fh254263 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254335)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1913 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157819) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh157630) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh157441) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh157252) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1911))));
    vlSelf->mkMac__DOT__y___05Fh158082 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh157819));
    vlSelf->mkMac__DOT__y___05Fh86105 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86177)));
    vlSelf->mkMac__DOT__y___05Fh294006 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294078)));
    vlSelf->mkMac__DOT__y___05Fh287438 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh287188));
    vlSelf->mkMac__DOT__y___05Fh261081 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh261153)));
    vlSelf->mkMac__DOT__y___05Fh254513 = ((vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh254263));
    vlSelf->mkMac__DOT__y___05Fh158008 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158082)));
    vlSelf->mkMac__DOT__y___05Fh86355 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86105));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4426 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294006) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh293828) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh293650) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh293472) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4424))));
    vlSelf->mkMac__DOT__y___05Fh294256 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294006));
    vlSelf->mkMac__DOT__y___05Fh287366 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d4099 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh287438)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3738 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh261081) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh260903) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh260725) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh260547) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3736))));
    vlSelf->mkMac__DOT__y___05Fh261331 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261081));
    vlSelf->mkMac__DOT__y___05Fh254441 = (1U & ((vlSelf->mkMac__DOT___0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05Fread_ETC___05F_d3411 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh254513)));
    vlSelf->mkMac__DOT__y___05Fh158271 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158008));
    vlSelf->mkMac__DOT__y___05Fh86283 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86355)));
    vlSelf->mkMac__DOT__y___05Fh294184 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294256)));
    vlSelf->mkMac__DOT__NOT_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4233 
        = ((~ (IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3819)) 
           & (0U == ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                   ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287366) 
                                      << 0x17U))) | 
                     (((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287188) 
                                        << 0x16U))) 
                       | ((0x200000U & ((0xffe00000U 
                                         & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq66) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh287010) 
                                           << 0x15U))) 
                          | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d4228)) 
                      & vlSelf->mkMac__DOT__fp_add_fifo_rv[0U]))));
    vlSelf->mkMac__DOT__y___05Fh261259 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh261331)));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3545 
        = ((IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3132) 
           & (0U == ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                   ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254441) 
                                      << 0x17U))) | 
                     (((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254263) 
                                        << 0x16U))) 
                       | ((0x200000U & ((0xffe00000U 
                                         & vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05Fq57) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh254085) 
                                           << 0x15U))) 
                          | vlSelf->mkMac__DOT__INV_0b1_SL_INV_0_CONCAT_fp_add_fifo_rv_port0___05F_ETC___05F_d3540)) 
                      & vlSelf->mkMac__DOT__fp_add_fifo_rv[1U]))));
    vlSelf->mkMac__DOT__y___05Fh158197 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158271)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d480 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86283) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86105) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh85927) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh85749) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d478))));
    vlSelf->mkMac__DOT__y___05Fh86533 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86283));
    vlSelf->mkMac__DOT__y___05Fh294434 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294184));
    vlSelf->mkMac__DOT__y___05Fh261509 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261259));
    vlSelf->mkMac__DOT__y___05Fh158460 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158197));
    vlSelf->mkMac__DOT__y___05Fh86461 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86533)));
    vlSelf->mkMac__DOT__y___05Fh294362 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294434)));
    vlSelf->mkMac__DOT__y___05Fh261437 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh261509)));
    vlSelf->mkMac__DOT__y___05Fh158386 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158460)));
    vlSelf->mkMac__DOT__y___05Fh86711 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86461));
    vlSelf->mkMac__DOT__y___05Fh294612 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294362));
    vlSelf->mkMac__DOT__y___05Fh261687 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261437));
    vlSelf->mkMac__DOT__y___05Fh158649 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh158386));
    vlSelf->mkMac__DOT__y___05Fh86639 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86711)));
    vlSelf->mkMac__DOT__y___05Fh294540 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294612)));
    vlSelf->mkMac__DOT__y___05Fh261615 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh261687)));
    vlSelf->mkMac__DOT__y___05Fh158575 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1742 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh158649)));
    vlSelf->mkMac__DOT__y___05Fh86889 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86639));
    vlSelf->mkMac__DOT__y___05Fh294790 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294540));
    vlSelf->mkMac__DOT__y___05Fh261865 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261615));
    vlSelf->mkMac__DOT__x___05Fh134113 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh158575) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh158386) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh158197) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1740) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh158008) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1913))));
    vlSelf->mkMac__DOT__y___05Fh86817 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh86889)));
    vlSelf->mkMac__DOT__y___05Fh294718 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294790)));
    vlSelf->mkMac__DOT__y___05Fh261793 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh261865)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
        = (vlSelf->mkMac__DOT__x___05Fh134113 ^ vlSelf->mkMac__DOT__y___05Fh134114);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
        = (vlSelf->mkMac__DOT__x___05Fh134113 & vlSelf->mkMac__DOT__y___05Fh134114);
    vlSelf->mkMac__DOT__y___05Fh87067 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86817));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4428 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294718) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh294540) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh294362) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh294184) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4426))));
    vlSelf->mkMac__DOT__y___05Fh294968 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294718));
    vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3740 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh261793) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh261615) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh261437) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh261259) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3738))));
    vlSelf->mkMac__DOT__y___05Fh262043 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261793));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq29 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq28 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh159733 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921));
    vlSelf->mkMac__DOT__y___05Fh86995 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87067)));
    vlSelf->mkMac__DOT__y___05Fh294896 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh294968)));
    vlSelf->mkMac__DOT__y___05Fh261971 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh262043)));
    vlSelf->mkMac__DOT__y___05Fh159659 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159733)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d482 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86995) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh86817) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh86639) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh86461) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d480))));
    vlSelf->mkMac__DOT__y___05Fh87245 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh86995));
    vlSelf->mkMac__DOT__y___05Fh295146 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh294896));
    vlSelf->mkMac__DOT__y___05Fh262221 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh261971));
    vlSelf->mkMac__DOT__y___05Fh159922 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh159659));
    vlSelf->mkMac__DOT__y___05Fh87173 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87245)));
    vlSelf->mkMac__DOT__y___05Fh295074 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295146)));
    vlSelf->mkMac__DOT__y___05Fh262149 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh262221)));
    vlSelf->mkMac__DOT__y___05Fh159848 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh159922)));
    vlSelf->mkMac__DOT__y___05Fh87423 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87173));
    vlSelf->mkMac__DOT__y___05Fh295324 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295074));
    vlSelf->mkMac__DOT__y___05Fh262399 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh262149));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2080 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh159848) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh159659) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919))));
    vlSelf->mkMac__DOT__y___05Fh160111 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh159848));
    vlSelf->mkMac__DOT__y___05Fh87351 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87423)));
    vlSelf->mkMac__DOT__y___05Fh295252 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295324)));
    vlSelf->mkMac__DOT__y___05Fh262327 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh262399)));
    vlSelf->mkMac__DOT__y___05Fh160037 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160111)));
    vlSelf->mkMac__DOT__y___05Fh87601 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87351));
    vlSelf->mkMac__DOT__y___05Fh295502 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh295252));
    vlSelf->mkMac__DOT__y___05Fh262577 = ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh262327));
    vlSelf->mkMac__DOT__y___05Fh160300 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160037));
    vlSelf->mkMac__DOT__y___05Fh87529 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87601)));
    vlSelf->mkMac__DOT__y___05Fh295430 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4257 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh295502)));
    vlSelf->mkMac__DOT__y___05Fh262505 = (1U & ((vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3569 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh262577)));
    vlSelf->mkMac__DOT__y___05Fh160226 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160300)));
    vlSelf->mkMac__DOT__y___05Fh87779 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh87529));
    vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288988 
        = (((0x80000000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295430) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295252) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh295074) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4255) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh294896) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d4428))));
    vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256063 
        = (((0x80000000U & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh262505) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh262327) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh262149) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3567) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh261971) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3740))));
    vlSelf->mkMac__DOT__y___05Fh160489 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160226));
    vlSelf->mkMac__DOT__y___05Fh87707 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d311 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh87779)));
    vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh262680 
        = ((IData)(vlSelf->mkMac__DOT__NOT_1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_B_ETC___05F_d4233)
            ? vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288966
            : vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh288988);
    vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh223665 
        = ((IData)(vlSelf->mkMac__DOT___1_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3545)
            ? vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256041
            : vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh256063);
    if (vlSelf->mkMac__DOT___0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BITS___05FETC___05F_d3057) {
        vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463 
            = vlSelf->mkMac__DOT__mantissa_b___05Fh223458;
        vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
            = vlSelf->mkMac__DOT___theResult___05F_snd_fst___05Fh223665;
    } else {
        vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463 
            = vlSelf->mkMac__DOT___theResult___05F_snd_snd_fst___05Fh262680;
        vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
            = vlSelf->mkMac__DOT__mantissa_a___05Fh223453;
    }
    vlSelf->mkMac__DOT__y___05Fh160415 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160489)));
    vlSelf->mkMac__DOT__product___05Fh48800 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh87707) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh87529) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh87351) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d309) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh87173) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d482))));
    vlSelf->mkMac__DOT__y___05Fh160678 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160415));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d485 
        = ((4U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh48800
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d307);
    vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
        = (~ vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4433 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
           < vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
           ^ vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
           & vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463);
    vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
        = (~ vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461);
    vlSelf->mkMac__DOT__y___05Fh160604 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160678)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d485 
           ^ vlSelf->mkMac__DOT__y___05Fh41230);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d485 
           & vlSelf->mkMac__DOT__y___05Fh41230);
    if ((1U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74)) {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_b234634_BIT_0_THEN_ETC___05Fq78 = 0U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_b234634_BIT_0_THEN_2_E_ETC___05Fq77 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_b234634_BIT_0_THEN_ETC___05Fq78 = 1U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_b234634_BIT_0_THEN_2_E_ETC___05Fq77 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh304478 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74)));
    vlSelf->mkMac__DOT__result_sign___05Fh223541 = 
        (1U & ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4433)
                ? (vlSelf->mkMac__DOT__fp_add_fifo_rv[0U] 
                   >> 0x1fU) : (vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                                >> 0x1fU)));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq80 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq79 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh296959 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438));
    if ((1U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71)) {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_a234611_BIT_0_THEN_ETC___05Fq76 = 0U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_a234611_BIT_0_THEN_2_E_ETC___05Fq75 = 2ULL;
    } else {
        vlSelf->mkMac__DOT__IF_INV_INV_aligned_mantissa_a234611_BIT_0_THEN_ETC___05Fq76 = 1U;
        vlSelf->mkMac__DOT__IF_INV_aligned_mantissa_a234611_BIT_0_THEN_2_E_ETC___05Fq75 = 0ULL;
    }
    vlSelf->mkMac__DOT__y___05Fh317543 = (IData)((3U 
                                                  == 
                                                  (3U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2082 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160604) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160415) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh160226) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160037) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2080)))));
    vlSelf->mkMac__DOT__y___05Fh160867 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160604));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq13 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq12 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh88185 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489));
    vlSelf->mkMac__DOT__y___05Fh304653 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh304478));
    vlSelf->mkMac__DOT__y___05Fh296887 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh296959)));
    vlSelf->mkMac__DOT__y___05Fh317718 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh317543));
    vlSelf->mkMac__DOT__y___05Fh160793 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh160867)));
    vlSelf->mkMac__DOT__y___05Fh88113 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88185)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4991 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh304653) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh304478) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                           ^ (vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74)))));
    vlSelf->mkMac__DOT__y___05Fh304828 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh304653));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4591 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh296887) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436)));
    vlSelf->mkMac__DOT__y___05Fh297137 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh296887));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4706 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh317718) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh317543) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                           ^ (vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                              << 1U))) 
                                    | (1U & (~ vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71)))));
    vlSelf->mkMac__DOT__y___05Fh317893 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh317718));
    vlSelf->mkMac__DOT__y___05Fh161056 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160793));
    vlSelf->mkMac__DOT__y___05Fh88363 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh88113));
    vlSelf->mkMac__DOT__y___05Fh305003 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh304828));
    vlSelf->mkMac__DOT__y___05Fh297065 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297137)));
    vlSelf->mkMac__DOT__y___05Fh318068 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh317893));
    vlSelf->mkMac__DOT__y___05Fh160982 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161056)));
    vlSelf->mkMac__DOT__y___05Fh88291 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88363)));
    vlSelf->mkMac__DOT__y___05Fh305178 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh305003));
    vlSelf->mkMac__DOT__y___05Fh297315 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297065));
    vlSelf->mkMac__DOT__y___05Fh318243 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh318068));
    vlSelf->mkMac__DOT__y___05Fh161245 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh160982));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d648 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88291) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88113) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487))));
    vlSelf->mkMac__DOT__y___05Fh88541 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh88291));
    vlSelf->mkMac__DOT__y___05Fh305353 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh305178));
    vlSelf->mkMac__DOT__y___05Fh297243 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297315)));
    vlSelf->mkMac__DOT__y___05Fh318418 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh318243));
    vlSelf->mkMac__DOT__y___05Fh161171 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161245)));
    vlSelf->mkMac__DOT__y___05Fh88469 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88541)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4993 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305353) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305178) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh305003) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh304828) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4991)))));
    vlSelf->mkMac__DOT__y___05Fh305528 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh305353));
    vlSelf->mkMac__DOT__y___05Fh297493 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297243));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4708 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318418) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318243) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh318068) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh317893) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4706)))));
    vlSelf->mkMac__DOT__y___05Fh318593 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh318418));
    vlSelf->mkMac__DOT__y___05Fh161434 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161171));
    vlSelf->mkMac__DOT__y___05Fh88719 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh88469));
    vlSelf->mkMac__DOT__y___05Fh305703 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh305528));
    vlSelf->mkMac__DOT__y___05Fh297421 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297493)));
    vlSelf->mkMac__DOT__y___05Fh318768 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh318593));
    vlSelf->mkMac__DOT__y___05Fh161360 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161434)));
    vlSelf->mkMac__DOT__y___05Fh88647 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88719)));
    vlSelf->mkMac__DOT__y___05Fh305878 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh305703));
    vlSelf->mkMac__DOT__y___05Fh297671 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297421));
    vlSelf->mkMac__DOT__y___05Fh318943 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh318768));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2084 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh161360) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh161171) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh160982) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh160793) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2082)))));
    vlSelf->mkMac__DOT__y___05Fh161623 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161360));
    vlSelf->mkMac__DOT__y___05Fh88897 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh88647));
    vlSelf->mkMac__DOT__y___05Fh306053 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh305878));
    vlSelf->mkMac__DOT__y___05Fh297599 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297671)));
    vlSelf->mkMac__DOT__y___05Fh319118 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh318943));
    vlSelf->mkMac__DOT__y___05Fh161549 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161623)));
    vlSelf->mkMac__DOT__y___05Fh88825 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh88897)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4995 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306053) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh305878) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh305703) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh305528) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4993)))));
    vlSelf->mkMac__DOT__y___05Fh306228 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306053));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4593 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh297599) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh297421) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh297243) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh297065) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4591)))));
    vlSelf->mkMac__DOT__y___05Fh297849 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297599));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4710 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319118) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh318943) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh318768) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh318593) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4708)))));
    vlSelf->mkMac__DOT__y___05Fh319293 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319118));
    vlSelf->mkMac__DOT__y___05Fh161812 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161549));
    vlSelf->mkMac__DOT__y___05Fh89075 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh88825));
    vlSelf->mkMac__DOT__y___05Fh306403 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306228));
    vlSelf->mkMac__DOT__y___05Fh297777 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh297849)));
    vlSelf->mkMac__DOT__y___05Fh319468 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319293));
    vlSelf->mkMac__DOT__y___05Fh161738 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh161812)));
    vlSelf->mkMac__DOT__y___05Fh89003 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89075)));
    vlSelf->mkMac__DOT__y___05Fh306578 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306403));
    vlSelf->mkMac__DOT__y___05Fh298027 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297777));
    vlSelf->mkMac__DOT__y___05Fh319643 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319468));
    vlSelf->mkMac__DOT__y___05Fh162001 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161738));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d650 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89003) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88825) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh88647) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh88469) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d648)))));
    vlSelf->mkMac__DOT__y___05Fh89253 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh89003));
    vlSelf->mkMac__DOT__y___05Fh306753 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306578));
    vlSelf->mkMac__DOT__y___05Fh297955 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298027)));
    vlSelf->mkMac__DOT__y___05Fh319818 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319643));
    vlSelf->mkMac__DOT__y___05Fh161927 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162001)));
    vlSelf->mkMac__DOT__y___05Fh89181 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89253)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4997 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306753) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306578) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh306403) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh306228) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4995)))));
    vlSelf->mkMac__DOT__y___05Fh306928 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306753));
    vlSelf->mkMac__DOT__y___05Fh298205 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh297955));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4712 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319818) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319643) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh319468) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh319293) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4710)))));
    vlSelf->mkMac__DOT__y___05Fh319993 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319818));
    vlSelf->mkMac__DOT__y___05Fh162190 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh161927));
    vlSelf->mkMac__DOT__y___05Fh89431 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh89181));
    vlSelf->mkMac__DOT__y___05Fh307103 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh306928));
    vlSelf->mkMac__DOT__y___05Fh298133 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298205)));
    vlSelf->mkMac__DOT__y___05Fh320168 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh319993));
    vlSelf->mkMac__DOT__y___05Fh162116 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162190)));
    vlSelf->mkMac__DOT__y___05Fh89359 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89431)));
    vlSelf->mkMac__DOT__y___05Fh307278 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307103));
    vlSelf->mkMac__DOT__y___05Fh298383 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh298133));
    vlSelf->mkMac__DOT__y___05Fh320343 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320168));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2086 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh162116) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh161927) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh161738) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh161549) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2084)))));
    vlSelf->mkMac__DOT__y___05Fh162379 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162116));
    vlSelf->mkMac__DOT__y___05Fh89609 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh89359));
    vlSelf->mkMac__DOT__y___05Fh307453 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307278));
    vlSelf->mkMac__DOT__y___05Fh298311 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298383)));
    vlSelf->mkMac__DOT__y___05Fh320518 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320343));
    vlSelf->mkMac__DOT__y___05Fh162305 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162379)));
    vlSelf->mkMac__DOT__y___05Fh89537 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89609)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4999 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307453) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307278) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh307103) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh306928) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4997)))));
    vlSelf->mkMac__DOT__y___05Fh307628 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307453));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4595 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh298311) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh298133) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh297955) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh297777) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4593)))));
    vlSelf->mkMac__DOT__y___05Fh298561 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh298311));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4714 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320518) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh320343) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh320168) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh319993) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4712)))));
    vlSelf->mkMac__DOT__y___05Fh320693 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320518));
    vlSelf->mkMac__DOT__y___05Fh162568 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162305));
    vlSelf->mkMac__DOT__y___05Fh89787 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89537));
    vlSelf->mkMac__DOT__y___05Fh307803 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307628));
    vlSelf->mkMac__DOT__y___05Fh298489 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298561)));
    vlSelf->mkMac__DOT__y___05Fh320868 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320693));
    vlSelf->mkMac__DOT__y___05Fh162494 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162568)));
    vlSelf->mkMac__DOT__y___05Fh89715 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89787)));
    vlSelf->mkMac__DOT__y___05Fh307978 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307803));
    vlSelf->mkMac__DOT__y___05Fh298739 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh298489));
    vlSelf->mkMac__DOT__y___05Fh321043 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh320868));
    vlSelf->mkMac__DOT__y___05Fh162757 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162494));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d652 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89715) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh89537) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh89359) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh89181) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d650)))));
    vlSelf->mkMac__DOT__y___05Fh89965 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89715));
    vlSelf->mkMac__DOT__y___05Fh308153 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh307978));
    vlSelf->mkMac__DOT__y___05Fh298667 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298739)));
    vlSelf->mkMac__DOT__y___05Fh321218 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321043));
    vlSelf->mkMac__DOT__y___05Fh162683 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162757)));
    vlSelf->mkMac__DOT__y___05Fh89893 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh89965)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5001 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308153) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh307978) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh307803) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh307628) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4999))));
    vlSelf->mkMac__DOT__y___05Fh308328 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308153));
    vlSelf->mkMac__DOT__y___05Fh298917 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh298667));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4716 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321218) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321043) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh320868) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh320693) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4714))));
    vlSelf->mkMac__DOT__y___05Fh321393 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321218));
    vlSelf->mkMac__DOT__y___05Fh162946 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162683));
    vlSelf->mkMac__DOT__y___05Fh90143 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh89893));
    vlSelf->mkMac__DOT__y___05Fh308503 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308328));
    vlSelf->mkMac__DOT__y___05Fh298845 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh298917)));
    vlSelf->mkMac__DOT__y___05Fh321568 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321393));
    vlSelf->mkMac__DOT__y___05Fh162872 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh162946)));
    vlSelf->mkMac__DOT__y___05Fh90071 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90143)));
    vlSelf->mkMac__DOT__y___05Fh308678 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308503));
    vlSelf->mkMac__DOT__y___05Fh299095 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh298845));
    vlSelf->mkMac__DOT__y___05Fh321743 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321568));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2088 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh162872) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh162683) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh162494) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh162305) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2086)))));
    vlSelf->mkMac__DOT__y___05Fh163135 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh162872));
    vlSelf->mkMac__DOT__y___05Fh90321 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90071));
    vlSelf->mkMac__DOT__y___05Fh308853 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308678));
    vlSelf->mkMac__DOT__y___05Fh299023 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299095)));
    vlSelf->mkMac__DOT__y___05Fh321918 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321743));
    vlSelf->mkMac__DOT__y___05Fh163061 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163135)));
    vlSelf->mkMac__DOT__y___05Fh90249 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90321)));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5003 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308853) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh308678) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh308503) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh308328) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5001))));
    vlSelf->mkMac__DOT__y___05Fh309028 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh308853));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4597 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh299023) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh298845) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh298667) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh298489) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4595)))));
    vlSelf->mkMac__DOT__y___05Fh299273 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299023));
    vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4718 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321918) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh321743) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh321568) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh321393) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4716))));
    vlSelf->mkMac__DOT__y___05Fh322093 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh321918));
    vlSelf->mkMac__DOT__y___05Fh163324 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163061));
    vlSelf->mkMac__DOT__y___05Fh90499 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90249));
    vlSelf->mkMac__DOT__y___05Fh309203 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309028));
    vlSelf->mkMac__DOT__y___05Fh299201 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299273)));
    vlSelf->mkMac__DOT__y___05Fh322268 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322093));
    vlSelf->mkMac__DOT__y___05Fh163250 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163324)));
    vlSelf->mkMac__DOT__y___05Fh90427 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90499)));
    vlSelf->mkMac__DOT__y___05Fh309378 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309203));
    vlSelf->mkMac__DOT__y___05Fh299451 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299201));
    vlSelf->mkMac__DOT__y___05Fh322443 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322268));
    vlSelf->mkMac__DOT__y___05Fh163513 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163250));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d654 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90427) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90249) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90071) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh89893) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d652)))));
    vlSelf->mkMac__DOT__y___05Fh90677 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90427));
    vlSelf->mkMac__DOT__y___05Fh309553 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh309378));
    vlSelf->mkMac__DOT__y___05Fh299379 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299451)));
    vlSelf->mkMac__DOT__y___05Fh322618 = ((vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh322443));
    vlSelf->mkMac__DOT__y___05Fh163439 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163513)));
    vlSelf->mkMac__DOT__y___05Fh90605 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90677)));
    vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh223466 
        = (((0x80000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309553) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309378) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309203) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_b23463___05Fq74) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh309028) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d5003))));
    vlSelf->mkMac__DOT__y___05Fh299629 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299379));
    vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh223465 
        = (((0x80000000U & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322618) 
               << 0x1fU)) | ((0x40000000U & ((0xc0000000U 
                                              & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                             ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322443) 
                                                << 0x1eU))) 
                             | ((0x20000000U & ((0xe0000000U 
                                                 & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh322268) 
                                                   << 0x1dU))) 
                                | ((0x10000000U & (
                                                   (0xf0000000U 
                                                    & vlSelf->mkMac__DOT__INV_aligned_mantissa_a23461___05Fq71) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh322093) 
                                                    << 0x1cU))) 
                                   | vlSelf->mkMac__DOT__INV_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F04_ETC___05F_d4718))));
    vlSelf->mkMac__DOT__y___05Fh163702 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163439));
    vlSelf->mkMac__DOT__y___05Fh90855 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90605));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
           ^ vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh223466);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
        = (vlSelf->mkMac__DOT__aligned_mantissa_a___05Fh223461 
           & vlSelf->mkMac__DOT__neg_aligned_mant_b___05Fh223466);
    vlSelf->mkMac__DOT__y___05Fh299557 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299629)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463 
           ^ vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh223465);
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
        = (vlSelf->mkMac__DOT__aligned_mantissa_b___05Fh223463 
           & vlSelf->mkMac__DOT__neg_aligned_mant_a___05Fh223465);
    vlSelf->mkMac__DOT__y___05Fh163628 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163702)));
    vlSelf->mkMac__DOT__y___05Fh90783 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh90855)));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq84 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq83 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh310024 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008));
    vlSelf->mkMac__DOT__y___05Fh299807 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299557));
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq82 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_ETC___05Fq81 
        = ((1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh323089 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2090 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163628) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh163439) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh163250) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh163061) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2088))));
    vlSelf->mkMac__DOT__y___05Fh163891 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163628));
    vlSelf->mkMac__DOT__y___05Fh91033 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90783));
    vlSelf->mkMac__DOT__y___05Fh309952 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310024)));
    vlSelf->mkMac__DOT__y___05Fh299735 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299807)));
    vlSelf->mkMac__DOT__y___05Fh323017 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323089)));
    vlSelf->mkMac__DOT__y___05Fh163817 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh163891)));
    vlSelf->mkMac__DOT__y___05Fh90961 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91033)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5161 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh309952) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006)));
    vlSelf->mkMac__DOT__y___05Fh310202 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh309952));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4599 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh299735) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh299557) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh299379) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh299201) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4597)))));
    vlSelf->mkMac__DOT__y___05Fh299985 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299735));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4876 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323017) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                        ^ (vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721)));
    vlSelf->mkMac__DOT__y___05Fh323267 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323017));
    vlSelf->mkMac__DOT__y___05Fh164080 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh163817));
    vlSelf->mkMac__DOT__y___05Fh91211 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh90961));
    vlSelf->mkMac__DOT__y___05Fh310130 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310202)));
    vlSelf->mkMac__DOT__y___05Fh299913 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh299985)));
    vlSelf->mkMac__DOT__y___05Fh323195 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323267)));
    vlSelf->mkMac__DOT__y___05Fh164006 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164080)));
    vlSelf->mkMac__DOT__y___05Fh91139 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91211)));
    vlSelf->mkMac__DOT__y___05Fh310380 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh310130));
    vlSelf->mkMac__DOT__y___05Fh300163 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh299913));
    vlSelf->mkMac__DOT__y___05Fh323445 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323195));
    vlSelf->mkMac__DOT__y___05Fh164269 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164006));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d656 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91139) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh90961) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh90783) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh90605) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d654)))));
    vlSelf->mkMac__DOT__y___05Fh91389 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91139));
    vlSelf->mkMac__DOT__y___05Fh310308 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310380)));
    vlSelf->mkMac__DOT__y___05Fh300091 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh300163)));
    vlSelf->mkMac__DOT__y___05Fh323373 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323445)));
    vlSelf->mkMac__DOT__y___05Fh164195 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164269)));
    vlSelf->mkMac__DOT__y___05Fh91317 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91389)));
    vlSelf->mkMac__DOT__y___05Fh310558 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh310308));
    vlSelf->mkMac__DOT__y___05Fh300341 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300091));
    vlSelf->mkMac__DOT__y___05Fh323623 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323373));
    vlSelf->mkMac__DOT__y___05Fh164458 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164195));
    vlSelf->mkMac__DOT__y___05Fh91567 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91317));
    vlSelf->mkMac__DOT__y___05Fh310486 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310558)));
    vlSelf->mkMac__DOT__y___05Fh300269 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh300341)));
    vlSelf->mkMac__DOT__y___05Fh323551 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323623)));
    vlSelf->mkMac__DOT__y___05Fh164384 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164458)));
    vlSelf->mkMac__DOT__y___05Fh91495 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91567)));
    vlSelf->mkMac__DOT__y___05Fh310736 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh310486));
    vlSelf->mkMac__DOT__y___05Fh300519 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300269));
    vlSelf->mkMac__DOT__y___05Fh323801 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323551));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2092 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh164384) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh164195) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh164006) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh163817) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2090))));
    vlSelf->mkMac__DOT__y___05Fh164647 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164384));
    vlSelf->mkMac__DOT__y___05Fh91745 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91495));
    vlSelf->mkMac__DOT__y___05Fh310664 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310736)));
    vlSelf->mkMac__DOT__y___05Fh300447 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh300519)));
    vlSelf->mkMac__DOT__y___05Fh323729 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323801)));
    vlSelf->mkMac__DOT__y___05Fh164573 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164647)));
    vlSelf->mkMac__DOT__y___05Fh91673 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91745)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5163 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh310664) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh310486) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh310308) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh310130) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5161)))));
    vlSelf->mkMac__DOT__y___05Fh310914 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh310664));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4601 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh300447) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh300269) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh300091) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh299913) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4599))));
    vlSelf->mkMac__DOT__y___05Fh300697 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300447));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4878 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323729) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh323551) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh323373) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh323195) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4876)))));
    vlSelf->mkMac__DOT__y___05Fh323979 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323729));
    vlSelf->mkMac__DOT__y___05Fh164836 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164573));
    vlSelf->mkMac__DOT__y___05Fh91923 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91673));
    vlSelf->mkMac__DOT__y___05Fh310842 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh310914)));
    vlSelf->mkMac__DOT__y___05Fh300625 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh300697)));
    vlSelf->mkMac__DOT__y___05Fh323907 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh323979)));
    vlSelf->mkMac__DOT__y___05Fh164762 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh164836)));
    vlSelf->mkMac__DOT__y___05Fh91851 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh91923)));
    vlSelf->mkMac__DOT__y___05Fh311092 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh310842));
    vlSelf->mkMac__DOT__y___05Fh300875 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300625));
    vlSelf->mkMac__DOT__y___05Fh324157 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh323907));
    vlSelf->mkMac__DOT__y___05Fh165025 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164762));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d658 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91851) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh91673) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh91495) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh91317) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d656))));
    vlSelf->mkMac__DOT__y___05Fh92101 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh91851));
    vlSelf->mkMac__DOT__y___05Fh311020 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311092)));
    vlSelf->mkMac__DOT__y___05Fh300803 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh300875)));
    vlSelf->mkMac__DOT__y___05Fh324085 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324157)));
    vlSelf->mkMac__DOT__y___05Fh164951 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165025)));
    vlSelf->mkMac__DOT__y___05Fh92029 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92101)));
    vlSelf->mkMac__DOT__y___05Fh311270 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh311020));
    vlSelf->mkMac__DOT__y___05Fh301053 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300803));
    vlSelf->mkMac__DOT__y___05Fh324335 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh324085));
    vlSelf->mkMac__DOT__y___05Fh165214 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh164951));
    vlSelf->mkMac__DOT__y___05Fh92279 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92029));
    vlSelf->mkMac__DOT__y___05Fh311198 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311270)));
    vlSelf->mkMac__DOT__y___05Fh300981 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301053)));
    vlSelf->mkMac__DOT__y___05Fh324263 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324335)));
    vlSelf->mkMac__DOT__y___05Fh165140 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1921 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh165214)));
    vlSelf->mkMac__DOT__y___05Fh92207 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92279)));
    vlSelf->mkMac__DOT__y___05Fh311448 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh311198));
    vlSelf->mkMac__DOT__y___05Fh301231 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh300981));
    vlSelf->mkMac__DOT__y___05Fh324513 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh324263));
    vlSelf->mkMac__DOT__x___05Fh132843 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh165140) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh164951) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh164762) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d1919) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh164573) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2092))));
    vlSelf->mkMac__DOT__y___05Fh92457 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92207));
    vlSelf->mkMac__DOT__y___05Fh311376 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311448)));
    vlSelf->mkMac__DOT__y___05Fh301159 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301231)));
    vlSelf->mkMac__DOT__y___05Fh324441 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324513)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
        = (vlSelf->mkMac__DOT__x___05Fh132843 ^ vlSelf->mkMac__DOT__y___05Fh132844);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
        = (vlSelf->mkMac__DOT__x___05Fh132843 & vlSelf->mkMac__DOT__y___05Fh132844);
    vlSelf->mkMac__DOT__y___05Fh92385 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92457)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5165 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh311376) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh311198) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh311020) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh310842) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5163)))));
    vlSelf->mkMac__DOT__y___05Fh311626 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311376));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4603 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301159) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh300981) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh300803) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh300625) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4601))));
    vlSelf->mkMac__DOT__y___05Fh301409 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh301159));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4880 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh324441) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh324263) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh324085) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh323907) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4878)))));
    vlSelf->mkMac__DOT__y___05Fh324691 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324441));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq31 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq30 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh166298 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100));
    vlSelf->mkMac__DOT__y___05Fh92635 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92385));
    vlSelf->mkMac__DOT__y___05Fh311554 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311626)));
    vlSelf->mkMac__DOT__y___05Fh301337 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301409)));
    vlSelf->mkMac__DOT__y___05Fh324619 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324691)));
    vlSelf->mkMac__DOT__y___05Fh166224 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166298)));
    vlSelf->mkMac__DOT__y___05Fh92563 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92635)));
    vlSelf->mkMac__DOT__y___05Fh311804 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311554));
    vlSelf->mkMac__DOT__y___05Fh301587 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh301337));
    vlSelf->mkMac__DOT__y___05Fh324869 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324619));
    vlSelf->mkMac__DOT__y___05Fh166487 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166224));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d660 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92563) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh92385) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh92207) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh92029) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d658))));
    vlSelf->mkMac__DOT__y___05Fh92813 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92563));
    vlSelf->mkMac__DOT__y___05Fh311732 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311804)));
    vlSelf->mkMac__DOT__y___05Fh301515 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301587)));
    vlSelf->mkMac__DOT__y___05Fh324797 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh324869)));
    vlSelf->mkMac__DOT__y___05Fh166413 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166487)));
    vlSelf->mkMac__DOT__y___05Fh92741 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92813)));
    vlSelf->mkMac__DOT__y___05Fh311982 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311732));
    vlSelf->mkMac__DOT__y___05Fh301765 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh301515));
    vlSelf->mkMac__DOT__y___05Fh325047 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324797));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2259 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166413) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166224) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098))));
    vlSelf->mkMac__DOT__y___05Fh166676 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166413));
    vlSelf->mkMac__DOT__y___05Fh92991 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92741));
    vlSelf->mkMac__DOT__y___05Fh311910 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh311982)));
    vlSelf->mkMac__DOT__y___05Fh301693 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301765)));
    vlSelf->mkMac__DOT__y___05Fh324975 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325047)));
    vlSelf->mkMac__DOT__y___05Fh166602 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166676)));
    vlSelf->mkMac__DOT__y___05Fh92919 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh92991)));
    vlSelf->mkMac__DOT__y___05Fh312160 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh311910));
    vlSelf->mkMac__DOT__y___05Fh301943 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh301693));
    vlSelf->mkMac__DOT__y___05Fh325225 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh324975));
    vlSelf->mkMac__DOT__y___05Fh166865 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166602));
    vlSelf->mkMac__DOT__y___05Fh93169 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh92919));
    vlSelf->mkMac__DOT__y___05Fh312088 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh312160)));
    vlSelf->mkMac__DOT__y___05Fh301871 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4438 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh301943)));
    vlSelf->mkMac__DOT__y___05Fh325153 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325225)));
    vlSelf->mkMac__DOT__y___05Fh166791 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh166865)));
    vlSelf->mkMac__DOT__y___05Fh93097 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93169)));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5167 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh312088) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh311910) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh311732) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh311554) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5165)))));
    vlSelf->mkMac__DOT__y___05Fh312338 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312088));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4605 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh301871) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh301693) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh301515) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4436) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh301337) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4603))));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4882 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh325153) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh324975) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh324797) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh324619) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4880)))));
    vlSelf->mkMac__DOT__y___05Fh325403 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh325153));
    vlSelf->mkMac__DOT__y___05Fh167054 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166791));
    vlSelf->mkMac__DOT__y___05Fh93347 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh93097));
    vlSelf->mkMac__DOT__y___05Fh312266 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh312338)));
    vlSelf->mkMac__DOT__y___05Fh325331 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325403)));
    vlSelf->mkMac__DOT__y___05Fh166980 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167054)));
    vlSelf->mkMac__DOT__y___05Fh93275 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d489 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93347)));
    vlSelf->mkMac__DOT__y___05Fh312516 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312266));
    vlSelf->mkMac__DOT__y___05Fh325581 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh325331));
    vlSelf->mkMac__DOT__y___05Fh167243 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh166980));
    vlSelf->mkMac__DOT__product___05Fh41228 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93275) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh93097) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh92919) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d487) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh92741) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d660))));
    vlSelf->mkMac__DOT__y___05Fh312444 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh312516)));
    vlSelf->mkMac__DOT__y___05Fh325509 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325581)));
    vlSelf->mkMac__DOT__y___05Fh167169 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167243)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d663 
        = ((8U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh41228
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d485);
    vlSelf->mkMac__DOT__y___05Fh312694 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312444));
    vlSelf->mkMac__DOT__y___05Fh325759 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh325509));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2261 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh167169) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166980) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh166791) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh166602) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2259)))));
    vlSelf->mkMac__DOT__y___05Fh167432 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh167169));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d663 
           ^ vlSelf->mkMac__DOT__y___05Fh33658);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d663 
           & vlSelf->mkMac__DOT__y___05Fh33658);
    vlSelf->mkMac__DOT__y___05Fh312622 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh312694)));
    vlSelf->mkMac__DOT__y___05Fh325687 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325759)));
    vlSelf->mkMac__DOT__y___05Fh167358 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167432)));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq15 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq14 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh93753 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667));
    vlSelf->mkMac__DOT__y___05Fh312872 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312622));
    vlSelf->mkMac__DOT__y___05Fh325937 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh325687));
    vlSelf->mkMac__DOT__y___05Fh167621 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh167358));
    vlSelf->mkMac__DOT__y___05Fh93681 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93753)));
    vlSelf->mkMac__DOT__y___05Fh312800 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh312872)));
    vlSelf->mkMac__DOT__y___05Fh325865 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh325937)));
    vlSelf->mkMac__DOT__y___05Fh167547 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167621)));
    vlSelf->mkMac__DOT__y___05Fh93931 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh93681));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5169 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh312800) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh312622) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh312444) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh312266) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5167)))));
    vlSelf->mkMac__DOT__y___05Fh313050 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312800));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4884 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh325865) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh325687) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh325509) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh325331) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4882)))));
    vlSelf->mkMac__DOT__y___05Fh326115 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh325865));
    vlSelf->mkMac__DOT__y___05Fh167810 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh167547));
    vlSelf->mkMac__DOT__y___05Fh93859 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh93931)));
    vlSelf->mkMac__DOT__y___05Fh312978 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313050)));
    vlSelf->mkMac__DOT__y___05Fh326043 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326115)));
    vlSelf->mkMac__DOT__y___05Fh167736 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167810)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d826 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93859) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh93681) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665))));
    vlSelf->mkMac__DOT__y___05Fh94109 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh93859));
    vlSelf->mkMac__DOT__y___05Fh313228 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh312978));
    vlSelf->mkMac__DOT__y___05Fh326293 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326043));
    vlSelf->mkMac__DOT__y___05Fh167999 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167736));
    vlSelf->mkMac__DOT__y___05Fh94037 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94109)));
    vlSelf->mkMac__DOT__y___05Fh313156 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313228)));
    vlSelf->mkMac__DOT__y___05Fh326221 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326293)));
    vlSelf->mkMac__DOT__y___05Fh167925 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh167999)));
    vlSelf->mkMac__DOT__y___05Fh94287 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94037));
    vlSelf->mkMac__DOT__y___05Fh313406 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh313156));
    vlSelf->mkMac__DOT__y___05Fh326471 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326221));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2263 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh167925) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh167736) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh167547) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh167358) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2261)))));
    vlSelf->mkMac__DOT__y___05Fh168188 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh167925));
    vlSelf->mkMac__DOT__y___05Fh94215 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94287)));
    vlSelf->mkMac__DOT__y___05Fh313334 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313406)));
    vlSelf->mkMac__DOT__y___05Fh326399 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326471)));
    vlSelf->mkMac__DOT__y___05Fh168114 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168188)));
    vlSelf->mkMac__DOT__y___05Fh94465 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94215));
    vlSelf->mkMac__DOT__y___05Fh313584 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh313334));
    vlSelf->mkMac__DOT__y___05Fh326649 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326399));
    vlSelf->mkMac__DOT__y___05Fh168377 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168114));
    vlSelf->mkMac__DOT__y___05Fh94393 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94465)));
    vlSelf->mkMac__DOT__y___05Fh313512 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313584)));
    vlSelf->mkMac__DOT__y___05Fh326577 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326649)));
    vlSelf->mkMac__DOT__y___05Fh168303 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168377)));
    vlSelf->mkMac__DOT__y___05Fh94643 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94393));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5171 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh313512) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh313334) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh313156) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh312978) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5169))));
    vlSelf->mkMac__DOT__y___05Fh313762 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh313512));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4886 
        = ((0x400000U & ((0xffc00000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh326577) 
                            << 0x16U))) | ((0x200000U 
                                            & ((0xffe00000U 
                                                & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh326399) 
                                                  << 0x15U))) 
                                           | ((0x100000U 
                                               & ((0xfff00000U 
                                                   & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh326221) 
                                                   << 0x14U))) 
                                              | ((0x80000U 
                                                  & ((0xfff80000U 
                                                      & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh326043) 
                                                      << 0x13U))) 
                                                 | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4884))));
    vlSelf->mkMac__DOT__y___05Fh326827 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326577));
    vlSelf->mkMac__DOT__y___05Fh168566 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168303));
    vlSelf->mkMac__DOT__y___05Fh94571 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 6U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94643)));
    vlSelf->mkMac__DOT__y___05Fh313690 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313762)));
    vlSelf->mkMac__DOT__y___05Fh326755 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh326827)));
    vlSelf->mkMac__DOT__y___05Fh168492 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168566)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d828 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94571) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94393) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh94215) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94037) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d826)))));
    vlSelf->mkMac__DOT__y___05Fh94821 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94571));
    vlSelf->mkMac__DOT__y___05Fh313940 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh313690));
    vlSelf->mkMac__DOT__y___05Fh327005 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326755));
    vlSelf->mkMac__DOT__y___05Fh168755 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168492));
    vlSelf->mkMac__DOT__y___05Fh94749 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 7U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94821)));
    vlSelf->mkMac__DOT__y___05Fh313868 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh313940)));
    vlSelf->mkMac__DOT__y___05Fh326933 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327005)));
    vlSelf->mkMac__DOT__y___05Fh168681 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168755)));
    vlSelf->mkMac__DOT__y___05Fh94999 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94749));
    vlSelf->mkMac__DOT__y___05Fh314118 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh313868));
    vlSelf->mkMac__DOT__y___05Fh327183 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh326933));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2265 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh168681) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh168492) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh168303) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh168114) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2263)))));
    vlSelf->mkMac__DOT__y___05Fh168944 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168681));
    vlSelf->mkMac__DOT__y___05Fh94927 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 8U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh94999)));
    vlSelf->mkMac__DOT__y___05Fh314046 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh314118)));
    vlSelf->mkMac__DOT__y___05Fh327111 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327183)));
    vlSelf->mkMac__DOT__y___05Fh168870 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh168944)));
    vlSelf->mkMac__DOT__y___05Fh95177 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh94927));
    vlSelf->mkMac__DOT__y___05Fh314296 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh314046));
    vlSelf->mkMac__DOT__y___05Fh327361 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327111));
    vlSelf->mkMac__DOT__y___05Fh169133 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh168870));
    vlSelf->mkMac__DOT__y___05Fh95105 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 9U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95177)));
    vlSelf->mkMac__DOT__y___05Fh314224 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh314296)));
    vlSelf->mkMac__DOT__y___05Fh327289 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327361)));
    vlSelf->mkMac__DOT__y___05Fh169059 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169133)));
    vlSelf->mkMac__DOT__y___05Fh95355 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xaU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95105));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5173 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314224) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314046) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh313868) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh313690) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5171))));
    vlSelf->mkMac__DOT__y___05Fh314474 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh314224));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4888 
        = ((0x4000000U & ((0xfc000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh327289) 
                             << 0x1aU))) | ((0x2000000U 
                                             & ((0xfe000000U 
                                                 & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh327111) 
                                                   << 0x19U))) 
                                            | ((0x1000000U 
                                                & ((0xff000000U 
                                                    & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh326933) 
                                                    << 0x18U))) 
                                               | ((0x800000U 
                                                   & ((0xff800000U 
                                                       & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh326755) 
                                                       << 0x17U))) 
                                                  | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4886))));
    vlSelf->mkMac__DOT__y___05Fh327539 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327289));
    vlSelf->mkMac__DOT__y___05Fh169322 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh169059));
    vlSelf->mkMac__DOT__y___05Fh95283 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xaU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95355)));
    vlSelf->mkMac__DOT__y___05Fh314402 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh314474)));
    vlSelf->mkMac__DOT__y___05Fh327467 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327539)));
    vlSelf->mkMac__DOT__y___05Fh169248 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169322)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d830 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95283) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh95105) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh94927) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh94749) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d828)))));
    vlSelf->mkMac__DOT__y___05Fh95533 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xbU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95283));
    vlSelf->mkMac__DOT__y___05Fh314652 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh314402));
    vlSelf->mkMac__DOT__y___05Fh327717 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327467));
    vlSelf->mkMac__DOT__y___05Fh169511 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh169248));
    vlSelf->mkMac__DOT__y___05Fh95461 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xbU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95533)));
    vlSelf->mkMac__DOT__y___05Fh314580 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh314652)));
    vlSelf->mkMac__DOT__y___05Fh327645 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327717)));
    vlSelf->mkMac__DOT__y___05Fh169437 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169511)));
    vlSelf->mkMac__DOT__y___05Fh95711 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xcU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95461));
    vlSelf->mkMac__DOT__y___05Fh314830 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh314580));
    vlSelf->mkMac__DOT__y___05Fh327895 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327645));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2267 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh169437) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh169248) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh169059) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh168870) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2265)))));
    vlSelf->mkMac__DOT__y___05Fh169700 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh169437));
    vlSelf->mkMac__DOT__y___05Fh95639 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xcU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95711)));
    vlSelf->mkMac__DOT__y___05Fh314758 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh314830)));
    vlSelf->mkMac__DOT__y___05Fh327823 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh327895)));
    vlSelf->mkMac__DOT__y___05Fh169626 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169700)));
    vlSelf->mkMac__DOT__y___05Fh95889 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95639));
    vlSelf->mkMac__DOT__y___05Fh315008 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh314758));
    vlSelf->mkMac__DOT__y___05Fh328073 = ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh327823));
    vlSelf->mkMac__DOT__y___05Fh169889 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh169626));
    vlSelf->mkMac__DOT__y___05Fh95817 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xdU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh95889)));
    vlSelf->mkMac__DOT__y___05Fh314936 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5008 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh315008)));
    vlSelf->mkMac__DOT__y___05Fh328001 = (1U & ((vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4723 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh328073)));
    vlSelf->mkMac__DOT__y___05Fh169815 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh169889)));
    vlSelf->mkMac__DOT__y___05Fh96067 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95817));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5175 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh314936) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh314758) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh314580) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5006) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh314402) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5173))));
    vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4890 
        = ((0x40000000U & ((0xc0000000U & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh328001) 
                              << 0x1eU))) | ((0x20000000U 
                                              & ((0xe0000000U 
                                                  & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh327823) 
                                                  << 0x1dU))) 
                                             | ((0x10000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh327645) 
                                                     << 0x1cU))) 
                                                | ((0x8000000U 
                                                    & ((0xf8000000U 
                                                        & vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4721) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh327467) 
                                                        << 0x1bU))) 
                                                   | vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4888))));
    if (vlSelf->mkMac__DOT__fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050_EQ___05FETC___05F_d3052) {
        vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh223537 
            = (1U & (vlSelf->mkMac__DOT__fp_add_fifo_rv[1U] 
                     >> 0x1fU));
        vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
            = vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4605;
    } else {
        vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh223537 
            = (1U & (IData)(vlSelf->mkMac__DOT__result_sign___05Fh223541));
        vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
            = ((IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4433)
                ? vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d4890
                : vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5175);
    }
    vlSelf->mkMac__DOT__y___05Fh170078 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh169815));
    vlSelf->mkMac__DOT__y___05Fh95995 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xeU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96067)));
    vlSelf->mkMac__DOT__y___05Fh170004 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170078)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d832 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95995) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95817) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh95639) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh95461) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d830)))));
    vlSelf->mkMac__DOT__y___05Fh96245 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0xfU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh95995));
    vlSelf->mkMac__DOT__x___05Fh354471 = (0x7ffffeU 
                                          & (vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
                                             << 1U));
    if ((0x800000U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177)) {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh347896 
            = vlSelf->mkMac__DOT__selected_exponent___05Fh223464;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh347897 
            = (0x7fffffU & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177);
    } else {
        vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh347896 
            = vlSelf->mkMac__DOT__selected_exponent___05F_1___05Fh347898;
        vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh347897 
            = (0x7fffffU & vlSelf->mkMac__DOT__x___05Fh354471);
    }
    vlSelf->mkMac__DOT__normalized_mantissa___05F_1___05Fh328365 
        = (0x7fffffU & (vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
                        >> 1U));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
        = (0x7fffffU & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
                         >> 1U) ^ (1U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177)));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
        = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177 
                  >> 1U) & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177));
    vlSelf->mkMac__DOT__y___05Fh170267 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170004));
    vlSelf->mkMac__DOT__y___05Fh96173 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0xfU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96245)));
    vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq86 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq85 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh329765 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183));
    vlSelf->mkMac__DOT__y___05Fh170193 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170267)));
    vlSelf->mkMac__DOT__y___05Fh96423 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x10U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96173));
    vlSelf->mkMac__DOT__y___05Fh329694 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329765)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2269 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170193) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170004) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh169815) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh169626) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2267))));
    vlSelf->mkMac__DOT__y___05Fh170456 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170193));
    vlSelf->mkMac__DOT__y___05Fh96351 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x10U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96423)));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5301 
        = ((4U & ((0xfffffffcU & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh329694) 
                     << 2U))) | ((2U & ((0xfffffffeU 
                                         & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                        ^ (vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                           << 1U))) 
                                 | (1U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185)));
    vlSelf->mkMac__DOT__y___05Fh329940 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh329694));
    vlSelf->mkMac__DOT__y___05Fh170382 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170456)));
    vlSelf->mkMac__DOT__y___05Fh96601 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x11U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96351));
    vlSelf->mkMac__DOT__y___05Fh329869 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh329940)));
    vlSelf->mkMac__DOT__y___05Fh170645 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170382));
    vlSelf->mkMac__DOT__y___05Fh96529 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x11U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96601)));
    vlSelf->mkMac__DOT__y___05Fh330115 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh329869));
    vlSelf->mkMac__DOT__y___05Fh170571 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170645)));
    vlSelf->mkMac__DOT__y___05Fh96779 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x12U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96529));
    vlSelf->mkMac__DOT__y___05Fh330044 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330115)));
    vlSelf->mkMac__DOT__y___05Fh170834 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170571));
    vlSelf->mkMac__DOT__y___05Fh96707 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x12U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96779)));
    vlSelf->mkMac__DOT__y___05Fh330290 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330044));
    vlSelf->mkMac__DOT__y___05Fh170760 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh170834)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d834 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh96707) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh96529) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh96351) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh96173) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d832)))));
    vlSelf->mkMac__DOT__y___05Fh96957 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x13U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96707));
    vlSelf->mkMac__DOT__y___05Fh330219 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330290)));
    vlSelf->mkMac__DOT__y___05Fh171023 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170760));
    vlSelf->mkMac__DOT__y___05Fh96885 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x13U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh96957)));
    vlSelf->mkMac__DOT__y___05Fh330465 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330219));
    vlSelf->mkMac__DOT__y___05Fh170949 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171023)));
    vlSelf->mkMac__DOT__y___05Fh97135 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x14U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh96885));
    vlSelf->mkMac__DOT__y___05Fh330394 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330465)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2271 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170949) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh170760) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh170571) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh170382) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2269))));
    vlSelf->mkMac__DOT__y___05Fh171212 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh170949));
    vlSelf->mkMac__DOT__y___05Fh97063 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x14U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97135)));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5303 
        = ((0x40U & ((0xffffffc0U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh330394) 
                        << 6U))) | ((0x20U & ((0xffffffe0U 
                                               & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh330219) 
                                                 << 5U))) 
                                    | ((0x10U & ((0xfffffff0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh330044) 
                                                  << 4U))) 
                                       | ((8U & ((0xfffffff8U 
                                                  & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh329869) 
                                                  << 3U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5301)))));
    vlSelf->mkMac__DOT__y___05Fh330640 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330394));
    vlSelf->mkMac__DOT__y___05Fh171138 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171212)));
    vlSelf->mkMac__DOT__y___05Fh97313 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x15U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97063));
    vlSelf->mkMac__DOT__y___05Fh330569 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330640)));
    vlSelf->mkMac__DOT__y___05Fh171401 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171138));
    vlSelf->mkMac__DOT__y___05Fh97241 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x15U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97313)));
    vlSelf->mkMac__DOT__y___05Fh330815 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330569));
    vlSelf->mkMac__DOT__y___05Fh171327 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171401)));
    vlSelf->mkMac__DOT__y___05Fh97491 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x16U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97241));
    vlSelf->mkMac__DOT__y___05Fh330744 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330815)));
    vlSelf->mkMac__DOT__y___05Fh171590 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171327));
    vlSelf->mkMac__DOT__y___05Fh97419 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x16U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97491)));
    vlSelf->mkMac__DOT__y___05Fh330990 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330744));
    vlSelf->mkMac__DOT__y___05Fh171516 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171590)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d836 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97419) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97241) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh97063) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh96885) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d834))));
    vlSelf->mkMac__DOT__y___05Fh97669 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x17U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97419));
    vlSelf->mkMac__DOT__y___05Fh330919 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh330990)));
    vlSelf->mkMac__DOT__y___05Fh171779 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098 
                                           >> 0x1eU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh171516));
    vlSelf->mkMac__DOT__y___05Fh97597 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x17U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97669)));
    vlSelf->mkMac__DOT__y___05Fh331165 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh330919));
    vlSelf->mkMac__DOT__y___05Fh171705 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2100 
                                                 >> 0x1eU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh171779)));
    vlSelf->mkMac__DOT__y___05Fh97847 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x18U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97597));
    vlSelf->mkMac__DOT__y___05Fh331094 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh331165)));
    vlSelf->mkMac__DOT__x___05Fh131573 = (((0x80000000U 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                           ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh171705) 
                                              << 0x1fU)) 
                                          | ((0x40000000U 
                                              & ((0xc0000000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh171516) 
                                                  << 0x1eU))) 
                                             | ((0x20000000U 
                                                 & ((0xe0000000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh171327) 
                                                     << 0x1dU))) 
                                                | ((0x10000000U 
                                                    & ((0xf0000000U 
                                                        & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2098) 
                                                       ^ 
                                                       ((IData)(vlSelf->mkMac__DOT__y___05Fh171138) 
                                                        << 0x1cU))) 
                                                   | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2271))));
    vlSelf->mkMac__DOT__y___05Fh97775 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x18U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh97847)));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5305 
        = ((0x400U & ((0xfffffc00U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh331094) 
                         << 0xaU))) | ((0x200U & ((0xfffffe00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh330919) 
                                                   << 9U))) 
                                       | ((0x100U & 
                                           ((0xffffff00U 
                                             & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh330744) 
                                               << 8U))) 
                                          | ((0x80U 
                                              & ((0xffffff80U 
                                                  & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh330569) 
                                                  << 7U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5303)))));
    vlSelf->mkMac__DOT__y___05Fh331340 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331094));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
        = (vlSelf->mkMac__DOT__x___05Fh131573 ^ vlSelf->mkMac__DOT__y___05Fh131574);
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
        = (vlSelf->mkMac__DOT__x___05Fh131573 & vlSelf->mkMac__DOT__y___05Fh131574);
    vlSelf->mkMac__DOT__y___05Fh98025 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x19U) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97775));
    vlSelf->mkMac__DOT__y___05Fh331269 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh331340)));
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq33 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_5_ETC___05Fq32 
        = ((1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh172863 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                                 >> 1U) 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279));
    vlSelf->mkMac__DOT__y___05Fh97953 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x19U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98025)));
    vlSelf->mkMac__DOT__y___05Fh331515 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331269));
    vlSelf->mkMac__DOT__y___05Fh172789 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 1U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh172863)));
    vlSelf->mkMac__DOT__y___05Fh98203 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x1aU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh97953));
    vlSelf->mkMac__DOT__y___05Fh331444 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh331515)));
    vlSelf->mkMac__DOT__y___05Fh173052 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh172789));
    vlSelf->mkMac__DOT__y___05Fh98131 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x1aU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98203)));
    vlSelf->mkMac__DOT__y___05Fh331690 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331444));
    vlSelf->mkMac__DOT__y___05Fh172978 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 2U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173052)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d838 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh98131) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh97953) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh97775) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh97597) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d836))));
    vlSelf->mkMac__DOT__y___05Fh98381 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x1bU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98131));
    vlSelf->mkMac__DOT__y___05Fh331619 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh331690)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2438 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh172978) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh172789) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                           ^ (vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277))));
    vlSelf->mkMac__DOT__y___05Fh173241 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh172978));
    vlSelf->mkMac__DOT__y___05Fh98309 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x1bU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98381)));
    vlSelf->mkMac__DOT__y___05Fh331865 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331619));
    vlSelf->mkMac__DOT__y___05Fh173167 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 3U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173241)));
    vlSelf->mkMac__DOT__y___05Fh98559 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x1cU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98309));
    vlSelf->mkMac__DOT__y___05Fh331794 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh331865)));
    vlSelf->mkMac__DOT__y___05Fh173430 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh173167));
    vlSelf->mkMac__DOT__y___05Fh98487 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x1cU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98559)));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5307 
        = ((0x4000U & ((0xffffc000U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh331794) 
                          << 0xeU))) | ((0x2000U & 
                                         ((0xffffe000U 
                                           & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh331619) 
                                             << 0xdU))) 
                                        | ((0x1000U 
                                            & ((0xfffff000U 
                                                & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh331444) 
                                                  << 0xcU))) 
                                           | ((0x800U 
                                               & ((0xfffff800U 
                                                   & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh331269) 
                                                   << 0xbU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5305)))));
    vlSelf->mkMac__DOT__y___05Fh332040 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331794));
    vlSelf->mkMac__DOT__y___05Fh173356 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 4U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173430)));
    vlSelf->mkMac__DOT__y___05Fh98737 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x1dU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98487));
    vlSelf->mkMac__DOT__y___05Fh331969 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332040)));
    vlSelf->mkMac__DOT__y___05Fh173619 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh173356));
    vlSelf->mkMac__DOT__y___05Fh98665 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x1dU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98737)));
    vlSelf->mkMac__DOT__y___05Fh332215 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh331969));
    vlSelf->mkMac__DOT__y___05Fh173545 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 5U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173619)));
    vlSelf->mkMac__DOT__y___05Fh98915 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665 
                                          >> 0x1eU) 
                                         & (IData)(vlSelf->mkMac__DOT__y___05Fh98665));
    vlSelf->mkMac__DOT__y___05Fh332144 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332215)));
    vlSelf->mkMac__DOT__y___05Fh173808 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh173545));
    vlSelf->mkMac__DOT__y___05Fh98843 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d667 
                                                >> 0x1eU) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh98915)));
    vlSelf->mkMac__DOT__y___05Fh332390 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh332144));
    vlSelf->mkMac__DOT__y___05Fh173734 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173808)));
    vlSelf->mkMac__DOT__product___05Fh33656 = (((0x80000000U 
                                                 & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh98843) 
                                                   << 0x1fU)) 
                                               | ((0x40000000U 
                                                   & ((0xc0000000U 
                                                       & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh98665) 
                                                       << 0x1eU))) 
                                                  | ((0x20000000U 
                                                      & ((0xe0000000U 
                                                          & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                         ^ 
                                                         ((IData)(vlSelf->mkMac__DOT__y___05Fh98487) 
                                                          << 0x1dU))) 
                                                     | ((0x10000000U 
                                                         & ((0xf0000000U 
                                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d665) 
                                                            ^ 
                                                            ((IData)(vlSelf->mkMac__DOT__y___05Fh98309) 
                                                             << 0x1cU))) 
                                                        | vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d838))));
    vlSelf->mkMac__DOT__y___05Fh332319 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332390)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2440 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173734) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173545) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh173356) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh173167) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2438)))));
    vlSelf->mkMac__DOT__y___05Fh173997 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh173734));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d841 
        = ((0x10U & (IData)(vlSelf->mkMac__DOT__IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6_THE_ETC___05F_d81))
            ? vlSelf->mkMac__DOT__product___05Fh33656
            : vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d663);
    vlSelf->mkMac__DOT__y___05Fh332565 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh332319));
    vlSelf->mkMac__DOT__y___05Fh173923 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh173997)));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d841 
           ^ vlSelf->mkMac__DOT__y___05Fh26086);
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
        = (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d841 
           & vlSelf->mkMac__DOT__y___05Fh26086);
    vlSelf->mkMac__DOT__y___05Fh332494 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332565)));
    vlSelf->mkMac__DOT__y___05Fh174186 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh173923));
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq17 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843)
            ? 1U : 0U);
    vlSelf->mkMac__DOT__IF_IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_ETC___05Fq16 
        = ((1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845)
            ? 2ULL : 0ULL);
    vlSelf->mkMac__DOT__y___05Fh99321 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                                >> 1U) 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5309 
        = ((0x40000U & ((0xfffc0000U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh332494) 
                           << 0x12U))) | ((0x20000U 
                                           & ((0xfffe0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh332319) 
                                                 << 0x11U))) 
                                          | ((0x10000U 
                                              & ((0xffff0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh332144) 
                                                  << 0x10U))) 
                                             | ((0x8000U 
                                                 & ((0xffff8000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh331969) 
                                                     << 0xfU))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5307)))));
    vlSelf->mkMac__DOT__y___05Fh332740 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh332494));
    vlSelf->mkMac__DOT__y___05Fh174112 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174186)));
    vlSelf->mkMac__DOT__y___05Fh99249 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                >> 1U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99321)));
    vlSelf->mkMac__DOT__y___05Fh332669 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332740)));
    vlSelf->mkMac__DOT__y___05Fh174375 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh174112));
    vlSelf->mkMac__DOT__y___05Fh99499 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                          >> 2U) & (IData)(vlSelf->mkMac__DOT__y___05Fh99249));
    vlSelf->mkMac__DOT__y___05Fh332915 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh332669));
    vlSelf->mkMac__DOT__y___05Fh174301 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174375)));
    vlSelf->mkMac__DOT__y___05Fh99427 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                >> 2U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99499)));
    vlSelf->mkMac__DOT__y___05Fh332844 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh332915)));
    vlSelf->mkMac__DOT__y___05Fh174564 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174301));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1004 
        = ((8U & ((0xfffffff8U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                  ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99427) 
                     << 3U))) | ((4U & ((0xfffffffcU 
                                         & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99249) 
                                           << 2U))) 
                                 | ((2U & ((0xfffffffeU 
                                            & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                           ^ (vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                              << 1U))) 
                                    | (1U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843))));
    vlSelf->mkMac__DOT__y___05Fh99677 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                          >> 3U) & (IData)(vlSelf->mkMac__DOT__y___05Fh99427));
    vlSelf->mkMac__DOT__y___05Fh333090 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh332844));
    vlSelf->mkMac__DOT__y___05Fh174490 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174564)));
    vlSelf->mkMac__DOT__y___05Fh99605 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                >> 3U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99677)));
    vlSelf->mkMac__DOT__y___05Fh333019 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh333090)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2442 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh174490) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh174301) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh174112) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh173923) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2440)))));
    vlSelf->mkMac__DOT__y___05Fh174753 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174490));
    vlSelf->mkMac__DOT__y___05Fh99855 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                          >> 4U) & (IData)(vlSelf->mkMac__DOT__y___05Fh99605));
    vlSelf->mkMac__DOT__y___05Fh333265 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh333019));
    vlSelf->mkMac__DOT__y___05Fh174679 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174753)));
    vlSelf->mkMac__DOT__y___05Fh99783 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                >> 4U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh99855)));
    vlSelf->mkMac__DOT__y___05Fh333194 = (1U & ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh333265)));
    vlSelf->mkMac__DOT__y___05Fh174942 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174679));
    vlSelf->mkMac__DOT__y___05Fh100033 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 5U) & (IData)(vlSelf->mkMac__DOT__y___05Fh99783));
    vlSelf->mkMac__DOT__y___05Fh333440 = ((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh333194));
    vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5311 
        = (((IData)(((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185 
                      >> 0x16U) ^ (IData)(vlSelf->mkMac__DOT__y___05Fh333194))) 
            << 0x16U) | ((0x200000U & ((0xffe00000U 
                                        & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh333019) 
                                          << 0x15U))) 
                         | ((0x100000U & ((0xfff00000U 
                                           & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh332844) 
                                             << 0x14U))) 
                            | ((0x80000U & ((0xfff80000U 
                                             & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5185) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh332669) 
                                               << 0x13U))) 
                               | vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5309))));
    vlSelf->mkMac__DOT__y___05Fh174868 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh174942)));
    vlSelf->mkMac__DOT__y___05Fh99961 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                >> 5U) 
                                               | (IData)(vlSelf->mkMac__DOT__y___05Fh100033)));
    vlSelf->mkMac__DOT__final_mantissa___05Fh328411 
        = (((IData)(((vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5183 
                      >> 0x16U) | (IData)(vlSelf->mkMac__DOT__y___05Fh333440))) 
            << 0x17U) | vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5311);
    vlSelf->mkMac__DOT__y___05Fh175131 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh174868));
    vlSelf->mkMac__DOT__y___05Fh100211 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 6U) & (IData)(vlSelf->mkMac__DOT__y___05Fh99961));
    vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh328366 
        = ((2U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177)
            ? vlSelf->mkMac__DOT__final_mantissa___05Fh328411
            : vlSelf->mkMac__DOT__normalized_mantissa___05F_1___05Fh328365);
    vlSelf->mkMac__DOT__y___05Fh175057 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175131)));
    vlSelf->mkMac__DOT__y___05Fh100139 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 6U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100211)));
    vlSelf->mkMac__DOT__IF_IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_6_ETC___05F_d5375 
        = ((0x800000U & vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh328366)
            ? (((IData)(vlSelf->mkMac__DOT__y___05Fh343850) 
                << 9U) | (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5368))
            : (((IData)(vlSelf->mkMac__DOT__y___05Fh338200) 
                << 8U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh343499) 
                           << 7U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh343324) 
                                      << 6U) | (((IData)(vlSelf->mkMac__DOT__x___05Fh343149) 
                                                 << 5U) 
                                                | (((IData)(vlSelf->mkMac__DOT__x___05Fh342974) 
                                                    << 4U) 
                                                   | (((IData)(vlSelf->mkMac__DOT__x___05Fh342799) 
                                                       << 3U) 
                                                      | (((IData)(vlSelf->mkMac__DOT__x___05Fh342624) 
                                                          << 2U) 
                                                         | (((IData)(vlSelf->mkMac__DOT__x___05Fh342448) 
                                                             << 1U) 
                                                            | (1U 
                                                               & (~ (IData)(vlSelf->mkMac__DOT__IF_0_CONCAT_fp_add_fifo_rv_port0___05Fread___05F044_BI_ETC___05F_d5316))))))))))));
    vlSelf->mkMac__DOT__y___05Fh175320 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175057));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1006 
        = ((0x80U & ((0xffffff80U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                     ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100139) 
                        << 7U))) | ((0x40U & ((0xffffffc0U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99961) 
                                                 << 6U))) 
                                    | ((0x20U & ((0xffffffe0U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh99783) 
                                                  << 5U))) 
                                       | ((0x10U & 
                                           ((0xfffffff0U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh99605) 
                                               << 4U))) 
                                          | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1004)))));
    vlSelf->mkMac__DOT__y___05Fh100389 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 7U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100139));
    vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh328368 
        = vlSelf->mkMac__DOT__IF_IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_6_ETC___05F_d5375;
    if ((0x1000000U & vlSelf->mkMac__DOT__IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_050___05FETC___05F_d5177)) {
        vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq96 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2___05Fh328366;
        vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq95 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh328368;
    } else {
        vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq96 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_snd___05Fh347897;
        vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq95 
            = vlSelf->mkMac__DOT___theResult___05F___05F_2_fst___05Fh347896;
    }
    vlSelf->mkMac__DOT__y___05Fh175246 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175320)));
    vlSelf->mkMac__DOT__y___05Fh100317 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 7U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100389)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2444 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh175246) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh175057) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh174868) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh174679) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2442)))));
    vlSelf->mkMac__DOT__y___05Fh175509 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175246));
    vlSelf->mkMac__DOT__y___05Fh100567 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 8U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100317));
    vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05F_d5438 
        = ((0x7f800000U & (vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq95 
                           << 0x17U)) | (0x7fffffU 
                                         & vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05Fq96));
    vlSelf->mkMac__DOT__y___05Fh175435 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175509)));
    vlSelf->mkMac__DOT__y___05Fh100495 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 8U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100567)));
    vlSelf->mkMac__DOT__fp_out_fifo_rv_port1___05Fwrite_1 
        = (0x100000000ULL | (QData)((IData)((((IData)(vlSelf->mkMac__DOT___theResult___05F___05F_3_snd___05Fh223537) 
                                              << 0x1fU) 
                                             | vlSelf->mkMac__DOT__IF_IF_fp_add_fifo_rv_port0___05Fread___05F044_BIT_63_0_ETC___05F_d5438))));
    vlSelf->mkMac__DOT__fp_out_fifo_rv_port2___05Fread 
        = ((IData)(vlSelf->mkMac__DOT__reg_out_bf_valid_D_IN)
            ? vlSelf->mkMac__DOT__fp_out_fifo_rv_port1___05Fwrite_1
            : vlSelf->mkMac__DOT__fp_out_fifo_rv_port1___05Fread);
    vlSelf->mkMac__DOT__y___05Fh175698 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175435));
    vlSelf->mkMac__DOT__y___05Fh100745 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 9U) & (IData)(vlSelf->mkMac__DOT__y___05Fh100495));
    vlSelf->mkMac__DOT__y___05Fh175624 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175698)));
    vlSelf->mkMac__DOT__y___05Fh100673 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 9U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100745)));
    vlSelf->mkMac__DOT__fp_out_fifo_rv_D_IN = vlSelf->mkMac__DOT__fp_out_fifo_rv_port2___05Fread;
    vlSelf->mkMac__DOT__y___05Fh175887 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175624));
    vlSelf->mkMac__DOT__y___05Fh100923 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xaU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100673));
    vlSelf->mkMac__DOT__y___05Fh175813 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh175887)));
    vlSelf->mkMac__DOT__y___05Fh100851 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xaU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh100923)));
    vlSelf->mkMac__DOT__y___05Fh176076 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh175813));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1008 
        = ((0x800U & ((0xfffff800U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                      ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100851) 
                         << 0xbU))) | ((0x400U & ((0xfffffc00U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh100673) 
                                                   << 0xaU))) 
                                       | ((0x200U & 
                                           ((0xfffffe00U 
                                             & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                            ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh100495) 
                                               << 9U))) 
                                          | ((0x100U 
                                              & ((0xffffff00U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh100317) 
                                                  << 8U))) 
                                             | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1006)))));
    vlSelf->mkMac__DOT__y___05Fh101101 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xbU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh100851));
    vlSelf->mkMac__DOT__y___05Fh176002 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176076)));
    vlSelf->mkMac__DOT__y___05Fh101029 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xbU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101101)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2446 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176002) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh175813) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh175624) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh175435) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2444)))));
    vlSelf->mkMac__DOT__y___05Fh176265 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176002));
    vlSelf->mkMac__DOT__y___05Fh101279 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xcU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101029));
    vlSelf->mkMac__DOT__y___05Fh176191 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176265)));
    vlSelf->mkMac__DOT__y___05Fh101207 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xcU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101279)));
    vlSelf->mkMac__DOT__y___05Fh176454 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176191));
    vlSelf->mkMac__DOT__y___05Fh101457 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xdU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101207));
    vlSelf->mkMac__DOT__y___05Fh176380 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176454)));
    vlSelf->mkMac__DOT__y___05Fh101385 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xdU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101457)));
    vlSelf->mkMac__DOT__y___05Fh176643 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176380));
    vlSelf->mkMac__DOT__y___05Fh101635 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xeU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101385));
    vlSelf->mkMac__DOT__y___05Fh176569 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176643)));
    vlSelf->mkMac__DOT__y___05Fh101563 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xeU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101635)));
    vlSelf->mkMac__DOT__y___05Fh176832 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176569));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1010 
        = ((0x8000U & ((0xffff8000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                       ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh101563) 
                          << 0xfU))) | ((0x4000U & 
                                         ((0xffffc000U 
                                           & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh101385) 
                                             << 0xeU))) 
                                        | ((0x2000U 
                                            & ((0xffffe000U 
                                                & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh101207) 
                                                  << 0xdU))) 
                                           | ((0x1000U 
                                               & ((0xfffff000U 
                                                   & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh101029) 
                                                   << 0xcU))) 
                                              | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1008)))));
    vlSelf->mkMac__DOT__y___05Fh101813 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0xfU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101563));
    vlSelf->mkMac__DOT__y___05Fh176758 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh176832)));
    vlSelf->mkMac__DOT__y___05Fh101741 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0xfU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101813)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2448 
        = ((0x800000U & ((0xff800000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                         ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176758) 
                            << 0x17U))) | ((0x400000U 
                                            & ((0xffc00000U 
                                                & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                               ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh176569) 
                                                  << 0x16U))) 
                                           | ((0x200000U 
                                               & ((0xffe00000U 
                                                   & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                  ^ 
                                                  ((IData)(vlSelf->mkMac__DOT__y___05Fh176380) 
                                                   << 0x15U))) 
                                              | ((0x100000U 
                                                  & ((0xfff00000U 
                                                      & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                     ^ 
                                                     ((IData)(vlSelf->mkMac__DOT__y___05Fh176191) 
                                                      << 0x14U))) 
                                                 | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2446))));
    vlSelf->mkMac__DOT__y___05Fh177021 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x17U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176758));
    vlSelf->mkMac__DOT__y___05Fh101991 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x10U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101741));
    vlSelf->mkMac__DOT__y___05Fh176947 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x17U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177021)));
    vlSelf->mkMac__DOT__y___05Fh101919 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x10U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh101991)));
    vlSelf->mkMac__DOT__y___05Fh177210 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x18U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh176947));
    vlSelf->mkMac__DOT__y___05Fh102169 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x11U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh101919));
    vlSelf->mkMac__DOT__y___05Fh177136 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x18U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177210)));
    vlSelf->mkMac__DOT__y___05Fh102097 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x11U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102169)));
    vlSelf->mkMac__DOT__y___05Fh177399 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x19U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177136));
    vlSelf->mkMac__DOT__y___05Fh102347 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x12U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102097));
    vlSelf->mkMac__DOT__y___05Fh177325 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x19U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177399)));
    vlSelf->mkMac__DOT__y___05Fh102275 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x12U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102347)));
    vlSelf->mkMac__DOT__y___05Fh177588 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x1aU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177325));
    vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1012 
        = ((0x80000U & ((0xfff80000U & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                        ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102275) 
                           << 0x13U))) | ((0x40000U 
                                           & ((0xfffc0000U 
                                               & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                              ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh102097) 
                                                 << 0x12U))) 
                                          | ((0x20000U 
                                              & ((0xfffe0000U 
                                                  & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                 ^ 
                                                 ((IData)(vlSelf->mkMac__DOT__y___05Fh101919) 
                                                  << 0x11U))) 
                                             | ((0x10000U 
                                                 & ((0xffff0000U 
                                                     & vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843) 
                                                    ^ 
                                                    ((IData)(vlSelf->mkMac__DOT__y___05Fh101741) 
                                                     << 0x10U))) 
                                                | (IData)(vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d1010)))));
    vlSelf->mkMac__DOT__y___05Fh102525 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x13U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102275));
    vlSelf->mkMac__DOT__y___05Fh177514 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x1aU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177588)));
    vlSelf->mkMac__DOT__y___05Fh102453 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x13U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102525)));
    vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2450 
        = ((0x8000000U & ((0xf8000000U & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                          ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh177514) 
                             << 0x1bU))) | ((0x4000000U 
                                             & ((0xfc000000U 
                                                 & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                ^ ((IData)(vlSelf->mkMac__DOT__y___05Fh177325) 
                                                   << 0x1aU))) 
                                            | ((0x2000000U 
                                                & ((0xfe000000U 
                                                    & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                   ^ 
                                                   ((IData)(vlSelf->mkMac__DOT__y___05Fh177136) 
                                                    << 0x19U))) 
                                               | ((0x1000000U 
                                                   & ((0xff000000U 
                                                       & vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277) 
                                                      ^ 
                                                      ((IData)(vlSelf->mkMac__DOT__y___05Fh176947) 
                                                       << 0x18U))) 
                                                  | vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2448))));
    vlSelf->mkMac__DOT__y___05Fh177777 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x1bU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177514));
    vlSelf->mkMac__DOT__y___05Fh102703 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x14U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102453));
    vlSelf->mkMac__DOT__y___05Fh177703 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x1bU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177777)));
    vlSelf->mkMac__DOT__y___05Fh102631 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x14U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102703)));
    vlSelf->mkMac__DOT__y___05Fh177966 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x1cU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177703));
    vlSelf->mkMac__DOT__y___05Fh102881 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x15U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102631));
    vlSelf->mkMac__DOT__y___05Fh177892 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x1cU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh177966)));
    vlSelf->mkMac__DOT__y___05Fh102809 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x15U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh102881)));
    vlSelf->mkMac__DOT__y___05Fh178155 = ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2277 
                                           >> 0x1dU) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh177892));
    vlSelf->mkMac__DOT__y___05Fh103059 = ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d843 
                                           >> 0x16U) 
                                          & (IData)(vlSelf->mkMac__DOT__y___05Fh102809));
    vlSelf->mkMac__DOT__y___05Fh178081 = (1U & ((vlSelf->mkMac__DOT__IF_fp_mul_fifo_rv_port0___05Fread___05F494_BIT_32_549___05FETC___05F_d2279 
                                                 >> 0x1dU) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh178155)));
    vlSelf->mkMac__DOT__y___05Fh102987 = (1U & ((vlSelf->mkMac__DOT__IF_IF_int_mul_fifo_rv_port0___05Fread___05F8_BIT_39_6___05FETC___05F_d845 
                                                 >> 0x16U) 
                                                | (IData)(vlSelf->mkMac__DOT__y___05Fh103059)));
}
