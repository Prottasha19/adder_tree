// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VDut.h for the primary calling header

#include "verilated.h"

#include "VDut___024root.h"

VL_ATTR_COLD void VDut___024root___settle__TOP__2(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->io_result = vlSelf->Dut__DOT___zz_io_result;
}

VL_ATTR_COLD void VDut___024root___eval_initial(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = (1U & (~ (IData)(vlSelf->clk)));
    vlSelf->__Vclklast__TOP__reset = (1U & (~ (IData)(vlSelf->reset)));
}

VL_ATTR_COLD void VDut___024root___eval_settle(VDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root___eval_settle\n"); );
    // Body
    VDut___024root___settle__TOP__2(vlSelf);
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
    vlSelf->io_c = VL_RAND_RESET_I(8);
    vlSelf->io_result = VL_RAND_RESET_I(8);
    vlSelf->clk = 0;
    vlSelf->reset = 0;
    vlSelf->Dut__DOT___zz_io_result = VL_RAND_RESET_I(8);
}
