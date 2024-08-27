// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VDut.h"
#include "VDut__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VDut::VDut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VDut__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_c{vlSymsp->TOP.io_c}
    , io_result{vlSymsp->TOP.io_result}
    , rootp{&(vlSymsp->TOP)}
{
}

VDut::VDut(const char* _vcname__)
    : VDut(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VDut::~VDut() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VDut___024root___eval_initial(VDut___024root* vlSelf);
void VDut___024root___eval_settle(VDut___024root* vlSelf);
void VDut___024root___eval(VDut___024root* vlSelf);
#ifdef VL_DEBUG
void VDut___024root___eval_debug_assertions(VDut___024root* vlSelf);
#endif  // VL_DEBUG
void VDut___024root___final(VDut___024root* vlSelf);

static void _eval_initial_loop(VDut__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VDut___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VDut___024root___eval_settle(&(vlSymsp->TOP));
        VDut___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VDut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VDut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VDut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VDut___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VDut::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VDut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VDut::final() {
    VDut___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VDut___024root__trace_init_top(VDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VDut___024root*>(voidSelf);
    VDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VDut___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VDut___024root__trace_register(VDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VDut::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VDut___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
