// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VDut__Syms.h"


VL_ATTR_COLD void VDut___024root__trace_init_sub__TOP__0(VDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+9,"io_a", false,-1, 7,0);
    tracep->declBus(c+10,"io_b", false,-1, 7,0);
    tracep->declBus(c+11,"io_result", false,-1, 7,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->pushNamePrefix("Dut ");
    tracep->declBus(c+9,"io_a", false,-1, 7,0);
    tracep->declBus(c+10,"io_b", false,-1, 7,0);
    tracep->declBus(c+11,"io_result", false,-1, 7,0);
    tracep->declBit(c+12,"clk", false,-1);
    tracep->declBit(c+13,"reset", false,-1);
    tracep->declBus(c+1,"carryAdder_1_io_result", false,-1, 7,0);
    tracep->pushNamePrefix("carryAdder_1 ");
    tracep->declBus(c+9,"io_a", false,-1, 7,0);
    tracep->declBus(c+10,"io_b", false,-1, 7,0);
    tracep->declBus(c+1,"io_result", false,-1, 7,0);
    tracep->declBit(c+14,"c_8", false,-1);
    tracep->declBit(c+2,"c_7", false,-1);
    tracep->declBit(c+3,"c_6", false,-1);
    tracep->declBit(c+4,"c_5", false,-1);
    tracep->declBit(c+5,"c_4", false,-1);
    tracep->declBit(c+6,"c_3", false,-1);
    tracep->declBit(c+7,"c_2", false,-1);
    tracep->declBit(c+8,"c_1", false,-1);
    tracep->declBit(c+15,"c", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VDut___024root__trace_init_top(VDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_init_top\n"); );
    // Body
    VDut___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VDut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDut___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd* tracep);
void VDut___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VDut___024root__trace_register(VDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VDut___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VDut___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VDut___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VDut___024root__trace_full_sub_0(VDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDut___024root__trace_full_top_0(void* voidSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_full_top_0\n"); );
    // Init
    VDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDut___024root*>(voidSelf);
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VDut___024root__trace_full_sub_0((&vlSymsp->TOP), tracep);
}

VL_ATTR_COLD void VDut___024root__trace_full_sub_0(VDut___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VDut___024root__trace_full_sub_0\n"); );
    // Init
    vluint32_t* const oldp VL_ATTR_UNUSED = tracep->oldp(vlSymsp->__Vm_baseCode);
    // Body
    tracep->fullCData(oldp+1,(vlSelf->Dut__DOT__carryAdder_1_io_result),8);
    tracep->fullBit(oldp+2,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7));
    tracep->fullBit(oldp+3,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_6));
    tracep->fullBit(oldp+4,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_5));
    tracep->fullBit(oldp+5,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_4));
    tracep->fullBit(oldp+6,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_3));
    tracep->fullBit(oldp+7,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_2));
    tracep->fullBit(oldp+8,(vlSelf->Dut__DOT__carryAdder_1__DOT__c_1));
    tracep->fullCData(oldp+9,(vlSelf->io_a),8);
    tracep->fullCData(oldp+10,(vlSelf->io_b),8);
    tracep->fullCData(oldp+11,(vlSelf->io_result),8);
    tracep->fullBit(oldp+12,(vlSelf->clk));
    tracep->fullBit(oldp+13,(vlSelf->reset));
    tracep->fullBit(oldp+14,((1U & ((((IData)(vlSelf->io_a) 
                                      >> 7U) & (((IData)(vlSelf->io_b) 
                                                 >> 7U) 
                                                | (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7))) 
                                    | (((IData)(vlSelf->io_b) 
                                        >> 7U) & (IData)(vlSelf->Dut__DOT__carryAdder_1__DOT__c_7))))));
    tracep->fullBit(oldp+15,(0U));
}
