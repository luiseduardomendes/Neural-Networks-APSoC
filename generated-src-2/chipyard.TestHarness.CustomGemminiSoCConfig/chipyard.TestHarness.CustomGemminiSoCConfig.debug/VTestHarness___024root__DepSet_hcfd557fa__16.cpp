// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6164(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6164\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_305) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_304) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_302) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_301) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6165(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6165\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_300) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_298) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_297) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_296) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6166(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6166\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_295) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_303) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_307) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_299) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6167(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6167\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_762) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_761) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_760) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_759) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6168(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6168\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_69) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_68) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_70) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_65) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6169(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6169\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_66) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_64) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_63) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_67) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_opa_bits_end_is_acc_addr 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                      ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                             >> 0x1fU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                          >> 0x1fU))
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                          ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op2_bits_end_is_acc_addr))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6170(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6170\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf48ecb4b__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__solitary_preload = 0U;
    } else if ((1U & (~ ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_875)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4823)) 
                          | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4826)) 
                         | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4830))))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__solitary_preload 
            = ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U])) 
               | ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__funct_is_compute)) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__solitary_preload)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid 
        = (1U & ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) 
                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid) 
                         & (~ (IData)((0U != (3U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits) 
                                               >> 4U)))))) 
                        & (7U == (7U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_bits)))))) 
                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_883)
                     ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_complete_on_issue))
                     : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_70) 
                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_valid)))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb) {
        __Vtemp_hf48ecb4b__0[0U] = (IData)((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6)) 
                                             << 0x3dU) 
                                            | ((7U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6))
                                                ? (
                                                   ((QData)((IData)(
                                                                    (((IData)(
                                                                              (0xfffffU 
                                                                               == 
                                                                               (0xfffffU 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1 
                                                                                >> 0x20U))))) 
                                                                      << 0x1fU) 
                                                                     | ((0x7f000000U 
                                                                         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                                            << 0x17U)) 
                                                                        | ((0x800000U 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_13) 
                                                                               << 0x15U)) 
                                                                           | ((0x7ffff8U 
                                                                               & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1 
                                                                                >> 0x20U)) 
                                                                                << 3U)) 
                                                                              | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                                >> 0x1fU)) 
                                                                                << 2U)) 
                                                                                | (3U 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_13))))))))) 
                                                    << 0x1dU) 
                                                   | (QData)((IData)(
                                                                     ((0x1f800000U 
                                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1) 
                                                                          << 0x17U)) 
                                                                      | (0x7fffffU 
                                                                         & ((0U 
                                                                             == 
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                                >> 0x17U))))
                                                                             ? 
                                                                            (0x7ffffeU 
                                                                             & ((IData)(
                                                                                (0x3fffffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))) 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1)))) 
                                                                                << 1U))
                                                                             : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))))))
                                                : (
                                                   ((QData)((IData)(
                                                                    (0x1ffU 
                                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp)))) 
                                                    << 0x34U) 
                                                   | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1))));
        __Vtemp_hf48ecb4b__0[1U] = (IData)(((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6)) 
                                              << 0x3dU) 
                                             | ((7U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_6))
                                                 ? 
                                                (((QData)((IData)(
                                                                  (((IData)(
                                                                            (0xfffffU 
                                                                             == 
                                                                             (0xfffffU 
                                                                              & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1 
                                                                                >> 0x20U))))) 
                                                                    << 0x1fU) 
                                                                   | ((0x7f000000U 
                                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp) 
                                                                          << 0x17U)) 
                                                                      | ((0x800000U 
                                                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_13) 
                                                                             << 0x15U)) 
                                                                         | ((0x7ffff8U 
                                                                             & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1 
                                                                                >> 0x20U)) 
                                                                                << 3U)) 
                                                                            | ((4U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                                >> 0x1fU)) 
                                                                                << 2U)) 
                                                                               | (3U 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_13))))))))) 
                                                  << 0x1dU) 
                                                 | (QData)((IData)(
                                                                   ((0x1f800000U 
                                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp_1) 
                                                                        << 0x17U)) 
                                                                    | (0x7fffffU 
                                                                       & ((0U 
                                                                           == 
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                                                                                >> 0x17U))))
                                                                           ? 
                                                                          (0x7ffffeU 
                                                                           & ((IData)(
                                                                                (0x3fffffffffffffULL 
                                                                                & ((QData)((IData)(
                                                                                (0x7fffffU 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))) 
                                                                                << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_normDist_1)))) 
                                                                              << 1U))
                                                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2)))))))
                                                 : 
                                                (((QData)((IData)(
                                                                  (0x1ffU 
                                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wdata_rawIn_adjustedExp)))) 
                                                  << 0x34U) 
                                                 | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_rawIn_out_sig_T_1))) 
                                            >> 0x20U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0[0U] 
            = __Vtemp_hf48ecb4b__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0[1U] 
            = __Vtemp_hf48ecb4b__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0[2U] 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_2 
                             >> 0x3fU)));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__load_wb_tag;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6171(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6171\n"); );
    // Body
    if ((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_cp)) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wen)) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)))) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_wen)
              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_typeTag)
              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__wbInfo_0_typeTag))) {
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[0U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[0U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[1U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[1U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[2U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[2U];
        } else {
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[0U] 
                = (IData)((0xfffff00000000ULL | (((QData)((IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[0U] 
                                                                   >> 0x1fU))) 
                                                  << 0x34U) 
                                                 | (QData)((IData)(
                                                                   ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[1U] 
                                                                     << 0x1fU) 
                                                                    | (0x7fffffffU 
                                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[0U])))))));
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[1U] 
                = (0xffe00000U | (IData)(((0xfffff00000000ULL 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[0U] 
                                                                >> 0x1fU))) 
                                               << 0x34U) 
                                              | (QData)((IData)(
                                                                ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[1U] 
                                                                  << 0x1fU) 
                                                                 | (0x7fffffffU 
                                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___wdata_T_25[0U])))))) 
                                          >> 0x20U)));
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1[2U] = 1U;
        }
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__regfile_ext__DOT__Memory__v1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__waddr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_309) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_14_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_308) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_13_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6172(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6172\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_307) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_12_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_305) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_10_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6173(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6173\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_304) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_9_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_303) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_8_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6174(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6174\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_301) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_6_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_300) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_5_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6175(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6175\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_299) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_4_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_297) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_2_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6176(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6176\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_296) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_1_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_295) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_0_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6177(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6177\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_310) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_15_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_302) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_7_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6178(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6178\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_306) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_11_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_298) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ex_3_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6179(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6179\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_760) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_759) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6180(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6180\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_761) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_762) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6181(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6181\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_70) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_69) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6182(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6182\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_66) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_67) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6183(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6183\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_68) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_64) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6184(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6184\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_65) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_63) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_opa_bits_start_data 
            = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                           ? ((6U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[0U]))
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                                   >> 0x1fU) ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]
                                   : ((0x2000U < (0x3fffU 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U]))
                                       ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow)
                                           ? 0x2000U
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1))
                                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_underflow_1)
                                           ? 0U : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___dst_bits_start_result_data_T_1)))))
                           : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                               ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                               : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6185(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6185\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_valid 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_80) 
              | ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_78) 
                     & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats)))) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_valid))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) 
                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_deq))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__maybe_full 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq;
    }
    if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aToggle_r 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dToggle;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___io_a_ready_output) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT___io_deq_valid_output))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter 
                = (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first)
                          ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_opcode))
                              ? 0U : (~ (0x1ffU & (
                                                   ((IData)(0x3fU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_a_bits_size)) 
                                                   >> 4U))))
                          : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter) 
                             - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__first_counter = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_80) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_laddr_data 
            = (0x3fffU & (((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_0_tag_addr)
                              : 0U) | ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_1_tag_addr)
                                        : 0U)) | ((4U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                                   ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_2_tag_addr)
                                                   : 0U)) 
                          + ((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_0_row)
                                : 0U) | ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                          ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_1_row)
                                          : 0U)) | 
                             ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_2_row)
                               : 0U))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6186(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6186\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__do_enq) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[3U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[4U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[5U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[5U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[6U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[6U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[7U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[7U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[8U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[8U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[9U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[9U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0xaU] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[0xaU];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0xbU] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_scale_q__DOT___ram_ext_R0_data[0xbU];
        if ((4U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value))) {
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[0U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[1U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[1U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[2U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[2U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[3U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[3U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[4U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[4U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[5U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[5U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[6U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[6U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[7U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[7U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[8U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[8U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[9U] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[9U];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[0xaU] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0xaU];
            vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0[0xbU] 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT____Vlvbound_h17462cd4__0[0xbU];
            vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_ext__DOT__Memory__v0 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__enq_ptr_value;
        }
    }
    if ((1U & (~ ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state)) 
                  | (~ (((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state)) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_62)) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__about_to_fire_all_rows))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__pending_completed_rob_ids_0_bits 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___cmd_q_io_deq_bits_0_rob_id_bits;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_747) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_2)
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                ? (~ 
                                                   (((0xcU 
                                                      >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                                      ? 
                                                     (0x1fffU 
                                                      & ((IData)(0x3fU) 
                                                         << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                                      : 0U) 
                                                    >> 3U))
                                                : 0U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_747) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_2)
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6187(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6187\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_747) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                                                ? (~ 
                                                   (((0xcU 
                                                      >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                                      ? 
                                                     (0x1fffU 
                                                      & ((IData)(0x3fU) 
                                                         << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                                      : 0U) 
                                                    >> 3U))
                                                : 0U)));
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_1)
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_747) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_1)
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins)
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_875)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4823)) 
                  | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4826) 
                        & (0x10U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U])))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_pixel_repeats_2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___ld_pixel_repeats_T_1;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_875)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4823)) 
                  | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4826) 
                        & (0U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U])))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_pixel_repeats_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___ld_pixel_repeats_T_1;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6188(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6188\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hdddc1496__0;
    VlWide<3>/*95:0*/ __Vtemp_hf502b062__0;
    VlWide<3>/*95:0*/ __Vtemp_h6a3bdc38__0;
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_875)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4823)) 
                  | (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_4826) 
                        & (8U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U])))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_pixel_repeats_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___ld_pixel_repeats_T_1;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_0) 
             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_1)) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_2)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s1_tag_hit_3));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__enq_ptr_value = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        __Vtemp_hdddc1496__0[0U] = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__full) 
                                    << 0x1fU);
        __Vtemp_hdddc1496__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__empty) 
                                     << 0x1fU) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__ram_ext__DOT__Memory
                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxq__DOT__deq_ptr_value]);
        __Vtemp_hdddc1496__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txwm) 
                                     << 0x10U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop) 
                                                   << 1U) 
                                                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txen)));
        __Vtemp_hdddc1496__0[3U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxwm) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxen));
        __Vtemp_hdddc1496__0[4U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_rxwm) 
                                     << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ie_txwm));
        __Vtemp_hdddc1496__0[5U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_rxwm) 
                                     << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__ip_txwm));
        __Vtemp_hdddc1496__0[6U] = (IData)((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)));
        __Vtemp_hdddc1496__0[7U] = (IData)(((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)) 
                                            >> 0x20U));
        __Vtemp_hf502b062__0[0U] = (((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_0)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg
                                                    : 0ULL)
                                                : 0ULL) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                       >> 5U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_hdddc1496__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0xc0U 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                          << 3U))) 
                                                                     >> 5U)])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp_hdddc1496__0[
                                                                     (6U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                         >> 2U))])))
                                                   : 0ULL)
                                                  : 0ULL))) 
                                     << 0x11U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__out_9_bits_source) 
                                                   << 8U) 
                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__out_9_bits_size) 
                                                      << 5U) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__out_9_bits_opcode))));
        __Vtemp_hf502b062__0[1U] = (((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_0)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg
                                                    : 0ULL)
                                                : 0ULL) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                       >> 5U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_hdddc1496__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0xc0U 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                          << 3U))) 
                                                                     >> 5U)])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp_hdddc1496__0[
                                                                     (6U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                         >> 2U))])))
                                                   : 0ULL)
                                                  : 0ULL))) 
                                     >> 0xfU) | ((IData)(
                                                         ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_0)
                                                             ? 
                                                            ((0U 
                                                              == 
                                                              (0x1ffU 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                                  >> 3U)))
                                                              ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg
                                                              : 0ULL)
                                                             : 0ULL) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                                               ? 
                                                              ((0U 
                                                                == 
                                                                (0x7fU 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                    >> 5U)))
                                                                ? 
                                                               (((QData)((IData)(
                                                                                __Vtemp_hdddc1496__0[
                                                                                (((IData)(0x3fU) 
                                                                                + 
                                                                                (0xc0U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                                << 3U))) 
                                                                                >> 5U)])) 
                                                                 << 0x20U) 
                                                                | (QData)((IData)(
                                                                                __Vtemp_hdddc1496__0[
                                                                                (6U 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                                >> 2U))])))
                                                                : 0ULL)
                                                               : 0ULL)) 
                                                          >> 0x20U)) 
                                                 << 0x11U));
        __Vtemp_hf502b062__0[2U] = ((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_0)
                                                ? (
                                                   (0U 
                                                    == 
                                                    (0x1ffU 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_slave_named_bootaddressreg_auto_fragmenter_out_a_bits_address) 
                                                        >> 3U)))
                                                    ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__bootAddrReg
                                                    : 0ULL)
                                                : 0ULL) 
                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__out_xbar__DOT__muxStateEarly_1)
                                                  ? 
                                                 ((0U 
                                                   == 
                                                   (0x7fU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                       >> 5U)))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    __Vtemp_hdddc1496__0[
                                                                    (((IData)(0x3fU) 
                                                                      + 
                                                                      (0xc0U 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                          << 3U))) 
                                                                     >> 5U)])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     __Vtemp_hdddc1496__0[
                                                                     (6U 
                                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_pbus_auto_coupler_to_device_named_uart_0_control_xing_out_a_bits_address 
                                                                         >> 2U))])))
                                                   : 0ULL)
                                                  : 0ULL)) 
                                             >> 0x20U)) 
                                    >> 0xfU);
        VL_EXTEND_WW(82,81, __Vtemp_h6a3bdc38__0, __Vtemp_hf502b062__0);
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = __Vtemp_h6a3bdc38__0[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_h6a3bdc38__0[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = __Vtemp_h6a3bdc38__0[2U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6189(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6189\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_55) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_cam_sel_match_0))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state 
            = ((1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
               << 1U);
    } else if ((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__full)) 
                 & ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft)) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_0))) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__winnerQual_0))) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state = 1U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state = 3U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__beatsLeft 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__latch)
                      ? ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_0) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins))
                           ? (~ (0x3ffU & (((IData)(0x3fU) 
                                            << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_bits_size)) 
                                           >> 3U)))
                           : 0U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_1) 
                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                     ? (~ (0x3ffU & 
                                           (((IData)(0x3fU) 
                                             << (7U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U))) 
                                            >> 3U)))
                                     : 0U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__beatsLeft) 
                                               - ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_d_ready) 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__out_9_valid)))))
            : 0U);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__cached_grant_wait 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48)) 
              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_cpu_perf_acquire_T) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached))) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__cached_grant_wait))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_896) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter 
            = ((0U == (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_total_rows) 
                                - (IData)(1U)))) ? 0U
                : (0xfU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_37) 
                            >= (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_total_rows) 
                                         - (IData)(1U))))
                            ? (((IData)(1U) - (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_total_rows) 
                                                - (IData)(1U)) 
                                               - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter))) 
                               - (IData)(1U)) : ((IData)(1U) 
                                                 + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__output_counter)))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6190(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6190\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__x1_d_ready) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq) 
             != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__x1_d_ready) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_992) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                                                ? (~ 
                                                   (((0xcU 
                                                      >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                                      ? 
                                                     (0x1fffU 
                                                      & ((IData)(0x3fU) 
                                                         << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                                      : 0U) 
                                                    >> 3U))
                                                : 0U)));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
    }
}

extern const VlWide<64>/*2047:0*/ VTestHarness__ConstPool__CONST_ha056d847_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hf1d89c7e_0;
extern const VlWide<33>/*1055:0*/ VTestHarness__ConstPool__CONST_hd0572db1_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e95a4_0;
extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_h58046101_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_hd6e5c6ea_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e15b8_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6191(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6191\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h7e9674ab__0;
    VlWide<64>/*2047:0*/ __Vtemp_he439063a__0;
    VlWide<64>/*2047:0*/ __Vtemp_he439063a__1;
    VlWide<130>/*4159:0*/ __Vtemp_hc0c7452f__0;
    VlWide<513>/*16415:0*/ __Vtemp_hc89f515b__0;
    VlWide<512>/*16383:0*/ __Vtemp_h890bc2dc__0;
    VlWide<513>/*16415:0*/ __Vtemp_h347e487b__0;
    VlWide<513>/*16415:0*/ __Vtemp_h42d4d1f7__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8ba20bf2__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7be99ef4__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4ed91202__0;
    VlWide<130>/*4159:0*/ __Vtemp_h1b306893__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8911eae2__0;
    VlWide<513>/*16415:0*/ __Vtemp_h2a695221__0;
    VlWide<513>/*16415:0*/ __Vtemp_h8335cde5__0;
    VlWide<513>/*16415:0*/ __Vtemp_he0f45cbc__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0a9f36a8__0;
    VlWide<130>/*4159:0*/ __Vtemp_hf3a2ef57__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6bc0c788__0;
    VlWide<130>/*4159:0*/ __Vtemp_h4065250d__0;
    // Body
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_he439063a__0, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source));
    VL_SHIFTL_WWI(2048,2048,11, __Vtemp_he439063a__1, VTestHarness__ConstPool__CONST_ha056d847_0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source));
    __Vtemp_h7e9674ab__0[1U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[1U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[1U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_h7e9674ab__0[2U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[2U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[2U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_h7e9674ab__0[3U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[3U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[3U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_h7e9674ab__0[4U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[4U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[4U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_h7e9674ab__0[5U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[5U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[5U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_h7e9674ab__0[6U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[6U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[6U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_h7e9674ab__0[7U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[7U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[7U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_h7e9674ab__0[8U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[8U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[8U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_h7e9674ab__0[9U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_he439063a__0[9U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                              ? __Vtemp_he439063a__1[9U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_h7e9674ab__0[0xaU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xaU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xaU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_h7e9674ab__0[0xbU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xbU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xbU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_h7e9674ab__0[0xcU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xcU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xcU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_h7e9674ab__0[0xdU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xdU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xdU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_h7e9674ab__0[0xeU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xeU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xeU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_h7e9674ab__0[0xfU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_he439063a__0[0xfU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                ? __Vtemp_he439063a__1[0xfU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_h7e9674ab__0[0x10U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x10U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x10U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_h7e9674ab__0[0x11U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x11U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x11U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_h7e9674ab__0[0x12U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x12U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x12U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_h7e9674ab__0[0x13U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x13U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x13U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_h7e9674ab__0[0x14U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x14U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x14U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_h7e9674ab__0[0x15U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x15U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x15U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_h7e9674ab__0[0x16U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x16U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x16U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_h7e9674ab__0[0x17U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x17U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x17U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_h7e9674ab__0[0x18U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x18U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x18U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_h7e9674ab__0[0x19U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x19U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x19U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_h7e9674ab__0[0x1aU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1aU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1aU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_h7e9674ab__0[0x1bU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1bU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1bU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_h7e9674ab__0[0x1cU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1cU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1cU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_h7e9674ab__0[0x1dU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1dU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1dU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_h7e9674ab__0[0x1eU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1eU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_h7e9674ab__0[0x1fU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x1fU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x1fU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_h7e9674ab__0[0x20U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_he439063a__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                                                 ? 
                                                __Vtemp_he439063a__1[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_he439063a__0[0U] : 
                      VTestHarness__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                         ? __Vtemp_he439063a__1[0U]
                         : VTestHarness__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h7e9674ab__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h7e9674ab__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h7e9674ab__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h7e9674ab__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h7e9674ab__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h7e9674ab__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h7e9674ab__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h7e9674ab__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h7e9674ab__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h7e9674ab__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h7e9674ab__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h7e9674ab__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h7e9674ab__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h7e9674ab__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h7e9674ab__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h7e9674ab__0[0x10U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_h7e9674ab__0[0x11U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_h7e9674ab__0[0x12U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_h7e9674ab__0[0x13U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_h7e9674ab__0[0x14U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_h7e9674ab__0[0x15U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_h7e9674ab__0[0x16U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_h7e9674ab__0[0x17U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_h7e9674ab__0[0x18U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_h7e9674ab__0[0x19U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_h7e9674ab__0[0x1aU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_h7e9674ab__0[0x1bU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_h7e9674ab__0[0x1cU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_h7e9674ab__0[0x1dU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_h7e9674ab__0[0x1eU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_h7e9674ab__0[0x1fU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x20U] 
        = __Vtemp_h7e9674ab__0[0x20U];
    VL_EXTEND_WI(16386,3, __Vtemp_hc89f515b__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_EXTEND_WI(16384,11, __Vtemp_h890bc2dc__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source));
    VL_CONCAT_WWI(16386,16384,2, __Vtemp_h347e487b__0, __Vtemp_h890bc2dc__0, 0U);
    VL_SHIFTL_WWW(16386,16386,16386, __Vtemp_h42d4d1f7__0, __Vtemp_hc89f515b__0, __Vtemp_h347e487b__0);
    VL_AND_W(513, __Vtemp_h8ba20bf2__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h42d4d1f7__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h7be99ef4__0, __Vtemp_h8ba20bf2__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h4ed91202__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done), __Vtemp_h7be99ef4__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h1b306893__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes, __Vtemp_h4ed91202__0);
    VL_EXTEND_WI(16397,11, __Vtemp_h8911eae2__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_h2a695221__0, __Vtemp_h8911eae2__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_h8335cde5__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_h2a695221__0);
    VL_AND_W(513, __Vtemp_he0f45cbc__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_h8335cde5__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h0a9f36a8__0, __Vtemp_he0f45cbc__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hf3a2ef57__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done), __Vtemp_h0a9f36a8__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h6bc0c788__0, __Vtemp_hf3a2ef57__0);
    VL_AND_W(130, __Vtemp_h4065250d__0, __Vtemp_h1b306893__0, __Vtemp_h6bc0c788__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        VL_ASSIGN_W(4160,__Vtemp_hc0c7452f__0, VTestHarness__ConstPool__CONST_h58046101_0);
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
    } else {
        VL_ASSIGN_W(4160,__Vtemp_hc0c7452f__0, __Vtemp_h4065250d__0);
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_992) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                                                ? (~ 
                                                   (((0xcU 
                                                      >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                                      ? 
                                                     (0x1fffU 
                                                      & ((IData)(0x3fU) 
                                                         << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                                      : 0U) 
                                                    >> 3U))
                                                : 0U)));
        }
    }
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes, __Vtemp_hc0c7452f__0);
}

extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e95a0_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6192(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6192\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_h92b5669a__0;
    VlWide<64>/*2047:0*/ __Vtemp_h182e915d__0;
    VlWide<64>/*2047:0*/ __Vtemp_h93bb4e5e__0;
    VlWide<64>/*2047:0*/ __Vtemp_he9999023__0;
    VlWide<64>/*2047:0*/ __Vtemp_he95cf3bb__0;
    VlWide<130>/*4159:0*/ __Vtemp_h57b3b716__0;
    VlWide<513>/*16415:0*/ __Vtemp_h2e1beaef__0;
    VlWide<513>/*16415:0*/ __Vtemp_he0b660db__0;
    VlWide<513>/*16415:0*/ __Vtemp_hd5203489__0;
    VlWide<513>/*16415:0*/ __Vtemp_h70a995ef__0;
    VlWide<513>/*16415:0*/ __Vtemp_h0019fcba__0;
    VlWide<130>/*4159:0*/ __Vtemp_hcbadac31__0;
    VlWide<130>/*4159:0*/ __Vtemp_h7ba11fc1__0;
    VlWide<130>/*4159:0*/ __Vtemp_h091c2ddb__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf5c36199__0;
    VlWide<513>/*16415:0*/ __Vtemp_he6b77e36__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha49bdeda__0;
    VlWide<513>/*16415:0*/ __Vtemp_h7cc12209__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5b1ea8d1__0;
    VlWide<130>/*4159:0*/ __Vtemp_h25f4ac91__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5464f927__0;
    VlWide<130>/*4159:0*/ __Vtemp_h425f08b2__0;
    // Body
    VL_EXTEND_WI(2048,11, __Vtemp_h182e915d__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(2048,2048,2048, __Vtemp_h93bb4e5e__0, VTestHarness__ConstPool__CONST_ha056d847_0, __Vtemp_h182e915d__0);
    VL_EXTEND_WI(2048,11, __Vtemp_he9999023__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 7U)));
    VL_SHIFTL_WWW(2048,2048,2048, __Vtemp_he95cf3bb__0, VTestHarness__ConstPool__CONST_ha056d847_0, __Vtemp_he9999023__0);
    __Vtemp_h92b5669a__0[1U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[1U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[1U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_h92b5669a__0[2U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[2U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[2U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_h92b5669a__0[3U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[3U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[3U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_h92b5669a__0[4U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[4U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[4U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_h92b5669a__0[5U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[5U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[5U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_h92b5669a__0[6U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[6U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[6U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_h92b5669a__0[7U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[7U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[7U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_h92b5669a__0[8U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[8U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[8U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_h92b5669a__0[9U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h93bb4e5e__0[9U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_he95cf3bb__0[9U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_h92b5669a__0[0xaU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xaU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xaU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_h92b5669a__0[0xbU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xbU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xbU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_h92b5669a__0[0xcU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xcU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xcU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_h92b5669a__0[0xdU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xdU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xdU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_h92b5669a__0[0xeU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xeU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xeU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_h92b5669a__0[0xfU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h93bb4e5e__0[0xfU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_he95cf3bb__0[0xfU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_h92b5669a__0[0x10U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x10U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x10U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_h92b5669a__0[0x11U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x11U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x11U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_h92b5669a__0[0x12U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x12U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x12U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_h92b5669a__0[0x13U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x13U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x13U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_h92b5669a__0[0x14U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x14U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x14U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_h92b5669a__0[0x15U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x15U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x15U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_h92b5669a__0[0x16U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x16U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x16U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_h92b5669a__0[0x17U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x17U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x17U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_h92b5669a__0[0x18U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x18U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x18U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_h92b5669a__0[0x19U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x19U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x19U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_h92b5669a__0[0x1aU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1aU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1aU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_h92b5669a__0[0x1bU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1bU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1bU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_h92b5669a__0[0x1cU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1cU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1cU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_h92b5669a__0[0x1dU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1dU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1dU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_h92b5669a__0[0x1eU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1eU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_h92b5669a__0[0x1fU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x1fU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x1fU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_h92b5669a__0[0x20U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h93bb4e5e__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_he95cf3bb__0[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_h93bb4e5e__0[0U] : 
                      VTestHarness__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_he95cf3bb__0[0U]
                         : VTestHarness__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h92b5669a__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h92b5669a__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h92b5669a__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h92b5669a__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h92b5669a__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h92b5669a__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h92b5669a__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h92b5669a__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h92b5669a__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h92b5669a__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h92b5669a__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h92b5669a__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h92b5669a__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h92b5669a__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h92b5669a__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h92b5669a__0[0x10U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_h92b5669a__0[0x11U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_h92b5669a__0[0x12U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_h92b5669a__0[0x13U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_h92b5669a__0[0x14U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_h92b5669a__0[0x15U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_h92b5669a__0[0x16U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_h92b5669a__0[0x17U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_h92b5669a__0[0x18U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_h92b5669a__0[0x19U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_h92b5669a__0[0x1aU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_h92b5669a__0[0x1bU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_h92b5669a__0[0x1cU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_h92b5669a__0[0x1dU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_h92b5669a__0[0x1eU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_h92b5669a__0[0x1fU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight[0x20U] 
        = __Vtemp_h92b5669a__0[0x20U];
    VL_EXTEND_WI(16387,4, __Vtemp_h2e1beaef__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_EXTEND_WI(16385,11, __Vtemp_he0b660db__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(16387,16385,2, __Vtemp_hd5203489__0, __Vtemp_he0b660db__0, 0U);
    VL_SHIFTL_WWW(16387,16387,16387, __Vtemp_h70a995ef__0, __Vtemp_h2e1beaef__0, __Vtemp_hd5203489__0);
    VL_AND_W(513, __Vtemp_h0019fcba__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_h70a995ef__0);
    VL_SEL_WWII(4160,16387, __Vtemp_hcbadac31__0, __Vtemp_h0019fcba__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h7ba11fc1__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done), __Vtemp_hcbadac31__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h091c2ddb__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h7ba11fc1__0);
    VL_EXTEND_WI(16397,11, __Vtemp_hf5c36199__0, (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U)));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_he6b77e36__0, __Vtemp_hf5c36199__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_ha49bdeda__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_he6b77e36__0);
    VL_AND_W(513, __Vtemp_h7cc12209__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_ha49bdeda__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h5b1ea8d1__0, __Vtemp_h7cc12209__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h25f4ac91__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_h5b1ea8d1__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h5464f927__0, __Vtemp_h25f4ac91__0);
    VL_AND_W(130, __Vtemp_h425f08b2__0, __Vtemp_h091c2ddb__0, __Vtemp_h5464f927__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        VL_ASSIGN_W(4160,__Vtemp_h57b3b716__0, VTestHarness__ConstPool__CONST_h58046101_0);
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_992) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        VL_ASSIGN_W(4160,__Vtemp_h57b3b716__0, __Vtemp_h425f08b2__0);
    }
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h57b3b716__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6193(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6193\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_hc45f751e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h18fab495__0;
    VlWide<512>/*16383:0*/ __Vtemp_he0b058dd__0;
    VlWide<513>/*16415:0*/ __Vtemp_h61eb14a6__0;
    VlWide<513>/*16415:0*/ __Vtemp_h4cca2471__0;
    VlWide<513>/*16415:0*/ __Vtemp_h529edf2c__0;
    VlWide<130>/*4159:0*/ __Vtemp_hd6e33dba__0;
    VlWide<130>/*4159:0*/ __Vtemp_h417afd3b__0;
    VlWide<130>/*4159:0*/ __Vtemp_h6e3f491b__0;
    VlWide<513>/*16415:0*/ __Vtemp_hf5c36199__0;
    VlWide<513>/*16415:0*/ __Vtemp_he6b77e36__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha49bdeda__0;
    VlWide<513>/*16415:0*/ __Vtemp_h7cc12209__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5b1ea8d1__0;
    VlWide<130>/*4159:0*/ __Vtemp_h25f4ac91__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5464f927__0;
    VlWide<130>/*4159:0*/ __Vtemp_hd927d6ed__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_h18fab495__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_EXTEND_WI(16384,11, __Vtemp_he0b058dd__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(16386,16384,2, __Vtemp_h61eb14a6__0, __Vtemp_he0b058dd__0, 0U);
    VL_SHIFTL_WWW(16386,16386,16386, __Vtemp_h4cca2471__0, __Vtemp_h18fab495__0, __Vtemp_h61eb14a6__0);
    VL_AND_W(513, __Vtemp_h529edf2c__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h4cca2471__0);
    VL_SEL_WWII(4160,16386, __Vtemp_hd6e33dba__0, __Vtemp_h529edf2c__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h417afd3b__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__a_first_done), __Vtemp_hd6e33dba__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h6e3f491b__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h417afd3b__0);
    VL_EXTEND_WI(16397,11, __Vtemp_hf5c36199__0, (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U)));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_he6b77e36__0, __Vtemp_hf5c36199__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_ha49bdeda__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_he6b77e36__0);
    VL_AND_W(513, __Vtemp_h7cc12209__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_ha49bdeda__0);
    VL_SEL_WWII(4160,16399, __Vtemp_h5b1ea8d1__0, __Vtemp_h7cc12209__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h25f4ac91__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_h5b1ea8d1__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h5464f927__0, __Vtemp_h25f4ac91__0);
    VL_AND_W(130, __Vtemp_hd927d6ed__0, __Vtemp_h6e3f491b__0, __Vtemp_h5464f927__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum = 0U;
        VL_ASSIGN_W(4160,__Vtemp_hc45f751e__0, VTestHarness__ConstPool__CONST_h58046101_0);
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT___T_1004) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__dFirst)
                          ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                              << 0x19U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 7U)) : 
                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__acknum) 
                          - (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   | (3U == (3U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U))))))));
        }
        VL_ASSIGN_W(4160,__Vtemp_hc45f751e__0, __Vtemp_hd927d6ed__0);
    }
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_hc45f751e__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6194(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6194\n"); );
    // Init
    VlWide<33>/*1055:0*/ __Vtemp_hdc8f2f64__0;
    VlWide<64>/*2047:0*/ __Vtemp_h760111ce__0;
    VlWide<64>/*2047:0*/ __Vtemp_h47380d22__0;
    VlWide<64>/*2047:0*/ __Vtemp_h4f663837__0;
    VlWide<64>/*2047:0*/ __Vtemp_h49c485d9__0;
    VlWide<130>/*4159:0*/ __Vtemp_h0c0bf906__0;
    VlWide<513>/*16415:0*/ __Vtemp_h21655acf__0;
    VlWide<513>/*16415:0*/ __Vtemp_h6e680f4c__0;
    VlWide<513>/*16415:0*/ __Vtemp_h29098e37__0;
    VlWide<513>/*16415:0*/ __Vtemp_hbebd16f0__0;
    VlWide<513>/*16415:0*/ __Vtemp_h0a7cc6f0__0;
    VlWide<130>/*4159:0*/ __Vtemp_hca7d018c__0;
    VlWide<130>/*4159:0*/ __Vtemp_hcc60fdac__0;
    VlWide<130>/*4159:0*/ __Vtemp_hd43e3212__0;
    VlWide<513>/*16415:0*/ __Vtemp_h5c0ef9ad__0;
    VlWide<513>/*16415:0*/ __Vtemp_hb5df4b4a__0;
    VlWide<513>/*16415:0*/ __Vtemp_h88459b0d__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha4aca1d1__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb72c2055__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc7a15c26__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5b505918__0;
    VlWide<130>/*4159:0*/ __Vtemp_h03e49c41__0;
    // Body
    if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__gennum))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__aToggle_r 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__fragmenter__DOT__dToggle;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                << 0xeU) | ((0x2000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                        << 0xcU)) | 
                            ((0x1000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         << 0xaU)) 
                             | ((0xf00U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                           >> 3U)) 
                                | ((0xe0U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                             >> 0xeU)) 
                                   | ((0x18U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                >> 0x18U)) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data) 
                >> 0x12U) | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                      >> 0x20U)) << 0xeU));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x4000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                           << 4U)) | ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_data 
                                               >> 0x20U)) 
                                      >> 0x12U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    VL_EXTEND_WI(2048,11, __Vtemp_h760111ce__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWW(2048,2048,2048, __Vtemp_h47380d22__0, VTestHarness__ConstPool__CONST_ha056d847_0, __Vtemp_h760111ce__0);
    VL_EXTEND_WI(2048,11, __Vtemp_h4f663837__0, (0x7ffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 7U)));
    VL_SHIFTL_WWW(2048,2048,2048, __Vtemp_h49c485d9__0, VTestHarness__ConstPool__CONST_ha056d847_0, __Vtemp_h4f663837__0);
    __Vtemp_hdc8f2f64__0[1U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[1U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[1U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[1U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[1U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[1U])))));
    __Vtemp_hdc8f2f64__0[2U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[2U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[2U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[2U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[2U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[2U])))));
    __Vtemp_hdc8f2f64__0[3U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[3U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[3U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[3U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[3U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[3U])))));
    __Vtemp_hdc8f2f64__0[4U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[4U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[4U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[4U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[4U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[4U])))));
    __Vtemp_hdc8f2f64__0[5U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[5U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[5U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[5U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[5U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[5U])))));
    __Vtemp_hdc8f2f64__0[6U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[6U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[6U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[6U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[6U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[6U])))));
    __Vtemp_hdc8f2f64__0[7U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[7U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[7U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[7U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[7U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[7U])))));
    __Vtemp_hdc8f2f64__0[8U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[8U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[8U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[8U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[8U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[8U])))));
    __Vtemp_hdc8f2f64__0[9U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[9U] 
                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                    ? VTestHarness__ConstPool__CONST_hd0572db1_0[9U]
                                    : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                            ? __Vtemp_h47380d22__0[9U]
                                            : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h49c485d9__0[9U]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[9U])))));
    __Vtemp_hdc8f2f64__0[0xaU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xaU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xaU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xaU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xaU])))));
    __Vtemp_hdc8f2f64__0[0xbU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xbU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xbU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xbU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xbU])))));
    __Vtemp_hdc8f2f64__0[0xcU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xcU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xcU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xcU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xcU])))));
    __Vtemp_hdc8f2f64__0[0xdU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xdU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xdU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xdU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xdU])))));
    __Vtemp_hdc8f2f64__0[0xeU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xeU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xeU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xeU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xeU])))));
    __Vtemp_hdc8f2f64__0[0xfU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0xfU] 
                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                      ? VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU]
                                      : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                              ? __Vtemp_h47380d22__0[0xfU]
                                              : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h49c485d9__0[0xfU]
                                                : VTestHarness__ConstPool__CONST_hd0572db1_0[0xfU])))));
    __Vtemp_hdc8f2f64__0[0x10U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x10U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x10U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x10U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x10U])))));
    __Vtemp_hdc8f2f64__0[0x11U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x11U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x11U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x11U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x11U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x11U])))));
    __Vtemp_hdc8f2f64__0[0x12U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x12U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x12U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x12U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x12U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x12U])))));
    __Vtemp_hdc8f2f64__0[0x13U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x13U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x13U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x13U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x13U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x13U])))));
    __Vtemp_hdc8f2f64__0[0x14U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x14U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x14U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x14U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x14U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x14U])))));
    __Vtemp_hdc8f2f64__0[0x15U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x15U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x15U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x15U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x15U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x15U])))));
    __Vtemp_hdc8f2f64__0[0x16U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x16U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x16U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x16U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x16U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x16U])))));
    __Vtemp_hdc8f2f64__0[0x17U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x17U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x17U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x17U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x17U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x17U])))));
    __Vtemp_hdc8f2f64__0[0x18U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x18U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x18U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x18U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x18U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x18U])))));
    __Vtemp_hdc8f2f64__0[0x19U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x19U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x19U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x19U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x19U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x19U])))));
    __Vtemp_hdc8f2f64__0[0x1aU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1aU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1aU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1aU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1aU])))));
    __Vtemp_hdc8f2f64__0[0x1bU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1bU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1bU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1bU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1bU])))));
    __Vtemp_hdc8f2f64__0[0x1cU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1cU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1cU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1cU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1cU])))));
    __Vtemp_hdc8f2f64__0[0x1dU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1dU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1dU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1dU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1dU])))));
    __Vtemp_hdc8f2f64__0[0x1eU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1eU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1eU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1eU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1eU])))));
    __Vtemp_hdc8f2f64__0[0x1fU] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x1fU] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x1fU]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x1fU]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x1fU])))));
    __Vtemp_hdc8f2f64__0[0x20U] = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0x20U] 
                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
                                       ? VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U]
                                       : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x20U] 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                               ? __Vtemp_h47380d22__0[0x20U]
                                               : VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])) 
                                          & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h49c485d9__0[0x20U]
                                                 : 
                                                VTestHarness__ConstPool__CONST_hd0572db1_0[0x20U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = (VTestHarness__ConstPool__CONST_hf1d89c7e_0[0U] 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)
               ? VTestHarness__ConstPool__CONST_hd0572db1_0[0U]
               : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                       ? __Vtemp_h47380d22__0[0U] : 
                      VTestHarness__ConstPool__CONST_hd0572db1_0[0U])) 
                  & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_h49c485d9__0[0U]
                         : VTestHarness__ConstPool__CONST_hd0572db1_0[0U])))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_hdc8f2f64__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_hdc8f2f64__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_hdc8f2f64__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_hdc8f2f64__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_hdc8f2f64__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_hdc8f2f64__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_hdc8f2f64__0[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_hdc8f2f64__0[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_hdc8f2f64__0[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_hdc8f2f64__0[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_hdc8f2f64__0[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_hdc8f2f64__0[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_hdc8f2f64__0[0xdU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_hdc8f2f64__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_hdc8f2f64__0[0xfU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_hdc8f2f64__0[0x10U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x11U] 
        = __Vtemp_hdc8f2f64__0[0x11U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x12U] 
        = __Vtemp_hdc8f2f64__0[0x12U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x13U] 
        = __Vtemp_hdc8f2f64__0[0x13U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x14U] 
        = __Vtemp_hdc8f2f64__0[0x14U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x15U] 
        = __Vtemp_hdc8f2f64__0[0x15U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x16U] 
        = __Vtemp_hdc8f2f64__0[0x16U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x17U] 
        = __Vtemp_hdc8f2f64__0[0x17U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x18U] 
        = __Vtemp_hdc8f2f64__0[0x18U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x19U] 
        = __Vtemp_hdc8f2f64__0[0x19U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1aU] 
        = __Vtemp_hdc8f2f64__0[0x1aU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1bU] 
        = __Vtemp_hdc8f2f64__0[0x1bU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1cU] 
        = __Vtemp_hdc8f2f64__0[0x1cU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1dU] 
        = __Vtemp_hdc8f2f64__0[0x1dU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1eU] 
        = __Vtemp_hdc8f2f64__0[0x1eU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x1fU] 
        = __Vtemp_hdc8f2f64__0[0x1fU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight[0x20U] 
        = __Vtemp_hdc8f2f64__0[0x20U];
    VL_EXTEND_WI(16387,4, __Vtemp_h21655acf__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                                     << 1U))
                                                  : 0U));
    VL_EXTEND_WI(16385,11, __Vtemp_h6e680f4c__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(16387,16385,2, __Vtemp_h29098e37__0, __Vtemp_h6e680f4c__0, 0U);
    VL_SHIFTL_WWW(16387,16387,16387, __Vtemp_hbebd16f0__0, __Vtemp_h21655acf__0, __Vtemp_h29098e37__0);
    VL_AND_W(513, __Vtemp_h0a7cc6f0__0, VTestHarness__ConstPool__CONST_h481e95a0_0, __Vtemp_hbebd16f0__0);
    VL_SEL_WWII(4160,16387, __Vtemp_hca7d018c__0, __Vtemp_h0a7cc6f0__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hcc60fdac__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done), __Vtemp_hca7d018c__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_hd43e3212__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hcc60fdac__0);
    VL_EXTEND_WI(16397,11, __Vtemp_h5c0ef9ad__0, (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U)));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_hb5df4b4a__0, __Vtemp_h5c0ef9ad__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_h88459b0d__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_hb5df4b4a__0);
    VL_AND_W(513, __Vtemp_ha4aca1d1__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_h88459b0d__0);
    VL_SEL_WWII(4160,16399, __Vtemp_hb72c2055__0, __Vtemp_ha4aca1d1__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hc7a15c26__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_hb72c2055__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h5b505918__0, __Vtemp_hc7a15c26__0);
    VL_AND_W(130, __Vtemp_h03e49c41__0, __Vtemp_hd43e3212__0, __Vtemp_h5b505918__0);
    VL_COND_WIWW(4160, __Vtemp_h0c0bf906__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset), VTestHarness__ConstPool__CONST_h58046101_0, __Vtemp_h03e49c41__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h0c0bf906__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6195(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6195\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_h35fad866__0;
    VlWide<513>/*16415:0*/ __Vtemp_h263f1eb4__0;
    VlWide<512>/*16383:0*/ __Vtemp_h6e6a274e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3e689c8e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h659e373c__0;
    VlWide<513>/*16415:0*/ __Vtemp_h2e3c41e7__0;
    VlWide<130>/*4159:0*/ __Vtemp_h06c07fa3__0;
    VlWide<130>/*4159:0*/ __Vtemp_h43e5e1ef__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc0247166__0;
    VlWide<513>/*16415:0*/ __Vtemp_h5c0ef9ad__0;
    VlWide<513>/*16415:0*/ __Vtemp_hb5df4b4a__0;
    VlWide<513>/*16415:0*/ __Vtemp_h88459b0d__0;
    VlWide<513>/*16415:0*/ __Vtemp_ha4aca1d1__0;
    VlWide<130>/*4159:0*/ __Vtemp_hb72c2055__0;
    VlWide<130>/*4159:0*/ __Vtemp_hc7a15c26__0;
    VlWide<130>/*4159:0*/ __Vtemp_h5b505918__0;
    VlWide<130>/*4159:0*/ __Vtemp_h537b60df__0;
    // Body
    VL_EXTEND_WI(16386,3, __Vtemp_h263f1eb4__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_EXTEND_WI(16384,11, __Vtemp_h6e6a274e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT___fragmenter_auto_out_a_bits_source));
    VL_CONCAT_WWI(16386,16384,2, __Vtemp_h3e689c8e__0, __Vtemp_h6e6a274e__0, 0U);
    VL_SHIFTL_WWW(16386,16386,16386, __Vtemp_h659e373c__0, __Vtemp_h263f1eb4__0, __Vtemp_h3e689c8e__0);
    VL_AND_W(513, __Vtemp_h2e3c41e7__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h659e373c__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h06c07fa3__0, __Vtemp_h2e3c41e7__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_h43e5e1ef__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__a_first_done), __Vtemp_h06c07fa3__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_hc0247166__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h43e5e1ef__0);
    VL_EXTEND_WI(16397,11, __Vtemp_h5c0ef9ad__0, (0x7ffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U)));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_hb5df4b4a__0, __Vtemp_h5c0ef9ad__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_h88459b0d__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_hb5df4b4a__0);
    VL_AND_W(513, __Vtemp_ha4aca1d1__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_h88459b0d__0);
    VL_SEL_WWII(4160,16399, __Vtemp_hb72c2055__0, __Vtemp_ha4aca1d1__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hc7a15c26__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_hb72c2055__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_h5b505918__0, __Vtemp_hc7a15c26__0);
    VL_AND_W(130, __Vtemp_h537b60df__0, __Vtemp_hc0247166__0, __Vtemp_h5b505918__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum = 0U;
        VL_ASSIGN_W(4160,__Vtemp_h35fad866__0, VTestHarness__ConstPool__CONST_h58046101_0);
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT___T_1004) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                              ? (~ (((0xcU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__bundleIn_0_d_bits_size)))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__dFirst)
                          ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                              << 0x19U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 7U)) : 
                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__acknum) 
                          - (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                   | (3U == (3U & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U))))))));
        }
        VL_ASSIGN_W(4160,__Vtemp_h35fad866__0, __Vtemp_h537b60df__0);
    }
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h35fad866__0);
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__6196(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__6196\n"); );
    // Body
    if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__gennum))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__aToggle_r 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__fragmenter__DOT__dToggle;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_80) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_len 
            = (0x1fU & ((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_0_tag_len)
                           : 0U) | ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_1_tag_len)
                                     : 0U)) | ((4U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_2_tag_len)
                                                : 0U)));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats 
            = (0xffU & (((((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_0_tag_pixel_repeats)
                            : 0U) | ((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_1_tag_pixel_repeats)
                                      : 0U)) | ((4U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__head_oh))
                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__out_regs_2_tag_pixel_repeats)
                                                 : 0U)) 
                        - (IData)(1U)));
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_78) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats) 
                        - (IData)(1U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                 & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_mem_wb)) 
                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)
                        ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid)
                        : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7)
                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___io_imem_ready_T_4)
                            : ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T) 
                                   | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid)))) 
                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                  - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nReady))))))));
}
