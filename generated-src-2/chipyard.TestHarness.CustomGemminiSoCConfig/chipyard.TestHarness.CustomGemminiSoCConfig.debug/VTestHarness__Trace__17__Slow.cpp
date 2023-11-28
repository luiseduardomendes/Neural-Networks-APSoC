// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTestHarness__Syms.h"


VL_ATTR_COLD void VTestHarness___024root__trace_full_sub_9(VTestHarness___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root__trace_full_sub_9\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    VlWide<16>/*511:0*/ __Vtemp_h682f9e60__0;
    VlWide<4>/*127:0*/ __Vtemp_hb7c5a23f__0;
    VlWide<16>/*511:0*/ __Vtemp_h0f610ddb__0;
    VlWide<16>/*511:0*/ __Vtemp_ha80f3223__0;
    VlWide<22>/*703:0*/ __Vtemp_hfb5bb0d6__0;
    VlWide<22>/*703:0*/ __Vtemp_hd63fc3a7__23;
    VlWide<16>/*511:0*/ __Vtemp_ha158c47d__0;
    VlWide<22>/*703:0*/ __Vtemp_he8881cb3__0;
    VlWide<22>/*703:0*/ __Vtemp_h5048e811__23;
    // Body
    bufp->fullIData(oldp+27007,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27008,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27009,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27010,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27011,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27012,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27013,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27014,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27015,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27016,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27017,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27018,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27019,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27020,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27021,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27022,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27023,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27024,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullIData(oldp+27025,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_7) 
                                  << 0x1bU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_6) 
                                                << 0x1aU) 
                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_5) 
                                                   << 0x19U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_4) 
                                                      << 0x18U) 
                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_3) 
                                                         << 0x17U) 
                                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_2) 
                                                            << 0x16U) 
                                                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_1) 
                                                               << 0x15U) 
                                                              | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ld_0) 
                                                                  << 0x14U) 
                                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_15) 
                                                                     << 0x13U) 
                                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_14) 
                                                                        << 0x12U) 
                                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_13) 
                                                                           << 0x11U) 
                                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_12) 
                                                                              << 0x10U) 
                                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_11) 
                                                                                << 0xfU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_10) 
                                                                                << 0xeU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_9) 
                                                                                << 0xdU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_8) 
                                                                                << 0xcU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_7) 
                                                                                << 0xbU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_6) 
                                                                                << 0xaU) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_5) 
                                                                                << 9U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_4) 
                                                                                << 8U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_3) 
                                                                                << 7U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_2) 
                                                                                << 6U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_1) 
                                                                                << 5U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_ex_0) 
                                                                                << 4U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_3) 
                                                                                << 3U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_2) 
                                                                                << 2U) 
                                                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_1) 
                                                                                << 1U) 
                                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_0))))))))))))))))))))))))))))),28);
    bufp->fullCData(oldp+27026,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_0),5);
    bufp->fullCData(oldp+27027,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_1),5);
    bufp->fullCData(oldp+27028,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_2),5);
    bufp->fullCData(oldp+27029,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_3),5);
    bufp->fullCData(oldp+27030,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_4),5);
    bufp->fullCData(oldp+27031,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_5),5);
    bufp->fullCData(oldp+27032,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_6),5);
    bufp->fullCData(oldp+27033,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_7),5);
    bufp->fullCData(oldp+27034,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_8),5);
    bufp->fullCData(oldp+27035,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_9),5);
    bufp->fullCData(oldp+27036,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_10),5);
    bufp->fullCData(oldp+27037,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_11),5);
    bufp->fullCData(oldp+27038,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_12),5);
    bufp->fullCData(oldp+27039,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_13),5);
    bufp->fullCData(oldp+27040,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_14),5);
    bufp->fullCData(oldp+27041,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_15),5);
    bufp->fullCData(oldp+27042,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_16),5);
    bufp->fullCData(oldp+27043,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_17),5);
    bufp->fullCData(oldp+27044,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_18),5);
    bufp->fullCData(oldp+27045,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_19),5);
    bufp->fullCData(oldp+27046,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_20),5);
    bufp->fullCData(oldp+27047,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_21),5);
    bufp->fullCData(oldp+27048,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_22),5);
    bufp->fullCData(oldp+27049,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_23),5);
    bufp->fullCData(oldp+27050,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_24),5);
    bufp->fullCData(oldp+27051,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_25),5);
    bufp->fullCData(oldp+27052,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_26),5);
    bufp->fullCData(oldp+27053,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_27),5);
    bufp->fullCData(oldp+27054,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___min_pop_count_T_51) 
                                  < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_27))
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___min_pop_count_T_51)
                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_27))),5);
    bufp->fullSData(oldp+27055,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue),16);
    bufp->fullIData(oldp+27056,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value),21);
    bufp->fullBit(oldp+27057,((0x1e847fU == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cntr_value)));
    bufp->fullBit(oldp+27058,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__alloc_fire));
    bufp->fullBit(oldp+27059,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_is_acc_addr));
    bufp->fullBit(oldp+27060,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_accumulate));
    bufp->fullBit(oldp+27061,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_read_full_acc_row));
    bufp->fullBit(oldp+27062,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_garbage_bit));
    bufp->fullSData(oldp+27063,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_data),14);
    bufp->fullBit(oldp+27064,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_end_is_acc_addr));
    bufp->fullSData(oldp+27065,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_end_data),14);
    bufp->fullBit(oldp+27066,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_wraps_around));
    bufp->fullBit(oldp+27067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    bufp->fullBit(oldp+27068,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_read_full_acc_row));
    bufp->fullBit(oldp+27069,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_garbage_bit));
    bufp->fullSData(oldp+27070,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_data),14);
    bufp->fullBit(oldp+27071,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_end_is_acc_addr));
    bufp->fullSData(oldp+27072,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_end_data),14);
    bufp->fullBit(oldp+27073,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_wraps_around));
    bufp->fullBit(oldp+27074,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_0));
    bufp->fullBit(oldp+27075,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_1));
    bufp->fullBit(oldp+27076,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_2));
    bufp->fullBit(oldp+27077,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_3));
    bufp->fullBit(oldp+27078,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_4));
    bufp->fullBit(oldp+27079,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_5));
    bufp->fullBit(oldp+27080,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_6));
    bufp->fullBit(oldp+27081,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ld_7));
    bufp->fullBit(oldp+27082,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_0));
    bufp->fullBit(oldp+27083,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_1));
    bufp->fullBit(oldp+27084,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_2));
    bufp->fullBit(oldp+27085,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_3));
    bufp->fullBit(oldp+27086,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_4));
    bufp->fullBit(oldp+27087,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_5));
    bufp->fullBit(oldp+27088,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_6));
    bufp->fullBit(oldp+27089,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_7));
    bufp->fullBit(oldp+27090,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_8));
    bufp->fullBit(oldp+27091,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_9));
    bufp->fullBit(oldp+27092,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_10));
    bufp->fullBit(oldp+27093,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_11));
    bufp->fullBit(oldp+27094,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_12));
    bufp->fullBit(oldp+27095,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_13));
    bufp->fullBit(oldp+27096,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_14));
    bufp->fullBit(oldp+27097,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_ex_15));
    bufp->fullBit(oldp+27098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_st_0));
    bufp->fullBit(oldp+27099,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_st_1));
    bufp->fullBit(oldp+27100,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_st_2));
    bufp->fullBit(oldp+27101,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_deps_st_3));
    bufp->fullBit(oldp+27102,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_complete_on_issue));
    bufp->fullBit(oldp+27103,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___io_cmd_completed_valid_output));
    bufp->fullCData(oldp+27104,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmd_completed_id)
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_tag_rob_id)
                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_tag_rob_id))),6);
    bufp->fullBit(oldp+27105,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station_completed_arb__DOT___grant_T)))));
    bufp->fullBit(oldp+27106,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___io_dma_req_valid_output));
    bufp->fullQData(oldp+27107,((0xffffffffffULL & 
                                 (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride)) 
                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__mvout_1d_enabled))
                                   ? ((((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[1U]))) 
                                      + ((QData)((IData)(
                                                         (0xffffU 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__porow_counter) 
                                                              * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_out_dim)) 
                                                             + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pocol_counter))))) 
                                         * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__stride))
                                   : ((((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[2U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[1U]))) 
                                      + ((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter)) 
                                         * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__stride))))),40);
    bufp->fullBit(oldp+27109,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_7) 
                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                  >> 0x1fU))));
    bufp->fullBit(oldp+27110,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_7) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                        >> 0x1eU)))));
    bufp->fullBit(oldp+27111,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_7) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                        >> 0x1dU)))));
    bufp->fullSData(oldp+27112,((0x7ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                           >> 0xfU))),11);
    bufp->fullBit(oldp+27113,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_7) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                        >> 0xeU)))));
    bufp->fullSData(oldp+27114,((0x3fffU & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                             ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___T_8)
                                                 ? 0x3fffU
                                                 : 
                                                ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                                  + 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__orow) 
                                                   * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_ocols))) 
                                                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__ocol)))
                                             : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                                                + (0x1fffU 
                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter) 
                                                       << 4U) 
                                                      + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter))))))),14);
    bufp->fullCData(oldp+27115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__activation),3);
    bufp->fullIData(oldp+27116,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__acc_scale_bits),32);
    bufp->fullSData(oldp+27117,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter) 
                                  == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                               - (IData)(1U))))
                                  ? (0x1fU & ((IData)(1U) 
                                              + (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                    - (IData)(1U)))))
                                  : 0x10U)),16);
    bufp->fullCData(oldp+27118,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter),8);
    bufp->fullCData(oldp+27119,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___T_36)
                                  ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__next_empty_alloc)
                                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_id_buf))),8);
    bufp->fullBit(oldp+27120,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[5U])));
    bufp->fullBit(oldp+27121,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                     >> 1U))));
    bufp->fullBit(oldp+27122,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                     >> 2U))));
    bufp->fullIData(oldp+27123,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                  << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[5U] 
                                               >> 3U))),32);
    bufp->fullCData(oldp+27124,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                       >> 3U))),2);
    bufp->fullBit(oldp+27125,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                     >> 5U))));
    bufp->fullCData(oldp+27126,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                       >> 6U))),2);
    bufp->fullBit(oldp+27127,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                     >> 8U))));
    bufp->fullBit(oldp+27128,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                     >> 9U))));
    bufp->fullIData(oldp+27129,((0x7fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                               << 0x16U) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[6U] 
                                                 >> 0xaU)))),23);
    bufp->fullBit(oldp+27130,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 1U))));
    bufp->fullBit(oldp+27131,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 2U))));
    bufp->fullBit(oldp+27132,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 3U))));
    bufp->fullBit(oldp+27133,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 4U))));
    bufp->fullCData(oldp+27134,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 5U))),2);
    bufp->fullCData(oldp+27135,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 7U))),2);
    bufp->fullBit(oldp+27136,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 9U))));
    bufp->fullCData(oldp+27137,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                          >> 0xaU))),8);
    bufp->fullBit(oldp+27138,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x12U))));
    bufp->fullBit(oldp+27139,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x13U))));
    bufp->fullBit(oldp+27140,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x14U))));
    bufp->fullBit(oldp+27141,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x15U))));
    bufp->fullBit(oldp+27142,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x16U))));
    bufp->fullBit(oldp+27143,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                     >> 0x17U))));
    bufp->fullCData(oldp+27144,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x18U))),2);
    bufp->fullCData(oldp+27145,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x1aU))),2);
    bufp->fullCData(oldp+27146,((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                       >> 0x1cU))),2);
    bufp->fullCData(oldp+27147,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[7U] 
                                 >> 0x1eU)),2);
    bufp->fullBit(oldp+27148,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U])));
    bufp->fullBit(oldp+27149,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 1U))));
    bufp->fullBit(oldp+27150,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 2U))));
    bufp->fullBit(oldp+27151,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 3U))));
    bufp->fullBit(oldp+27152,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 4U))));
    bufp->fullBit(oldp+27153,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 5U))));
    bufp->fullBit(oldp+27154,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 6U))));
    bufp->fullBit(oldp+27155,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 7U))));
    bufp->fullBit(oldp+27156,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                                     >> 8U))));
    bufp->fullBit(oldp+27157,(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride)) 
                               & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wrow_counter)) 
                                  | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wcol_counter))))));
    bufp->fullBit(oldp+27158,(((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_stride))
                                ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wrow_counter) 
                                    == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_size) 
                                              - (IData)(1U)))) 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__wcol_counter) 
                                      == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__pool_size) 
                                                - (IData)(1U)))))
                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter) 
                                   == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                                - (IData)(1U)))))));
    bufp->fullIData(oldp+27159,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___tlb_io_clients_0_resp_paddr),32);
    bufp->fullIData(oldp+27160,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___tlb_io_clients_1_resp_paddr),32);
    bufp->fullBit(oldp+27161,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__full)))));
    bufp->fullBit(oldp+27162,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___spad_io_dma_write_resp_valid));
    bufp->fullCData(oldp+27163,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[8U] 
                                          >> 0xbU))),8);
    bufp->fullBit(oldp+27164,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___io_tlb_req_valid_output));
    bufp->fullQData(oldp+27165,((0x7fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                   [0U][7U])) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][6U])) 
                                                 << 1U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][5U])) 
                                                   >> 0x1fU))))),40);
    bufp->fullBit(oldp+27167,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][7U] >> 6U))));
    bufp->fullBit(oldp+27168,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][9U] >> 0x1bU))));
    bufp->fullBit(oldp+27169,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][9U] >> 0x1cU))));
    bufp->fullBit(oldp+27170,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__maybe_full));
    bufp->fullQData(oldp+27171,((0x7fffffffffULL & 
                                 (((QData)((IData)(
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                   [0U][7U])) 
                                   << 0x21U) | (((QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][6U])) 
                                                 << 1U) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][5U])) 
                                                   >> 0x1fU))))),40);
    bufp->fullBit(oldp+27173,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][7U] >> 6U))));
    bufp->fullBit(oldp+27174,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][9U] >> 0x1bU))));
    bufp->fullBit(oldp+27175,((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__tlb_q__DOT__ram_ext__DOT__Memory
                                     [0U][9U] >> 0x1cU))));
    bufp->fullBit(oldp+27176,((1U & (((((((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy)) 
                                          | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__state))) 
                                         | ((((((((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_valid) 
                                                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_valid)) 
                                                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_valid)) 
                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_valid)) 
                                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_valid)) 
                                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_valid)) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_valid)) 
                                                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_valid)) 
                                                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_valid)) 
                                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_valid)) 
                                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_valid)) 
                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_valid)) 
                                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_valid)) 
                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_valid)) 
                                             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_valid)) 
                                            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_valid))) 
                                        | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__empty))) 
                                       | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_norm_q__DOT__empty))) 
                                      | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT__empty))) 
                                     | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT__empty))))));
    __Vtemp_h682f9e60__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_0_0;
    __Vtemp_h682f9e60__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_1_0;
    __Vtemp_h682f9e60__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_2_0;
    __Vtemp_h682f9e60__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_3_0;
    __Vtemp_h682f9e60__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_4_0;
    __Vtemp_h682f9e60__0[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_5_0;
    __Vtemp_h682f9e60__0[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_6_0;
    __Vtemp_h682f9e60__0[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_7_0;
    __Vtemp_h682f9e60__0[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_8_0;
    __Vtemp_h682f9e60__0[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_9_0;
    __Vtemp_h682f9e60__0[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_10_0;
    __Vtemp_h682f9e60__0[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_11_0;
    __Vtemp_h682f9e60__0[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_12_0;
    __Vtemp_h682f9e60__0[0xdU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_13_0;
    __Vtemp_h682f9e60__0[0xeU] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_15_0)) 
                                           << 0x20U) 
                                          | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_14_0))));
    __Vtemp_h682f9e60__0[0xfU] = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_15_0)) 
                                            << 0x20U) 
                                           | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_full_data_14_0))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+27177,(__Vtemp_h682f9e60__0),512);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_119) {
        __Vtemp_hb7c5a23f__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_3_0 
                                     << 0x18U) | ((0xff0000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_2_0 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_1_0 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_0_0))));
        __Vtemp_hb7c5a23f__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_7_0 
                                     << 0x18U) | ((0xff0000U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_6_0 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_5_0 
                                                         << 8U)) 
                                                     | (0xffU 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_4_0))));
        __Vtemp_hb7c5a23f__0[2U] = (IData)((((QData)((IData)(
                                                             ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_15_0 
                                                               << 0x18U) 
                                                              | ((0xff0000U 
                                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_14_0 
                                                                     << 0x10U)) 
                                                                 | ((0xff00U 
                                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_13_0 
                                                                        << 8U)) 
                                                                    | (0xffU 
                                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_12_0)))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_11_0 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_10_0 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_9_0 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_8_0))))))));
        __Vtemp_hb7c5a23f__0[3U] = (IData)(((((QData)((IData)(
                                                              ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_15_0 
                                                                << 0x18U) 
                                                               | ((0xff0000U 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_14_0 
                                                                      << 0x10U)) 
                                                                  | ((0xff00U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_13_0 
                                                                         << 8U)) 
                                                                     | (0xffU 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_12_0)))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_11_0 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_10_0 
                                                                       << 0x10U)) 
                                                                   | ((0xff00U 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_9_0 
                                                                          << 8U)) 
                                                                      | (0xffU 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__pipe_out_p__DOT__stages_7_resp_data_8_0))))))) 
                                            >> 0x20U));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_117) {
        __Vtemp_hb7c5a23f__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stages_3_data[0U];
        __Vtemp_hb7c5a23f__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stages_3_data[1U];
        __Vtemp_hb7c5a23f__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stages_3_data[2U];
        __Vtemp_hb7c5a23f__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_3__DOT__stages_3_data[3U];
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_115) {
        __Vtemp_hb7c5a23f__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stages_3_data[0U];
        __Vtemp_hb7c5a23f__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stages_3_data[1U];
        __Vtemp_hb7c5a23f__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stages_3_data[2U];
        __Vtemp_hb7c5a23f__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_2__DOT__stages_3_data[3U];
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_113) {
        __Vtemp_hb7c5a23f__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stages_3_data[0U];
        __Vtemp_hb7c5a23f__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stages_3_data[1U];
        __Vtemp_hb7c5a23f__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stages_3_data[2U];
        __Vtemp_hb7c5a23f__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p_1__DOT__stages_3_data[3U];
    } else {
        __Vtemp_hb7c5a23f__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stages_3_data[0U];
        __Vtemp_hb7c5a23f__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stages_3_data[1U];
        __Vtemp_hb7c5a23f__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stages_3_data[2U];
        __Vtemp_hb7c5a23f__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dma_read_pipe_p__DOT__stages_3_data[3U];
    }
    VL_EXTEND_WW(512,128, __Vtemp_h0f610ddb__0, __Vtemp_hb7c5a23f__0);
    bufp->fullWData(oldp+27193,(__Vtemp_h0f610ddb__0),512);
    bufp->fullBit(oldp+27209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writeData_valid));
    bufp->fullBit(oldp+27210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en));
    bufp->fullBit(oldp+27211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en));
    bufp->fullBit(oldp+27212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en));
    bufp->fullBit(oldp+27213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en));
    bufp->fullBit(oldp+27214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writeData_is_full_width));
    bufp->fullBit(oldp+27215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_finished));
    bufp->fullBit(oldp+27216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_acc_finished));
    bufp->fullBit(oldp+27217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite));
    bufp->fullBit(oldp+27218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_read_req_valid));
    bufp->fullBit(oldp+27219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite_1));
    bufp->fullBit(oldp+27220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_read_req_valid));
    bufp->fullBit(oldp+27221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite_2));
    bufp->fullBit(oldp+27222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_read_req_valid));
    bufp->fullBit(oldp+27223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite_3));
    bufp->fullBit(oldp+27224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_read_req_valid));
    bufp->fullBit(oldp+27225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread));
    bufp->fullBit(oldp+27226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zerowrite));
    bufp->fullBit(oldp+27227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1));
    bufp->fullBit(oldp+27228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zerowrite_1));
    bufp->fullBit(oldp+27229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_2));
    bufp->fullBit(oldp+27230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zerowrite_2));
    bufp->fullBit(oldp+27231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_3));
    bufp->fullBit(oldp+27232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zerowrite_3));
    bufp->fullBit(oldp+27233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_waiting_to_be_scaled));
    bufp->fullBit(oldp+27234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite_4));
    bufp->fullBit(oldp+27235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_0_read_req_valid));
    bufp->fullBit(oldp+27236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_0_read_resp_ready));
    bufp->fullBit(oldp+27237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmawrite_5));
    bufp->fullBit(oldp+27238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_1_read_req_valid));
    bufp->fullBit(oldp+27239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_1_read_resp_ready));
    bufp->fullBit(oldp+27240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale));
    bufp->fullBit(oldp+27241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale_acc));
    bufp->fullBit(oldp+27242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_last));
    bufp->fullBit(oldp+27243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_last_1));
    bufp->fullBit(oldp+27244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid));
    bufp->fullBit(oldp+27245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid));
    bufp->fullIData(oldp+27246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0U]),32);
    bufp->fullIData(oldp+27247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[1U]),32);
    bufp->fullIData(oldp+27248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[2U]),32);
    bufp->fullIData(oldp+27249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[3U]),32);
    bufp->fullIData(oldp+27250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[4U]),32);
    bufp->fullIData(oldp+27251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[5U]),32);
    bufp->fullIData(oldp+27252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[6U]),32);
    bufp->fullIData(oldp+27253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[7U]),32);
    bufp->fullIData(oldp+27254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[8U]),32);
    bufp->fullIData(oldp+27255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[9U]),32);
    bufp->fullIData(oldp+27256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xaU]),32);
    bufp->fullIData(oldp+27257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xbU]),32);
    bufp->fullIData(oldp+27258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xcU]),32);
    bufp->fullIData(oldp+27259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xdU]),32);
    bufp->fullIData(oldp+27260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xeU]),32);
    bufp->fullIData(oldp+27261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xfU]),32);
    bufp->fullIData(oldp+27262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0U]),32);
    bufp->fullIData(oldp+27263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[1U]),32);
    bufp->fullIData(oldp+27264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[2U]),32);
    bufp->fullIData(oldp+27265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[3U]),32);
    bufp->fullIData(oldp+27266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[4U]),32);
    bufp->fullIData(oldp+27267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[5U]),32);
    bufp->fullIData(oldp+27268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[6U]),32);
    bufp->fullIData(oldp+27269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[7U]),32);
    bufp->fullIData(oldp+27270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[8U]),32);
    bufp->fullIData(oldp+27271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[9U]),32);
    bufp->fullIData(oldp+27272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xaU]),32);
    bufp->fullIData(oldp+27273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xbU]),32);
    bufp->fullIData(oldp+27274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xcU]),32);
    bufp->fullIData(oldp+27275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xdU]),32);
    bufp->fullIData(oldp+27276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xeU]),32);
    bufp->fullIData(oldp+27277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xfU]),32);
    bufp->fullIData(oldp+27278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_0_0),32);
    bufp->fullIData(oldp+27279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_1_0),32);
    bufp->fullIData(oldp+27280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_2_0),32);
    bufp->fullIData(oldp+27281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_3_0),32);
    bufp->fullIData(oldp+27282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_4_0),32);
    bufp->fullIData(oldp+27283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_5_0),32);
    bufp->fullIData(oldp+27284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_6_0),32);
    bufp->fullIData(oldp+27285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_7_0),32);
    bufp->fullIData(oldp+27286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_8_0),32);
    bufp->fullIData(oldp+27287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_9_0),32);
    bufp->fullIData(oldp+27288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_10_0),32);
    bufp->fullIData(oldp+27289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_11_0),32);
    bufp->fullIData(oldp+27290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_12_0),32);
    bufp->fullIData(oldp+27291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_13_0),32);
    bufp->fullIData(oldp+27292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_14_0),32);
    bufp->fullIData(oldp+27293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_15_0),32);
    bufp->fullIData(oldp+27294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_0_0),32);
    bufp->fullIData(oldp+27295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_1_0),32);
    bufp->fullIData(oldp+27296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_2_0),32);
    bufp->fullIData(oldp+27297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_3_0),32);
    bufp->fullIData(oldp+27298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_4_0),32);
    bufp->fullIData(oldp+27299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_5_0),32);
    bufp->fullIData(oldp+27300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_6_0),32);
    bufp->fullIData(oldp+27301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_7_0),32);
    bufp->fullIData(oldp+27302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_8_0),32);
    bufp->fullIData(oldp+27303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_9_0),32);
    bufp->fullIData(oldp+27304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_10_0),32);
    bufp->fullIData(oldp+27305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_11_0),32);
    bufp->fullIData(oldp+27306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_12_0),32);
    bufp->fullIData(oldp+27307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_13_0),32);
    bufp->fullIData(oldp+27308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_14_0),32);
    bufp->fullIData(oldp+27309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_15_0),32);
    bufp->fullIData(oldp+27310,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_1__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_2__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_3__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_4__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_5__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_6__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_7__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_8__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_9__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_10__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_11__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_12__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_13__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_14__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_15__DOT__io_sum_r),32);
    bufp->fullIData(oldp+27326,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27327,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_0_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_0_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27328,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[1U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[1U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27329,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_1_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_1_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27330,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xaU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xaU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27331,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_10_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_10_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27332,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xbU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xbU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27333,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_11_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_11_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27334,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xcU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xcU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27335,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_12_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_12_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27336,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xdU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xdU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27337,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_13_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_13_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27338,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xeU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xeU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27339,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_14_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_14_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27340,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xfU]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xfU]
                                             : 0U))),32);
    bufp->fullIData(oldp+27341,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_15_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_15_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27342,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[2U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[2U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27343,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_2_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_2_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27344,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[3U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[3U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27345,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_3_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_3_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27346,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[4U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[4U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27347,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_4_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_4_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27348,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[5U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[5U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27349,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_5_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_5_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27350,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[6U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[6U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27351,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_6_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_6_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27352,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[7U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[7U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27353,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_7_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_7_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27354,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[8U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[8U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27355,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_8_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_8_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27356,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[9U]
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[9U]
                                             : 0U))),32);
    bufp->fullIData(oldp+27357,((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_0_io_adder_valid)
                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_data_9_0
                                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_mems_1_io_adder_valid)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_data_9_0
                                             : 0U))),32);
    bufp->fullIData(oldp+27358,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__acc_scale_bits
                                  : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[3U] 
                                      << 0x15U) | (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0xbU)))),32);
    bufp->fullSData(oldp+27359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_0__io_read_req_bits_addr),9);
    bufp->fullIData(oldp+27360,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[4U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[3U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+27361,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[5U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[4U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+27362,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[6U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[5U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+27363,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[7U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[6U] 
                                             >> 0xbU)))),32);
    bufp->fullCData(oldp+27364,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__activation)
                                        : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                            << 0x18U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                              >> 8U))))),3);
    bufp->fullBit(oldp+27365,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_0_valid)))));
    bufp->fullBit(oldp+27366,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_0__io_write_valid));
    bufp->fullSData(oldp+27367,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_0__io_write_bits_addr),9);
    bufp->fullIData(oldp+27368,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_0_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_0_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_0)
                                      : 0U))),32);
    bufp->fullIData(oldp+27369,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_1)
                                      : 0U))),32);
    bufp->fullIData(oldp+27370,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_2)
                                      : 0U))),32);
    bufp->fullIData(oldp+27371,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_3_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_3_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_3)
                                      : 0U))),32);
    bufp->fullIData(oldp+27372,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_4_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_4_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_4)
                                      : 0U))),32);
    bufp->fullIData(oldp+27373,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_5_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_5_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_5)
                                      : 0U))),32);
    bufp->fullIData(oldp+27374,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_6_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_6_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_6)
                                      : 0U))),32);
    bufp->fullIData(oldp+27375,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_7_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_7_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_7)
                                      : 0U))),32);
    bufp->fullIData(oldp+27376,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_8_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_8_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_8)
                                      : 0U))),32);
    bufp->fullIData(oldp+27377,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_9_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_9_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_9)
                                      : 0U))),32);
    bufp->fullIData(oldp+27378,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_10_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_10_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_10)
                                      : 0U))),32);
    bufp->fullIData(oldp+27379,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_11_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_11_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_11)
                                      : 0U))),32);
    bufp->fullIData(oldp+27380,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_12_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_12_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_12)
                                      : 0U))),32);
    bufp->fullIData(oldp+27381,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_13_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_13_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_13)
                                      : 0U))),32);
    bufp->fullIData(oldp+27382,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_14)
                                      : 0U))),32);
    bufp->fullIData(oldp+27383,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_data_15_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_data_15_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_15)
                                      : 0U))),32);
    bufp->fullBit(oldp+27384,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_0__io_write_bits_acc));
    bufp->fullBit(oldp+27385,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_0))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+27386,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_1))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+27387,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_2))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+27388,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_3))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+27389,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_4))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+27390,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_5))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+27391,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_6))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+27392,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_7))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+27393,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_8))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+27394,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_9))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+27395,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_10))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+27396,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_11))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+27397,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_12))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+27398,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_13))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+27399,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_14))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+27400,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_15))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+27401,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_16))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+27402,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_17))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+27403,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_18))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+27404,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_19))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+27405,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_20))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+27406,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_21))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+27407,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_22))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+27408,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_23))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+27409,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_24))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+27410,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_25))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+27411,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_26))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+27412,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_27))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+27413,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_28))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+27414,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_29))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+27415,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_30))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+27416,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_31))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+27417,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_32))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+27418,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_33))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+27419,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_34))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+27420,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_35))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+27421,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_36))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+27422,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_37))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+27423,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_38))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+27424,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_39))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+27425,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_40))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+27426,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_41))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+27427,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_42))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+27428,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_43))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+27429,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_44))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+27430,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_45))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+27431,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_46))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+27432,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_47))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+27433,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_48))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+27434,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_49))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+27435,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_50))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+27436,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_51))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+27437,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_52))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+27438,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_53))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+27439,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_54))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+27440,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_55))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+27441,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_56))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+27442,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_57))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+27443,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_58))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+27444,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_59))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+27445,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_60))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+27446,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_61))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+27447,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_62))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+27448,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_0_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_165)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_63))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+27449,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT___io_deq_valid_output));
    bufp->fullIData(oldp+27450,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0U])),32);
    bufp->fullIData(oldp+27451,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][1U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[1U])),32);
    bufp->fullIData(oldp+27452,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][2U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[2U])),32);
    bufp->fullIData(oldp+27453,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][3U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[3U])),32);
    bufp->fullIData(oldp+27454,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][4U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[4U])),32);
    bufp->fullIData(oldp+27455,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][5U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[5U])),32);
    bufp->fullIData(oldp+27456,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][6U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[6U])),32);
    bufp->fullIData(oldp+27457,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][7U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[7U])),32);
    bufp->fullIData(oldp+27458,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][8U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[8U])),32);
    bufp->fullIData(oldp+27459,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][9U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[9U])),32);
    bufp->fullIData(oldp+27460,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xaU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xaU])),32);
    bufp->fullIData(oldp+27461,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xbU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xbU])),32);
    bufp->fullIData(oldp+27462,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xcU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xcU])),32);
    bufp->fullIData(oldp+27463,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xdU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xdU])),32);
    bufp->fullIData(oldp+27464,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xeU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xeU])),32);
    bufp->fullIData(oldp+27465,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xfU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xfU])),32);
    bufp->fullBit(oldp+27466,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                     [0U][0x10U] : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_fromDMA_REG)))));
    bufp->fullIData(oldp+27467,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x11U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x10U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_scale_REG_bits)),32);
    bufp->fullIData(oldp+27468,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x12U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x11U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qb_REG)),32);
    bufp->fullIData(oldp+27469,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x13U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x12U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qc_REG)),32);
    bufp->fullIData(oldp+27470,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x14U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x13U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG)),32);
    bufp->fullIData(oldp+27471,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x15U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x14U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG)),32);
    bufp->fullCData(oldp+27472,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full)
                                        ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                            [0U][0x15U] 
                                            << 0x1fU) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
                                              [0U][0x15U] 
                                              >> 1U))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_act_REG)))),3);
    bufp->fullBit(oldp+27473,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT___io_write_ready_T_7)))));
    bufp->fullBit(oldp+27474,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_valid));
    bufp->fullSData(oldp+27475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_addr),9);
    bufp->fullBit(oldp+27476,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_acc));
    bufp->fullBit(oldp+27477,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_0));
    bufp->fullBit(oldp+27478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_1));
    bufp->fullBit(oldp+27479,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_2));
    bufp->fullBit(oldp+27480,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_3));
    bufp->fullBit(oldp+27481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_4));
    bufp->fullBit(oldp+27482,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_5));
    bufp->fullBit(oldp+27483,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_6));
    bufp->fullBit(oldp+27484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_7));
    bufp->fullBit(oldp+27485,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_8));
    bufp->fullBit(oldp+27486,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_9));
    bufp->fullBit(oldp+27487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_10));
    bufp->fullBit(oldp+27488,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_11));
    bufp->fullBit(oldp+27489,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_12));
    bufp->fullBit(oldp+27490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_13));
    bufp->fullBit(oldp+27491,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_14));
    bufp->fullBit(oldp+27492,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_15));
    bufp->fullBit(oldp+27493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_16));
    bufp->fullBit(oldp+27494,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_17));
    bufp->fullBit(oldp+27495,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_18));
    bufp->fullBit(oldp+27496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_19));
    bufp->fullBit(oldp+27497,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_20));
    bufp->fullBit(oldp+27498,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_21));
    bufp->fullBit(oldp+27499,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_22));
    bufp->fullBit(oldp+27500,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_23));
    bufp->fullBit(oldp+27501,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_24));
    bufp->fullBit(oldp+27502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_25));
    bufp->fullBit(oldp+27503,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_26));
    bufp->fullBit(oldp+27504,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_27));
    bufp->fullBit(oldp+27505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_28));
    bufp->fullBit(oldp+27506,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_29));
    bufp->fullBit(oldp+27507,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_30));
    bufp->fullBit(oldp+27508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_31));
    bufp->fullBit(oldp+27509,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_32));
    bufp->fullBit(oldp+27510,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_33));
    bufp->fullBit(oldp+27511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_34));
    bufp->fullBit(oldp+27512,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_35));
    bufp->fullBit(oldp+27513,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_36));
    bufp->fullBit(oldp+27514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_37));
    bufp->fullBit(oldp+27515,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_38));
    bufp->fullBit(oldp+27516,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_39));
    bufp->fullBit(oldp+27517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_40));
    bufp->fullBit(oldp+27518,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_41));
    bufp->fullBit(oldp+27519,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_42));
    bufp->fullBit(oldp+27520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_43));
    bufp->fullBit(oldp+27521,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_44));
    bufp->fullBit(oldp+27522,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_45));
    bufp->fullBit(oldp+27523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_46));
    bufp->fullBit(oldp+27524,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_47));
    bufp->fullBit(oldp+27525,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_48));
    bufp->fullBit(oldp+27526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_49));
    bufp->fullBit(oldp+27527,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_50));
    bufp->fullBit(oldp+27528,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_51));
    bufp->fullBit(oldp+27529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_52));
    bufp->fullBit(oldp+27530,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_53));
    bufp->fullBit(oldp+27531,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_54));
    bufp->fullBit(oldp+27532,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_55));
    bufp->fullBit(oldp+27533,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_56));
    bufp->fullBit(oldp+27534,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_57));
    bufp->fullBit(oldp+27535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_58));
    bufp->fullBit(oldp+27536,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_59));
    bufp->fullBit(oldp+27537,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_60));
    bufp->fullBit(oldp+27538,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_61));
    bufp->fullBit(oldp+27539,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_62));
    bufp->fullBit(oldp+27540,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_0_bits_mask_63));
    bufp->fullBit(oldp+27541,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_valid));
    bufp->fullSData(oldp+27542,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_addr),9);
    bufp->fullIData(oldp+27543,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_0_0),32);
    bufp->fullIData(oldp+27544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_1_0),32);
    bufp->fullIData(oldp+27545,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_2_0),32);
    bufp->fullIData(oldp+27546,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_3_0),32);
    bufp->fullIData(oldp+27547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_4_0),32);
    bufp->fullIData(oldp+27548,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_5_0),32);
    bufp->fullIData(oldp+27549,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_6_0),32);
    bufp->fullIData(oldp+27550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_7_0),32);
    bufp->fullIData(oldp+27551,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_8_0),32);
    bufp->fullIData(oldp+27552,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_9_0),32);
    bufp->fullIData(oldp+27553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_10_0),32);
    bufp->fullIData(oldp+27554,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_11_0),32);
    bufp->fullIData(oldp+27555,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_12_0),32);
    bufp->fullIData(oldp+27556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_13_0),32);
    bufp->fullIData(oldp+27557,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_14_0),32);
    bufp->fullIData(oldp+27558,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_15_0),32);
    bufp->fullBit(oldp+27559,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc));
    bufp->fullBit(oldp+27560,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_0));
    bufp->fullBit(oldp+27561,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_1));
    bufp->fullBit(oldp+27562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_2));
    bufp->fullBit(oldp+27563,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_3));
    bufp->fullBit(oldp+27564,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_4));
    bufp->fullBit(oldp+27565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_5));
    bufp->fullBit(oldp+27566,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_6));
    bufp->fullBit(oldp+27567,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_7));
    bufp->fullBit(oldp+27568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_8));
    bufp->fullBit(oldp+27569,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_9));
    bufp->fullBit(oldp+27570,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_10));
    bufp->fullBit(oldp+27571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_11));
    bufp->fullBit(oldp+27572,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_12));
    bufp->fullBit(oldp+27573,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_13));
    bufp->fullBit(oldp+27574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_14));
    bufp->fullBit(oldp+27575,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_15));
    bufp->fullBit(oldp+27576,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_16));
    bufp->fullBit(oldp+27577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_17));
    bufp->fullBit(oldp+27578,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_18));
    bufp->fullBit(oldp+27579,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_19));
    bufp->fullBit(oldp+27580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_20));
    bufp->fullBit(oldp+27581,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_21));
    bufp->fullBit(oldp+27582,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_22));
    bufp->fullBit(oldp+27583,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_23));
    bufp->fullBit(oldp+27584,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_24));
    bufp->fullBit(oldp+27585,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_25));
    bufp->fullBit(oldp+27586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_26));
    bufp->fullBit(oldp+27587,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_27));
    bufp->fullBit(oldp+27588,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_28));
    bufp->fullBit(oldp+27589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_29));
    bufp->fullBit(oldp+27590,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_30));
    bufp->fullBit(oldp+27591,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_31));
    bufp->fullBit(oldp+27592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_32));
    bufp->fullBit(oldp+27593,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_33));
    bufp->fullBit(oldp+27594,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_34));
    bufp->fullBit(oldp+27595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_35));
    bufp->fullBit(oldp+27596,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_36));
    bufp->fullBit(oldp+27597,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_37));
    bufp->fullBit(oldp+27598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_38));
    bufp->fullBit(oldp+27599,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_39));
    bufp->fullBit(oldp+27600,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_40));
    bufp->fullBit(oldp+27601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_41));
    bufp->fullBit(oldp+27602,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_42));
    bufp->fullBit(oldp+27603,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_43));
    bufp->fullBit(oldp+27604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_44));
    bufp->fullBit(oldp+27605,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_45));
    bufp->fullBit(oldp+27606,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_46));
    bufp->fullBit(oldp+27607,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_47));
    bufp->fullBit(oldp+27608,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_48));
    bufp->fullBit(oldp+27609,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_49));
    bufp->fullBit(oldp+27610,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_50));
    bufp->fullBit(oldp+27611,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_51));
    bufp->fullBit(oldp+27612,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_52));
    bufp->fullBit(oldp+27613,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_53));
    bufp->fullBit(oldp+27614,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_54));
    bufp->fullBit(oldp+27615,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_55));
    bufp->fullBit(oldp+27616,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_56));
    bufp->fullBit(oldp+27617,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_57));
    bufp->fullBit(oldp+27618,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_58));
    bufp->fullBit(oldp+27619,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_59));
    bufp->fullBit(oldp+27620,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_60));
    bufp->fullBit(oldp+27621,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_61));
    bufp->fullBit(oldp+27622,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_62));
    bufp->fullBit(oldp+27623,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_mask_63));
    bufp->fullIData(oldp+27624,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_scale_REG_bits),32);
    bufp->fullIData(oldp+27625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qb_REG),32);
    bufp->fullIData(oldp+27626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qc_REG),32);
    bufp->fullIData(oldp+27627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG),32);
    bufp->fullIData(oldp+27628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG),32);
    bufp->fullCData(oldp+27629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_act_REG),3);
    bufp->fullBit(oldp+27630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_fromDMA_REG));
    bufp->fullBit(oldp+27631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_valid_REG));
    bufp->fullSData(oldp+27632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr),9);
    bufp->fullIData(oldp+27633,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_0_0)),32);
    bufp->fullIData(oldp+27634,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_1__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_1_0)),32);
    bufp->fullIData(oldp+27635,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_2__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_2_0)),32);
    bufp->fullIData(oldp+27636,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_3__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_3_0)),32);
    bufp->fullIData(oldp+27637,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_4__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_4_0)),32);
    bufp->fullIData(oldp+27638,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_5__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_5_0)),32);
    bufp->fullIData(oldp+27639,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_6__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_6_0)),32);
    bufp->fullIData(oldp+27640,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_7__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_7_0)),32);
    bufp->fullIData(oldp+27641,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_8__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_8_0)),32);
    bufp->fullIData(oldp+27642,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_9__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_9_0)),32);
    bufp->fullIData(oldp+27643,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_10__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_10_0)),32);
    bufp->fullIData(oldp+27644,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_11__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_11_0)),32);
    bufp->fullIData(oldp+27645,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_12__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_12_0)),32);
    bufp->fullIData(oldp+27646,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_13__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_13_0)),32);
    bufp->fullIData(oldp+27647,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_14__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_14_0)),32);
    bufp->fullIData(oldp+27648,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_15__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__pipelined_writes_1_bits_data_15_0)),32);
    bufp->fullBit(oldp+27649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_ren));
    bufp->fullWData(oldp+27650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data),512);
    bufp->fullQData(oldp+27666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask),64);
    bufp->fullWData(oldp+27668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data),512);
    bufp->fullCData(oldp+27684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27685,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0U])),8);
    bufp->fullBit(oldp+27686,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask))));
    bufp->fullCData(oldp+27687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27688,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27689,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 1U)))));
    bufp->fullCData(oldp+27690,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27691,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27692,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 2U)))));
    bufp->fullCData(oldp+27693,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27694,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27695,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 3U)))));
    bufp->fullCData(oldp+27696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27697,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[1U])),8);
    bufp->fullBit(oldp+27698,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 4U)))));
    bufp->fullCData(oldp+27699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27700,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27701,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 5U)))));
    bufp->fullCData(oldp+27702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27703,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27704,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 6U)))));
    bufp->fullCData(oldp+27705,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27706,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27707,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 7U)))));
    bufp->fullCData(oldp+27708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27709,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[2U])),8);
    bufp->fullBit(oldp+27710,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 8U)))));
    bufp->fullCData(oldp+27711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27712,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27713,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 9U)))));
    bufp->fullCData(oldp+27714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27715,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27716,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xaU)))));
    bufp->fullCData(oldp+27717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27718,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27719,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xbU)))));
    bufp->fullCData(oldp+27720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27721,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[3U])),8);
    bufp->fullBit(oldp+27722,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xcU)))));
    bufp->fullCData(oldp+27723,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27724,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27725,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xdU)))));
    bufp->fullCData(oldp+27726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27727,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27728,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xeU)))));
    bufp->fullCData(oldp+27729,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27730,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27731,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xfU)))));
    bufp->fullCData(oldp+27732,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27733,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[4U])),8);
    bufp->fullBit(oldp+27734,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x10U)))));
    bufp->fullCData(oldp+27735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27736,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27737,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x11U)))));
    bufp->fullCData(oldp+27738,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27739,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27740,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x12U)))));
    bufp->fullCData(oldp+27741,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27742,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27743,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x13U)))));
    bufp->fullCData(oldp+27744,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27745,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[5U])),8);
    bufp->fullBit(oldp+27746,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x14U)))));
    bufp->fullCData(oldp+27747,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27748,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27749,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x15U)))));
    bufp->fullCData(oldp+27750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27751,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27752,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x16U)))));
    bufp->fullCData(oldp+27753,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27754,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27755,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x17U)))));
    bufp->fullCData(oldp+27756,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27757,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[6U])),8);
    bufp->fullBit(oldp+27758,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x18U)))));
    bufp->fullCData(oldp+27759,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27760,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27761,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x19U)))));
    bufp->fullCData(oldp+27762,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27763,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27764,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1aU)))));
    bufp->fullCData(oldp+27765,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27766,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27767,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1bU)))));
    bufp->fullCData(oldp+27768,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27769,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[7U])),8);
    bufp->fullBit(oldp+27770,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1cU)))));
    bufp->fullCData(oldp+27771,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27772,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27773,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1dU)))));
    bufp->fullCData(oldp+27774,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27775,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27776,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1eU)))));
    bufp->fullCData(oldp+27777,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27778,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27779,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1fU)))));
    bufp->fullCData(oldp+27780,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27781,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[8U])),8);
    bufp->fullBit(oldp+27782,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x20U)))));
    bufp->fullCData(oldp+27783,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27784,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27785,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x21U)))));
    bufp->fullCData(oldp+27786,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27787,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27788,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x22U)))));
    bufp->fullCData(oldp+27789,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27790,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27791,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x23U)))));
    bufp->fullCData(oldp+27792,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27793,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[9U])),8);
    bufp->fullBit(oldp+27794,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x24U)))));
    bufp->fullCData(oldp+27795,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27796,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27797,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x25U)))));
    bufp->fullCData(oldp+27798,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27799,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27800,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x26U)))));
    bufp->fullCData(oldp+27801,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27802,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27803,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x27U)))));
    bufp->fullCData(oldp+27804,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27805,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU])),8);
    bufp->fullBit(oldp+27806,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x28U)))));
    bufp->fullCData(oldp+27807,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27808,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27809,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x29U)))));
    bufp->fullCData(oldp+27810,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27811,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27812,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2aU)))));
    bufp->fullCData(oldp+27813,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27814,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27815,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2bU)))));
    bufp->fullCData(oldp+27816,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27817,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU])),8);
    bufp->fullBit(oldp+27818,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2cU)))));
    bufp->fullCData(oldp+27819,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27820,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27821,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2dU)))));
    bufp->fullCData(oldp+27822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27823,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27824,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2eU)))));
    bufp->fullCData(oldp+27825,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27826,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27827,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2fU)))));
    bufp->fullCData(oldp+27828,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27829,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU])),8);
    bufp->fullBit(oldp+27830,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x30U)))));
    bufp->fullCData(oldp+27831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27832,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27833,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x31U)))));
    bufp->fullCData(oldp+27834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27835,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27836,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x32U)))));
    bufp->fullCData(oldp+27837,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27838,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27839,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x33U)))));
    bufp->fullCData(oldp+27840,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27841,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU])),8);
    bufp->fullBit(oldp+27842,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x34U)))));
    bufp->fullCData(oldp+27843,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27844,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27845,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x35U)))));
    bufp->fullCData(oldp+27846,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27847,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27848,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x36U)))));
    bufp->fullCData(oldp+27849,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27850,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27851,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x37U)))));
    bufp->fullCData(oldp+27852,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27853,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU])),8);
    bufp->fullBit(oldp+27854,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x38U)))));
    bufp->fullCData(oldp+27855,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27856,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27857,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x39U)))));
    bufp->fullCData(oldp+27858,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27859,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27860,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3aU)))));
    bufp->fullCData(oldp+27861,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27862,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27863,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3bU)))));
    bufp->fullCData(oldp+27864,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27865,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU])),8);
    bufp->fullBit(oldp+27866,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3cU)))));
    bufp->fullCData(oldp+27867,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27868,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+27869,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3dU)))));
    bufp->fullCData(oldp+27870,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27871,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+27872,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3eU)))));
    bufp->fullCData(oldp+27873,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+27874,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+27875,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3fU)))));
    __Vtemp_ha80f3223__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0U];
    __Vtemp_ha80f3223__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[1U];
    __Vtemp_ha80f3223__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[2U];
    __Vtemp_ha80f3223__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[3U];
    __Vtemp_ha80f3223__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[4U];
    __Vtemp_ha80f3223__0[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[5U];
    __Vtemp_ha80f3223__0[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[6U];
    __Vtemp_ha80f3223__0[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[7U];
    __Vtemp_ha80f3223__0[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[8U];
    __Vtemp_ha80f3223__0[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[9U];
    __Vtemp_ha80f3223__0[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xaU];
    __Vtemp_ha80f3223__0[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xbU];
    __Vtemp_ha80f3223__0[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xcU];
    __Vtemp_ha80f3223__0[0xdU] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0] 
                                   << 0x18U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xdU]);
    __Vtemp_ha80f3223__0[0xeU] = (IData)((((QData)((IData)(
                                                           ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
                                                             << 0x18U) 
                                                            | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                << 0x10U) 
                                                               | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                   << 8U) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0])))))));
    __Vtemp_ha80f3223__0[0xfU] = (IData)(((((QData)((IData)(
                                                            ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0])))))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+27876,(__Vtemp_ha80f3223__0),512);
    bufp->fullBit(oldp+27892,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27893,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27894,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27895,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27896,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27897,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27898,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27899,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27900,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27901,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27902,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27903,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27904,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27905,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27906,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27907,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27908,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27909,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27910,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27911,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27912,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27913,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27914,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27915,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27916,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27917,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27918,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27919,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27920,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27921,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27922,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27923,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27924,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27925,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27926,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27927,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27928,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27929,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27930,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27931,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27932,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27933,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27934,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27935,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27936,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27937,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27938,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27939,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27940,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27941,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27942,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27943,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27944,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27945,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27946,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27947,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27948,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27949,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27950,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27951,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27952,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27953,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27954,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27955,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27956,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27957,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27958,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27959,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27960,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27961,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27962,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27963,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27964,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27965,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27966,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27967,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27968,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27969,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27970,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27971,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27972,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27973,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27974,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27975,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27976,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27977,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27978,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27979,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27980,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27981,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27982,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27983,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27984,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27985,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27986,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27987,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27988,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27989,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27990,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27991,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27992,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27993,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27994,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27995,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27996,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27997,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+27998,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+27999,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28000,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28001,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28002,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28003,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28004,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28005,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28006,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28007,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28008,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28009,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28010,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28011,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28012,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28013,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28014,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28015,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28016,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28017,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28018,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28019,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28020,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+28021,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__maybe_full));
    bufp->fullBit(oldp+28022,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__do_enq));
    __Vtemp_hfb5bb0d6__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0U];
    __Vtemp_hfb5bb0d6__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[1U];
    __Vtemp_hfb5bb0d6__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[2U];
    __Vtemp_hfb5bb0d6__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[3U];
    __Vtemp_hfb5bb0d6__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[4U];
    __Vtemp_hfb5bb0d6__0[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[5U];
    __Vtemp_hfb5bb0d6__0[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[6U];
    __Vtemp_hfb5bb0d6__0[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[7U];
    __Vtemp_hfb5bb0d6__0[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[8U];
    __Vtemp_hfb5bb0d6__0[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[9U];
    __Vtemp_hfb5bb0d6__0[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xaU];
    __Vtemp_hfb5bb0d6__0[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xbU];
    __Vtemp_hfb5bb0d6__0[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xcU];
    __Vtemp_hfb5bb0d6__0[0xdU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xdU];
    __Vtemp_hfb5bb0d6__0[0xeU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xeU];
    __Vtemp_hfb5bb0d6__0[0xfU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xfU];
    __Vtemp_hfb5bb0d6__0[0x10U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_scale_REG_bits 
                                    << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_fromDMA_REG));
    __Vtemp_hfb5bb0d6__0[0x11U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_scale_REG_bits 
                                    >> 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qb_REG 
                                                 << 1U));
    __Vtemp_hfb5bb0d6__0[0x12U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qb_REG 
                                    >> 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qc_REG 
                                                 << 1U));
    __Vtemp_hfb5bb0d6__0[0x13U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_igelu_qc_REG 
                                    >> 0x1fU) | ((IData)(
                                                         (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG)))) 
                                                 << 1U));
    __Vtemp_hfb5bb0d6__0[0x14U] = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG)))) 
                                    >> 0x1fU) | ((IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG))) 
                                                          >> 0x20U)) 
                                                 << 1U));
    __Vtemp_hfb5bb0d6__0[0x15U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_act_REG) 
                                    << 1U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q_io_enq_bits_iexp_qln2_REG))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
    bufp->fullWData(oldp+28023,(__Vtemp_hfb5bb0d6__0),678);
    __Vtemp_hd63fc3a7__23[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0U];
    __Vtemp_hd63fc3a7__23[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][1U];
    __Vtemp_hd63fc3a7__23[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][2U];
    __Vtemp_hd63fc3a7__23[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][3U];
    __Vtemp_hd63fc3a7__23[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][4U];
    __Vtemp_hd63fc3a7__23[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][5U];
    __Vtemp_hd63fc3a7__23[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][6U];
    __Vtemp_hd63fc3a7__23[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][7U];
    __Vtemp_hd63fc3a7__23[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][8U];
    __Vtemp_hd63fc3a7__23[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][9U];
    __Vtemp_hd63fc3a7__23[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xaU];
    __Vtemp_hd63fc3a7__23[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xbU];
    __Vtemp_hd63fc3a7__23[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xcU];
    __Vtemp_hd63fc3a7__23[0xdU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xdU];
    __Vtemp_hd63fc3a7__23[0xeU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xeU];
    __Vtemp_hd63fc3a7__23[0xfU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xfU];
    __Vtemp_hd63fc3a7__23[0x10U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x10U];
    __Vtemp_hd63fc3a7__23[0x11U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x11U];
    __Vtemp_hd63fc3a7__23[0x12U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x12U];
    __Vtemp_hd63fc3a7__23[0x13U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x13U];
    __Vtemp_hd63fc3a7__23[0x14U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x14U];
    __Vtemp_hd63fc3a7__23[0x15U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x15U];
    bufp->fullWData(oldp+28045,(__Vtemp_hd63fc3a7__23),678);
    bufp->fullWData(oldp+28067,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__q__DOT__ram_ext__DOT__Memory[0]),678);
    bufp->fullIData(oldp+28089,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__acc_scale_bits
                                  : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[3U] 
                                      << 0x15U) | (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0xbU)))),32);
    bufp->fullSData(oldp+28090,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_1__io_read_req_bits_addr),9);
    bufp->fullIData(oldp+28091,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[4U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[3U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+28092,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[5U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[4U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+28093,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[6U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[5U] 
                                             >> 0xbU)))),32);
    bufp->fullIData(oldp+28094,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                  ? 0U : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[7U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[6U] 
                                             >> 0xbU)))),32);
    bufp->fullCData(oldp+28095,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__activation)
                                        : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                            << 0x18U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_dispatch_q__DOT___ram_ext_R0_data[2U] 
                                              >> 8U))))),3);
    bufp->fullBit(oldp+28096,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_read_req_1_valid)))));
    bufp->fullBit(oldp+28097,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_1__io_write_valid));
    bufp->fullSData(oldp+28098,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_1__io_write_bits_addr),9);
    bufp->fullIData(oldp+28099,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_0_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_0_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_0)
                                      : 0U))),32);
    bufp->fullIData(oldp+28100,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_1_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_1)
                                      : 0U))),32);
    bufp->fullIData(oldp+28101,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_2_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_2)
                                      : 0U))),32);
    bufp->fullIData(oldp+28102,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_3_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_3_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_3)
                                      : 0U))),32);
    bufp->fullIData(oldp+28103,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_4_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_4_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_4)
                                      : 0U))),32);
    bufp->fullIData(oldp+28104,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_5_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_5_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_5)
                                      : 0U))),32);
    bufp->fullIData(oldp+28105,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_6_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_6_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_6)
                                      : 0U))),32);
    bufp->fullIData(oldp+28106,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_7_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_7_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_7)
                                      : 0U))),32);
    bufp->fullIData(oldp+28107,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_8_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_8_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_8)
                                      : 0U))),32);
    bufp->fullIData(oldp+28108,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_9_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_9_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_9)
                                      : 0U))),32);
    bufp->fullIData(oldp+28109,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_10_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_10_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_10)
                                      : 0U))),32);
    bufp->fullIData(oldp+28110,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_11_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_11_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_11)
                                      : 0U))),32);
    bufp->fullIData(oldp+28111,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_12_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_12_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 7U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U]))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_12)
                                      : 0U))),32);
    bufp->fullIData(oldp+28112,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_13_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_13_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 0xfU)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                   >> 8U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_13)
                                      : 0U))),32);
    bufp->fullIData(oldp+28113,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_6_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__RegShifted_14_6_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                             >> 0x17U)))) 
                                              << 8U) 
                                             | (0xffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                   >> 0x10U)))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_14)
                                      : 0U))),32);
    bufp->fullIData(oldp+28114,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                  ? (((- (IData)((1U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_data_15_0 
                                                     >> 0x13U)))) 
                                      << 0x14U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_data_15_0)
                                  : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                          ? (((- (IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                          >> 0x1fU))) 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U] 
                                                >> 0x18U))
                                          : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_in_15)
                                      : 0U))),32);
    bufp->fullBit(oldp+28115,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__acc_mems_1__io_write_bits_acc));
    bufp->fullBit(oldp+28116,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_0))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+28117,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_1))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+28118,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_2))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+28119,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_3))
                                          : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53))))));
    bufp->fullBit(oldp+28120,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_4))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+28121,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_5))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+28122,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_6))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+28123,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (0xfU 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 1U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 1U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_7))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 1U)))))));
    bufp->fullBit(oldp+28124,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_8))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+28125,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_9))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+28126,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_10))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+28127,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 2U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_11))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 2U)))))));
    bufp->fullBit(oldp+28128,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_12))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+28129,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_13))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+28130,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_14))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+28131,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (7U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 2U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 3U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_15))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 3U)))))));
    bufp->fullBit(oldp+28132,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_16))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+28133,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_17))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+28134,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_18))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+28135,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 4U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_19))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 4U)))))));
    bufp->fullBit(oldp+28136,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_20))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+28137,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_21))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+28138,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_22))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+28139,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (5U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 5U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_23))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 5U)))))));
    bufp->fullBit(oldp+28140,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_24))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+28141,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_25))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+28142,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_26))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+28143,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (6U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 6U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_27))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 6U)))))));
    bufp->fullBit(oldp+28144,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_28))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+28145,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_29))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+28146,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_30))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+28147,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0U != (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                   >> 3U)))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 7U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_31))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 7U)))))));
    bufp->fullBit(oldp+28148,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_32))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+28149,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_33))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+28150,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_34))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+28151,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (8U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 8U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_35))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 8U)))))));
    bufp->fullBit(oldp+28152,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_36))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+28153,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_37))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+28154,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_38))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+28155,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (9U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 9U))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_39))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 9U)))))));
    bufp->fullBit(oldp+28156,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_40))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+28157,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_41))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+28158,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_42))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+28159,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xaU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xaU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_43))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xaU)))))));
    bufp->fullBit(oldp+28160,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_44))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+28161,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_45))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+28162,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_46))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+28163,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xbU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xbU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_47))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xbU)))))));
    bufp->fullBit(oldp+28164,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_48))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+28165,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_49))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+28166,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_50))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+28167,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xcU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xcU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_51))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xcU)))))));
    bufp->fullBit(oldp+28168,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_52))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+28169,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_53))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+28170,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_54))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+28171,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xdU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xdU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_55))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xdU)))))));
    bufp->fullBit(oldp+28172,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_56))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+28173,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_57))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+28174,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_58))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+28175,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? (0xeU < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                              ? (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                         >> 0xeU))
                                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_59))
                                          : (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                     >> 0xeU)))))));
    bufp->fullBit(oldp+28176,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_60))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+28177,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_61))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+28178,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_62))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+28179,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_acc_write_1_valid)
                                      ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                         >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___T_343)
                                                    ? 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__from_mvin_scale)
                                                     ? (IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                >> 0xfU))
                                                     : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_mask_63))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xfU)))))));
    bufp->fullBit(oldp+28180,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT___io_deq_valid_output));
    bufp->fullIData(oldp+28181,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0U])),32);
    bufp->fullIData(oldp+28182,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][1U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[1U])),32);
    bufp->fullIData(oldp+28183,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][2U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[2U])),32);
    bufp->fullIData(oldp+28184,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][3U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[3U])),32);
    bufp->fullIData(oldp+28185,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][4U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[4U])),32);
    bufp->fullIData(oldp+28186,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][5U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[5U])),32);
    bufp->fullIData(oldp+28187,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][6U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[6U])),32);
    bufp->fullIData(oldp+28188,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][7U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[7U])),32);
    bufp->fullIData(oldp+28189,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][8U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[8U])),32);
    bufp->fullIData(oldp+28190,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][9U] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[9U])),32);
    bufp->fullIData(oldp+28191,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xaU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xaU])),32);
    bufp->fullIData(oldp+28192,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xbU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xbU])),32);
    bufp->fullIData(oldp+28193,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xcU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xcU])),32);
    bufp->fullIData(oldp+28194,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xdU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xdU])),32);
    bufp->fullIData(oldp+28195,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xeU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xeU])),32);
    bufp->fullIData(oldp+28196,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                 [0U][0xfU] : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xfU])),32);
    bufp->fullBit(oldp+28197,((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                      ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                     [0U][0x10U] : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_fromDMA_REG)))));
    bufp->fullIData(oldp+28198,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x11U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x10U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_scale_REG_bits)),32);
    bufp->fullIData(oldp+28199,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x12U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x11U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qb_REG)),32);
    bufp->fullIData(oldp+28200,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x13U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x12U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qc_REG)),32);
    bufp->fullIData(oldp+28201,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x14U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x13U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG)),32);
    bufp->fullIData(oldp+28202,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                      [0U][0x15U] << 0x1fU) 
                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                        [0U][0x14U] 
                                        >> 1U)) : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG)),32);
    bufp->fullCData(oldp+28203,((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full)
                                        ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                            [0U][0x15U] 
                                            << 0x1fU) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
                                              [0U][0x15U] 
                                              >> 1U))
                                        : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_act_REG)))),3);
    bufp->fullBit(oldp+28204,((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT___io_write_ready_T_7)))));
    bufp->fullBit(oldp+28205,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_valid));
    bufp->fullSData(oldp+28206,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_addr),9);
    bufp->fullBit(oldp+28207,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_acc));
    bufp->fullBit(oldp+28208,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_0));
    bufp->fullBit(oldp+28209,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_1));
    bufp->fullBit(oldp+28210,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_2));
    bufp->fullBit(oldp+28211,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_3));
    bufp->fullBit(oldp+28212,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_4));
    bufp->fullBit(oldp+28213,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_5));
    bufp->fullBit(oldp+28214,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_6));
    bufp->fullBit(oldp+28215,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_7));
    bufp->fullBit(oldp+28216,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_8));
    bufp->fullBit(oldp+28217,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_9));
    bufp->fullBit(oldp+28218,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_10));
    bufp->fullBit(oldp+28219,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_11));
    bufp->fullBit(oldp+28220,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_12));
    bufp->fullBit(oldp+28221,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_13));
    bufp->fullBit(oldp+28222,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_14));
    bufp->fullBit(oldp+28223,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_15));
    bufp->fullBit(oldp+28224,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_16));
    bufp->fullBit(oldp+28225,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_17));
    bufp->fullBit(oldp+28226,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_18));
    bufp->fullBit(oldp+28227,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_19));
    bufp->fullBit(oldp+28228,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_20));
    bufp->fullBit(oldp+28229,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_21));
    bufp->fullBit(oldp+28230,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_22));
    bufp->fullBit(oldp+28231,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_23));
    bufp->fullBit(oldp+28232,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_24));
    bufp->fullBit(oldp+28233,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_25));
    bufp->fullBit(oldp+28234,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_26));
    bufp->fullBit(oldp+28235,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_27));
    bufp->fullBit(oldp+28236,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_28));
    bufp->fullBit(oldp+28237,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_29));
    bufp->fullBit(oldp+28238,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_30));
    bufp->fullBit(oldp+28239,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_31));
    bufp->fullBit(oldp+28240,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_32));
    bufp->fullBit(oldp+28241,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_33));
    bufp->fullBit(oldp+28242,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_34));
    bufp->fullBit(oldp+28243,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_35));
    bufp->fullBit(oldp+28244,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_36));
    bufp->fullBit(oldp+28245,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_37));
    bufp->fullBit(oldp+28246,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_38));
    bufp->fullBit(oldp+28247,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_39));
    bufp->fullBit(oldp+28248,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_40));
    bufp->fullBit(oldp+28249,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_41));
    bufp->fullBit(oldp+28250,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_42));
    bufp->fullBit(oldp+28251,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_43));
    bufp->fullBit(oldp+28252,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_44));
    bufp->fullBit(oldp+28253,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_45));
    bufp->fullBit(oldp+28254,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_46));
    bufp->fullBit(oldp+28255,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_47));
    bufp->fullBit(oldp+28256,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_48));
    bufp->fullBit(oldp+28257,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_49));
    bufp->fullBit(oldp+28258,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_50));
    bufp->fullBit(oldp+28259,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_51));
    bufp->fullBit(oldp+28260,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_52));
    bufp->fullBit(oldp+28261,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_53));
    bufp->fullBit(oldp+28262,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_54));
    bufp->fullBit(oldp+28263,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_55));
    bufp->fullBit(oldp+28264,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_56));
    bufp->fullBit(oldp+28265,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_57));
    bufp->fullBit(oldp+28266,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_58));
    bufp->fullBit(oldp+28267,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_59));
    bufp->fullBit(oldp+28268,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_60));
    bufp->fullBit(oldp+28269,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_61));
    bufp->fullBit(oldp+28270,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_62));
    bufp->fullBit(oldp+28271,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_0_bits_mask_63));
    bufp->fullBit(oldp+28272,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_valid));
    bufp->fullSData(oldp+28273,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_addr),9);
    bufp->fullIData(oldp+28274,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_0_0),32);
    bufp->fullIData(oldp+28275,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_1_0),32);
    bufp->fullIData(oldp+28276,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_2_0),32);
    bufp->fullIData(oldp+28277,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_3_0),32);
    bufp->fullIData(oldp+28278,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_4_0),32);
    bufp->fullIData(oldp+28279,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_5_0),32);
    bufp->fullIData(oldp+28280,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_6_0),32);
    bufp->fullIData(oldp+28281,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_7_0),32);
    bufp->fullIData(oldp+28282,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_8_0),32);
    bufp->fullIData(oldp+28283,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_9_0),32);
    bufp->fullIData(oldp+28284,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_10_0),32);
    bufp->fullIData(oldp+28285,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_11_0),32);
    bufp->fullIData(oldp+28286,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_12_0),32);
    bufp->fullIData(oldp+28287,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_13_0),32);
    bufp->fullIData(oldp+28288,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_14_0),32);
    bufp->fullIData(oldp+28289,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_15_0),32);
    bufp->fullBit(oldp+28290,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc));
    bufp->fullBit(oldp+28291,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_0));
    bufp->fullBit(oldp+28292,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_1));
    bufp->fullBit(oldp+28293,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_2));
    bufp->fullBit(oldp+28294,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_3));
    bufp->fullBit(oldp+28295,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_4));
    bufp->fullBit(oldp+28296,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_5));
    bufp->fullBit(oldp+28297,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_6));
    bufp->fullBit(oldp+28298,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_7));
    bufp->fullBit(oldp+28299,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_8));
    bufp->fullBit(oldp+28300,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_9));
    bufp->fullBit(oldp+28301,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_10));
    bufp->fullBit(oldp+28302,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_11));
    bufp->fullBit(oldp+28303,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_12));
    bufp->fullBit(oldp+28304,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_13));
    bufp->fullBit(oldp+28305,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_14));
    bufp->fullBit(oldp+28306,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_15));
    bufp->fullBit(oldp+28307,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_16));
    bufp->fullBit(oldp+28308,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_17));
    bufp->fullBit(oldp+28309,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_18));
    bufp->fullBit(oldp+28310,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_19));
    bufp->fullBit(oldp+28311,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_20));
    bufp->fullBit(oldp+28312,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_21));
    bufp->fullBit(oldp+28313,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_22));
    bufp->fullBit(oldp+28314,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_23));
    bufp->fullBit(oldp+28315,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_24));
    bufp->fullBit(oldp+28316,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_25));
    bufp->fullBit(oldp+28317,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_26));
    bufp->fullBit(oldp+28318,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_27));
    bufp->fullBit(oldp+28319,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_28));
    bufp->fullBit(oldp+28320,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_29));
    bufp->fullBit(oldp+28321,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_30));
    bufp->fullBit(oldp+28322,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_31));
    bufp->fullBit(oldp+28323,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_32));
    bufp->fullBit(oldp+28324,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_33));
    bufp->fullBit(oldp+28325,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_34));
    bufp->fullBit(oldp+28326,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_35));
    bufp->fullBit(oldp+28327,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_36));
    bufp->fullBit(oldp+28328,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_37));
    bufp->fullBit(oldp+28329,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_38));
    bufp->fullBit(oldp+28330,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_39));
    bufp->fullBit(oldp+28331,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_40));
    bufp->fullBit(oldp+28332,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_41));
    bufp->fullBit(oldp+28333,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_42));
    bufp->fullBit(oldp+28334,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_43));
    bufp->fullBit(oldp+28335,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_44));
    bufp->fullBit(oldp+28336,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_45));
    bufp->fullBit(oldp+28337,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_46));
    bufp->fullBit(oldp+28338,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_47));
    bufp->fullBit(oldp+28339,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_48));
    bufp->fullBit(oldp+28340,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_49));
    bufp->fullBit(oldp+28341,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_50));
    bufp->fullBit(oldp+28342,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_51));
    bufp->fullBit(oldp+28343,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_52));
    bufp->fullBit(oldp+28344,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_53));
    bufp->fullBit(oldp+28345,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_54));
    bufp->fullBit(oldp+28346,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_55));
    bufp->fullBit(oldp+28347,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_56));
    bufp->fullBit(oldp+28348,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_57));
    bufp->fullBit(oldp+28349,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_58));
    bufp->fullBit(oldp+28350,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_59));
    bufp->fullBit(oldp+28351,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_60));
    bufp->fullBit(oldp+28352,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_61));
    bufp->fullBit(oldp+28353,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_62));
    bufp->fullBit(oldp+28354,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_mask_63));
    bufp->fullIData(oldp+28355,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_scale_REG_bits),32);
    bufp->fullIData(oldp+28356,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qb_REG),32);
    bufp->fullIData(oldp+28357,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qc_REG),32);
    bufp->fullIData(oldp+28358,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG),32);
    bufp->fullIData(oldp+28359,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG),32);
    bufp->fullCData(oldp+28360,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_act_REG),3);
    bufp->fullBit(oldp+28361,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_fromDMA_REG));
    bufp->fullBit(oldp+28362,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_valid_REG));
    bufp->fullSData(oldp+28363,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr),9);
    bufp->fullIData(oldp+28364,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_0_0)),32);
    bufp->fullIData(oldp+28365,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_1__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_1_0)),32);
    bufp->fullIData(oldp+28366,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_2__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_2_0)),32);
    bufp->fullIData(oldp+28367,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_3__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_3_0)),32);
    bufp->fullIData(oldp+28368,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_4__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_4_0)),32);
    bufp->fullIData(oldp+28369,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_5__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_5_0)),32);
    bufp->fullIData(oldp+28370,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_6__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_6_0)),32);
    bufp->fullIData(oldp+28371,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_7__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_7_0)),32);
    bufp->fullIData(oldp+28372,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_8__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_8_0)),32);
    bufp->fullIData(oldp+28373,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_9__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_9_0)),32);
    bufp->fullIData(oldp+28374,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_10__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_10_0)),32);
    bufp->fullIData(oldp+28375,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_11__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_11_0)),32);
    bufp->fullIData(oldp+28376,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_12__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_12_0)),32);
    bufp->fullIData(oldp+28377,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_13__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_13_0)),32);
    bufp->fullIData(oldp+28378,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_14__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_14_0)),32);
    bufp->fullIData(oldp+28379,(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_acc)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_adders__DOT__m_15__DOT__io_sum_r
                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__pipelined_writes_1_bits_data_15_0)),32);
    bufp->fullBit(oldp+28380,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_ren));
    bufp->fullWData(oldp+28381,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data),512);
    bufp->fullQData(oldp+28397,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask),64);
    bufp->fullWData(oldp+28399,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data),512);
    bufp->fullCData(oldp+28415,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28416,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0U])),8);
    bufp->fullBit(oldp+28417,((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask))));
    bufp->fullCData(oldp+28418,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28419,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28420,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 1U)))));
    bufp->fullCData(oldp+28421,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28422,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28423,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 2U)))));
    bufp->fullCData(oldp+28424,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28425,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28426,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 3U)))));
    bufp->fullCData(oldp+28427,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28428,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[1U])),8);
    bufp->fullBit(oldp+28429,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 4U)))));
    bufp->fullCData(oldp+28430,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28431,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28432,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 5U)))));
    bufp->fullCData(oldp+28433,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28434,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28435,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 6U)))));
    bufp->fullCData(oldp+28436,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28437,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[1U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28438,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 7U)))));
    bufp->fullCData(oldp+28439,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28440,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[2U])),8);
    bufp->fullBit(oldp+28441,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 8U)))));
    bufp->fullCData(oldp+28442,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28443,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28444,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 9U)))));
    bufp->fullCData(oldp+28445,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28446,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28447,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xaU)))));
    bufp->fullCData(oldp+28448,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28449,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[2U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28450,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xbU)))));
    bufp->fullCData(oldp+28451,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28452,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[3U])),8);
    bufp->fullBit(oldp+28453,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xcU)))));
    bufp->fullCData(oldp+28454,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28455,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28456,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xdU)))));
    bufp->fullCData(oldp+28457,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28458,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28459,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xeU)))));
    bufp->fullCData(oldp+28460,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28461,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[3U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28462,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0xfU)))));
    bufp->fullCData(oldp+28463,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28464,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[4U])),8);
    bufp->fullBit(oldp+28465,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x10U)))));
    bufp->fullCData(oldp+28466,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28467,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28468,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x11U)))));
    bufp->fullCData(oldp+28469,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28470,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28471,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x12U)))));
    bufp->fullCData(oldp+28472,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28473,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[4U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28474,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x13U)))));
    bufp->fullCData(oldp+28475,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28476,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[5U])),8);
    bufp->fullBit(oldp+28477,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x14U)))));
    bufp->fullCData(oldp+28478,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28479,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28480,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x15U)))));
    bufp->fullCData(oldp+28481,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28482,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28483,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x16U)))));
    bufp->fullCData(oldp+28484,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28485,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[5U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28486,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x17U)))));
    bufp->fullCData(oldp+28487,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28488,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[6U])),8);
    bufp->fullBit(oldp+28489,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x18U)))));
    bufp->fullCData(oldp+28490,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28491,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28492,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x19U)))));
    bufp->fullCData(oldp+28493,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28494,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28495,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1aU)))));
    bufp->fullCData(oldp+28496,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28497,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[6U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28498,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1bU)))));
    bufp->fullCData(oldp+28499,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28500,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[7U])),8);
    bufp->fullBit(oldp+28501,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1cU)))));
    bufp->fullCData(oldp+28502,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28503,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28504,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1dU)))));
    bufp->fullCData(oldp+28505,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28506,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28507,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1eU)))));
    bufp->fullCData(oldp+28508,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28509,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[7U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28510,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x1fU)))));
    bufp->fullCData(oldp+28511,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28512,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[8U])),8);
    bufp->fullBit(oldp+28513,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x20U)))));
    bufp->fullCData(oldp+28514,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28515,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28516,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x21U)))));
    bufp->fullCData(oldp+28517,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28518,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28519,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x22U)))));
    bufp->fullCData(oldp+28520,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28521,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[8U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28522,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x23U)))));
    bufp->fullCData(oldp+28523,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28524,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[9U])),8);
    bufp->fullBit(oldp+28525,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x24U)))));
    bufp->fullCData(oldp+28526,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28527,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28528,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x25U)))));
    bufp->fullCData(oldp+28529,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28530,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28531,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x26U)))));
    bufp->fullCData(oldp+28532,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28533,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[9U] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28534,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x27U)))));
    bufp->fullCData(oldp+28535,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28536,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU])),8);
    bufp->fullBit(oldp+28537,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x28U)))));
    bufp->fullCData(oldp+28538,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28539,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28540,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x29U)))));
    bufp->fullCData(oldp+28541,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28542,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28543,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2aU)))));
    bufp->fullCData(oldp+28544,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28545,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xaU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28546,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2bU)))));
    bufp->fullCData(oldp+28547,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28548,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU])),8);
    bufp->fullBit(oldp+28549,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2cU)))));
    bufp->fullCData(oldp+28550,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28551,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28552,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2dU)))));
    bufp->fullCData(oldp+28553,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28554,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28555,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2eU)))));
    bufp->fullCData(oldp+28556,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28557,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xbU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28558,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x2fU)))));
    bufp->fullCData(oldp+28559,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28560,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU])),8);
    bufp->fullBit(oldp+28561,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x30U)))));
    bufp->fullCData(oldp+28562,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28563,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28564,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x31U)))));
    bufp->fullCData(oldp+28565,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28566,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28567,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x32U)))));
    bufp->fullCData(oldp+28568,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28569,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xcU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28570,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x33U)))));
    bufp->fullCData(oldp+28571,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28572,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU])),8);
    bufp->fullBit(oldp+28573,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x34U)))));
    bufp->fullCData(oldp+28574,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28575,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28576,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x35U)))));
    bufp->fullCData(oldp+28577,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28578,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28579,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x36U)))));
    bufp->fullCData(oldp+28580,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28581,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xdU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28582,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x37U)))));
    bufp->fullCData(oldp+28583,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28584,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU])),8);
    bufp->fullBit(oldp+28585,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x38U)))));
    bufp->fullCData(oldp+28586,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28587,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28588,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x39U)))));
    bufp->fullCData(oldp+28589,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28590,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28591,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3aU)))));
    bufp->fullCData(oldp+28592,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28593,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xeU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28594,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3bU)))));
    bufp->fullCData(oldp+28595,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28596,((0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU])),8);
    bufp->fullBit(oldp+28597,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3cU)))));
    bufp->fullCData(oldp+28598,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28599,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                          >> 8U))),8);
    bufp->fullBit(oldp+28600,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3dU)))));
    bufp->fullCData(oldp+28601,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28602,((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                          >> 0x10U))),8);
    bufp->fullBit(oldp+28603,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3eU)))));
    bufp->fullCData(oldp+28604,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0]),8);
    bufp->fullCData(oldp+28605,((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_data[0xfU] 
                                 >> 0x18U)),8);
    bufp->fullBit(oldp+28606,((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT____Vcellinp__mem__W0_mask 
                                             >> 0x3fU)))));
    __Vtemp_ha158c47d__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0U];
    __Vtemp_ha158c47d__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[1U];
    __Vtemp_ha158c47d__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[2U];
    __Vtemp_ha158c47d__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[3U];
    __Vtemp_ha158c47d__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[4U];
    __Vtemp_ha158c47d__0[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[5U];
    __Vtemp_ha158c47d__0[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[6U];
    __Vtemp_ha158c47d__0[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[7U];
    __Vtemp_ha158c47d__0[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[8U];
    __Vtemp_ha158c47d__0[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[9U];
    __Vtemp_ha158c47d__0[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xaU];
    __Vtemp_ha158c47d__0[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xbU];
    __Vtemp_ha158c47d__0[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xcU];
    __Vtemp_ha158c47d__0[0xdU] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0] 
                                   << 0x18U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xdU]);
    __Vtemp_ha158c47d__0[0xeU] = (IData)((((QData)((IData)(
                                                           ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
                                                             << 0x18U) 
                                                            | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                << 0x10U) 
                                                               | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                   << 8U) 
                                                                  | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]))))) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0])))))));
    __Vtemp_ha158c47d__0[0xfU] = (IData)(((((QData)((IData)(
                                                            ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
                                                              << 0x18U) 
                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                 [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                 << 0x10U) 
                                                                | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                    << 8U) 
                                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0]))))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0])))))) 
                                          >> 0x20U));
    bufp->fullWData(oldp+28607,(__Vtemp_ha158c47d__0),512);
    bufp->fullBit(oldp+28623,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28624,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_0__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28625,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28626,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_1__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28627,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28628,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_10__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28629,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28630,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_11__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28631,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28632,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_12__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28633,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28634,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_13__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28635,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28636,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_14__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28637,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28638,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_15__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28639,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28640,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_16__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28641,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28642,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_17__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28643,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28644,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_18__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28645,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28646,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28647,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28648,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_2__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28649,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28650,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28651,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28652,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28653,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28654,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28655,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28656,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28657,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28658,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28659,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28660,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28661,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28662,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28663,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28664,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28665,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28666,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_28__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28667,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28668,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_29__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28669,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28670,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_3__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28671,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28672,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_30__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28673,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28674,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_31__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28675,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28676,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_32__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28677,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28678,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_33__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28679,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28680,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_34__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28681,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28682,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_35__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28683,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28684,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_36__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28685,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28686,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_37__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28687,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28688,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_38__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28689,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28690,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_39__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28691,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28692,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_4__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28693,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28694,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_40__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28695,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28696,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_41__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28697,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28698,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_42__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28699,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28700,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_43__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28701,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28702,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_44__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28703,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28704,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_45__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28705,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28706,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_46__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28707,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28708,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_47__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28709,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28710,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_48__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28711,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28712,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_49__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28713,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28714,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_5__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28715,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28716,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_50__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28717,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28718,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_51__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28719,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28720,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_52__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28721,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28722,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_53__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28723,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28724,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_54__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28725,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28726,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28727,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28728,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28729,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28730,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28731,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28732,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28733,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28734,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28735,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28736,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_6__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28737,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28738,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28739,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28740,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28741,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28742,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28743,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28744,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28745,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28746,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_7__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28747,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28748,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_8__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28749,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_en_pipe_0));
    bufp->fullSData(oldp+28750,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_9__DOT__ram_R_0_addr_pipe_0),9);
    bufp->fullBit(oldp+28751,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT___io_enq_ready_output));
    bufp->fullBit(oldp+28752,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__maybe_full));
    bufp->fullBit(oldp+28753,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__do_enq));
    __Vtemp_he8881cb3__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0U];
    __Vtemp_he8881cb3__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[1U];
    __Vtemp_he8881cb3__0[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[2U];
    __Vtemp_he8881cb3__0[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[3U];
    __Vtemp_he8881cb3__0[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[4U];
    __Vtemp_he8881cb3__0[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[5U];
    __Vtemp_he8881cb3__0[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[6U];
    __Vtemp_he8881cb3__0[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[7U];
    __Vtemp_he8881cb3__0[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[8U];
    __Vtemp_he8881cb3__0[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[9U];
    __Vtemp_he8881cb3__0[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xaU];
    __Vtemp_he8881cb3__0[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xbU];
    __Vtemp_he8881cb3__0[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xcU];
    __Vtemp_he8881cb3__0[0xdU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xdU];
    __Vtemp_he8881cb3__0[0xeU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xeU];
    __Vtemp_he8881cb3__0[0xfU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xfU];
    __Vtemp_he8881cb3__0[0x10U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_scale_REG_bits 
                                    << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_fromDMA_REG));
    __Vtemp_he8881cb3__0[0x11U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_scale_REG_bits 
                                    >> 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qb_REG 
                                                 << 1U));
    __Vtemp_he8881cb3__0[0x12U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qb_REG 
                                    >> 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qc_REG 
                                                 << 1U));
    __Vtemp_he8881cb3__0[0x13U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_igelu_qc_REG 
                                    >> 0x1fU) | ((IData)(
                                                         (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG)))) 
                                                 << 1U));
    __Vtemp_he8881cb3__0[0x14U] = (((IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG)))) 
                                    >> 0x1fU) | ((IData)(
                                                         ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG))) 
                                                          >> 0x20U)) 
                                                 << 1U));
    __Vtemp_he8881cb3__0[0x15U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_act_REG) 
                                    << 1U) | ((IData)(
                                                      ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_inv_REG)) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q_io_enq_bits_iexp_qln2_REG))) 
                                                       >> 0x20U)) 
                                              >> 0x1fU));
    bufp->fullWData(oldp+28754,(__Vtemp_he8881cb3__0),678);
    __Vtemp_h5048e811__23[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0U];
    __Vtemp_h5048e811__23[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][1U];
    __Vtemp_h5048e811__23[2U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][2U];
    __Vtemp_h5048e811__23[3U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][3U];
    __Vtemp_h5048e811__23[4U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][4U];
    __Vtemp_h5048e811__23[5U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][5U];
    __Vtemp_h5048e811__23[6U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][6U];
    __Vtemp_h5048e811__23[7U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][7U];
    __Vtemp_h5048e811__23[8U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][8U];
    __Vtemp_h5048e811__23[9U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][9U];
    __Vtemp_h5048e811__23[0xaU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xaU];
    __Vtemp_h5048e811__23[0xbU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xbU];
    __Vtemp_h5048e811__23[0xcU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xcU];
    __Vtemp_h5048e811__23[0xdU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xdU];
    __Vtemp_h5048e811__23[0xeU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xeU];
    __Vtemp_h5048e811__23[0xfU] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0xfU];
    __Vtemp_h5048e811__23[0x10U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x10U];
    __Vtemp_h5048e811__23[0x11U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x11U];
    __Vtemp_h5048e811__23[0x12U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x12U];
    __Vtemp_h5048e811__23[0x13U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x13U];
    __Vtemp_h5048e811__23[0x14U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x14U];
    __Vtemp_h5048e811__23[0x15U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory
        [0U][0x15U];
    bufp->fullWData(oldp+28776,(__Vtemp_h5048e811__23),678);
    bufp->fullWData(oldp+28798,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__q__DOT__ram_ext__DOT__Memory[0]),678);
    bufp->fullBit(oldp+28820,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___acc_scale_unit_io_in_valid_T));
    bufp->fullIData(oldp+28821,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0U]),32);
    bufp->fullIData(oldp+28822,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[1U]),32);
    bufp->fullIData(oldp+28823,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[2U]),32);
    bufp->fullIData(oldp+28824,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[3U]),32);
    bufp->fullIData(oldp+28825,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[4U]),32);
    bufp->fullIData(oldp+28826,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[5U]),32);
    bufp->fullIData(oldp+28827,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[6U]),32);
    bufp->fullIData(oldp+28828,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[7U]),32);
    bufp->fullIData(oldp+28829,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[8U]),32);
    bufp->fullIData(oldp+28830,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[9U]),32);
    bufp->fullIData(oldp+28831,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xaU]),32);
    bufp->fullIData(oldp+28832,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xbU]),32);
    bufp->fullIData(oldp+28833,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xcU]),32);
    bufp->fullIData(oldp+28834,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xdU]),32);
    bufp->fullIData(oldp+28835,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xeU]),32);
    bufp->fullIData(oldp+28836,(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0xfU]),32);
    bufp->fullBit(oldp+28837,((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x10U])));
    bufp->fullIData(oldp+28838,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x11U] 
                                  << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x10U] 
                                               >> 1U))),32);
    bufp->fullIData(oldp+28839,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x12U] 
                                  << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x11U] 
                                               >> 1U))),32);
    bufp->fullIData(oldp+28840,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x13U] 
                                  << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x12U] 
                                               >> 1U))),32);
    bufp->fullIData(oldp+28841,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x14U] 
                                  << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x13U] 
                                               >> 1U))),32);
    bufp->fullIData(oldp+28842,(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x15U] 
                                  << 0x1fU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x14U] 
                                               >> 1U))),32);
    bufp->fullCData(oldp+28843,((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0x15U] 
                                       >> 1U))),3);
}
