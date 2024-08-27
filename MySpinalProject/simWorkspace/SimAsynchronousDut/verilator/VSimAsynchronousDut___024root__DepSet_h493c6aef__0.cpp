// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSimAsynchronousDut.h for the primary calling header

#include "verilated.h"

#include "VSimAsynchronousDut___024root.h"

VL_INLINE_OPT void VSimAsynchronousDut___024root___combo__TOP__1(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___combo__TOP__1\n"); );
    // Body
    vlSelf->io_result = (0xffU & (((IData)(vlSelf->io_a) 
                                   + (IData)(vlSelf->io_b)) 
                                  - (IData)(vlSelf->io_c)));
}

void VSimAsynchronousDut___024root___eval(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___eval\n"); );
    // Body
    VSimAsynchronousDut___024root___combo__TOP__1(vlSelf);
}

#ifdef VL_DEBUG
void VSimAsynchronousDut___024root___eval_debug_assertions(VSimAsynchronousDut___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
}
#endif  // VL_DEBUG
