// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSimAsynchronousDut__Syms.h"


VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_init_sub__TOP__0(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+1,"io_a", false,-1, 7,0);
    tracep->declBus(c+2,"io_b", false,-1, 7,0);
    tracep->declBus(c+3,"io_c", false,-1, 7,0);
    tracep->declBus(c+4,"io_result", false,-1, 7,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->pushNamePrefix("SimAsynchronousDut ");
    tracep->declBus(c+1,"io_a", false,-1, 7,0);
    tracep->declBus(c+2,"io_b", false,-1, 7,0);
    tracep->declBus(c+3,"io_c", false,-1, 7,0);
    tracep->declBus(c+4,"io_result", false,-1, 7,0);
    tracep->declBit(c+5,"clk", false,-1);
    tracep->declBit(c+6,"reset", false,-1);
    tracep->popNamePrefix(1);
}

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_init_top(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root__trace_init_top\n"); );
    // Body
    VSimAsynchronousDut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimAsynchronousDut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VSimAsynchronousDut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_register(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSimAsynchronousDut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSimAsynchronousDut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSimAsynchronousDut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_full_sub_0(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root__trace_full_top_0\n"); );
    // Init
    VSimAsynchronousDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimAsynchronousDut___024root*>(voidSelf);
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSimAsynchronousDut___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_full_sub_0(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSimAsynchronousDut___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->io_a),8);
    tracep->fullCData(oldp+2,(vlSelf->io_b),8);
    tracep->fullCData(oldp+3,(vlSelf->io_c),8);
    tracep->fullCData(oldp+4,(vlSelf->io_result),8);
    tracep->fullBit(oldp+5,(vlSelf->clk));
    tracep->fullBit(oldp+6,(vlSelf->reset));
}
