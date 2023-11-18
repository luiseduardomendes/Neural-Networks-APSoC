// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


void VTestHarness::traceChgThis__4881(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37188);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*16415:0*/ __Vtemp27979[513];
    WData/*16415:0*/ __Vtemp27980[513];
    WData/*4159:0*/ __Vtemp27985[130];
    WData/*4159:0*/ __Vtemp27988[130];
    WData/*4159:0*/ __Vtemp27991[130];
    WData/*4159:0*/ __Vtemp27992[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        VL_EXTEND_WI(16386,3, __Vtemp27979, (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                              ? (1U 
                                                 | (6U 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                              : 0U));
        VL_SHIFTL_WWI(16386,16386,14, __Vtemp27980, __Vtemp27979, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp27985[0U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[0U] : 0U);
        __Vtemp27985[1U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[1U] : 0U);
        __Vtemp27985[2U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[2U] : 0U);
        __Vtemp27985[3U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[3U] : 0U);
        __Vtemp27985[4U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[4U] : 0U);
        __Vtemp27985[5U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[5U] : 0U);
        __Vtemp27985[6U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[6U] : 0U);
        __Vtemp27985[7U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[7U] : 0U);
        __Vtemp27985[8U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[8U] : 0U);
        __Vtemp27985[9U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                             ? __Vtemp27980[9U] : 0U);
        __Vtemp27985[0xaU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xaU]
                               : 0U);
        __Vtemp27985[0xbU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xbU]
                               : 0U);
        __Vtemp27985[0xcU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xcU]
                               : 0U);
        __Vtemp27985[0xdU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xdU]
                               : 0U);
        __Vtemp27985[0xeU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xeU]
                               : 0U);
        __Vtemp27985[0xfU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                               ? __Vtemp27980[0xfU]
                               : 0U);
        __Vtemp27985[0x10U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x10U]
                                : 0U);
        __Vtemp27985[0x11U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x11U]
                                : 0U);
        __Vtemp27985[0x12U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x12U]
                                : 0U);
        __Vtemp27985[0x13U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x13U]
                                : 0U);
        __Vtemp27985[0x14U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x14U]
                                : 0U);
        __Vtemp27985[0x15U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x15U]
                                : 0U);
        __Vtemp27985[0x16U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x16U]
                                : 0U);
        __Vtemp27985[0x17U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x17U]
                                : 0U);
        __Vtemp27985[0x18U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x18U]
                                : 0U);
        __Vtemp27985[0x19U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x19U]
                                : 0U);
        __Vtemp27985[0x1aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1aU]
                                : 0U);
        __Vtemp27985[0x1bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1bU]
                                : 0U);
        __Vtemp27985[0x1cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1cU]
                                : 0U);
        __Vtemp27985[0x1dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1dU]
                                : 0U);
        __Vtemp27985[0x1eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1eU]
                                : 0U);
        __Vtemp27985[0x1fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x1fU]
                                : 0U);
        __Vtemp27985[0x20U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x20U]
                                : 0U);
        __Vtemp27985[0x21U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x21U]
                                : 0U);
        __Vtemp27985[0x22U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x22U]
                                : 0U);
        __Vtemp27985[0x23U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x23U]
                                : 0U);
        __Vtemp27985[0x24U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x24U]
                                : 0U);
        __Vtemp27985[0x25U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x25U]
                                : 0U);
        __Vtemp27985[0x26U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x26U]
                                : 0U);
        __Vtemp27985[0x27U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x27U]
                                : 0U);
        __Vtemp27985[0x28U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x28U]
                                : 0U);
        __Vtemp27985[0x29U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x29U]
                                : 0U);
        __Vtemp27985[0x2aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2aU]
                                : 0U);
        __Vtemp27985[0x2bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2bU]
                                : 0U);
        __Vtemp27985[0x2cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2cU]
                                : 0U);
        __Vtemp27985[0x2dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2dU]
                                : 0U);
        __Vtemp27985[0x2eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2eU]
                                : 0U);
        __Vtemp27985[0x2fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x2fU]
                                : 0U);
        __Vtemp27985[0x30U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x30U]
                                : 0U);
        __Vtemp27985[0x31U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x31U]
                                : 0U);
        __Vtemp27985[0x32U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x32U]
                                : 0U);
        __Vtemp27985[0x33U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x33U]
                                : 0U);
        __Vtemp27985[0x34U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x34U]
                                : 0U);
        __Vtemp27985[0x35U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x35U]
                                : 0U);
        __Vtemp27985[0x36U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x36U]
                                : 0U);
        __Vtemp27985[0x37U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x37U]
                                : 0U);
        __Vtemp27985[0x38U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x38U]
                                : 0U);
        __Vtemp27985[0x39U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x39U]
                                : 0U);
        __Vtemp27985[0x3aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3aU]
                                : 0U);
        __Vtemp27985[0x3bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3bU]
                                : 0U);
        __Vtemp27985[0x3cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3cU]
                                : 0U);
        __Vtemp27985[0x3dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3dU]
                                : 0U);
        __Vtemp27985[0x3eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3eU]
                                : 0U);
        __Vtemp27985[0x3fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x3fU]
                                : 0U);
        __Vtemp27985[0x40U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x40U]
                                : 0U);
        __Vtemp27985[0x41U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x41U]
                                : 0U);
        __Vtemp27985[0x42U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x42U]
                                : 0U);
        __Vtemp27985[0x43U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x43U]
                                : 0U);
        __Vtemp27985[0x44U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x44U]
                                : 0U);
        __Vtemp27985[0x45U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x45U]
                                : 0U);
        __Vtemp27985[0x46U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x46U]
                                : 0U);
        __Vtemp27985[0x47U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x47U]
                                : 0U);
        __Vtemp27985[0x48U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x48U]
                                : 0U);
        __Vtemp27985[0x49U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x49U]
                                : 0U);
        __Vtemp27985[0x4aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4aU]
                                : 0U);
        __Vtemp27985[0x4bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4bU]
                                : 0U);
        __Vtemp27985[0x4cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4cU]
                                : 0U);
        __Vtemp27985[0x4dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4dU]
                                : 0U);
        __Vtemp27985[0x4eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4eU]
                                : 0U);
        __Vtemp27985[0x4fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x4fU]
                                : 0U);
        __Vtemp27985[0x50U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x50U]
                                : 0U);
        __Vtemp27985[0x51U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x51U]
                                : 0U);
        __Vtemp27985[0x52U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x52U]
                                : 0U);
        __Vtemp27985[0x53U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x53U]
                                : 0U);
        __Vtemp27985[0x54U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x54U]
                                : 0U);
        __Vtemp27985[0x55U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x55U]
                                : 0U);
        __Vtemp27985[0x56U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x56U]
                                : 0U);
        __Vtemp27985[0x57U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x57U]
                                : 0U);
        __Vtemp27985[0x58U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x58U]
                                : 0U);
        __Vtemp27985[0x59U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x59U]
                                : 0U);
        __Vtemp27985[0x5aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5aU]
                                : 0U);
        __Vtemp27985[0x5bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5bU]
                                : 0U);
        __Vtemp27985[0x5cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5cU]
                                : 0U);
        __Vtemp27985[0x5dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5dU]
                                : 0U);
        __Vtemp27985[0x5eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5eU]
                                : 0U);
        __Vtemp27985[0x5fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x5fU]
                                : 0U);
        __Vtemp27985[0x60U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x60U]
                                : 0U);
        __Vtemp27985[0x61U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x61U]
                                : 0U);
        __Vtemp27985[0x62U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x62U]
                                : 0U);
        __Vtemp27985[0x63U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x63U]
                                : 0U);
        __Vtemp27985[0x64U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x64U]
                                : 0U);
        __Vtemp27985[0x65U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x65U]
                                : 0U);
        __Vtemp27985[0x66U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x66U]
                                : 0U);
        __Vtemp27985[0x67U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x67U]
                                : 0U);
        __Vtemp27985[0x68U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x68U]
                                : 0U);
        __Vtemp27985[0x69U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x69U]
                                : 0U);
        __Vtemp27985[0x6aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6aU]
                                : 0U);
        __Vtemp27985[0x6bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6bU]
                                : 0U);
        __Vtemp27985[0x6cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6cU]
                                : 0U);
        __Vtemp27985[0x6dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6dU]
                                : 0U);
        __Vtemp27985[0x6eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6eU]
                                : 0U);
        __Vtemp27985[0x6fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x6fU]
                                : 0U);
        __Vtemp27985[0x70U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x70U]
                                : 0U);
        __Vtemp27985[0x71U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x71U]
                                : 0U);
        __Vtemp27985[0x72U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x72U]
                                : 0U);
        __Vtemp27985[0x73U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x73U]
                                : 0U);
        __Vtemp27985[0x74U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x74U]
                                : 0U);
        __Vtemp27985[0x75U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x75U]
                                : 0U);
        __Vtemp27985[0x76U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x76U]
                                : 0U);
        __Vtemp27985[0x77U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x77U]
                                : 0U);
        __Vtemp27985[0x78U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x78U]
                                : 0U);
        __Vtemp27985[0x79U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x79U]
                                : 0U);
        __Vtemp27985[0x7aU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7aU]
                                : 0U);
        __Vtemp27985[0x7bU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7bU]
                                : 0U);
        __Vtemp27985[0x7cU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7cU]
                                : 0U);
        __Vtemp27985[0x7dU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7dU]
                                : 0U);
        __Vtemp27985[0x7eU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7eU]
                                : 0U);
        __Vtemp27985[0x7fU] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x7fU]
                                : 0U);
        __Vtemp27985[0x80U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x80U]
                                : 0U);
        __Vtemp27985[0x81U] = (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done) 
                                & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_counter_1)))
                                ? __Vtemp27980[0x81U]
                                : 0U);
        vcdp->chgWData(oldp+0,(__Vtemp27985),4160);
        VL_SHIFTR_WWI(4160,4160,14, __Vtemp27988, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                       << 2U));
        __Vtemp27991[0U] = (7U & (__Vtemp27988[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp27991[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp27992, __Vtemp27991);
        vcdp->chgCData(oldp+130,((0xfU & __Vtemp27992[0U])),4);
    }
}

void VTestHarness::traceChgThis__4882(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37319);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,((((0xffU == (0xffU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                             >> 3U)))
                                  ? (0U == (0x100U 
                                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                               >> 3U)))
                                  : ((0xfeU == (0xffU 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                      ? (0U == (0x100U 
                                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                   >> 3U)))
                                      : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_1763)))
                                 ? ((0xffU == (0xffU 
                                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                  >> 3U)))
                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                     : ((0xfeU == (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
                                         ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                         : ((0xfdU 
                                             == (0xffU 
                                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                    >> 3U)))
                                             ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                             : ((0xfcU 
                                                 == 
                                                 (0xffU 
                                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                     >> 3U)))
                                                 ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                 : 
                                                ((0xfbU 
                                                  == 
                                                  (0xffU 
                                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                      >> 3U)))
                                                  ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                  : 
                                                 ((0xfaU 
                                                   == 
                                                   (0xffU 
                                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                       >> 3U)))
                                                   ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                   : 
                                                  ((0xf9U 
                                                    == 
                                                    (0xffU 
                                                     & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                    : 
                                                   ((0xf8U 
                                                     == 
                                                     (0xffU 
                                                      & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                                         >> 3U)))
                                                     ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_prepend_86
                                                     : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT___GEN_2013))))))))
                                 : VL_ULL(0))),64);
    }
}

void VTestHarness::traceChgThis__4884(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37321);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source_io_enq_ready));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink_io_deq_valid));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink_io_deq_valid));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumereq));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__resumeAcks));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_65));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_90));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn));
        vcdp->chgIData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal),32);
        vcdp->chgCData(oldp+9,((0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                         >> 0x18U))),8);
        vcdp->chgBit(oldp+10,((0U == (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                               >> 0x18U)))));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__wrAccessRegisterCommand));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F96));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_96));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F96));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F0));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F0));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F31));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_31));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F31));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F23));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_23));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F23));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F35));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_35));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F35));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F78));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_78));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F78));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F91));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_91));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F91));
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F11));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_11));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F11));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20));
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F19));
        vcdp->chgBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_19));
        vcdp->chgBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F19));
    }
}

void VTestHarness::traceChgThis__4886(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37368);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F74));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_74));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F74));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F86));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_86));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F86));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F27));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_27));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F27));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F4));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_4));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F4));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F82));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_82));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F82));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F70));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_70));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F70));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F39));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_39));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F39));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F15));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_15));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F15));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F100));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_100));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_roready___05F100));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__autoexec));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__regAccessRegisterCommand));
        vcdp->chgBit(oldp+39,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrEn) 
                               & (0U != (0xffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal 
                                                  >> 0x18U))))));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready___05F8));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_8));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_10));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_97));
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_98));
        vcdp->chgBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_99));
        vcdp->chgBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_1));
    }
}

void VTestHarness::traceChgThis__4888(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37415);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_2));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_3));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_32));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_33));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_34));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_24));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_25));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_26));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_36));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_37));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_38));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_79));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_80));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_81));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_92));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_93));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_94));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_12));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_13));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_14));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_20));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_21));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_22));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_75));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_76));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_77));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_87));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_88));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_89));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_28));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_29));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_30));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_5));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_6));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_7));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_83));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_84));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_85));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_71));
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_72));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_73));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_40));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_41));
        vcdp->chgBit(oldp+43,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_42));
        vcdp->chgBit(oldp+44,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_16));
        vcdp->chgBit(oldp+45,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_17));
        vcdp->chgBit(oldp+46,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_18));
        vcdp->chgBit(oldp+47,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_101));
        vcdp->chgBit(oldp+48,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_102));
        vcdp->chgBit(oldp+49,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_103));
        vcdp->chgBit(oldp+50,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__errorBusy));
    }
}

void VTestHarness::traceChgThis__4890(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37466);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,((0xffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__COMMANDWrDataVal)),24);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+3,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_incremented) 
                                 != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleOut_0_a_sink__DOT__ridx_incremented));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin) 
                                 + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___widx_T_1)))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented) 
                                 != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__widx_widx_gray__DOT__output_chain__DOT__sync_0)))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmactive_synced_dmInner_io_innerCtrl_sink__DOT__ridx_incremented));
    }
}

void VTestHarness::traceChgThis__4891(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37475);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp27994[4];
    WData/*127:0*/ __Vtemp27997[4];
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode),3);
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address),9);
        vcdp->chgCData(oldp+2,((0x7fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address))),7);
        vcdp->chgCData(oldp+3,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))),3);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1));
        vcdp->chgBit(oldp+6,((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+7,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_opcode))));
        vcdp->chgCData(oldp+8,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                      >> 2U))),3);
        vcdp->chgBit(oldp+9,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                    >> 3U))));
        vcdp->chgCData(oldp+10,((5U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                       >> 2U))),3);
        vcdp->chgBit(oldp+11,((1U & ((IData)(1U) << 
                                     (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address) 
                                            >> 3U))))));
        vcdp->chgBit(oldp+12,((0U == (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address)))));
        VL_EXTEND_WI(128,9, __Vtemp27994, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vcdp->chgWData(oldp+13,(__Vtemp27994),128);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode),3);
        vcdp->chgBit(oldp+18,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode))));
        VL_EXTEND_WI(128,9, __Vtemp27997, (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_address));
        vcdp->chgBit(oldp+19,((0U == (3U & __Vtemp27997[0U]))));
        vcdp->chgBit(oldp+20,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits 
                                     >> 0x10U))));
        vcdp->chgCData(oldp+21,((0x7fU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                                  >> 0x22U)))),7);
        vcdp->chgIData(oldp+22,((IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits 
                                         >> 2U))),32);
        vcdp->chgCData(oldp+23,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits))),2);
    }
}

void VTestHarness::traceChgThis__4893(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37499);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain__DOT__updateBits),32);
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__updateBits),41);
    }
}

void VTestHarness::traceChgThis__4894(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37502);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_bits_opcode))));
    }
}

void VTestHarness::traceChgThis__4895(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37503);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready)) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready)))));
    }
}

void VTestHarness::traceChgThis__4896(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37504);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__txSlackWrap));
    }
}

void VTestHarness::traceChgThis__4897(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37505);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__uart_sim_0_io_uart_rxd));
    }
}

void VTestHarness::traceChgThis__4898(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37506);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->chgQData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_2_d_ready));
        vcdp->chgBit(oldp+6,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)))));
        vcdp->chgBit(oldp+7,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data),3);
        vcdp->chgIData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data),21);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data),64);
        vcdp->chgCData(oldp+12,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))),3);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_6_d_ready));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_d_ready));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_valid));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_param),3);
        vcdp->chgCData(oldp+18,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))),2);
        vcdp->chgSData(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source),11);
        vcdp->chgSData(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address),12);
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_mask),8);
        vcdp->chgBit(oldp+22,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__full)
                                ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data))));
        vcdp->chgCData(oldp+23,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))),3);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode),3);
        vcdp->chgIData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address),26);
        vcdp->chgCData(oldp+28,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))),3);
        vcdp->chgQData(oldp+29,((((3U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 0xeU))) 
                                  | ((2U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 0xeU)))
                                      ? (0x7ffU == 
                                         (0x7ffU & 
                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 3U)))
                                      : (0U == (0x7ffU 
                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))))
                                  ? ((3U == (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 0xeU)))
                                      ? VL_ULL(0) : 
                                     ((2U == (3U & 
                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 0xeU)))
                                       ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_
                                       : ((1U == (3U 
                                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                     >> 0xeU)))
                                           ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0
                                           : (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__ipi_0)))))
                                  : VL_ULL(0))),64);
    }
}

void VTestHarness::traceChgThis__4900(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37537);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28008[9];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter_auto_out_d_ready));
        __Vtemp28008[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28008[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28008[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28008[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28008[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28008[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28008[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28008[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28008[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+1,(__Vtemp28008),260);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_a_ready));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_valid));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_param),2);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size),4);
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source),7);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_sink));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_denied));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_corrupt));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_8_d_ready));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_7_d_ready));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_d_ready));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_valid));
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size),3);
        vcdp->chgCData(oldp+27,((0x7fU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                          >> 4U))),7);
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_enq_ready));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_in_d_valid));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_3_d_ready));
        vcdp->chgBit(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_1_d_ready));
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_0_d_ready));
        vcdp->chgBit(oldp+34,((((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)) 
                                    | (1U == (7U & 
                                              ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                               >> 4U)))) 
                                   | (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source) 
                                                   >> 4U)))) 
                                  | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                 | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                                | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source))) 
                               | (0x40U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_source)))));
        vcdp->chgSData(oldp+35,((0x1ffU & (~ (0xffffffU 
                                              & (((IData)(0xfffU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_size)) 
                                                 >> 3U))))),9);
        vcdp->chgBit(oldp+36,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_in_d_bits_opcode))));
    }
}

void VTestHarness::traceChgThis__4902(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37574);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28019[9];
    WData/*287:0*/ __Vtemp28020[9];
    // Body
    {
        __Vtemp28019[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28019[1U] = 0U;
        __Vtemp28019[2U] = 0U;
        __Vtemp28019[3U] = 0U;
        __Vtemp28019[4U] = 0U;
        __Vtemp28019[5U] = 0U;
        __Vtemp28019[6U] = 0U;
        __Vtemp28019[7U] = 0U;
        __Vtemp28019[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28020, __Vtemp28019);
        vcdp->chgCData(oldp+0,((0xfU & __Vtemp28020[0U])),4);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size),4);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source),7);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgSData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_valid),9);
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_filter),18);
        vcdp->chgIData(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__readys_unready),18);
        vcdp->chgSData(oldp+12,((0x1ffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2)))),9);
        vcdp->chgBit(oldp+13,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2)))));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_0));
        vcdp->chgBit(oldp+16,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 1U)))));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_1));
        vcdp->chgBit(oldp+19,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 2U)))));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_2));
        vcdp->chgBit(oldp+22,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 3U)))));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_3));
        vcdp->chgBit(oldp+25,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 4U)))));
        vcdp->chgBit(oldp+26,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4));
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_4));
        vcdp->chgBit(oldp+28,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 5U)))));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_5));
        vcdp->chgBit(oldp+31,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                        >> 6U)))));
    }
}

void VTestHarness::traceChgThis__4904(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37606);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_6));
        vcdp->chgBit(oldp+2,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                       >> 7U)))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_7));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_7));
        vcdp->chgBit(oldp+5,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT___readys_readys_T_2) 
                                       >> 8U)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_8));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__muxStateEarly_8));
        vcdp->chgBit(oldp+8,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size),4);
        vcdp->chgCData(oldp+10,((7U & (~ (0x3ffffU 
                                          & (((IData)(0x3fU) 
                                              << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                             >> 3U))))),3);
        vcdp->chgBit(oldp+11,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))));
        vcdp->chgCData(oldp+12,(((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                  ? (7U & (~ (0x3ffffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                                 >> 3U))))
                                  : 0U)),3);
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1))));
        vcdp->chgBit(oldp+14,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2))));
        vcdp->chgBit(oldp+15,(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3))));
        vcdp->chgBit(oldp+16,((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4))));
        vcdp->chgBit(oldp+17,(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5))));
        vcdp->chgBit(oldp+18,((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_0) 
                                    | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_1)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_2)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_3)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_4)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_6))));
    }
}

void VTestHarness::traceChgThis__4906(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37625);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28025[9];
    WData/*287:0*/ __Vtemp28026[9];
    WData/*4159:0*/ __Vtemp28027[130];
    WData/*287:0*/ __Vtemp28030[9];
    WData/*287:0*/ __Vtemp28033[9];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__prefixOR_8));
        vcdp->chgCData(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__earlyWinner_5)
                                 ? ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))
                                     ? (7U & (~ (0x3ffffU 
                                                 & (((IData)(0x3fU) 
                                                     << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_in_d_bits_size)) 
                                                    >> 3U))))
                                     : 0U) : 0U)),3);
        vcdp->chgBit(oldp+2,((((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source))) 
                              | (0x40U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_source)))));
        vcdp->chgSData(oldp+3,((0x1ffU & (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_size)) 
                                                >> 3U))))),9);
        vcdp->chgBit(oldp+4,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor_io_in_d_bits_opcode))));
        __Vtemp28025[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28025[1U] = 0U;
        __Vtemp28025[2U] = 0U;
        __Vtemp28025[3U] = 0U;
        __Vtemp28025[4U] = 0U;
        __Vtemp28025[5U] = 0U;
        __Vtemp28025[6U] = 0U;
        __Vtemp28025[7U] = 0U;
        __Vtemp28025[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28026, __Vtemp28025);
        vcdp->chgCData(oldp+5,((0xfU & __Vtemp28026[0U])),4);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter_auto_out_d_ready));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28027[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+11,(__Vtemp28027),4160);
        __Vtemp28030[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28030[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28030[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28030[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28030[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28030[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28030[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28030[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28030[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+141,(__Vtemp28030),260);
        __Vtemp28033[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28033[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28033[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28033[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28033[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28033[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28033[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28033[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28033[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+150,(__Vtemp28033),260);
    }
}

void VTestHarness::traceChgThis__4908(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37784);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28049[9];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor_io_in_d_valid));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_4_d_ready) 
                              | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop))));
        vcdp->chgBit(oldp+4,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                       >> 2U)))));
        __Vtemp28049[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28049[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28049[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28049[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28049[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28049[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28049[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28049[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28049[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+5,(__Vtemp28049),260);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size),3);
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_repeat));
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size),3);
        vcdp->chgCData(oldp+18,((7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source))),3);
        vcdp->chgBit(oldp+19,((0U == (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source)))));
        vcdp->chgCData(oldp+20,((0xfU & ((IData)(1U) 
                                         << (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))),4);
        vcdp->chgCData(oldp+21,((7U & (~ (0x3fU & ((IData)(7U) 
                                                   << 
                                                   (3U 
                                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->chgBit(oldp+22,((1U & ((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode)) 
                                     | (1U & (((IData)(1U) 
                                               << (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                              >> 3U))))));
        vcdp->chgCData(oldp+23,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6) 
                                       >> 4U))),3);
        vcdp->chgCData(oldp+24,((0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_6))),4);
        vcdp->chgCData(oldp+25,((3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_8) 
                                       >> 2U))),2);
        vcdp->chgCData(oldp+26,((3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___dFirst_size_T_8))),2);
        vcdp->chgCData(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst_size),3);
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop));
        vcdp->chgBit(oldp+29,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar_auto_out_5_d_ready) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop))));
    }
}

void VTestHarness::traceChgThis__4910(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37814);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28057[9];
    WData/*287:0*/ __Vtemp28058[9];
    WData/*287:0*/ __Vtemp28061[9];
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag),3);
        vcdp->chgCData(oldp+1,((0x3fU & (~ (0x1fffU 
                                            & ((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_size)))))),6);
        vcdp->chgCData(oldp+2,((7U & (~ (0x3ffU & ((IData)(7U) 
                                                   << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag)))))),3);
        vcdp->chgBit(oldp+3,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode) 
                                       >> 2U)))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__old_gennum1),3);
        vcdp->chgBit(oldp+5,((((((((0x24U == (0x7fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                 >> 4U))) 
                                   | (1U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                   >> 8U)))) 
                                  | (0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                  >> 8U)))) 
                                 | (0x20U == (0x7fU 
                                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                 >> 4U)))) 
                                | (0x21U == (0x7fU 
                                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (0x22U == (0x7fU & 
                                            ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                             >> 4U)))) 
                              | (0x40U == (0x7fU & 
                                           ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_source) 
                                            >> 4U))))));
        vcdp->chgCData(oldp+6,((7U & (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor_io_in_d_bits_size)) 
                                                   >> 3U))))),3);
        __Vtemp28057[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vtemp28057[1U] = 0U;
        __Vtemp28057[2U] = 0U;
        __Vtemp28057[3U] = 0U;
        __Vtemp28057[4U] = 0U;
        __Vtemp28057[5U] = 0U;
        __Vtemp28057[6U] = 0U;
        __Vtemp28057[7U] = 0U;
        __Vtemp28057[8U] = 0U;
        VL_EXTEND_WW(260,259, __Vtemp28058, __Vtemp28057);
        vcdp->chgCData(oldp+7,((0xfU & __Vtemp28058[0U])),4);
        __Vtemp28061[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28061[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28061[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28061[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28061[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28061[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28061[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28061[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28061[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+8,(__Vtemp28061),260);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done));
    }
}

void VTestHarness::traceChgThis__4912(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+37832);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*287:0*/ __Vtemp28076[9];
    WData/*4159:0*/ __Vtemp28077[130];
    WData/*287:0*/ __Vtemp28080[9];
    WData/*4159:0*/ __Vtemp28081[130];
    WData/*287:0*/ __Vtemp28084[9];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vtemp28076[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28076[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28076[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28076[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28076[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28076[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28076[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28076[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28076[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+0,(__Vtemp28076),260);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter_auto_out_d_ready));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28077[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+11,(__Vtemp28077),4160);
        vcdp->chgBit(oldp+141,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty));
        vcdp->chgBit(oldp+142,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__do_deq));
        vcdp->chgBit(oldp+143,((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full)) 
                                      & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty))))));
        vcdp->chgBit(oldp+144,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full));
        vcdp->chgBit(oldp+145,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
        vcdp->chgBit(oldp+146,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        __Vtemp28080[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28080[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28080[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28080[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28080[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28080[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28080[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28080[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28080[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+147,(__Vtemp28080),260);
        vcdp->chgBit(oldp+156,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter_auto_out_d_ready));
        vcdp->chgBit(oldp+157,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28081[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+158,(__Vtemp28081),4160);
        vcdp->chgBit(oldp+288,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq));
        __Vtemp28084[0U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[0U];
        __Vtemp28084[1U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[1U];
        __Vtemp28084[2U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[2U];
        __Vtemp28084[3U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[3U];
        __Vtemp28084[4U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[4U];
        __Vtemp28084[5U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[5U];
        __Vtemp28084[6U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[6U];
        __Vtemp28084[7U] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[7U];
        __Vtemp28084[8U] = (0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___GEN_23[8U]);
        vcdp->chgWData(oldp+289,(__Vtemp28084),260);
        vcdp->chgBit(oldp+298,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ibuf_io_imem_ready));
        vcdp->chgBit(oldp+299,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen));
        vcdp->chgBit(oldp+300,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_1));
        vcdp->chgBit(oldp+301,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_2));
        vcdp->chgBit(oldp+302,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_3));
        vcdp->chgBit(oldp+303,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__frontend__DOT__fq__DOT__wen_4));
        vcdp->chgBit(oldp+304,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld)))));
        vcdp->chgBit(oldp+305,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_csr_stall));
        vcdp->chgBit(oldp+306,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_stalld));
        vcdp->chgBit(oldp+307,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__exception));
        vcdp->chgBit(oldp+308,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_csr_stall)))));
        vcdp->chgCData(oldp+309,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__nextSmall_1),7);
        vcdp->chgBit(oldp+310,((1U & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0) 
                                        | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1))
                                        ? (3U & ((IData)(1U) 
                                                 << 
                                                 (1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                                             [0U] 
                                                             >> 0x20U)))))
                                        : 0U) >> 1U))));
        vcdp->chgBit(oldp+311,((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))));
        vcdp->chgBit(oldp+312,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
                                 ? 0U : (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1)))));
    }
}

void VTestHarness::traceChgThis__4915(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38145);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))));
        vcdp->chgBit(oldp+1,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
                               ? 0U : (1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1)))));
        vcdp->chgQData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask),64);
        vcdp->chgBit(oldp+4,((0U != (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                             >> 0x20U)))));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_9));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_f_roready_12));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9));
        vcdp->chgBit(oldp+8,((0xffffffffU == (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                      >> 0x20U)))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9) 
                              & (0xffffffffU == (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                         >> 0x20U))))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12) 
                               & (0xffffffffU == (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                                          >> 0x20U))))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0));
        vcdp->chgCData(oldp+14,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__completer_1))
                                  ? (3U & ((IData)(1U) 
                                           << (1U & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_data
                                                             [0U] 
                                                             >> 0x20U)))))
                                  : 0U)),2);
        vcdp->chgBit(oldp+15,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->chgBit(oldp+16,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                             >> 1U)))));
        vcdp->chgBit(oldp+17,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask 
                                             >> 0x20U)))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_9) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_woready_12) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_backMask))));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__d_first_done));
    }
}

void VTestHarness::traceChgThis__4917(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38166);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28094[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28094[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+0,(__Vtemp28094),4160);
        vcdp->chgCData(oldp+130,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1),2);
        vcdp->chgCData(oldp+131,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))
                                   ? 2U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin__DOT__effectivePriority_1))),2);
        vcdp->chgCData(oldp+132,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1),2);
        vcdp->chgCData(oldp+133,(((2U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))
                                   ? 2U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__fanin_1__DOT__effectivePriority_1))),2);
        vcdp->chgSData(oldp+134,((0x1fffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                             >> 3U))),13);
        vcdp->chgCData(oldp+135,((3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                        >> 0xeU))),2);
        vcdp->chgSData(oldp+136,((0x7ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 3U))),13);
        vcdp->chgBit(oldp+137,((1U & (((IData)(1U) 
                                       << (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                 >> 0xeU))) 
                                      >> 1U))));
        vcdp->chgBit(oldp+138,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_0));
        vcdp->chgQData(oldp+139,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask),64);
        vcdp->chgBit(oldp+141,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)))));
        vcdp->chgBit(oldp+142,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready));
        vcdp->chgBit(oldp+143,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                           >> 8U))))));
        vcdp->chgBit(oldp+144,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1));
        vcdp->chgBit(oldp+145,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                           >> 0x10U))))));
        vcdp->chgBit(oldp+146,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2));
        vcdp->chgBit(oldp+147,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                           >> 0x18U))))));
        vcdp->chgBit(oldp+148,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3));
        vcdp->chgBit(oldp+149,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                           >> 0x20U))))));
        vcdp->chgBit(oldp+150,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4));
        vcdp->chgBit(oldp+151,((0xffU == (0xffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                           >> 0x28U))))));
        vcdp->chgBit(oldp+152,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5));
    }
}

void VTestHarness::traceChgThis__4919(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38319);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0xffU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                         >> 0x30U))))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6));
        vcdp->chgBit(oldp+2,((0xffU == (0xffU & (IData)(
                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask 
                                                         >> 0x38U))))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7));
        vcdp->chgCData(oldp+4,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_1)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 8U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                     >> 8U))))),8);
        vcdp->chgCData(oldp+5,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready)
                                          ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                          : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0)))),8);
        vcdp->chgCData(oldp+6,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_3)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 0x18U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                     >> 0x18U))))),8);
        vcdp->chgCData(oldp+7,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_2)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 0x10U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                     >> 0x10U))))),8);
        vcdp->chgCData(oldp+8,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_5)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 0x28U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                     >> 0x28U))))),8);
        vcdp->chgCData(oldp+9,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_4)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 0x20U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                     >> 0x20U))))),8);
        vcdp->chgCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_7)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x38U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x38U))))),8);
        vcdp->chgCData(oldp+11,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_6)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x30U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__timecmp_0 
                                                      >> 0x30U))))),8);
    }
}

void VTestHarness::traceChgThis__4921(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38331);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                            >> 0xeU))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_woready_8));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15));
        vcdp->chgCData(oldp+10,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_9)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 8U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 8U))))),8);
        vcdp->chgCData(oldp+11,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_8)
                                           ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data)
                                           : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_)))),8);
        vcdp->chgCData(oldp+12,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_11)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x18U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x18U))))),8);
        vcdp->chgCData(oldp+13,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_10)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x10U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x10U))))),8);
        vcdp->chgCData(oldp+14,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_13)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x28U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x28U))))),8);
        vcdp->chgCData(oldp+15,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_12)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x20U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x20U))))),8);
        vcdp->chgCData(oldp+16,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_15)
                                           ? (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                      >> 0x38U))
                                           : (IData)(
                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                      >> 0x38U))))),8);
    }
}

void VTestHarness::traceChgThis__4923(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38348);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_f_woready_14)
                                          ? (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                     >> 0x30U))
                                          : (IData)(
                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__time_ 
                                                     >> 0x30U))))),8);
        vcdp->chgBit(oldp+1,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask))));
        vcdp->chgBit(oldp+2,((1U & ((IData)(1U) << 
                                    (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                           >> 0xeU))))));
        vcdp->chgBit(oldp+3,((0xfU & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                                        & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                       & ((IData)(1U) 
                                          << (3U & 
                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                               >> 0xeU)))) 
                                      & (0U == (0x7ffU 
                                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                   >> 3U)))))));
        vcdp->chgBit(oldp+4,((0xfU & ((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid) 
                                          & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready)) 
                                         & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode))) 
                                        & ((IData)(1U) 
                                           << (3U & 
                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                >> 0xeU)))) 
                                       & (0U == (0x7ffU 
                                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                                    >> 3U)))) 
                                      & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__out_backMask)))));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 2U))));
        vcdp->chgBit(oldp+6,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 2U)))));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+9,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                    >> 1U))));
    }
}

void VTestHarness::traceChgThis__4925(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38358);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address 
                                       >> 1U)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+9,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+10,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_2) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
    }
}

void VTestHarness::traceChgThis__4927(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38377);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28098[130];
    WData/*255:0*/ __Vtemp28099[8];
    WData/*255:0*/ __Vtemp28100[8];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address)));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__mask),8);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28098[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+11,(__Vtemp28098),4160);
        vcdp->chgSData(oldp+141,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U))),9);
        vcdp->chgCData(oldp+142,((0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           >> 3U))),8);
        vcdp->chgSData(oldp+143,((0x100U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                            >> 3U))),9);
        __Vtemp28099[0U] = 1U;
        __Vtemp28099[1U] = 0U;
        __Vtemp28099[2U] = 0U;
        __Vtemp28099[3U] = 0U;
        __Vtemp28099[4U] = 0U;
        __Vtemp28099[5U] = 0U;
        __Vtemp28099[6U] = 0U;
        __Vtemp28099[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28100, __Vtemp28099, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+144,((1U & (__Vtemp28100[1U] 
                                      >> 1U))));
    }
}

void VTestHarness::traceChgThis__4929(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38522);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28105[8];
    WData/*255:0*/ __Vtemp28106[8];
    WData/*255:0*/ __Vtemp28107[8];
    WData/*255:0*/ __Vtemp28108[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_345));
        vcdp->chgQData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1),64);
        vcdp->chgBit(oldp+3,((0x3ffU == (0x3ffU & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                           >> 0x20U))))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_449));
        vcdp->chgBit(oldp+5,((0x3ffU == (0x3ffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_448));
        __Vtemp28105[0U] = 1U;
        __Vtemp28105[1U] = 0U;
        __Vtemp28105[2U] = 0U;
        __Vtemp28105[3U] = 0U;
        __Vtemp28105[4U] = 0U;
        __Vtemp28105[5U] = 0U;
        __Vtemp28105[6U] = 0U;
        __Vtemp28105[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28106, __Vtemp28105, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+7,((1U & __Vtemp28106[1U])));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_f_woready_631));
        vcdp->chgSData(oldp+10,((0x3ffU & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                                   >> 0x20U)))),10);
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_woready_1_527) 
                               & (0x3ffU == (0x3ffU 
                                             & (IData)(
                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                        >> 0x20U)))))));
        vcdp->chgBit(oldp+12,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1)))));
        vcdp->chgBit(oldp+13,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 8U))))));
        vcdp->chgBit(oldp+14,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x10U))))));
        vcdp->chgBit(oldp+15,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x18U))))));
        vcdp->chgBit(oldp+16,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x20U))))));
        vcdp->chgBit(oldp+17,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x28U))))));
        vcdp->chgBit(oldp+18,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x30U))))));
        vcdp->chgBit(oldp+19,((0xffU == (0xffU & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                          >> 0x38U))))));
        __Vtemp28107[0U] = 1U;
        __Vtemp28107[1U] = 0U;
        __Vtemp28107[2U] = 0U;
        __Vtemp28107[3U] = 0U;
        __Vtemp28107[4U] = 0U;
        __Vtemp28107[5U] = 0U;
        __Vtemp28107[6U] = 0U;
        __Vtemp28107[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28108, __Vtemp28107, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+20,((1U & (__Vtemp28108[3U] 
                                     >> 0xeU))));
    }
}

void VTestHarness::traceChgThis__4931(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38543);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28111[8];
    WData/*255:0*/ __Vtemp28112[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_104) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28111[0U] = 1U;
        __Vtemp28111[1U] = 0U;
        __Vtemp28111[2U] = 0U;
        __Vtemp28111[3U] = 0U;
        __Vtemp28111[4U] = 0U;
        __Vtemp28111[5U] = 0U;
        __Vtemp28111[6U] = 0U;
        __Vtemp28111[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28112, __Vtemp28111, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+9,((1U & (__Vtemp28112[3U] 
                                    >> 0xaU))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
    }
}

void VTestHarness::traceChgThis__4933(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38557);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28115[8];
    WData/*255:0*/ __Vtemp28116[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_200) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28115[0U] = 1U;
        __Vtemp28115[1U] = 0U;
        __Vtemp28115[2U] = 0U;
        __Vtemp28115[3U] = 0U;
        __Vtemp28115[4U] = 0U;
        __Vtemp28115[5U] = 0U;
        __Vtemp28115[6U] = 0U;
        __Vtemp28115[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28116, __Vtemp28115, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+5,((1U & (__Vtemp28116[3U] 
                                    >> 0xdU))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
    }
}

void VTestHarness::traceChgThis__4935(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38571);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28121[8];
    WData/*255:0*/ __Vtemp28122[8];
    WData/*255:0*/ __Vtemp28123[8];
    WData/*255:0*/ __Vtemp28124[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_410) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28121[0U] = 1U;
        __Vtemp28121[1U] = 0U;
        __Vtemp28121[2U] = 0U;
        __Vtemp28121[3U] = 0U;
        __Vtemp28121[4U] = 0U;
        __Vtemp28121[5U] = 0U;
        __Vtemp28121[6U] = 0U;
        __Vtemp28121[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28122, __Vtemp28121, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+1,((1U & (__Vtemp28122[3U] 
                                    >> 9U))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_491) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28123[0U] = 1U;
        __Vtemp28123[1U] = 0U;
        __Vtemp28123[2U] = 0U;
        __Vtemp28123[3U] = 0U;
        __Vtemp28123[4U] = 0U;
        __Vtemp28123[5U] = 0U;
        __Vtemp28123[6U] = 0U;
        __Vtemp28123[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28124, __Vtemp28123, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+11,((1U & (__Vtemp28124[3U] 
                                     >> 0xcU))));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
    }
}

void VTestHarness::traceChgThis__4937(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38585);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28127[8];
    WData/*255:0*/ __Vtemp28128[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_731) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28127[0U] = 1U;
        __Vtemp28127[1U] = 0U;
        __Vtemp28127[2U] = 0U;
        __Vtemp28127[3U] = 0U;
        __Vtemp28127[4U] = 0U;
        __Vtemp28127[5U] = 0U;
        __Vtemp28127[6U] = 0U;
        __Vtemp28127[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28128, __Vtemp28127, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+7,((1U & (__Vtemp28128[3U] 
                                    >> 0x10U))));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x18U)))))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x20U)))))));
    }
}

void VTestHarness::traceChgThis__4939(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38599);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28133[8];
    WData/*255:0*/ __Vtemp28134[8];
    WData/*255:0*/ __Vtemp28135[8];
    WData/*255:0*/ __Vtemp28136[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_811) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28133[0U] = 1U;
        __Vtemp28133[1U] = 0U;
        __Vtemp28133[2U] = 0U;
        __Vtemp28133[3U] = 0U;
        __Vtemp28133[4U] = 0U;
        __Vtemp28133[5U] = 0U;
        __Vtemp28133[6U] = 0U;
        __Vtemp28133[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28134, __Vtemp28133, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+3,((1U & (__Vtemp28134[3U] 
                                    >> 8U))));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x28U)))))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x30U)))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_931) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x38U)))))));
        __Vtemp28135[0U] = 1U;
        __Vtemp28135[1U] = 0U;
        __Vtemp28135[2U] = 0U;
        __Vtemp28135[3U] = 0U;
        __Vtemp28135[4U] = 0U;
        __Vtemp28135[5U] = 0U;
        __Vtemp28135[6U] = 0U;
        __Vtemp28135[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28136, __Vtemp28135, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+13,((1U & (__Vtemp28136[3U] 
                                     >> 0xbU))));
    }
}

void VTestHarness::traceChgThis__4941(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38613);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28139[8];
    WData/*255:0*/ __Vtemp28140[8];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 8U)))))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x10U)))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1067) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        __Vtemp28139[0U] = 1U;
        __Vtemp28139[1U] = 0U;
        __Vtemp28139[2U] = 0U;
        __Vtemp28139[3U] = 0U;
        __Vtemp28139[4U] = 0U;
        __Vtemp28139[5U] = 0U;
        __Vtemp28139[6U] = 0U;
        __Vtemp28139[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28140, __Vtemp28139, 
                      (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                >> 3U)));
        vcdp->chgBit(oldp+9,((1U & (__Vtemp28140[3U] 
                                    >> 0xfU))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1))))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 8U)))))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                               & (0xffU == (0xffU & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                             >> 0x10U)))))));
    }
}

void VTestHarness::traceChgThis__4943(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38627);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x18U)))))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x20U)))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x28U)))))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x30U)))))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_wivalid_1_1139) 
                              & (0xffU == (0xffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__out_backMask_1 
                                                            >> 0x38U)))))));
        vcdp->chgBit(oldp+5,((0U == (7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                           & (~ (0x3fU 
                                                 & ((IData)(7U) 
                                                    << 
                                                    (3U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))))));
        vcdp->chgCData(oldp+6,((7U & (1U | (0xfU & 
                                            ((IData)(1U) 
                                             << (3U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))))))),3);
        vcdp->chgBit(oldp+7,((1U & (((IData)(1U) << 
                                     (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                    >> 2U))));
        vcdp->chgBit(oldp+8,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                    >> 2U))));
        vcdp->chgBit(oldp+9,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 2U)))));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1));
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << 
                                      (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
                                     >> 1U))));
    }
}

void VTestHarness::traceChgThis__4945(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38640);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                    >> 1U))));
        vcdp->chgBit(oldp+1,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address) 
                                       >> 1U)))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5));
        vcdp->chgBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+11,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+16,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+17,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->chgBit(oldp+18,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3) 
                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
    }
}

void VTestHarness::traceChgThis__4947(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38660);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28142[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter_auto_out_a_bits_address)))));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask),8);
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__a_first_done));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__d_first_done));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28142[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+13,(__Vtemp28142),4160);
        vcdp->chgBit(oldp+143,((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm) 
                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm)) 
                                | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm)))));
        vcdp->chgBit(oldp+144,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq_io_enq_valid));
        vcdp->chgCData(oldp+145,((0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data))),8);
        vcdp->chgBit(oldp+146,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        vcdp->chgBit(oldp+147,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm));
    }
}

void VTestHarness::traceChgThis__4949(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38808);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask),64);
        vcdp->chgBit(oldp+2,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask))));
        vcdp->chgBit(oldp+5,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                            >> 1U)))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_wivalid_0) 
                              & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                         >> 1U)))));
        vcdp->chgBit(oldp+7,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                            >> 0x20U)))));
        vcdp->chgQData(oldp+8,((((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm)) 
                                 << 0x21U) | (((QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm)) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                                                                  << 1U) 
                                                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm))))))),34);
        vcdp->chgBit(oldp+10,((0x1ffU == (0x1ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                            >> 0x10U))))));
        vcdp->chgBit(oldp+11,((0x1ffU == (0x1ffU & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                            >> 0x30U))))));
        vcdp->chgBit(oldp+12,((0xffffU == (0xffffU 
                                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask)))));
        vcdp->chgBit(oldp+13,((0xffU == (0xffU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask)))));
        vcdp->chgBit(oldp+14,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                             >> 0x1fU)))));
        vcdp->chgBit(oldp+15,((0U != (0xffU & (IData)(
                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__out_frontMask 
                                                       >> 0x20U))))));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq));
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__do_deq));
        vcdp->chgBit(oldp+18,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+19,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->chgBit(oldp+20,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data_io_deq_bits_MPORT_data 
                                             >> 0x20U)))));
        vcdp->chgBit(oldp+21,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5) 
                               & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                          >> 0x20U)))));
    }
}

void VTestHarness::traceChgThis__4951(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38830);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2) 
                              & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                         >> 0x20U)))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0) 
                              & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                         >> 0x20U)))));
        vcdp->chgBit(oldp+4,((1U & ((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                        & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                                       & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                      & (((IData)(1U) 
                                          << (3U & 
                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                               >> 3U))) 
                                         >> 3U)) & 
                                     (0U == (0x1fcU 
                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                >> 3U)))) 
                                    & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask)))));
        vcdp->chgBit(oldp+5,((4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))));
        vcdp->chgSData(oldp+6,((0x1ffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          >> 3U))),9);
        vcdp->chgSData(oldp+7,((0x1fcU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                          >> 3U))),9);
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask),64);
        vcdp->chgBit(oldp+10,((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask))));
        vcdp->chgCData(oldp+11,((3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       >> 3U))),2);
        vcdp->chgBit(oldp+12,((1U & (((IData)(1U) << 
                                      (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                             >> 3U))) 
                                     >> 2U))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_0));
    }
}

void VTestHarness::traceChgThis__4953(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38844);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_frontMask 
                                            >> 0x20U)))));
        vcdp->chgBit(oldp+1,((1U & (((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            >> 3U))) 
                                    >> 1U))));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_2));
        vcdp->chgBit(oldp+3,((1U & (((IData)(1U) << 
                                     (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                            >> 3U))) 
                                    >> 3U))));
        vcdp->chgBit(oldp+4,((1U & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__empty)) 
                                       & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))) 
                                      & (4U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                                     & (((IData)(1U) 
                                         << (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                   >> 3U))) 
                                        >> 3U)) & (0U 
                                                   == 
                                                   (0x1fcU 
                                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                                       >> 3U)))))));
        vcdp->chgBit(oldp+5,((1U & ((IData)(1U) << 
                                    (3U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                           >> 3U))))));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__out_wivalid_5));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                    >> 2U))));
        vcdp->chgBit(oldp+8,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                       >> 2U)))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_1));
        vcdp->chgBit(oldp+11,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                     >> 1U))));
        vcdp->chgBit(oldp+12,((1U & (~ (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data 
                                        >> 1U)))));
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3));
        vcdp->chgBit(oldp+16,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3));
    }
}

void VTestHarness::traceChgThis__4955(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38861);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5));
        vcdp->chgBit(oldp+4,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->chgBit(oldp+5,((1U & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+6,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->chgBit(oldp+8,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->chgBit(oldp+9,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_2) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_2) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+10,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+11,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->chgBit(oldp+12,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                               & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->chgBit(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_3) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_3) 
                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+14,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                               & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+15,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                                  & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
    }
}

void VTestHarness::traceChgThis__4957(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+38877);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28144[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_4) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_4) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                              & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgBit(oldp+3,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                                 & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)))));
        vcdp->chgBit(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data)));
        vcdp->chgBit(oldp+5,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask_eq_5) 
                                 & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data))));
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__mask),8);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__d_first_done));
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28144[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+9,(__Vtemp28144),4160);
    }
}

void VTestHarness::traceChgThis__4958(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39016);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgQData(oldp+0,((VL_ULL(0x8000000000000000) 
                                + (QData)((IData)(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)
                                                    ? 0xeU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                >> 0xfU)))
                                                     ? 0xfU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                 >> 0xeU)))
                                                      ? 0xeU
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                  >> 0xdU)))
                                                       ? 0xdU
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                   >> 0xcU)))
                                                        ? 0xcU
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                    >> 0xbU)))
                                                         ? 0xbU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                     >> 3U)))
                                                          ? 3U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                      >> 7U)))
                                                           ? 7U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                       >> 9U)))
                                                            ? 9U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                        >> 1U)))
                                                             ? 1U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                         >> 5U)))
                                                              ? 5U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                          >> 0xaU)))
                                                               ? 0xaU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                           >> 2U)))
                                                                ? 2U
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                            >> 6U)))
                                                                 ? 6U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                             >> 8U)))
                                                                  ? 8U
                                                                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___which_T_95)))))))))))))))))))),64);
        vcdp->chgCData(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__intsink__DOT__chain__DOT__output_chain__DOT__sync_0)
                                 ? 0xeU : ((1U & (IData)(
                                                         (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                          >> 0xfU)))
                                            ? 0xfU : 
                                           ((1U & (IData)(
                                                          (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                           >> 0xeU)))
                                             ? 0xeU
                                             : ((1U 
                                                 & (IData)(
                                                           (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                            >> 0xdU)))
                                                 ? 0xdU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                             >> 0xcU)))
                                                  ? 0xcU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                              >> 0xbU)))
                                                   ? 0xbU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                               >> 3U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                >> 7U)))
                                                     ? 7U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                 >> 9U)))
                                                      ? 9U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                  >> 1U)))
                                                       ? 1U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                   >> 5U)))
                                                        ? 5U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                    >> 0xaU)))
                                                         ? 0xaU
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                     >> 2U)))
                                                          ? 2U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                      >> 6U)))
                                                           ? 6U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts 
                                                                       >> 8U)))
                                                            ? 8U
                                                            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___which_T_95))))))))))))))))),4);
    }
}

void VTestHarness::traceChgThis__4960(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39019);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx_incremented),4);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__ridx),4);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__index),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented),4);
        vcdp->chgCData(oldp+4,(((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                ^ (7U & ((IData)(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__widx_incremented) 
                                         >> 1U)))),4);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__bits_in_queue__DOT__source__DOT__index),3);
    }
}

void VTestHarness::traceChgThis__4962(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39025);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_implicit_clock_reset_catcher_io_sync_reset));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_pbus_0_reset_catcher_io_sync_reset));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system_debug_systemjtag_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain_reset));
    }
}

void VTestHarness::traceChgThis__4963(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39029);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_a_valid));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_a_valid));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source_io_enq_ready));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source_io_enq_ready));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_capture_bits_dmiStatus),2);
        vcdp->chgIData(oldp+6,((0x5071U | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_capture_bits_dmiStatus) 
                                           << 0xaU))),32);
    }
}

void VTestHarness::traceChgThis__4964(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39036);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)
                               ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_valid)
                               : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink_io_deq_valid))));
        vcdp->chgBit(oldp+1,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT__widx_widx_bin) 
                                 + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleOut_0_a_source__DOT___widx_T_1)))));
    }
}

void VTestHarness::traceChgThis__4965(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39038);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT__widx_widx_bin) 
                                 + (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__io_innerCtrl_source__DOT___widx_T_1)))));
    }
}

void VTestHarness::traceChgThis__4966(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39039);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore));
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler_next),13);
    }
}

void VTestHarness::traceChgThis__4967(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39041);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core_io_fpu_valid));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr_io_interrupt));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__id_xcpt));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__ctrl_killd));
        vcdp->chgQData(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__pending_interrupts),64);
        vcdp->chgQData(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__m_interrupts),64);
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts),64);
        vcdp->chgBit(oldp+10,((1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT___any_T_108) 
                                     | (IData)((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__csr__DOT__s_interrupts 
                                                >> 4U))))));
    }
}

void VTestHarness::traceChgThis__4968(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39052);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*4159:0*/ __Vtemp28156[130];
    WData/*4159:0*/ __Vtemp28157[130];
    WData/*4159:0*/ __Vtemp28158[130];
    IData/*31:0*/ __Vilp;
    // Body
    {
        __Vtemp28156[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___a_opcode_lookup_T_1[0U] 
                                  >> 1U));
        __Vilp = 1U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28156[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
        VL_EXTEND_WW(4160,4159, __Vtemp28157, __Vtemp28156);
        vcdp->chgCData(oldp+0,((0xfU & __Vtemp28157[0U])),4);
        __Vilp = 0U;
        while ((__Vilp <= 0x81U)) {
            __Vtemp28158[__Vilp] = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT___GEN_23[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vcdp->chgWData(oldp+1,(__Vtemp28158),4160);
    }
}

void VTestHarness::traceChgThis__4969(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39183);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data),32);
        vcdp->chgBit(oldp+1,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 1U))));
        vcdp->chgBit(oldp+2,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 0x1fU))));
        vcdp->chgBit(oldp+3,((1U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data)));
        vcdp->chgBit(oldp+4,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 2U))));
        vcdp->chgBit(oldp+5,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 3U))));
        vcdp->chgBit(oldp+6,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 0x1cU))));
        vcdp->chgBit(oldp+7,((1U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                    >> 0x1eU))));
    }
}

void VTestHarness::traceChgThis__4971(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39191);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__DMCONTROLReg_dmactive) 
                              & ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6) 
                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl_auto_out_a_bits_data 
                                        >> 2U))) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT___GEN_23)))));
    }
}

void VTestHarness::traceChgThis__4972(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39192);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset));
        vcdp->chgBit(oldp+1,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__debug_reset_syncd_debug_reset_sync__DOT__output_chain_reset)))));
    }
}

void VTestHarness::traceChgThis__4973(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39194);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT___T)))));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT___T));
    }
}

void VTestHarness::traceChgThis__4974(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39196);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T),2);
        vcdp->chgBit(oldp+2,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_bits_denied))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_valid));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_d_bits_denied));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_a_valid));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass_io_bypass));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_size),2);
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_sink));
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_valid),2);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_filter),4);
        vcdp->chgCData(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__readys_unready),4);
        vcdp->chgCData(oldp+16,((3U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2)))),2);
        vcdp->chgBit(oldp+17,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2)))));
        vcdp->chgBit(oldp+18,((1U & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT___readys_readys_T_2) 
                                        >> 1U)))));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_0));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__earlyWinner_1));
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_0));
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__muxStateEarly_1));
        vcdp->chgBit(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_a_valid));
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_valid));
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+26,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1)
                                  ? 2U : 0U)),2);
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_denied));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error_auto_in_d_bits_corrupt));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_param),2);
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_size),2);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_source));
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_sink));
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall));
        vcdp->chgCData(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode),3);
        vcdp->chgBit(oldp+39,((1U & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                      >> 2U) & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__in_d_bits_opcode) 
                                                   >> 1U))))));
    }
}

void VTestHarness::traceChgThis__4976(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39236);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgCData(oldp+0,((7U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                      >> 1U))),4);
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_valid));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_opcode),3);
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_d_bits_denied));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__da_valid));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__muxStateEarly_1));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__a_first_done));
        vcdp->chgCData(oldp+7,(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy)
                                 ? 3U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_in_d_valid)
                                          ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmi2tl__DOT___io_dmi_resp_bits_resp_T)
                                          : 0U))),2);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__busy));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__nonzeroResp));
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain__DOT__captureBits),41);
    }
}

void VTestHarness::traceChgThis__4977(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39248);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__stall)) 
                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T_1))));
    }
}

void VTestHarness::traceChgThis__4978(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39249);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm_io_dmi_resp_ready));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_1_d_ready));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_in_a_ready));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar_auto_out_0_d_ready));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_valid));
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_resumereq));
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter_io_innerCtrl_bits_ackhavereset));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_1_d_ready));
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__latch));
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+12,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__out_woready_6));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+16,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar_auto_out_0_d_ready));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3));
        vcdp->chgCData(oldp+21,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__inc),2);
        vcdp->chgCData(oldp+22,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__done_3),2);
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__next_flight),2);
        vcdp->chgBit(oldp+24,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+25,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+26,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor_io_in_a_ready));
        vcdp->chgBit(oldp+28,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_1_ready));
        vcdp->chgBit(oldp+29,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__done));
        vcdp->chgBit(oldp+30,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__a_first_done));
        vcdp->chgBit(oldp+31,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+32,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__d_first_done));
        vcdp->chgCData(oldp+34,((0xfU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_23)),4);
        vcdp->chgBit(oldp+35,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__ridx_incremented));
        vcdp->chgBit(oldp+36,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_shift));
        vcdp->chgBit(oldp+37,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_capture));
        vcdp->chgBit(oldp+38,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_chainIn_update));
        vcdp->chgBit(oldp+39,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dtmInfoChain_io_update_valid));
        vcdp->chgBit(oldp+40,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_shift));
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_capture));
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_chainIn_update));
    }
}

void VTestHarness::traceChgThis__4980(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39292);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__dmiAccessChain_io_update_valid));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_shift));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_capture));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__dtm__DOT__tapIO_idcodeChain_io_chainIn_update));
    }
}

void VTestHarness::traceChgThis__4981(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39296);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TMS));
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TDI));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TRSTn));
        vcdp->chgIData(oldp+4,(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit),32);
        vcdp->chgBit(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving));
        vcdp->chgIData(oldp+6,(vlTOPp->TestHarness__DOT__bits_out_queue__DOT__sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg),32);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending));
        vcdp->chgBit(oldp+8,(((((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)) 
                                | (1U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                               | (2U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))) 
                              | (6U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state)))));
        vcdp->chgBit(oldp+9,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_valid_reg));
        vcdp->chgIData(oldp+10,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fin_bits_reg),32);
        vcdp->chgBit(oldp+11,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fout_ready_reg));
        vcdp->chgBit(oldp+12,((5U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))));
        vcdp->chgIData(oldp+13,(((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx)
                                  ? vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1
                                  : vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)),32);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__success_sim__DOT_____05Fexit_reg));
        vcdp->chgBit(oldp+15,((1U == vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fexit)));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__SimJTAG__DOT_____05Fjtag_TCK)))));
        vcdp->chgIData(oldp+17,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg),32);
        vcdp->chgIData(oldp+18,(((0U == vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg)
                                  ? 3U : (vlTOPp->TestHarness__DOT__SimJTAG__DOT__tickCounterReg 
                                          - (IData)(1U)))),32);
        vcdp->chgBit(oldp+19,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__r_reset));
        vcdp->chgBit(oldp+20,(vlTOPp->TestHarness__DOT__SimJTAG__DOT__init_done_sticky));
        vcdp->chgCData(oldp+21,(((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U)),3);
        vcdp->chgQData(oldp+22,(((7U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? (((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                      << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))
                                  : VL_ULL(0))),64);
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]),8);
        vcdp->chgQData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]),64);
        vcdp->chgBit(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                              [vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param
                                [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]),3);
    }
}

void VTestHarness::traceChgThis__4983(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39325);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*95:0*/ __Vtemp28159[3];
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1]));
        vcdp->chgBit(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_size),2);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source),8);
        vcdp->chgQData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data
                               [vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1]),64);
        vcdp->chgIData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__cmd),32);
        vcdp->chgQData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr),64);
        vcdp->chgQData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len),64);
        vcdp->chgIData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0),32);
        vcdp->chgIData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1),32);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid),2);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__idx));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__state),4);
        vcdp->chgIData(oldp+17,((0x1fffffffU & (IData)(
                                                       (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                        >> 3U)))),29);
        vcdp->chgIData(oldp+18,((0xfffffff8U & (((IData)(1U) 
                                                 + (IData)(
                                                           (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                            >> 3U))) 
                                                << 3U))),32);
        vcdp->chgCData(oldp+19,(((((2U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                    ? 0xfU : 0U) << 4U) 
                                 | ((1U & (IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__bodyValid))
                                     ? 0xfU : 0U))),8);
        __Vtemp28159[0U] = (0xfffffffcU & ((IData)(
                                                   (VL_ULL(1) 
                                                    + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                           << 2U));
        __Vtemp28159[1U] = ((3U & ((IData)((VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len)) 
                                   >> 0x1eU)) | (0xfffffffcU 
                                                 & ((IData)(
                                                            ((VL_ULL(1) 
                                                              + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                                             >> 0x20U)) 
                                                    << 2U)));
        __Vtemp28159[2U] = (3U & ((IData)(((VL_ULL(1) 
                                            + vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__len) 
                                           >> 0x20U)) 
                                  >> 0x1eU));
        vcdp->chgWData(oldp+20,(__Vtemp28159),66);
        vcdp->chgIData(oldp+23,((0xfffffff8U & ((IData)(
                                                        (vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__addr 
                                                         >> 3U)) 
                                                << 3U))),32);
        vcdp->chgQData(oldp+24,((((QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_1)) 
                                  << 0x20U) | (QData)((IData)(vlTOPp->TestHarness__DOT__ram__DOT__adapter__DOT__body_0)))),64);
        vcdp->chgBit(oldp+26,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)))));
        vcdp->chgBit(oldp+27,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__receiving)))));
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1),3);
        vcdp->chgCData(oldp+29,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+30,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_1))));
        vcdp->chgCData(oldp+31,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4),3);
        vcdp->chgCData(oldp+32,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4) 
                                       - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__4985(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39358);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__merged_bits_last_counter_4))));
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter),9);
        vcdp->chgSData(oldp+2,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter) 
                                          - (IData)(1U)))),9);
        vcdp->chgBit(oldp+3,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size),4);
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source));
        vcdp->chgIData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__address),32);
        vcdp->chgSData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter),9);
        vcdp->chgSData(oldp+10,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+11,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__size_1),4);
        vcdp->chgBit(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__source_1));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__sink),4);
        vcdp->chgBit(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__denied));
        vcdp->chgBit(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight));
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes),4);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes),8);
        vcdp->chgSData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1),9);
        vcdp->chgSData(oldp+22,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+23,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgSData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1),9);
        vcdp->chgSData(oldp+25,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+26,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__inflight_sizes_1),8);
        vcdp->chgSData(oldp+29,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2),9);
        vcdp->chgSData(oldp+30,((0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2) 
                                           - (IData)(1U)))),9);
        vcdp->chgBit(oldp+31,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgCData(oldp+32,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__lockIdx),3);
        vcdp->chgBit(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__locked));
        vcdp->chgCData(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount),2);
        vcdp->chgBit(oldp+35,((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sendCount))));
        vcdp->chgIData(oldp+36,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0),32);
        vcdp->chgIData(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_1),32);
        vcdp->chgIData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_2),32);
    }
}

void VTestHarness::traceChgThis__4987(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39397);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*255:0*/ __Vtemp28161[8];
    WData/*255:0*/ __Vtemp28162[8];
    WData/*255:0*/ __Vtemp28165[8];
    WData/*1023:0*/ __Vtemp28168[32];
    WData/*1023:0*/ __Vtemp28171[32];
    WData/*1023:0*/ __Vtemp28172[32];
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_3),32);
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount),2);
        vcdp->chgBit(oldp+2,((3U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__recvCount))));
        vcdp->chgBit(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_read));
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__REG));
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_1),8);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_0),8);
        vcdp->chgCData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_3),8);
        vcdp->chgCData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_2),8);
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_5),8);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_4),8);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_7),8);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_6),8);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+14,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+15,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size),2);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source),8);
        vcdp->chgIData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__address),29);
        vcdp->chgBit(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+22,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+23,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+24,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__size_1),2);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__source_1),8);
        vcdp->chgWData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight),256);
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->chgWData(oldp+67,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->chgBit(oldp+99,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+100,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+101,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+102,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+103,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+104,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))));
        __Vtemp28161[0U] = 1U;
        __Vtemp28161[1U] = 0U;
        __Vtemp28161[2U] = 0U;
        __Vtemp28161[3U] = 0U;
        __Vtemp28161[4U] = 0U;
        __Vtemp28161[5U] = 0U;
        __Vtemp28161[6U] = 0U;
        __Vtemp28161[7U] = 0U;
        VL_SHIFTL_WWI(256,256,8, __Vtemp28162, __Vtemp28161, (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source));
        __Vtemp28165[0U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[0U] : 0U);
        __Vtemp28165[1U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[1U] : 0U);
        __Vtemp28165[2U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[2U] : 0U);
        __Vtemp28165[3U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[3U] : 0U);
        __Vtemp28165[4U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[4U] : 0U);
        __Vtemp28165[5U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[5U] : 0U);
        __Vtemp28165[6U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[6U] : 0U);
        __Vtemp28165[7U] = (((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_full) 
                             & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_1)))
                             ? __Vtemp28162[7U] : 0U);
        vcdp->chgWData(oldp+105,(__Vtemp28165),256);
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp28168, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp28171[0U] = (7U & (__Vtemp28168[0U] 
                                  >> 1U));
        __Vtemp28171[1U] = 0U;
        __Vtemp28171[2U] = 0U;
        __Vtemp28171[3U] = 0U;
        __Vtemp28171[4U] = 0U;
        __Vtemp28171[5U] = 0U;
        __Vtemp28171[6U] = 0U;
        __Vtemp28171[7U] = 0U;
        __Vtemp28171[8U] = 0U;
        __Vtemp28171[9U] = 0U;
        __Vtemp28171[0xaU] = 0U;
        __Vtemp28171[0xbU] = 0U;
        __Vtemp28171[0xcU] = 0U;
        __Vtemp28171[0xdU] = 0U;
        __Vtemp28171[0xeU] = 0U;
        __Vtemp28171[0xfU] = 0U;
        __Vtemp28171[0x10U] = 0U;
        __Vtemp28171[0x11U] = 0U;
        __Vtemp28171[0x12U] = 0U;
        __Vtemp28171[0x13U] = 0U;
        __Vtemp28171[0x14U] = 0U;
        __Vtemp28171[0x15U] = 0U;
        __Vtemp28171[0x16U] = 0U;
        __Vtemp28171[0x17U] = 0U;
        __Vtemp28171[0x18U] = 0U;
        __Vtemp28171[0x19U] = 0U;
        __Vtemp28171[0x1aU] = 0U;
        __Vtemp28171[0x1bU] = 0U;
        __Vtemp28171[0x1cU] = 0U;
        __Vtemp28171[0x1dU] = 0U;
        __Vtemp28171[0x1eU] = 0U;
        __Vtemp28171[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp28172, __Vtemp28171);
        vcdp->chgCData(oldp+113,((0xfU & __Vtemp28172[0U])),4);
    }
}

void VTestHarness::traceChgThis__4990(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39511);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Variables
    // Begin mtask footprint all: 
    WData/*1023:0*/ __Vtemp28194[32];
    WData/*1023:0*/ __Vtemp28197[32];
    WData/*1023:0*/ __Vtemp28198[32];
    // Body
    {
        vcdp->chgIData(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_1),256);
        vcdp->chgWData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1),1024);
        vcdp->chgBit(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+42,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+43,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__d_first_counter_2)))));
        VL_SHIFTR_WWI(1024,1024,11, __Vtemp28194, vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__r_source) 
                       << 2U));
        __Vtemp28197[0U] = (7U & (__Vtemp28194[0U] 
                                  >> 1U));
        __Vtemp28197[1U] = 0U;
        __Vtemp28197[2U] = 0U;
        __Vtemp28197[3U] = 0U;
        __Vtemp28197[4U] = 0U;
        __Vtemp28197[5U] = 0U;
        __Vtemp28197[6U] = 0U;
        __Vtemp28197[7U] = 0U;
        __Vtemp28197[8U] = 0U;
        __Vtemp28197[9U] = 0U;
        __Vtemp28197[0xaU] = 0U;
        __Vtemp28197[0xbU] = 0U;
        __Vtemp28197[0xcU] = 0U;
        __Vtemp28197[0xdU] = 0U;
        __Vtemp28197[0xeU] = 0U;
        __Vtemp28197[0xfU] = 0U;
        __Vtemp28197[0x10U] = 0U;
        __Vtemp28197[0x11U] = 0U;
        __Vtemp28197[0x12U] = 0U;
        __Vtemp28197[0x13U] = 0U;
        __Vtemp28197[0x14U] = 0U;
        __Vtemp28197[0x15U] = 0U;
        __Vtemp28197[0x16U] = 0U;
        __Vtemp28197[0x17U] = 0U;
        __Vtemp28197[0x18U] = 0U;
        __Vtemp28197[0x19U] = 0U;
        __Vtemp28197[0x1aU] = 0U;
        __Vtemp28197[0x1bU] = 0U;
        __Vtemp28197[0x1cU] = 0U;
        __Vtemp28197[0x1dU] = 0U;
        __Vtemp28197[0x1eU] = 0U;
        __Vtemp28197[0x1fU] = 0U;
        VL_EXTEND_WW(1024,1023, __Vtemp28198, __Vtemp28197);
        vcdp->chgCData(oldp+44,((0xfU & __Vtemp28198[0U])),4);
        vcdp->chgIData(oldp+45,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+46,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+47,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+49,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+50,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+51,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+52,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgCData(oldp+53,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0]),8);
        vcdp->chgQData(oldp+54,((((QData)((IData)((
                                                   (vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram
                                                    [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0] 
                                                    << 0x18U) 
                                                   | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram
                                                       [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0] 
                                                       << 0x10U) 
                                                      | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram
                                                          [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0] 
                                                          << 8U) 
                                                         | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram
                                                         [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0]))))) 
                                  << 0x20U) | (QData)((IData)(
                                                              ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram
                                                                [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                << 0x18U) 
                                                               | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram
                                                                   [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                   << 0x10U) 
                                                                  | ((vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram
                                                                      [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0] 
                                                                      << 8U) 
                                                                     | vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram
                                                                     [vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0]))))))),64);
        vcdp->chgBit(oldp+56,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+57,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0),9);
    }
}

void VTestHarness::traceChgThis__4992(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39569);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0));
        vcdp->chgSData(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__mem__DOT__mem_ext_0__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0),9);
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+15,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+16,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+17,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+19,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size),2);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source),8);
        vcdp->chgIData(oldp+21,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__address),18);
        vcdp->chgBit(oldp+22,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter));
        vcdp->chgBit(oldp+23,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+24,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+25,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__size_1),2);
        vcdp->chgCData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__source_1),8);
        vcdp->chgWData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight),256);
        vcdp->chgWData(oldp+35,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->chgWData(oldp+67,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->chgBit(oldp+99,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+100,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+101,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+102,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+103,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+104,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgIData(oldp+105,(vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__watchdog),32);
        vcdp->chgCData(oldp+106,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft),3);
        vcdp->chgBit(oldp+107,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__beatsLeft))));
        vcdp->chgCData(oldp+108,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask),2);
        vcdp->chgBit(oldp+109,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_0));
        vcdp->chgBit(oldp+110,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__state_1));
        vcdp->chgCData(oldp+111,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter),3);
        vcdp->chgCData(oldp+112,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter) 
                                        - (IData)(1U)))),3);
    }
}

void VTestHarness::traceChgThis__4994(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39682);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))));
        vcdp->chgCData(oldp+1,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size),3);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source),4);
        vcdp->chgIData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address),29);
        vcdp->chgCData(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter),3);
        vcdp->chgCData(oldp+7,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter) 
                                      - (IData)(1U)))),3);
        vcdp->chgBit(oldp+8,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))));
        vcdp->chgCData(oldp+9,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+10,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+11,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1),3);
        vcdp->chgCData(oldp+12,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1),4);
        vcdp->chgBit(oldp+13,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+14,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied));
        vcdp->chgSData(oldp+15,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight),16);
        vcdp->chgQData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes),64);
        vcdp->chgQData(oldp+18,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes),64);
        vcdp->chgCData(oldp+20,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1),3);
        vcdp->chgCData(oldp+21,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+22,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))));
        vcdp->chgCData(oldp+23,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1),3);
        vcdp->chgCData(oldp+24,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+25,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))));
        vcdp->chgIData(oldp+26,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog),32);
        vcdp->chgSData(oldp+27,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_1),16);
        vcdp->chgQData(oldp+28,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes_1),64);
        vcdp->chgCData(oldp+30,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2),3);
        vcdp->chgCData(oldp+31,((7U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U)))),3);
        vcdp->chgBit(oldp+32,((0U == (IData)(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))));
        vcdp->chgIData(oldp+33,(vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgBit(oldp+34,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter));
        vcdp->chgBit(oldp+35,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+36,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))));
        vcdp->chgCData(oldp+37,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode),3);
        vcdp->chgCData(oldp+38,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param),3);
        vcdp->chgCData(oldp+39,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size),2);
        vcdp->chgCData(oldp+40,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source),8);
        vcdp->chgIData(oldp+41,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__address),29);
        vcdp->chgBit(oldp+42,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter));
    }
}

void VTestHarness::traceChgThis__4996(VTestHarness__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* oldp = vcdp->oldp(code+39725);
    if (false && vcdp && oldp) {}  // Prevent unused
    // Body
    {
        vcdp->chgBit(oldp+0,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter) 
                                    - (IData)(1U)))));
        vcdp->chgBit(oldp+1,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter)))));
        vcdp->chgCData(oldp+2,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__opcode_1),3);
        vcdp->chgCData(oldp+3,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__param_1),2);
        vcdp->chgCData(oldp+4,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__size_1),2);
        vcdp->chgCData(oldp+5,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__source_1),8);
        vcdp->chgBit(oldp+6,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__sink));
        vcdp->chgBit(oldp+7,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__denied));
        vcdp->chgWData(oldp+8,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight),256);
        vcdp->chgWData(oldp+16,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_opcodes),1024);
        vcdp->chgWData(oldp+48,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes),1024);
        vcdp->chgBit(oldp+80,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1));
        vcdp->chgBit(oldp+81,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+82,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)))));
        vcdp->chgBit(oldp+83,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1));
        vcdp->chgBit(oldp+84,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1) 
                                     - (IData)(1U)))));
        vcdp->chgBit(oldp+85,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_1)))));
        vcdp->chgIData(oldp+86,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog),32);
        vcdp->chgWData(oldp+87,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_1),256);
        vcdp->chgWData(oldp+95,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1),1024);
        vcdp->chgBit(oldp+127,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2));
        vcdp->chgBit(oldp+128,((1U & ((IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                      - (IData)(1U)))));
        vcdp->chgBit(oldp+129,((1U & (~ (IData)(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__d_first_counter_2)))));
        vcdp->chgIData(oldp+130,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__watchdog_1),32);
        vcdp->chgCData(oldp+131,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+132,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+133,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1));
        vcdp->chgBit(oldp+134,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value));
        vcdp->chgCData(oldp+135,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[0]),3);
        vcdp->chgCData(oldp+136,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_param[1]),3);
        vcdp->chgCData(oldp+137,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[0]),2);
        vcdp->chgCData(oldp+138,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_size[1]),2);
        vcdp->chgCData(oldp+139,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[0]),8);
        vcdp->chgCData(oldp+140,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[1]),8);
        vcdp->chgIData(oldp+141,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[0]),29);
        vcdp->chgIData(oldp+142,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_address[1]),29);
        vcdp->chgCData(oldp+143,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0]),8);
        vcdp->chgCData(oldp+144,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask[1]),8);
        vcdp->chgQData(oldp+145,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+147,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+149,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+150,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[1]));
        vcdp->chgBit(oldp+151,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleOut_0_a_q__DOT__maybe_full));
        vcdp->chgCData(oldp+152,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[0]),3);
        vcdp->chgCData(oldp+153,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[1]),3);
        vcdp->chgBit(oldp+154,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value_1));
        vcdp->chgBit(oldp+155,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__value));
        vcdp->chgCData(oldp+156,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[0]),2);
        vcdp->chgCData(oldp+157,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[1]),2);
        vcdp->chgCData(oldp+158,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[0]),2);
        vcdp->chgCData(oldp+159,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[1]),2);
        vcdp->chgCData(oldp+160,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[0]),8);
        vcdp->chgCData(oldp+161,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[1]),8);
        vcdp->chgBit(oldp+162,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[0]));
        vcdp->chgBit(oldp+163,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink[1]));
        vcdp->chgBit(oldp+164,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[0]));
        vcdp->chgBit(oldp+165,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[1]));
        vcdp->chgQData(oldp+166,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[0]),64);
        vcdp->chgQData(oldp+168,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[1]),64);
        vcdp->chgBit(oldp+170,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[0]));
        vcdp->chgBit(oldp+171,(vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_corrupt[1]));
    }
}
