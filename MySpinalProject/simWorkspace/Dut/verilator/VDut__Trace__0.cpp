// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDut__Syms.h"


void VDut___024root__trace_chg_sub_0(VDut___024root* vlSelf, VerilatedVcd* tracep);

void VDut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_chg_top_0\n"); );
    // Init
    VDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDut___024root*>(voidSelf);
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VDut___024root__trace_chg_sub_0((&vlSymsp->TOP), tracep);
}

void VDut___024root__trace_chg_sub_0(VDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_chg_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    tracep->chgCData(oldp+0,(vlSelf->io_a),8);
    tracep->chgCData(oldp+1,(vlSelf->io_b),8);
    tracep->chgCData(oldp+2,(vlSelf->io_c),8);
    tracep->chgCData(oldp+3,(vlSelf->io_result),8);
    tracep->chgBit(oldp+4,(vlSelf->clk));
    tracep->chgBit(oldp+5,(vlSelf->reset));
}

void VDut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_cleanup\n"); );
    // Init
    VDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDut___024root*>(voidSelf);
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
