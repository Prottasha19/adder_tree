// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimAsynchronousDut.h for the primary calling header

#include "verilated.h"

#include "VSimAsynchronousDut___024root.h"

VL_ATTR_COLD void VSimAsynchronousDut___024root___eval_initial(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___eval_initial\n"); );
}

void VSimAsynchronousDut___024root___combo__TOP__1(VSimAsynchronousDut___024root* vlSelf);

VL_ATTR_COLD void VSimAsynchronousDut___024root___eval_settle(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___eval_settle\n"); );
    // Body
    VSimAsynchronousDut___024root___combo__TOP__1(vlSelf);
}

VL_ATTR_COLD void VSimAsynchronousDut___024root___final(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___final\n"); );
}

VL_ATTR_COLD void VSimAsynchronousDut___024root___ctor_var_reset(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->io_a = VL_RAND_RESET_I(8);
    vlSelf->io_b = VL_RAND_RESET_I(8);
    vlSelf->io_c = VL_RAND_RESET_I(8);
    vlSelf->io_result = VL_RAND_RESET_I(8);
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->reset = VL_RAND_RESET_I(1);
}
