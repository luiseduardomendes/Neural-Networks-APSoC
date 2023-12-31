// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

void VTestHarness::_initial__TOP__1(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__1\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp1[5];
    WData/*159:0*/ __Vtemp2[5];
    WData/*159:0*/ __Vtemp3[5];
    WData/*159:0*/ __Vtemp4[5];
    WData/*159:0*/ __Vtemp5[5];
    WData/*159:0*/ __Vtemp6[5];
    WData/*159:0*/ __Vtemp7[5];
    WData/*159:0*/ __Vtemp8[5];
    WData/*159:0*/ __Vtemp9[5];
    WData/*159:0*/ __Vtemp10[5];
    WData/*159:0*/ __Vtemp11[5];
    WData/*159:0*/ __Vtemp12[5];
    // Body
    __Vtemp1[0U] = 0x743d2564U;
    __Vtemp1[1U] = 0x6d656f75U;
    __Vtemp1[2U] = 0x6b5f7469U;
    __Vtemp1[3U] = 0x656c696eU;
    __Vtemp1[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp1),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp2[0U] = 0x743d2564U;
    __Vtemp2[1U] = 0x6d656f75U;
    __Vtemp2[2U] = 0x6b5f7469U;
    __Vtemp2[3U] = 0x656c696eU;
    __Vtemp2[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp2),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp3[0U] = 0x743d2564U;
    __Vtemp3[1U] = 0x6d656f75U;
    __Vtemp3[2U] = 0x6b5f7469U;
    __Vtemp3[3U] = 0x656c696eU;
    __Vtemp3[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp3),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp4[0U] = 0x743d2564U;
    __Vtemp4[1U] = 0x6d656f75U;
    __Vtemp4[2U] = 0x6b5f7469U;
    __Vtemp4[3U] = 0x656c696eU;
    __Vtemp4[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp4),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp5[0U] = 0x743d2564U;
    __Vtemp5[1U] = 0x6d656f75U;
    __Vtemp5[2U] = 0x6b5f7469U;
    __Vtemp5[3U] = 0x656c696eU;
    __Vtemp5[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp5),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp6[0U] = 0x743d2564U;
    __Vtemp6[1U] = 0x6d656f75U;
    __Vtemp6[2U] = 0x6b5f7469U;
    __Vtemp6[3U] = 0x656c696eU;
    __Vtemp6[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp6),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp7[0U] = 0x743d2564U;
    __Vtemp7[1U] = 0x6d656f75U;
    __Vtemp7[2U] = 0x6b5f7469U;
    __Vtemp7[3U] = 0x656c696eU;
    __Vtemp7[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp7),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp8[0U] = 0x743d2564U;
    __Vtemp8[1U] = 0x6d656f75U;
    __Vtemp8[2U] = 0x6b5f7469U;
    __Vtemp8[3U] = 0x656c696eU;
    __Vtemp8[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp8),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp9[0U] = 0x743d2564U;
    __Vtemp9[1U] = 0x6d656f75U;
    __Vtemp9[2U] = 0x6b5f7469U;
    __Vtemp9[3U] = 0x656c696eU;
    __Vtemp9[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp9),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp10[0U] = 0x743d2564U;
    __Vtemp10[1U] = 0x6d656f75U;
    __Vtemp10[2U] = 0x6b5f7469U;
    __Vtemp10[3U] = 0x656c696eU;
    __Vtemp10[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp10),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp11[0U] = 0x743d2564U;
    __Vtemp11[1U] = 0x6d656f75U;
    __Vtemp11[2U] = 0x6b5f7469U;
    __Vtemp11[3U] = 0x656c696eU;
    __Vtemp11[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp11),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp12[0U] = 0x743d2564U;
    __Vtemp12[1U] = 0x6d656f75U;
    __Vtemp12[2U] = 0x6b5f7469U;
    __Vtemp12[3U] = 0x656c696eU;
    __Vtemp12[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp12),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__2(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__2\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp13[5];
    WData/*159:0*/ __Vtemp14[5];
    WData/*159:0*/ __Vtemp15[5];
    WData/*159:0*/ __Vtemp16[5];
    WData/*159:0*/ __Vtemp17[5];
    WData/*159:0*/ __Vtemp18[5];
    WData/*159:0*/ __Vtemp19[5];
    WData/*159:0*/ __Vtemp20[5];
    WData/*159:0*/ __Vtemp21[5];
    WData/*159:0*/ __Vtemp22[5];
    WData/*159:0*/ __Vtemp23[5];
    // Body
    __Vtemp13[0U] = 0x743d2564U;
    __Vtemp13[1U] = 0x6d656f75U;
    __Vtemp13[2U] = 0x6b5f7469U;
    __Vtemp13[3U] = 0x656c696eU;
    __Vtemp13[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp13),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp14[0U] = 0x743d2564U;
    __Vtemp14[1U] = 0x6d656f75U;
    __Vtemp14[2U] = 0x6b5f7469U;
    __Vtemp14[3U] = 0x656c696eU;
    __Vtemp14[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp14),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp15[0U] = 0x743d2564U;
    __Vtemp15[1U] = 0x6d656f75U;
    __Vtemp15[2U] = 0x6b5f7469U;
    __Vtemp15[3U] = 0x656c696eU;
    __Vtemp15[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp15),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp16[0U] = 0x743d2564U;
    __Vtemp16[1U] = 0x6d656f75U;
    __Vtemp16[2U] = 0x6b5f7469U;
    __Vtemp16[3U] = 0x656c696eU;
    __Vtemp16[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp16),
                                vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp17[0U] = 0x743d2564U;
    __Vtemp17[1U] = 0x6d656f75U;
    __Vtemp17[2U] = 0x6b5f7469U;
    __Vtemp17[3U] = 0x656c696eU;
    __Vtemp17[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp17),
                                vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp18[0U] = 0x743d2564U;
    __Vtemp18[1U] = 0x6d656f75U;
    __Vtemp18[2U] = 0x6b5f7469U;
    __Vtemp18[3U] = 0x656c696eU;
    __Vtemp18[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp18),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp19[0U] = 0x743d2564U;
    __Vtemp19[1U] = 0x6d656f75U;
    __Vtemp19[2U] = 0x6b5f7469U;
    __Vtemp19[3U] = 0x656c696eU;
    __Vtemp19[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp19),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__dividerOnlyClockGen__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_clock_ClockDivideBy1_clk_out = 0U;
    __Vtemp20[0U] = 0x743d2564U;
    __Vtemp20[1U] = 0x6d656f75U;
    __Vtemp20[2U] = 0x6b5f7469U;
    __Vtemp20[3U] = 0x656c696eU;
    __Vtemp20[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp20),
                                vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp21[0U] = 0x743d2564U;
    __Vtemp21[1U] = 0x6d656f75U;
    __Vtemp21[2U] = 0x6b5f7469U;
    __Vtemp21[3U] = 0x656c696eU;
    __Vtemp21[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp21),
                                vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp22[0U] = 0x743d2564U;
    __Vtemp22[1U] = 0x6d656f75U;
    __Vtemp22[2U] = 0x6b5f7469U;
    __Vtemp22[3U] = 0x656c696eU;
    __Vtemp22[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp22),
                                vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__srams__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp23[0U] = 0x743d2564U;
    __Vtemp23[1U] = 0x6d656f75U;
    __Vtemp23[2U] = 0x6b5f7469U;
    __Vtemp23[3U] = 0x656c696eU;
    __Vtemp23[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp23),
                                vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__3(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__3\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp24[5];
    WData/*159:0*/ __Vtemp25[5];
    WData/*159:0*/ __Vtemp26[5];
    WData/*159:0*/ __Vtemp27[5];
    WData/*159:0*/ __Vtemp28[5];
    WData/*159:0*/ __Vtemp29[5];
    WData/*159:0*/ __Vtemp30[5];
    WData/*159:0*/ __Vtemp31[5];
    WData/*159:0*/ __Vtemp32[5];
    WData/*159:0*/ __Vtemp33[5];
    WData/*159:0*/ __Vtemp34[5];
    WData/*159:0*/ __Vtemp35[5];
    // Body
    __Vtemp24[0U] = 0x743d2564U;
    __Vtemp24[1U] = 0x6d656f75U;
    __Vtemp24[2U] = 0x6b5f7469U;
    __Vtemp24[3U] = 0x656c696eU;
    __Vtemp24[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp24),
                                vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp25[0U] = 0x743d2564U;
    __Vtemp25[1U] = 0x6d656f75U;
    __Vtemp25[2U] = 0x6b5f7469U;
    __Vtemp25[3U] = 0x656c696eU;
    __Vtemp25[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp25),
                                vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp26[0U] = 0x743d2564U;
    __Vtemp26[1U] = 0x6d656f75U;
    __Vtemp26[2U] = 0x6b5f7469U;
    __Vtemp26[3U] = 0x656c696eU;
    __Vtemp26[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp26),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp27[0U] = 0x743d2564U;
    __Vtemp27[1U] = 0x6d656f75U;
    __Vtemp27[2U] = 0x6b5f7469U;
    __Vtemp27[3U] = 0x656c696eU;
    __Vtemp27[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp27),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp28[0U] = 0x743d2564U;
    __Vtemp28[1U] = 0x6d656f75U;
    __Vtemp28[2U] = 0x6b5f7469U;
    __Vtemp28[3U] = 0x656c696eU;
    __Vtemp28[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp28),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp29[0U] = 0x743d2564U;
    __Vtemp29[1U] = 0x6d656f75U;
    __Vtemp29[2U] = 0x6b5f7469U;
    __Vtemp29[3U] = 0x656c696eU;
    __Vtemp29[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp29),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp30[0U] = 0x743d2564U;
    __Vtemp30[1U] = 0x6d656f75U;
    __Vtemp30[2U] = 0x6b5f7469U;
    __Vtemp30[3U] = 0x656c696eU;
    __Vtemp30[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp30),
                                vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp31[0U] = 0x743d2564U;
    __Vtemp31[1U] = 0x6d656f75U;
    __Vtemp31[2U] = 0x6b5f7469U;
    __Vtemp31[3U] = 0x656c696eU;
    __Vtemp31[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp31),
                                vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp32[0U] = 0x743d2564U;
    __Vtemp32[1U] = 0x6d656f75U;
    __Vtemp32[2U] = 0x6b5f7469U;
    __Vtemp32[3U] = 0x656c696eU;
    __Vtemp32[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp32),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp33[0U] = 0x743d2564U;
    __Vtemp33[1U] = 0x6d656f75U;
    __Vtemp33[2U] = 0x6b5f7469U;
    __Vtemp33[3U] = 0x656c696eU;
    __Vtemp33[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp33),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp34[0U] = 0x743d2564U;
    __Vtemp34[1U] = 0x6d656f75U;
    __Vtemp34[2U] = 0x6b5f7469U;
    __Vtemp34[3U] = 0x656c696eU;
    __Vtemp34[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp34),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp35[0U] = 0x743d2564U;
    __Vtemp35[1U] = 0x6d656f75U;
    __Vtemp35[2U] = 0x6b5f7469U;
    __Vtemp35[3U] = 0x656c696eU;
    __Vtemp35[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp35),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__4(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__4\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp36[5];
    WData/*159:0*/ __Vtemp37[5];
    WData/*159:0*/ __Vtemp38[5];
    WData/*159:0*/ __Vtemp39[5];
    WData/*159:0*/ __Vtemp40[5];
    WData/*159:0*/ __Vtemp41[5];
    WData/*159:0*/ __Vtemp42[5];
    WData/*159:0*/ __Vtemp43[5];
    WData/*159:0*/ __Vtemp44[5];
    WData/*159:0*/ __Vtemp45[5];
    WData/*159:0*/ __Vtemp46[5];
    WData/*159:0*/ __Vtemp47[5];
    // Body
    __Vtemp36[0U] = 0x743d2564U;
    __Vtemp36[1U] = 0x6d656f75U;
    __Vtemp36[2U] = 0x6b5f7469U;
    __Vtemp36[3U] = 0x656c696eU;
    __Vtemp36[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp36),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp37[0U] = 0x743d2564U;
    __Vtemp37[1U] = 0x6d656f75U;
    __Vtemp37[2U] = 0x6b5f7469U;
    __Vtemp37[3U] = 0x656c696eU;
    __Vtemp37[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp37),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp38[0U] = 0x743d2564U;
    __Vtemp38[1U] = 0x6d656f75U;
    __Vtemp38[2U] = 0x6b5f7469U;
    __Vtemp38[3U] = 0x656c696eU;
    __Vtemp38[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp38),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp39[0U] = 0x743d2564U;
    __Vtemp39[1U] = 0x6d656f75U;
    __Vtemp39[2U] = 0x6b5f7469U;
    __Vtemp39[3U] = 0x656c696eU;
    __Vtemp39[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp39),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp40[0U] = 0x743d2564U;
    __Vtemp40[1U] = 0x6d656f75U;
    __Vtemp40[2U] = 0x6b5f7469U;
    __Vtemp40[3U] = 0x656c696eU;
    __Vtemp40[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp40),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp41[0U] = 0x743d2564U;
    __Vtemp41[1U] = 0x6d656f75U;
    __Vtemp41[2U] = 0x6b5f7469U;
    __Vtemp41[3U] = 0x656c696eU;
    __Vtemp41[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp41),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp42[0U] = 0x743d2564U;
    __Vtemp42[1U] = 0x6d656f75U;
    __Vtemp42[2U] = 0x6b5f7469U;
    __Vtemp42[3U] = 0x656c696eU;
    __Vtemp42[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp42),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp43[0U] = 0x743d2564U;
    __Vtemp43[1U] = 0x6d656f75U;
    __Vtemp43[2U] = 0x6b5f7469U;
    __Vtemp43[3U] = 0x656c696eU;
    __Vtemp43[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp43),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp44[0U] = 0x743d2564U;
    __Vtemp44[1U] = 0x6d656f75U;
    __Vtemp44[2U] = 0x6b5f7469U;
    __Vtemp44[3U] = 0x656c696eU;
    __Vtemp44[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp44),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp45[0U] = 0x743d2564U;
    __Vtemp45[1U] = 0x6d656f75U;
    __Vtemp45[2U] = 0x6b5f7469U;
    __Vtemp45[3U] = 0x656c696eU;
    __Vtemp45[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp45),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp46[0U] = 0x743d2564U;
    __Vtemp46[1U] = 0x6d656f75U;
    __Vtemp46[2U] = 0x6b5f7469U;
    __Vtemp46[3U] = 0x656c696eU;
    __Vtemp46[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp46),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp47[0U] = 0x743d2564U;
    __Vtemp47[1U] = 0x6d656f75U;
    __Vtemp47[2U] = 0x6b5f7469U;
    __Vtemp47[3U] = 0x656c696eU;
    __Vtemp47[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp47),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__5(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__5\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp48[5];
    WData/*159:0*/ __Vtemp49[5];
    WData/*159:0*/ __Vtemp50[5];
    WData/*159:0*/ __Vtemp51[5];
    WData/*159:0*/ __Vtemp52[5];
    WData/*159:0*/ __Vtemp53[5];
    WData/*159:0*/ __Vtemp54[5];
    WData/*159:0*/ __Vtemp55[5];
    WData/*159:0*/ __Vtemp56[5];
    WData/*159:0*/ __Vtemp57[5];
    WData/*159:0*/ __Vtemp58[5];
    WData/*159:0*/ __Vtemp59[5];
    // Body
    __Vtemp48[0U] = 0x743d2564U;
    __Vtemp48[1U] = 0x6d656f75U;
    __Vtemp48[2U] = 0x6b5f7469U;
    __Vtemp48[3U] = 0x656c696eU;
    __Vtemp48[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp48),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp49[0U] = 0x743d2564U;
    __Vtemp49[1U] = 0x6d656f75U;
    __Vtemp49[2U] = 0x6b5f7469U;
    __Vtemp49[3U] = 0x656c696eU;
    __Vtemp49[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp49),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp50[0U] = 0x743d2564U;
    __Vtemp50[1U] = 0x6d656f75U;
    __Vtemp50[2U] = 0x6b5f7469U;
    __Vtemp50[3U] = 0x656c696eU;
    __Vtemp50[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp50),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp51[0U] = 0x743d2564U;
    __Vtemp51[1U] = 0x6d656f75U;
    __Vtemp51[2U] = 0x6b5f7469U;
    __Vtemp51[3U] = 0x656c696eU;
    __Vtemp51[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp51),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp52[0U] = 0x743d2564U;
    __Vtemp52[1U] = 0x6d656f75U;
    __Vtemp52[2U] = 0x6b5f7469U;
    __Vtemp52[3U] = 0x656c696eU;
    __Vtemp52[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp52),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp53[0U] = 0x743d2564U;
    __Vtemp53[1U] = 0x6d656f75U;
    __Vtemp53[2U] = 0x6b5f7469U;
    __Vtemp53[3U] = 0x656c696eU;
    __Vtemp53[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp53),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp54[0U] = 0x743d2564U;
    __Vtemp54[1U] = 0x6d656f75U;
    __Vtemp54[2U] = 0x6b5f7469U;
    __Vtemp54[3U] = 0x656c696eU;
    __Vtemp54[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp54),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp55[0U] = 0x743d2564U;
    __Vtemp55[1U] = 0x6d656f75U;
    __Vtemp55[2U] = 0x6b5f7469U;
    __Vtemp55[3U] = 0x656c696eU;
    __Vtemp55[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp55),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp56[0U] = 0x743d2564U;
    __Vtemp56[1U] = 0x6d656f75U;
    __Vtemp56[2U] = 0x6b5f7469U;
    __Vtemp56[3U] = 0x656c696eU;
    __Vtemp56[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp56),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp57[0U] = 0x743d2564U;
    __Vtemp57[1U] = 0x6d656f75U;
    __Vtemp57[2U] = 0x6b5f7469U;
    __Vtemp57[3U] = 0x656c696eU;
    __Vtemp57[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp57),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp58[0U] = 0x743d2564U;
    __Vtemp58[1U] = 0x6d656f75U;
    __Vtemp58[2U] = 0x6b5f7469U;
    __Vtemp58[3U] = 0x656c696eU;
    __Vtemp58[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp58),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp59[0U] = 0x743d2564U;
    __Vtemp59[1U] = 0x6d656f75U;
    __Vtemp59[2U] = 0x6b5f7469U;
    __Vtemp59[3U] = 0x656c696eU;
    __Vtemp59[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp59),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__6(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__6\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp60[5];
    WData/*159:0*/ __Vtemp61[5];
    WData/*159:0*/ __Vtemp62[5];
    WData/*159:0*/ __Vtemp63[5];
    WData/*159:0*/ __Vtemp64[5];
    WData/*159:0*/ __Vtemp65[5];
    WData/*159:0*/ __Vtemp66[5];
    WData/*159:0*/ __Vtemp67[5];
    WData/*159:0*/ __Vtemp68[5];
    WData/*159:0*/ __Vtemp69[5];
    WData/*159:0*/ __Vtemp70[5];
    WData/*159:0*/ __Vtemp71[5];
    // Body
    __Vtemp60[0U] = 0x743d2564U;
    __Vtemp60[1U] = 0x6d656f75U;
    __Vtemp60[2U] = 0x6b5f7469U;
    __Vtemp60[3U] = 0x656c696eU;
    __Vtemp60[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp60),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp61[0U] = 0x743d2564U;
    __Vtemp61[1U] = 0x6d656f75U;
    __Vtemp61[2U] = 0x6b5f7469U;
    __Vtemp61[3U] = 0x656c696eU;
    __Vtemp61[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp61),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp62[0U] = 0x743d2564U;
    __Vtemp62[1U] = 0x6d656f75U;
    __Vtemp62[2U] = 0x6b5f7469U;
    __Vtemp62[3U] = 0x656c696eU;
    __Vtemp62[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp62),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus__DOT__coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp63[0U] = 0x743d2564U;
    __Vtemp63[1U] = 0x6d656f75U;
    __Vtemp63[2U] = 0x6b5f7469U;
    __Vtemp63[3U] = 0x656c696eU;
    __Vtemp63[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp63),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp64[0U] = 0x743d2564U;
    __Vtemp64[1U] = 0x6d656f75U;
    __Vtemp64[2U] = 0x6b5f7469U;
    __Vtemp64[3U] = 0x656c696eU;
    __Vtemp64[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp64),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp65[0U] = 0x743d2564U;
    __Vtemp65[1U] = 0x6d656f75U;
    __Vtemp65[2U] = 0x6b5f7469U;
    __Vtemp65[3U] = 0x656c696eU;
    __Vtemp65[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp65),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp66[0U] = 0x743d2564U;
    __Vtemp66[1U] = 0x6d656f75U;
    __Vtemp66[2U] = 0x6b5f7469U;
    __Vtemp66[3U] = 0x656c696eU;
    __Vtemp66[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp66),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp67[0U] = 0x743d2564U;
    __Vtemp67[1U] = 0x6d656f75U;
    __Vtemp67[2U] = 0x6b5f7469U;
    __Vtemp67[3U] = 0x656c696eU;
    __Vtemp67[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp67),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp68[0U] = 0x743d2564U;
    __Vtemp68[1U] = 0x6d656f75U;
    __Vtemp68[2U] = 0x6b5f7469U;
    __Vtemp68[3U] = 0x656c696eU;
    __Vtemp68[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp68),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp69[0U] = 0x743d2564U;
    __Vtemp69[1U] = 0x6d656f75U;
    __Vtemp69[2U] = 0x6b5f7469U;
    __Vtemp69[3U] = 0x656c696eU;
    __Vtemp69[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp69),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp70[0U] = 0x743d2564U;
    __Vtemp70[1U] = 0x6d656f75U;
    __Vtemp70[2U] = 0x6b5f7469U;
    __Vtemp70[3U] = 0x656c696eU;
    __Vtemp70[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp70),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp71[0U] = 0x743d2564U;
    __Vtemp71[1U] = 0x6d656f75U;
    __Vtemp71[2U] = 0x6b5f7469U;
    __Vtemp71[3U] = 0x656c696eU;
    __Vtemp71[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp71),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__7(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__7\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp72[5];
    WData/*159:0*/ __Vtemp73[5];
    WData/*159:0*/ __Vtemp74[5];
    WData/*159:0*/ __Vtemp75[5];
    WData/*159:0*/ __Vtemp76[5];
    WData/*159:0*/ __Vtemp77[5];
    WData/*159:0*/ __Vtemp78[5];
    WData/*159:0*/ __Vtemp79[5];
    WData/*159:0*/ __Vtemp80[5];
    WData/*159:0*/ __Vtemp81[5];
    WData/*159:0*/ __Vtemp82[5];
    WData/*159:0*/ __Vtemp83[5];
    // Body
    __Vtemp72[0U] = 0x743d2564U;
    __Vtemp72[1U] = 0x6d656f75U;
    __Vtemp72[2U] = 0x6b5f7469U;
    __Vtemp72[3U] = 0x656c696eU;
    __Vtemp72[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp72),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp73[0U] = 0x743d2564U;
    __Vtemp73[1U] = 0x6d656f75U;
    __Vtemp73[2U] = 0x6b5f7469U;
    __Vtemp73[3U] = 0x656c696eU;
    __Vtemp73[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp73),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp74[0U] = 0x743d2564U;
    __Vtemp74[1U] = 0x6d656f75U;
    __Vtemp74[2U] = 0x6b5f7469U;
    __Vtemp74[3U] = 0x656c696eU;
    __Vtemp74[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp74),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp75[0U] = 0x743d2564U;
    __Vtemp75[1U] = 0x6d656f75U;
    __Vtemp75[2U] = 0x6b5f7469U;
    __Vtemp75[3U] = 0x656c696eU;
    __Vtemp75[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp75),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp76[0U] = 0x743d2564U;
    __Vtemp76[1U] = 0x6d656f75U;
    __Vtemp76[2U] = 0x6b5f7469U;
    __Vtemp76[3U] = 0x656c696eU;
    __Vtemp76[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp76),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp77[0U] = 0x743d2564U;
    __Vtemp77[1U] = 0x6d656f75U;
    __Vtemp77[2U] = 0x6b5f7469U;
    __Vtemp77[3U] = 0x656c696eU;
    __Vtemp77[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp77),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp78[0U] = 0x743d2564U;
    __Vtemp78[1U] = 0x6d656f75U;
    __Vtemp78[2U] = 0x6b5f7469U;
    __Vtemp78[3U] = 0x656c696eU;
    __Vtemp78[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp78),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp79[0U] = 0x743d2564U;
    __Vtemp79[1U] = 0x6d656f75U;
    __Vtemp79[2U] = 0x6b5f7469U;
    __Vtemp79[3U] = 0x656c696eU;
    __Vtemp79[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp79),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp80[0U] = 0x743d2564U;
    __Vtemp80[1U] = 0x6d656f75U;
    __Vtemp80[2U] = 0x6b5f7469U;
    __Vtemp80[3U] = 0x656c696eU;
    __Vtemp80[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp80),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp81[0U] = 0x743d2564U;
    __Vtemp81[1U] = 0x6d656f75U;
    __Vtemp81[2U] = 0x6b5f7469U;
    __Vtemp81[3U] = 0x656c696eU;
    __Vtemp81[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp81),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp82[0U] = 0x743d2564U;
    __Vtemp82[1U] = 0x6d656f75U;
    __Vtemp82[2U] = 0x6b5f7469U;
    __Vtemp82[3U] = 0x656c696eU;
    __Vtemp82[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp82),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp83[0U] = 0x743d2564U;
    __Vtemp83[1U] = 0x6d656f75U;
    __Vtemp83[2U] = 0x6b5f7469U;
    __Vtemp83[3U] = 0x656c696eU;
    __Vtemp83[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp83),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__8(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__8\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp84[5];
    WData/*159:0*/ __Vtemp85[5];
    WData/*159:0*/ __Vtemp86[5];
    WData/*159:0*/ __Vtemp87[5];
    WData/*159:0*/ __Vtemp88[5];
    WData/*159:0*/ __Vtemp89[5];
    WData/*159:0*/ __Vtemp90[5];
    WData/*159:0*/ __Vtemp91[5];
    WData/*159:0*/ __Vtemp92[5];
    WData/*159:0*/ __Vtemp93[5];
    WData/*159:0*/ __Vtemp94[5];
    WData/*159:0*/ __Vtemp95[5];
    // Body
    __Vtemp84[0U] = 0x743d2564U;
    __Vtemp84[1U] = 0x6d656f75U;
    __Vtemp84[2U] = 0x6b5f7469U;
    __Vtemp84[3U] = 0x656c696eU;
    __Vtemp84[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp84),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp85[0U] = 0x743d2564U;
    __Vtemp85[1U] = 0x6d656f75U;
    __Vtemp85[2U] = 0x6b5f7469U;
    __Vtemp85[3U] = 0x656c696eU;
    __Vtemp85[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp85),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp86[0U] = 0x743d2564U;
    __Vtemp86[1U] = 0x6d656f75U;
    __Vtemp86[2U] = 0x6b5f7469U;
    __Vtemp86[3U] = 0x656c696eU;
    __Vtemp86[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp86),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp87[0U] = 0x743d2564U;
    __Vtemp87[1U] = 0x6d656f75U;
    __Vtemp87[2U] = 0x6b5f7469U;
    __Vtemp87[3U] = 0x656c696eU;
    __Vtemp87[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp87),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp88[0U] = 0x743d2564U;
    __Vtemp88[1U] = 0x6d656f75U;
    __Vtemp88[2U] = 0x6b5f7469U;
    __Vtemp88[3U] = 0x656c696eU;
    __Vtemp88[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp88),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp89[0U] = 0x743d2564U;
    __Vtemp89[1U] = 0x6d656f75U;
    __Vtemp89[2U] = 0x6b5f7469U;
    __Vtemp89[3U] = 0x656c696eU;
    __Vtemp89[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp89),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp90[0U] = 0x743d2564U;
    __Vtemp90[1U] = 0x6d656f75U;
    __Vtemp90[2U] = 0x6b5f7469U;
    __Vtemp90[3U] = 0x656c696eU;
    __Vtemp90[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp90),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp91[0U] = 0x743d2564U;
    __Vtemp91[1U] = 0x6d656f75U;
    __Vtemp91[2U] = 0x6b5f7469U;
    __Vtemp91[3U] = 0x656c696eU;
    __Vtemp91[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp91),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp92[0U] = 0x743d2564U;
    __Vtemp92[1U] = 0x6d656f75U;
    __Vtemp92[2U] = 0x6b5f7469U;
    __Vtemp92[3U] = 0x656c696eU;
    __Vtemp92[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp92),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp93[0U] = 0x743d2564U;
    __Vtemp93[1U] = 0x6d656f75U;
    __Vtemp93[2U] = 0x6b5f7469U;
    __Vtemp93[3U] = 0x656c696eU;
    __Vtemp93[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp93),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp94[0U] = 0x743d2564U;
    __Vtemp94[1U] = 0x6d656f75U;
    __Vtemp94[2U] = 0x6b5f7469U;
    __Vtemp94[3U] = 0x656c696eU;
    __Vtemp94[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp94),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp95[0U] = 0x743d2564U;
    __Vtemp95[1U] = 0x6d656f75U;
    __Vtemp95[2U] = 0x6b5f7469U;
    __Vtemp95[3U] = 0x656c696eU;
    __Vtemp95[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp95),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__9(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__9\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp96[5];
    WData/*159:0*/ __Vtemp97[5];
    WData/*159:0*/ __Vtemp98[5];
    WData/*159:0*/ __Vtemp99[5];
    WData/*159:0*/ __Vtemp100[5];
    WData/*159:0*/ __Vtemp101[5];
    WData/*159:0*/ __Vtemp102[5];
    WData/*159:0*/ __Vtemp103[5];
    WData/*159:0*/ __Vtemp104[5];
    WData/*159:0*/ __Vtemp105[5];
    WData/*159:0*/ __Vtemp106[5];
    WData/*159:0*/ __Vtemp107[5];
    // Body
    __Vtemp96[0U] = 0x743d2564U;
    __Vtemp96[1U] = 0x6d656f75U;
    __Vtemp96[2U] = 0x6b5f7469U;
    __Vtemp96[3U] = 0x656c696eU;
    __Vtemp96[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp96),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp97[0U] = 0x743d2564U;
    __Vtemp97[1U] = 0x6d656f75U;
    __Vtemp97[2U] = 0x6b5f7469U;
    __Vtemp97[3U] = 0x656c696eU;
    __Vtemp97[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp97),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp98[0U] = 0x743d2564U;
    __Vtemp98[1U] = 0x6d656f75U;
    __Vtemp98[2U] = 0x6b5f7469U;
    __Vtemp98[3U] = 0x656c696eU;
    __Vtemp98[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp98),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp99[0U] = 0x743d2564U;
    __Vtemp99[1U] = 0x6d656f75U;
    __Vtemp99[2U] = 0x6b5f7469U;
    __Vtemp99[3U] = 0x656c696eU;
    __Vtemp99[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp99),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp100[0U] = 0x743d2564U;
    __Vtemp100[1U] = 0x6d656f75U;
    __Vtemp100[2U] = 0x6b5f7469U;
    __Vtemp100[3U] = 0x656c696eU;
    __Vtemp100[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp100),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp101[0U] = 0x743d2564U;
    __Vtemp101[1U] = 0x6d656f75U;
    __Vtemp101[2U] = 0x6b5f7469U;
    __Vtemp101[3U] = 0x656c696eU;
    __Vtemp101[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp101),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp102[0U] = 0x743d2564U;
    __Vtemp102[1U] = 0x6d656f75U;
    __Vtemp102[2U] = 0x6b5f7469U;
    __Vtemp102[3U] = 0x656c696eU;
    __Vtemp102[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp102),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp103[0U] = 0x743d2564U;
    __Vtemp103[1U] = 0x6d656f75U;
    __Vtemp103[2U] = 0x6b5f7469U;
    __Vtemp103[3U] = 0x656c696eU;
    __Vtemp103[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp103),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp104[0U] = 0x743d2564U;
    __Vtemp104[1U] = 0x6d656f75U;
    __Vtemp104[2U] = 0x6b5f7469U;
    __Vtemp104[3U] = 0x656c696eU;
    __Vtemp104[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp104),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp105[0U] = 0x743d2564U;
    __Vtemp105[1U] = 0x6d656f75U;
    __Vtemp105[2U] = 0x6b5f7469U;
    __Vtemp105[3U] = 0x656c696eU;
    __Vtemp105[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp105),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp106[0U] = 0x743d2564U;
    __Vtemp106[1U] = 0x6d656f75U;
    __Vtemp106[2U] = 0x6b5f7469U;
    __Vtemp106[3U] = 0x656c696eU;
    __Vtemp106[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp106),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp107[0U] = 0x743d2564U;
    __Vtemp107[1U] = 0x6d656f75U;
    __Vtemp107[2U] = 0x6b5f7469U;
    __Vtemp107[3U] = 0x656c696eU;
    __Vtemp107[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp107),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__10(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__10\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp108[5];
    WData/*159:0*/ __Vtemp109[5];
    WData/*159:0*/ __Vtemp110[5];
    WData/*159:0*/ __Vtemp111[5];
    WData/*159:0*/ __Vtemp112[5];
    WData/*159:0*/ __Vtemp113[5];
    WData/*159:0*/ __Vtemp114[5];
    WData/*159:0*/ __Vtemp115[5];
    WData/*159:0*/ __Vtemp116[5];
    WData/*159:0*/ __Vtemp117[5];
    WData/*159:0*/ __Vtemp118[5];
    WData/*159:0*/ __Vtemp119[5];
    // Body
    __Vtemp108[0U] = 0x743d2564U;
    __Vtemp108[1U] = 0x6d656f75U;
    __Vtemp108[2U] = 0x6b5f7469U;
    __Vtemp108[3U] = 0x656c696eU;
    __Vtemp108[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp108),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp109[0U] = 0x743d2564U;
    __Vtemp109[1U] = 0x6d656f75U;
    __Vtemp109[2U] = 0x6b5f7469U;
    __Vtemp109[3U] = 0x656c696eU;
    __Vtemp109[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp109),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp110[0U] = 0x743d2564U;
    __Vtemp110[1U] = 0x6d656f75U;
    __Vtemp110[2U] = 0x6b5f7469U;
    __Vtemp110[3U] = 0x656c696eU;
    __Vtemp110[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp110),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp111[0U] = 0x743d2564U;
    __Vtemp111[1U] = 0x6d656f75U;
    __Vtemp111[2U] = 0x6b5f7469U;
    __Vtemp111[3U] = 0x656c696eU;
    __Vtemp111[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp111),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp112[0U] = 0x743d2564U;
    __Vtemp112[1U] = 0x6d656f75U;
    __Vtemp112[2U] = 0x6b5f7469U;
    __Vtemp112[3U] = 0x656c696eU;
    __Vtemp112[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp112),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp113[0U] = 0x743d2564U;
    __Vtemp113[1U] = 0x6d656f75U;
    __Vtemp113[2U] = 0x6b5f7469U;
    __Vtemp113[3U] = 0x656c696eU;
    __Vtemp113[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp113),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp114[0U] = 0x743d2564U;
    __Vtemp114[1U] = 0x6d656f75U;
    __Vtemp114[2U] = 0x6b5f7469U;
    __Vtemp114[3U] = 0x656c696eU;
    __Vtemp114[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp114),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp115[0U] = 0x743d2564U;
    __Vtemp115[1U] = 0x6d656f75U;
    __Vtemp115[2U] = 0x6b5f7469U;
    __Vtemp115[3U] = 0x656c696eU;
    __Vtemp115[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp115),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp116[0U] = 0x743d2564U;
    __Vtemp116[1U] = 0x6d656f75U;
    __Vtemp116[2U] = 0x6b5f7469U;
    __Vtemp116[3U] = 0x656c696eU;
    __Vtemp116[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp116),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp117[0U] = 0x743d2564U;
    __Vtemp117[1U] = 0x6d656f75U;
    __Vtemp117[2U] = 0x6b5f7469U;
    __Vtemp117[3U] = 0x656c696eU;
    __Vtemp117[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp117),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp118[0U] = 0x743d2564U;
    __Vtemp118[1U] = 0x6d656f75U;
    __Vtemp118[2U] = 0x6b5f7469U;
    __Vtemp118[3U] = 0x656c696eU;
    __Vtemp118[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp118),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp119[0U] = 0x743d2564U;
    __Vtemp119[1U] = 0x6d656f75U;
    __Vtemp119[2U] = 0x6b5f7469U;
    __Vtemp119[3U] = 0x656c696eU;
    __Vtemp119[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp119),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__11(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__11\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp120[5];
    WData/*159:0*/ __Vtemp121[5];
    WData/*159:0*/ __Vtemp122[5];
    WData/*159:0*/ __Vtemp123[5];
    WData/*159:0*/ __Vtemp124[5];
    WData/*159:0*/ __Vtemp125[5];
    WData/*159:0*/ __Vtemp126[5];
    WData/*159:0*/ __Vtemp127[5];
    WData/*159:0*/ __Vtemp128[5];
    WData/*159:0*/ __Vtemp129[5];
    WData/*159:0*/ __Vtemp130[5];
    WData/*159:0*/ __Vtemp131[5];
    // Body
    __Vtemp120[0U] = 0x743d2564U;
    __Vtemp120[1U] = 0x6d656f75U;
    __Vtemp120[2U] = 0x6b5f7469U;
    __Vtemp120[3U] = 0x656c696eU;
    __Vtemp120[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp120),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp121[0U] = 0x743d2564U;
    __Vtemp121[1U] = 0x6d656f75U;
    __Vtemp121[2U] = 0x6b5f7469U;
    __Vtemp121[3U] = 0x656c696eU;
    __Vtemp121[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp121),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__tlMasterXbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp122[0U] = 0x743d2564U;
    __Vtemp122[1U] = 0x6d656f75U;
    __Vtemp122[2U] = 0x6b5f7469U;
    __Vtemp122[3U] = 0x656c696eU;
    __Vtemp122[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp122),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp123[0U] = 0x743d2564U;
    __Vtemp123[1U] = 0x6d656f75U;
    __Vtemp123[2U] = 0x6b5f7469U;
    __Vtemp123[3U] = 0x656c696eU;
    __Vtemp123[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp123),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp124[0U] = 0x743d2564U;
    __Vtemp124[1U] = 0x6d656f75U;
    __Vtemp124[2U] = 0x6b5f7469U;
    __Vtemp124[3U] = 0x656c696eU;
    __Vtemp124[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp124),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp125[0U] = 0x743d2564U;
    __Vtemp125[1U] = 0x6d656f75U;
    __Vtemp125[2U] = 0x6b5f7469U;
    __Vtemp125[3U] = 0x656c696eU;
    __Vtemp125[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp125),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp126[0U] = 0x743d2564U;
    __Vtemp126[1U] = 0x6d656f75U;
    __Vtemp126[2U] = 0x6b5f7469U;
    __Vtemp126[3U] = 0x656c696eU;
    __Vtemp126[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp126),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp127[0U] = 0x743d2564U;
    __Vtemp127[1U] = 0x6d656f75U;
    __Vtemp127[2U] = 0x6b5f7469U;
    __Vtemp127[3U] = 0x656c696eU;
    __Vtemp127[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp127),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp128[0U] = 0x743d2564U;
    __Vtemp128[1U] = 0x6d656f75U;
    __Vtemp128[2U] = 0x6b5f7469U;
    __Vtemp128[3U] = 0x656c696eU;
    __Vtemp128[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp128),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp129[0U] = 0x743d2564U;
    __Vtemp129[1U] = 0x6d656f75U;
    __Vtemp129[2U] = 0x6b5f7469U;
    __Vtemp129[3U] = 0x656c696eU;
    __Vtemp129[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp129),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp130[0U] = 0x743d2564U;
    __Vtemp130[1U] = 0x6d656f75U;
    __Vtemp130[2U] = 0x6b5f7469U;
    __Vtemp130[3U] = 0x656c696eU;
    __Vtemp130[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp130),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp131[0U] = 0x743d2564U;
    __Vtemp131[1U] = 0x6d656f75U;
    __Vtemp131[2U] = 0x6b5f7469U;
    __Vtemp131[3U] = 0x656c696eU;
    __Vtemp131[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp131),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__12(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__12\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp132[5];
    WData/*159:0*/ __Vtemp133[5];
    WData/*159:0*/ __Vtemp134[5];
    WData/*159:0*/ __Vtemp135[5];
    WData/*159:0*/ __Vtemp136[5];
    WData/*159:0*/ __Vtemp137[5];
    WData/*159:0*/ __Vtemp138[5];
    WData/*159:0*/ __Vtemp139[5];
    WData/*159:0*/ __Vtemp140[5];
    WData/*159:0*/ __Vtemp141[5];
    WData/*159:0*/ __Vtemp142[5];
    WData/*159:0*/ __Vtemp143[5];
    // Body
    __Vtemp132[0U] = 0x743d2564U;
    __Vtemp132[1U] = 0x6d656f75U;
    __Vtemp132[2U] = 0x695f7469U;
    __Vtemp132[3U] = 0x6d6d696eU;
    __Vtemp132[4U] = 0x6765U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp132),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__plusarg_reader__DOT__myplus = 0x2710U;
    }
    __Vtemp133[0U] = 0x733d2564U;
    __Vtemp133[1U] = 0x79636c65U;
    __Vtemp133[2U] = 0x72655f63U;
    __Vtemp133[3U] = 0x785f636fU;
    __Vtemp133[4U] = 0x6d61U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp133),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__core__DOT__PlusArgTimeout__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp134[0U] = 0x743d2564U;
    __Vtemp134[1U] = 0x6d656f75U;
    __Vtemp134[2U] = 0x6b5f7469U;
    __Vtemp134[3U] = 0x656c696eU;
    __Vtemp134[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp134),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp135[0U] = 0x743d2564U;
    __Vtemp135[1U] = 0x6d656f75U;
    __Vtemp135[2U] = 0x6b5f7469U;
    __Vtemp135[3U] = 0x656c696eU;
    __Vtemp135[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp135),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp136[0U] = 0x743d2564U;
    __Vtemp136[1U] = 0x6d656f75U;
    __Vtemp136[2U] = 0x6b5f7469U;
    __Vtemp136[3U] = 0x656c696eU;
    __Vtemp136[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp136),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp137[0U] = 0x743d2564U;
    __Vtemp137[1U] = 0x6d656f75U;
    __Vtemp137[2U] = 0x6b5f7469U;
    __Vtemp137[3U] = 0x656c696eU;
    __Vtemp137[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp137),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp138[0U] = 0x743d2564U;
    __Vtemp138[1U] = 0x6d656f75U;
    __Vtemp138[2U] = 0x6b5f7469U;
    __Vtemp138[3U] = 0x656c696eU;
    __Vtemp138[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp138),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp139[0U] = 0x743d2564U;
    __Vtemp139[1U] = 0x6d656f75U;
    __Vtemp139[2U] = 0x6b5f7469U;
    __Vtemp139[3U] = 0x656c696eU;
    __Vtemp139[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp139),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp140[0U] = 0x743d2564U;
    __Vtemp140[1U] = 0x6d656f75U;
    __Vtemp140[2U] = 0x6b5f7469U;
    __Vtemp140[3U] = 0x656c696eU;
    __Vtemp140[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp140),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp141[0U] = 0x743d2564U;
    __Vtemp141[1U] = 0x6d656f75U;
    __Vtemp141[2U] = 0x6b5f7469U;
    __Vtemp141[3U] = 0x656c696eU;
    __Vtemp141[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp141),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp142[0U] = 0x743d2564U;
    __Vtemp142[1U] = 0x6d656f75U;
    __Vtemp142[2U] = 0x6b5f7469U;
    __Vtemp142[3U] = 0x656c696eU;
    __Vtemp142[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp142),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp143[0U] = 0x743d2564U;
    __Vtemp143[1U] = 0x6d656f75U;
    __Vtemp143[2U] = 0x6b5f7469U;
    __Vtemp143[3U] = 0x656c696eU;
    __Vtemp143[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp143),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__13(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__13\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp144[5];
    WData/*159:0*/ __Vtemp145[5];
    WData/*159:0*/ __Vtemp146[5];
    WData/*159:0*/ __Vtemp147[5];
    WData/*159:0*/ __Vtemp148[5];
    WData/*159:0*/ __Vtemp149[5];
    WData/*159:0*/ __Vtemp150[5];
    WData/*159:0*/ __Vtemp151[5];
    WData/*159:0*/ __Vtemp152[5];
    WData/*159:0*/ __Vtemp153[5];
    WData/*159:0*/ __Vtemp154[5];
    WData/*159:0*/ __Vtemp155[5];
    // Body
    __Vtemp144[0U] = 0x743d2564U;
    __Vtemp144[1U] = 0x6d656f75U;
    __Vtemp144[2U] = 0x6b5f7469U;
    __Vtemp144[3U] = 0x656c696eU;
    __Vtemp144[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp144),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp145[0U] = 0x743d2564U;
    __Vtemp145[1U] = 0x6d656f75U;
    __Vtemp145[2U] = 0x6b5f7469U;
    __Vtemp145[3U] = 0x656c696eU;
    __Vtemp145[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp145),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp146[0U] = 0x743d2564U;
    __Vtemp146[1U] = 0x6d656f75U;
    __Vtemp146[2U] = 0x6b5f7469U;
    __Vtemp146[3U] = 0x656c696eU;
    __Vtemp146[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp146),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp147[0U] = 0x743d2564U;
    __Vtemp147[1U] = 0x6d656f75U;
    __Vtemp147[2U] = 0x6b5f7469U;
    __Vtemp147[3U] = 0x656c696eU;
    __Vtemp147[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp147),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp148[0U] = 0x743d2564U;
    __Vtemp148[1U] = 0x6d656f75U;
    __Vtemp148[2U] = 0x6b5f7469U;
    __Vtemp148[3U] = 0x656c696eU;
    __Vtemp148[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp148),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp149[0U] = 0x743d2564U;
    __Vtemp149[1U] = 0x6d656f75U;
    __Vtemp149[2U] = 0x6b5f7469U;
    __Vtemp149[3U] = 0x656c696eU;
    __Vtemp149[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp149),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp150[0U] = 0x743d2564U;
    __Vtemp150[1U] = 0x6d656f75U;
    __Vtemp150[2U] = 0x6b5f7469U;
    __Vtemp150[3U] = 0x656c696eU;
    __Vtemp150[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp150),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileClockGater__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp151[0U] = 0x743d2564U;
    __Vtemp151[1U] = 0x6d656f75U;
    __Vtemp151[2U] = 0x6b5f7469U;
    __Vtemp151[3U] = 0x656c696eU;
    __Vtemp151[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp151),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp152[0U] = 0x743d2564U;
    __Vtemp152[1U] = 0x6d656f75U;
    __Vtemp152[2U] = 0x6b5f7469U;
    __Vtemp152[3U] = 0x656c696eU;
    __Vtemp152[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp152),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__prci_ctrl_domain__DOT__tileResetSetter__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp153[0U] = 0x653d2564U;
    __Vtemp153[1U] = 0x6e61626cU;
    __Vtemp153[2U] = 0x62625f65U;
    __Vtemp153[3U] = 0x61675f72U;
    __Vtemp153[4U] = 0x6a74U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp153),
                                vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp154[0U] = 0x743d2564U;
    __Vtemp154[1U] = 0x6d656f75U;
    __Vtemp154[2U] = 0x6b5f7469U;
    __Vtemp154[3U] = 0x656c696eU;
    __Vtemp154[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp154),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp155[0U] = 0x743d2564U;
    __Vtemp155[1U] = 0x6d656f75U;
    __Vtemp155[2U] = 0x6b5f7469U;
    __Vtemp155[3U] = 0x656c696eU;
    __Vtemp155[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp155),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader__DOT__myplus = 0U;
    }
}

void VTestHarness::_initial__TOP__14(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_initial__TOP__14\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp156[5];
    WData/*159:0*/ __Vtemp157[5];
    WData/*159:0*/ __Vtemp158[5];
    WData/*159:0*/ __Vtemp159[5];
    WData/*159:0*/ __Vtemp160[5];
    WData/*159:0*/ __Vtemp161[5];
    WData/*159:0*/ __Vtemp162[5];
    WData/*95:0*/ __Vtemp163[3];
    WData/*95:0*/ __Vtemp164[3];
    // Body
    __Vtemp156[0U] = 0x743d2564U;
    __Vtemp156[1U] = 0x6d656f75U;
    __Vtemp156[2U] = 0x6b5f7469U;
    __Vtemp156[3U] = 0x656c696eU;
    __Vtemp156[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp156),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp157[0U] = 0x6e3d2564U;
    __Vtemp157[1U] = 0x745f7069U;
    __Vtemp157[2U] = 0x5f626f6fU;
    __Vtemp157[3U] = 0x73746f6dU;
    __Vtemp157[4U] = 0x6375U;
    if ((! VL_VALUEPLUSARGS_INI(1,VL_CVT_PACK_STR_NW(5, __Vtemp157),
                                vlTOPp->TestHarness__DOT__plusarg_reader_1__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__plusarg_reader_1__DOT__myplus = 0U;
    }
    __Vtemp158[0U] = 0x743d2564U;
    __Vtemp158[1U] = 0x6d656f75U;
    __Vtemp158[2U] = 0x6b5f7469U;
    __Vtemp158[3U] = 0x656c696eU;
    __Vtemp158[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp158),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp159[0U] = 0x743d2564U;
    __Vtemp159[1U] = 0x6d656f75U;
    __Vtemp159[2U] = 0x6b5f7469U;
    __Vtemp159[3U] = 0x656c696eU;
    __Vtemp159[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp159),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmOuter__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp160[0U] = 0x743d2564U;
    __Vtemp160[1U] = 0x6d656f75U;
    __Vtemp160[2U] = 0x6b5f7469U;
    __Vtemp160[3U] = 0x656c696eU;
    __Vtemp160[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp160),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp161[0U] = 0x743d2564U;
    __Vtemp161[1U] = 0x6d656f75U;
    __Vtemp161[2U] = 0x6b5f7469U;
    __Vtemp161[3U] = 0x656c696eU;
    __Vtemp161[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp161),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp162[0U] = 0x743d2564U;
    __Vtemp162[1U] = 0x6d656f75U;
    __Vtemp162[2U] = 0x6b5f7469U;
    __Vtemp162[3U] = 0x656c696eU;
    __Vtemp162[4U] = 0x74696cU;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(5, __Vtemp162),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__debug_1__DOT__dmOuter__DOT__asource__DOT__monitor__DOT__plusarg_reader__DOT__myplus = 0U;
    }
    __Vtemp163[0U] = 0x673d2573U;
    __Vtemp163[1U] = 0x72746c6fU;
    __Vtemp163[2U] = 0x7561U;
    (void)VL_VALUEPLUSARGS_INN(64,VL_CVT_PACK_STR_NW(3, __Vtemp163),
                               vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog);vlSymsp->TOP____024unit.__Vdpiimwrap_uart_init_TOP____024unit(vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartlog, vlTOPp->TestHarness__DOT__uart_sim_0__DOT__sim__DOT_____05Fuartno);
    vlTOPp->TestHarness__DOT__simdram__DOT__initialized = 0U;
    __Vtemp164[0U] = 0x783d2564U;
    __Vtemp164[1U] = 0x72745f74U;
    __Vtemp164[2U] = 0x7561U;
    if ((! VL_VALUEPLUSARGS_INI(32,VL_CVT_PACK_STR_NW(3, __Vtemp164),
                                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__plusarg_reader__DOT__myplus = 1U;
    }
}
