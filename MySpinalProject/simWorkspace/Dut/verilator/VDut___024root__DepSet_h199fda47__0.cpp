// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDut.h for the primary calling header

#include "verilated.h"

#include "VDut___024root.h"

VL_INLINE_OPT void VDut___024root___combo__TOP__1(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_1 = (1U 
                                                & ((IData)(vlSelf->io_a) 
                                                   & (IData)(vlSelf->io_b)));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_2 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 1U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 1U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_1))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 1U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_1))));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_3 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 2U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 2U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_2))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 2U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_2))));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_4 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 3U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 3U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_3))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 3U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_3))));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_5 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 4U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 4U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_4))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 4U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_4))));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_6 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 5U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 5U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_5))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 5U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_5))));
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_7 = (1U 
                                                & ((((IData)(vlSelf->io_a) 
                                                     >> 6U) 
                                                    & (((IData)(vlSelf->io_b) 
                                                        >> 6U) 
                                                       | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_6))) 
                                                   | (((IData)(vlSelf->io_b) 
                                                       >> 6U) 
                                                      & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_6))));
    vlSelf->Dut__DOT__carryAdder_1_io_result = ((0xfcU 
                                                 & (IData)(vlSelf->Dut__DOT__carryAdder_1_io_result)) 
                                                | ((2U 
                                                    & ((0xfffffffeU 
                                                        & ((IData)(vlSelf->io_a) 
                                                           ^ (IData)(vlSelf->io_b))) 
                                                       ^ 
                                                       ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_1) 
                                                        << 1U))) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->io_a) 
                                                         ^ (IData)(vlSelf->io_b)))));
    vlSelf->Dut__DOT__carryAdder_1_io_result = ((0xf3U 
                                                 & (IData)(vlSelf->Dut__DOT__carryAdder_1_io_result)) 
                                                | ((8U 
                                                    & ((0xfffffff8U 
                                                        & ((IData)(vlSelf->io_a) 
                                                           ^ (IData)(vlSelf->io_b))) 
                                                       ^ 
                                                       ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_3) 
                                                        << 3U))) 
                                                   | (4U 
                                                      & ((0xfffffffcU 
                                                          & ((IData)(vlSelf->io_a) 
                                                             ^ (IData)(vlSelf->io_b))) 
                                                         ^ 
                                                         ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_2) 
                                                          << 2U)))));
    vlSelf->Dut__DOT__carryAdder_1_io_result = ((0xcfU 
                                                 & (IData)(vlSelf->Dut__DOT__carryAdder_1_io_result)) 
                                                | ((0x20U 
                                                    & ((0xffffffe0U 
                                                        & ((IData)(vlSelf->io_a) 
                                                           ^ (IData)(vlSelf->io_b))) 
                                                       ^ 
                                                       ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_5) 
                                                        << 5U))) 
                                                   | (0x10U 
                                                      & ((0xfffffff0U 
                                                          & ((IData)(vlSelf->io_a) 
                                                             ^ (IData)(vlSelf->io_b))) 
                                                         ^ 
                                                         ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_4) 
                                                          << 4U)))));
    vlSelf->Dut__DOT__carryAdder_1_io_result = ((0x3fU 
                                                 & (IData)(vlSelf->Dut__DOT__carryAdder_1_io_result)) 
                                                | ((0x80U 
                                                    & ((0xffffff80U 
                                                        & ((IData)(vlSelf->io_a) 
                                                           ^ (IData)(vlSelf->io_b))) 
                                                       ^ 
                                                       ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7) 
                                                        << 7U))) 
                                                   | (0x40U 
                                                      & ((0xffffffc0U 
                                                          & ((IData)(vlSelf->io_a) 
                                                             ^ (IData)(vlSelf->io_b))) 
                                                         ^ 
                                                         ((IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_6) 
                                                          << 6U)))));
    vlSelf->io_result = vlSelf->Dut__DOT__carryAdder_1_io_result;
}

void VDut___024root___eval(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval\n"); );
    // Body
    VDut___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
}

#ifdef VL_DEBUG
void VDut___024root___eval_debug_assertions(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
