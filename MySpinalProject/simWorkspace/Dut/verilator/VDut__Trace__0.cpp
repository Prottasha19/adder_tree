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
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        tracep->chgCData(oldp+0,(vlSelf->Dut__DOT__carryAdder_1_io_result),8);
        tracep->chgBit(oldp+1,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7));
        tracep->chgBit(oldp+2,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_6));
        tracep->chgBit(oldp+3,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_5));
        tracep->chgBit(oldp+4,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_4));
        tracep->chgBit(oldp+5,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_3));
        tracep->chgBit(oldp+6,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_2));
        tracep->chgBit(oldp+7,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_1));
    }
    tracep->chgCData(oldp+8,(vlSelf->io_a),8);
    tracep->chgCData(oldp+9,(vlSelf->io_b),8);
    tracep->chgCData(oldp+10,(vlSelf->io_result),8);
    tracep->chgBit(oldp+11,(vlSelf->clk));
    tracep->chgBit(oldp+12,(vlSelf->reset));
    tracep->chgBit(oldp+13,((1U & ((((IData)(vlSelf->io_a) 
                                     >> 7U) & (((IData)(vlSelf->io_b) 
                                                >> 7U) 
                                               | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7))) 
                                   | (((IData)(vlSelf->io_b) 
                                       >> 7U) & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7))))));
}

void VDut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_cleanup\n"); );
    // Init
    VDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDut___024root*>(voidSelf);
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
