// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDut.h for the primary calling header

#include "verilated.h"

#include "VDut___024root.h"

VL_ATTR_COLD void VDut___024root___eval_initial(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval_initial\n"); );
}

void VDut___024root___combo__TOP__1(VDut___024root* vlSelf);

VL_ATTR_COLD void VDut___024root___eval_settle(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval_settle\n"); );
    // Body
    VDut___024root___combo__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

VL_ATTR_COLD void VDut___024root___final(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___final\n"); );
}

VL_ATTR_COLD void VDut___024root___ctor_var_reset(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_a = VL_RAND_RESET_I(8);
    vlSelf->io_b = VL_RAND_RESET_I(8);
    vlSelf->io_result = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1_io_result = VL_RAND_RESET_I(8);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_7 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_6 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_5 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_4 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_3 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_2 = VL_RAND_RESET_I(1);
    vlSelf->Dut__DOT__carryAdder_1__DOT__c_1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
