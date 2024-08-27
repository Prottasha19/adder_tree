// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSimAsynchronousDut.h"
#include "VSimAsynchronousDut__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSimAsynchronousDut::VSimAsynchronousDut(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VSimAsynchronousDut__Syms(_vcontextp__, _vcname__, this)}
    , io_a{vlSymsp->TOP.io_a}
    , io_b{vlSymsp->TOP.io_b}
    , io_c{vlSymsp->TOP.io_c}
    , io_result{vlSymsp->TOP.io_result}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , rootp{&(vlSymsp->TOP)}
{
}

VSimAsynchronousDut::VSimAsynchronousDut(const char* _vcname__)
    : VSimAsynchronousDut(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VSimAsynchronousDut::~VSimAsynchronousDut() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VSimAsynchronousDut___024root___eval_initial(VSimAsynchronousDut___024root* vlSelf);
void VSimAsynchronousDut___024root___eval_settle(VSimAsynchronousDut___024root* vlSelf);
void VSimAsynchronousDut___024root___eval(VSimAsynchronousDut___024root* vlSelf);
#ifdef VL_DEBUG
void VSimAsynchronousDut___024root___eval_debug_assertions(VSimAsynchronousDut___024root* vlSelf);
#endif  // VL_DEBUG
void VSimAsynchronousDut___024root___final(VSimAsynchronousDut___024root* vlSelf);

static void _eval_initial_loop(VSimAsynchronousDut__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VSimAsynchronousDut___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VSimAsynchronousDut___024root___eval_settle(&(vlSymsp->TOP));
        VSimAsynchronousDut___024root___eval(&(vlSymsp->TOP));
    } while (0);
}

void VSimAsynchronousDut::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSimAsynchronousDut::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSimAsynchronousDut___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VSimAsynchronousDut___024root___eval(&(vlSymsp->TOP));
    } while (0);
    // Evaluate cleanup
}

//============================================================
// Utilities

VerilatedContext* VSimAsynchronousDut::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VSimAsynchronousDut::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void VSimAsynchronousDut::final() {
    VSimAsynchronousDut___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Trace configuration

void VSimAsynchronousDut___024root__trace_init_top(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSimAsynchronousDut___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSimAsynchronousDut___024root*>(voidSelf);
    VSimAsynchronousDut__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->scopeEscape(' ');
    tracep->pushNamePrefix(std::string{vlSymsp->name()} + ' ');
    VSimAsynchronousDut___024root__trace_init_top(vlSelf, tracep);
    tracep->popNamePrefix();
    tracep->scopeEscape('.');
}

VL_ATTR_COLD void VSimAsynchronousDut___024root__trace_register(VSimAsynchronousDut___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSimAsynchronousDut::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSimAsynchronousDut___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
