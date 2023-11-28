// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1326(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1326\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___fp_data_hazard_ex_T_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rd) 
           == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
                        >> 7U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___fp_data_hazard_wb_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1) 
           == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                        >> 7U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___fp_data_hazard_mem_T_1 
        = ((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                     >> 7U)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___fp_data_hazard_ex_T_1 
        = ((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
                     >> 7U)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs1));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___GEN_1) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2 
            = (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                        >> 0x14U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_rs2 
            = (0x1fU & (((((((((0x17U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                               | (0x16U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                              | (0x15U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                             | (0x14U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                            | (0x13U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                           | (0x12U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                          | (0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))) 
                         | (0x10U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))
                         ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                            >> 2U) : (((0xfU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)) 
                                       | (0xeU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2)))
                                       ? 0U : (8U | 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                                   >> 2U))))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits 
            = ((0x17U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                ? (0x13023U | ((0x1c000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                               << 0x13U)) 
                               | ((0x2000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0xdU)) 
                                  | ((0x1f00000U & 
                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                       << 0x12U)) | 
                                     (0xc00U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst)))))
                : ((0x16U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                    ? (0x12023U | ((0xc000000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                                  << 0x13U)) 
                                   | ((0x2000000U & 
                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                        << 0xdU)) | 
                                      ((0x1f00000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x12U)) 
                                       | (0xe00U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst)))))
                    : ((0x15U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_2))
                        ? (0x13027U | ((0x1c000000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                           << 0x13U)) 
                                       | ((0x2000000U 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                              << 0xdU)) 
                                          | ((0x1f00000U 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst 
                                                 << 0x12U)) 
                                             | (0xc00U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__inst)))))
                        : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__exp__DOT___io_out_T_42_bits)));
    }
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1327(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1327\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___min_pop_count_T_9 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___min_pop_count_T_7) 
            < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_5))
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___min_pop_count_T_7)
            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__pop_count_packed_deps_5));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__mask_eq_5)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1330(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1330\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__drop)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN_0 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___GEN)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__bundleIn_0_d_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__drop)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_0__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_1__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__last_probe));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1331(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1331\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_2__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_3__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_4__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_5__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_5__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_6__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_6__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_7__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_7__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_8__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_8__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__abc_mshrs_9__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_9__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__bc_mshr__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1332(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1332\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_sinkc_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__last_probe));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_12 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_sinkc_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__last_probe)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__last));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___best_write_packet_T_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__write_packets_2_bytes_written) 
           > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___best_write_packet_T_1_bytes_written));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___GEN_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___io_dma_req_bits_has_acc_bitwidth_output)
            ? (0x7fcU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___GEN_6) 
                         << 2U)) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT___GEN_6));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
        = ((((2U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
              ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___io_rw_rdata_WIRE
              : 0ULL) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata) 
           & (~ ((3U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata
                  : 0ULL)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_2)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1333(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1333\n"); );
    // Body
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_3)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_4)));
    vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_acc_1) 
           | ((1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__rsize)) 
              & (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__get_acquire_a_mask_eq_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_75 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_valid) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_npc_misaligned));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___T_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_weights_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_25 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_weights_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_35 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_weights_io_idle) 
            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__req_loop_id)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_running)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_running))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__req_loop_id)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_ld_weights_started)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_ld_weights_started)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___T_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_24 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_33 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_idle) 
            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_loop_id)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_running)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_running))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_loop_id)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_ld_input_started)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_ld_input_started)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___T_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_bias_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_22 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___io_req_ready_output) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_bias_io_req_valid_T_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_31 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_bias_io_idle) 
            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__req_loop_id)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_running)
                : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_running))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__req_loop_id)
               ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_ld_bias_started)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_ld_bias_started)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1334(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1334\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT___command_p_io_in_valid_T_3 
        = (((((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__state)) 
              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__skip_iteration))) 
             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ex_io_lda_completed_T) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_idle))) 
            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ex_io_ldb_completed_T) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_weights_io_idle))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ex_io_ldd_completed_T) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_bias_io_idle)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2540 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2598) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1))) 
           & (6U == (6U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___T_2602 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___T_2660) 
            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__c_first_counter_1))) 
           & (6U == (6U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tl_out_c_bits_opcode))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_168 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_350) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366)) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseDone 
        = (((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter_1)) 
            | (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__beats1_1))) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__releaseRejected 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_release_data_valid) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_366)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_bypass_0)
            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_5
            : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_6);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_rs_bypass_1)
            ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_12
            : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ex_rs_T_13);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_2) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_6)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1335(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1335\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_2) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_7)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_3) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_8)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_3) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_9)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_10 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_4) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_10)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_4) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_11)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_5) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_12)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_13 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_acc_5) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__mask_eq_13)));
    if ((0xfU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_11))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_bits_derived_params_result_input_spad_stride_T_4 
            = (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input_io_req_bits_derived_params_result_irows) 
                          >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_11)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_bits_derived_params_result_input_spad_stride_T_6 
            = (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input_io_req_bits_derived_params_result_icols) 
                          >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_11)));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_bits_derived_params_result_input_spad_stride_T_4 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___ld_input_io_req_bits_derived_params_result_input_spad_stride_T_6 = 0U;
    }
    vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__dFirst_size 
        = (((IData)((0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN) 
                                  >> 3U)))) << 2U) 
           | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_0) 
                                     >> 1U)))) << 1U) 
              | (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT___GEN_0))))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1336(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1336\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_0) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_27) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataAccessVec_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiAbstractDataWrEnMaybe_4) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_3) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_0) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_78) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_4) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_50) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_8) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_82) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_12) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_19) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_16 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_16) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_102) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_20 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_20) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_42) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_24 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_24) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_46) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_28 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_28) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_15) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_32 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_32) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_97) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1337(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1337\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_36 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_36) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_11) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_40 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_40) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_35) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_44 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_44) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_23) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_48 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_48) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_93) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_52 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_52) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_54) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_56 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_56) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_7) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferAccessVec_60 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__dmiProgramBufferWrEnMaybe_60) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__out_roready_31) 
              & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                         >> 0x21U))));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT___io_out_valid_output 
        = (1U & (((0x10U & ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                            << 4U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                                       << 1U)) >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_4_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready 
        = ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outSer__DOT__sending)) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__outArb__DOT__chosen)));
    vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_readys 
        = (3U & (~ (((2U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask)) 
                     | (1U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1) 
                               >> 1U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__readys_mask)))) 
                    & (((IData)((0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1))) 
                        << 1U) | (1U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                                        | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___readys_filter_T_1)))))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1338(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1338\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__tlb__io_req_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_valid) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___T_1845 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__bundleOut_1_out_1_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__bundleOut_1_out_1_valid) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT___io_deq_valid_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__bundleOut_1_out_1_valid) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__x1_a_q__DOT__maybe_full));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_1) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT___next_b_T_4 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT___state_T_1) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT___state_T_3)) 
           & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__next_och)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___next_krow_T_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT___state_T_3) 
           & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__next_kch)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__common_overflow 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                  >> 0x1fU) ? ((0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x19U))) 
                               | ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                                   ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                      | ((IData)(((0x1f00000U 
                                                   == 
                                                   (0x7ff00000U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
                                                     >> 0x12U))) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2)))
                                   : ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
                                       ? (IData)(((0x1f00000U 
                                                   == 
                                                   (0x7ff00000U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                  & ((0U 
                                                      != 
                                                      (0x7fffffffU 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[2U] 
                                                           << 0xcU) 
                                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__shiftedSig[1U] 
                                                             >> 0x14U)))) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr))))
                                       : ((0x1fU == 
                                           (0x7ffU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U))) 
                                          | (IData)(
                                                    ((0x1e00000U 
                                                      == 
                                                      (0x7ff00000U 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundCarryBut2)))))))
                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__narrow__DOT__roundIncr))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1339(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1339\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (0x3ffffffU & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T) 
                           & (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
                             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound)))
                          ? (((IData)(1U) + (0x1ffffffU 
                                             & ((IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_sig 
                                                         >> 0x1dU)) 
                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                             & (~ ((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
                                     & (0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_1)) 
                                    & (~ (IData)((0U 
                                                  != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___GEN_2))))
                                    ? (1U | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74 
                                             << 1U))
                                    : 0U))) : ((0x1ffffffU 
                                                & ((IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_sig 
                                                            >> 0x1dU)) 
                                                   & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_74))) 
                                               | (((6U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__anyRound))
                                                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14
                                                   : 0U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__common_overflow 
        = (1U & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                  >> 0x1fU) ? ((0U != (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                                >> 0x1aU))) 
                               | ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ))
                                   ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U] 
                                      | ((IData)(((0x3f00000U 
                                                   == 
                                                   (0x7ff00000U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U] 
                                                     >> 0x12U))) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundCarryBut2)))
                                   : ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U])
                                       ? (IData)(((0x3f00000U 
                                                   == 
                                                   (0x7ff00000U 
                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                  & ((0U 
                                                      != 
                                                      (0x7fffffffffffffffULL 
                                                       & (((QData)((IData)(
                                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[3U])) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[2U])) 
                                                              << 0xcU) 
                                                             | ((QData)((IData)(
                                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__shiftedSig[1U])) 
                                                                >> 0x14U))))) 
                                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr))))
                                       : ((0x3fU == 
                                           (0x7ffU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U] 
                                               >> 0x14U))) 
                                          | (IData)(
                                                    ((0x3e00000U 
                                                      == 
                                                      (0x7ff00000U 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[1U])) 
                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundCarryBut2)))))))
                  : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_typ) 
                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in1[2U]) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__conv__DOT__roundIncr))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1340(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1340\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x3fffU & (((0x2000U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp) 
                                   << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp)) 
                      + (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x35U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_19 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__delegate)
            ? (((QData)((IData)((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_stvec_T_5 
                                               >> 0x26U))))) 
                << 0x27U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_stvec_T_5)
            : (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___read_mtvec_T_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__trapToDebug 
        = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_singleStepped) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__causeIsDebugInt)) 
             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__causeIsDebugTrigger)) 
            | (0xfU & (((~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__cause 
                                    >> 0x3fU))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break)) 
                       & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreakm) 
                            << 3U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaks) 
                                       << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_dcsr_ebreaku))) 
                          >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mstatus_prv))))) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___readys_mask_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__winnerQual_1 
        = (IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
                    >> 1U) & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))));
    if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__bundleIn_0_d_valid));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1 
            = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__readys_readys) 
                      >> 1U) & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty))));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__state_0;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__muxStateEarly_1 
            = (1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__state_1));
    }
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1341(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1341\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached)
            ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)
                           ? ((0x11U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
                               ? ((0x16U >= (8U & ((IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                                                            >> 3U)) 
                                                   << 3U)))
                                   ? (0x7fffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_mask) 
                                                   << 
                                                   (8U 
                                                    & ((IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                                                                >> 3U)) 
                                                       << 3U))))
                                   : 0U) : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tl_out_a_bits_T_6_mask))
                           : ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_13) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_13) 
                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                               << 0xfU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_13) 
                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_13) 
                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                            << 0xeU) 
                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_12) 
                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_12) 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                               << 0xdU) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_12) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_12) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                  << 0xcU) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_11) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_11) 
                                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                     << 0xbU) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_11) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_11) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                        << 0xaU) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_10) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_10) 
                                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                           << 9U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_10) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_10) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                              << 8U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_9) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_9) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                                 << 7U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_9) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_9) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                                    << 6U) 
                                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_8) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_8) 
                                                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                                       << 5U) 
                                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_8) 
                                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_8) 
                                                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                                          << 4U) 
                                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_7) 
                                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_7) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                                             << 3U) 
                                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_7) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_7) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))) 
                                                                                << 2U) 
                                                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_6) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_6) 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr))) 
                                                                                << 1U) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_acc_6) 
                                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__get_a_mask_eq_6) 
                                                                                & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)))))))))))))))))))))
            : 0xffffU);
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1342(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1342\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_eq_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___GEN_0 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___GEN) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT___GEN)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__bundleIn_0_d_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_slave_named_bootaddressreg__DOT__fragmenter__DOT__drop)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_4)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1343(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1343\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_acc_1) 
           | ((1U == (3U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__aFrag))) 
              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__mask_eq_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___GEN_0 
        = (7U & ((3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___GEN) 
                        >> 4U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___GEN)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__bundleIn_0_d_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___io_deq_valid_output) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__drop)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___io_alloc_ready_output 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___GEN_0) 
           & ((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___new_entry_q_WIRE))
               ? (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_36)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_34)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_31))
               : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_34) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_31))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2238 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_0_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2354 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_1_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2470 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_2_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2586 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_3_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2702 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_4_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2818 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_5_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_2934 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_6_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_3050 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__entries_ld_7_bits_opa_bits_start_is_acc_addr) 
           == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_3071 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opb_bits_start_is_acc_addr) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_62)
               ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U] 
                  >> 0x1eU) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U] 
                               >> 0x1eU)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1344(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1344\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__new_entry_opa_bits_start_data 
        = (0x3fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_valid)
                       ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_data)
                       : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__op1_valid)
                           ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[1U]
                           : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[3U])));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_23 
        = (0x7fffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_data) 
                      + ((0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[4U] 
                                   >> 0x10U)) * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__c_stride))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_28 
        = (0x7fffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__dst_bits_start_data) 
                       + ((0x7fU & (((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[4U] 
                                            >> 4U)) 
                                     + (0U != (0xfU 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[4U]))) 
                                    - (IData)(1U))) 
                          * ((0x37U >= (0x3fU & ((IData)(0xeU) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__id))))
                              ? (0x3fffU & (IData)(
                                                   ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_block_strides_0)) 
                                                      << 0x2aU) 
                                                     | (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_block_strides_2)) 
                                                         << 0x1cU) 
                                                        | (QData)((IData)(
                                                                          (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_block_strides_1) 
                                                                            << 0xeU) 
                                                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__ld_block_strides_0)))))) 
                                                    >> 
                                                    (0x3fU 
                                                     & ((IData)(0xeU) 
                                                        * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__id))))))
                              : 0U))) + (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT___ram_ext_R0_data[4U] 
                                                  >> 0x10U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_60 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_59) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_valid_0));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT___GEN_29 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0)) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__tlb__DOT__tlbs_0__DOT__tlb__DOT___GEN_28)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_32 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_31) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_valid_0));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1345(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1345\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_34 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_33)
                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__invalidate_refill))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_valid_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_36 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_35)
                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__invalidate_refill))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_valid_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_38 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_37)
                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__invalidate_refill))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_valid_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_40 
        = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_39)
                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__invalidate_refill))
                  : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_valid_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_70 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_78 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (1U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_86 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_94 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (3U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_102 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (4U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_110 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (5U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_118 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_126 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_69)) 
                 | (~ (IData)((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_waddr_1))))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1346(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1346\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_42 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_50 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (1U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_58 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (2U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_66 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (3U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_74 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (4U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_82 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (5U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_90 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_98 
        = (1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_41)) 
                 | (~ (IData)((7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__waddr_1))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_b 
        = (0x3ffffU & ((((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_irow 
                          == (0x7ffffU & (- ((0x10U 
                                              >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_input_dilated))
                                              ? (0x1ffffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___state_T_1 
                                                    >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_input_dilated)))
                                              : 0U)))) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_icol 
                            == ((0x180000U & ((- (IData)(
                                                         (1U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___next_b_T_9 
                                                             >> 0x12U)))) 
                                              << 0x13U)) 
                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___next_b_T_9))) 
                        & (~ (IData)((0U != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__next_ich))))
                        ? (VL_GTS_III(19, (0x7ffffU 
                                           & (((0x70000U 
                                                & ((- (IData)(
                                                              (1U 
                                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b) 
                                                                  >> 0xfU)))) 
                                                   << 0x10U)) 
                                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b)) 
                                              + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b_it)), 
                                      ((0x60000U & 
                                        ((- (IData)(
                                                    (1U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_inner_bounds_batches) 
                                                         - (IData)(1U)) 
                                                        >> 0x10U)))) 
                                         << 0x11U)) 
                                       | (0x1ffffU 
                                          & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_inner_bounds_batches) 
                                             - (IData)(1U)))))
                            ? 0U : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___GEN_27 
                                    + vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b_it))
                        : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___GEN_27));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1347(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1347\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_4630 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___tlb_io_resp_miss 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_2) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__tlb_miss)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__multipleHits));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_13 
        = (7U & ((IData)(1U) + (((IData)((0U != (0xfU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__idxPageUpdateOH) 
                                                    >> 4U)))) 
                                 << 2U) | (((IData)(
                                                    (0U 
                                                     != 
                                                     (3U 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_8) 
                                                         >> 1U)))) 
                                            << 1U) 
                                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___idxPageUpdate_T_4)))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___idxPageUpdate_T_4) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_14 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_12));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_15 
            = (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_9) 
                        >> 1U));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_14 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_9));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_15 
            = (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_12) 
                        >> 1U));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_11 
        = (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_10) 
                  >> 4U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_10)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45 
        = (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_15))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___r_pte_T_5 
        = ((1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_239));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_both_stages) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))
               : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_239) 
                  & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1348(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1348\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_4630 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_14 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_cmd_uses_tlb)) 
           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_tlb_miss)) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_multipleHits)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___tlb_io_resp_ae_inst 
        = (0U != ((~ (((0x3000U & ((- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_px))) 
                                   << 0xcU)) | ((0x800U 
                                                 & ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0 
                                                             >> 7U)) 
                                                    << 0xbU)) 
                                                | ((0x400U 
                                                    & ((IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0 
                                                                >> 7U)) 
                                                       << 0xaU)) 
                                                   | ((0x200U 
                                                       & ((IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0 
                                                                   >> 7U)) 
                                                          << 9U)) 
                                                      | ((0x100U 
                                                          & ((IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0 
                                                                      >> 7U)) 
                                                             << 8U)) 
                                                         | ((0x80U 
                                                             & ((IData)(
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15 
                                                                         >> 7U)) 
                                                                << 7U)) 
                                                            | ((0x40U 
                                                                & ((IData)(
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13 
                                                                            >> 7U)) 
                                                                   << 6U)) 
                                                               | ((0x20U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11 
                                                                               >> 7U)) 
                                                                      << 5U)) 
                                                                  | ((0x10U 
                                                                      & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9 
                                                                                >> 7U)) 
                                                                         << 4U)) 
                                                                     | ((8U 
                                                                         & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7 
                                                                                >> 7U)) 
                                                                            << 3U)) 
                                                                        | ((4U 
                                                                            & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5 
                                                                                >> 7U)) 
                                                                               << 2U)) 
                                                                           | ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3 
                                                                                >> 7U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1 
                                                                                >> 7U))))))))))))))) 
                      & (0x2000U | ((0x1000U & ((~ (IData)(
                                                           (0ULL 
                                                            != 
                                                            (0x60000ULL 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__special_entry_data_0)))) 
                                                << 0xcU)) 
                                    | ((0x800U & ((~ (IData)(
                                                             (0ULL 
                                                              != 
                                                              (0x60000ULL 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_3_data_0)))) 
                                                  << 0xbU)) 
                                       | ((0x400U & 
                                           ((~ (IData)(
                                                       (0ULL 
                                                        != 
                                                        (0x60000ULL 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_2_data_0)))) 
                                            << 0xaU)) 
                                          | ((0x200U 
                                              & ((~ (IData)(
                                                            (0ULL 
                                                             != 
                                                             (0x60000ULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_1_data_0)))) 
                                                 << 9U)) 
                                             | ((0x100U 
                                                 & ((~ (IData)(
                                                               (0ULL 
                                                                != 
                                                                (0x60000ULL 
                                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__superpage_entries_0_data_0)))) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ (IData)(
                                                                  (0ULL 
                                                                   != 
                                                                   (0x60000ULL 
                                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_15)))) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ (IData)(
                                                                     (0ULL 
                                                                      != 
                                                                      (0x60000ULL 
                                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_13)))) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ (IData)(
                                                                        (0ULL 
                                                                         != 
                                                                         (0x60000ULL 
                                                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_11)))) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ (IData)(
                                                                           (0ULL 
                                                                            != 
                                                                            (0x60000ULL 
                                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_9)))) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ (IData)(
                                                                              (0ULL 
                                                                               != 
                                                                               (0x60000ULL 
                                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_7)))) 
                                                                   << 3U)) 
                                                               | ((4U 
                                                                   & ((~ (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_5)))) 
                                                                      << 2U)) 
                                                                  | ((2U 
                                                                      & ((~ (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_3)))) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (~ (IData)(
                                                                                (0ULL 
                                                                                != 
                                                                                (0x60000ULL 
                                                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___entries_WIRE_1)))))))))))))))))))) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__hits)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1351(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1351\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_6_data_T 
        = (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn) 
                              << 0xcU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_g) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sx) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sr) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr))))))))))))))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pw) 
                                       << 8U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_px) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pr) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pal) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_paa) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_eff) 
                                                                 << 2U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_c) 
                                                                   << 1U)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___sectored_entries_0_7_data_T 
        = (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn) 
                              << 0xcU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_g) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sx) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_sr) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr))))))))))))))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pw) 
                                       << 8U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_px) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pr) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_ppp) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_pal) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_paa) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_eff) 
                                                                 << 2U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__newEntry_c) 
                                                                   << 1U)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_ae_array 
        = (0x3fffU & (((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_47))
                        ? ((0x3000U & ((- (IData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_eff))) 
                                       << 0xcU)) | 
                           ((0x800U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0 
                                                >> 2U)) 
                                       << 0xbU)) | 
                            ((0x400U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0 
                                                 >> 2U)) 
                                        << 0xaU)) | 
                             ((0x200U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0 
                                                  >> 2U)) 
                                         << 9U)) | 
                              ((0x100U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0 
                                                   >> 2U)) 
                                          << 8U)) | 
                               ((0x80U & ((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_15 
                                                   >> 2U)) 
                                          << 7U)) | 
                                ((0x40U & ((IData)(
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_13 
                                                    >> 2U)) 
                                           << 6U)) 
                                 | ((0x20U & ((IData)(
                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_11 
                                                       >> 2U)) 
                                              << 5U)) 
                                    | ((0x10U & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_9 
                                                          >> 2U)) 
                                                 << 4U)) 
                                       | ((8U & ((IData)(
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_7 
                                                          >> 2U)) 
                                                 << 3U)) 
                                          | ((4U & 
                                              ((IData)(
                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_5 
                                                        >> 2U)) 
                                               << 2U)) 
                                             | ((2U 
                                                 & ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_3 
                                                             >> 2U)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fentries_WIRE_1 
                                                              >> 2U)))))))))))))))
                        : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fcmd_lrsc_T_2)
                                  ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_c_array))
                                  : 0U)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1354(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1354\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_6_data_T 
        = (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn) 
                              << 0xcU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_g) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr))))))))))))))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pw) 
                                       << 8U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_px) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pr) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_ppp) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pal) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_paa) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_eff) 
                                                                 << 2U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_c) 
                                                                   << 1U)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05Fsectored_entries_0_7_data_T 
        = (((QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn) 
                              << 0xcU) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u) 
                                           << 0xbU) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_g) 
                                              << 0xaU) 
                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw) 
                                                 << 9U) 
                                                | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final) 
                                                    << 8U) 
                                                   | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf) 
                                                       << 7U) 
                                                      | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf) 
                                                          << 6U) 
                                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sw) 
                                                             << 5U) 
                                                            | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sx) 
                                                                << 4U) 
                                                               | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_sr) 
                                                                   << 3U) 
                                                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw) 
                                                                      << 2U) 
                                                                     | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx) 
                                                                         << 1U) 
                                                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr))))))))))))))) 
            << 9U) | (QData)((IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pw) 
                                       << 8U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_px) 
                                                  << 7U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pr) 
                                                     << 6U) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_ppp) 
                                                        << 5U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_pal) 
                                                           << 4U) 
                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_paa) 
                                                              << 3U) 
                                                             | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_eff) 
                                                                 << 2U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_newEntry_c) 
                                                                   << 1U)))))))))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT___core_io_reserve_entry_shift 
        = (0x3fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT___read_packet_T_2)
                     ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr)
                     : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT___read_packet_T)
                         ? (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr))
                         : (0xfU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__req_vaddr)))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1355(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1355\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT___read_packet_T_2)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packets_2_bytes_read)
            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT___read_packet_T_1_bytes_read));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_io_out 
        = (((QData)((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[0U] 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)((((((IData)(0xc0U) + (
                                                   (0x40U 
                                                    | (0x1fU 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__intAsRawFloat_adjustedNormDist)))) 
                                                   + 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x18U)))) 
                                & (~ ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT___intAsRawFloat_sig_T 
                                                     >> 0x1fU)))
                                       ? 0U : 0x1c0U))) 
                               << 0x17U) | ((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT___intAsRawFloat_sig_T 
                                                           >> 0x1fU)))
                                             ? (0x7fffffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                             : 0U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_1_io_out 
        = (((QData)((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[1U] 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)((((((IData)(0xc0U) + (
                                                   (0x40U 
                                                    | (0x1fU 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__intAsRawFloat_adjustedNormDist)))) 
                                                   + 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x18U)))) 
                                & (~ ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T 
                                                     >> 0x1fU)))
                                       ? 0U : 0x1c0U))) 
                               << 0x17U) | ((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT___intAsRawFloat_sig_T 
                                                           >> 0x1fU)))
                                             ? (0x7fffffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                             : 0U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT___activated_data_e_act_self_rec_in_to_rec_fn_2_io_out 
        = (((QData)((IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT___ram_ext_R0_data[2U] 
                             >> 0x1fU))) << 0x20U) 
           | (QData)((IData)((((((IData)(0xc0U) + (
                                                   (0x40U 
                                                    | (0x1fU 
                                                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__intAsRawFloat_adjustedNormDist)))) 
                                                   + 
                                                   (3U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                                       >> 0x18U)))) 
                                & (~ ((1U & (IData)(
                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T 
                                                     >> 0x1fU)))
                                       ? 0U : 0x1c0U))) 
                               << 0x17U) | ((1U & (IData)(
                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT___intAsRawFloat_sig_T 
                                                           >> 0x1fU)))
                                             ? (0x7fffffU 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_act_self_rec_in_to_rec_fn_2__DOT__roundAnyRawFNToRecFN__DOT__roundedSig)
                                             : 0U)))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1369(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1369\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = ((1U & (IData)(((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T)) 
                          >> 7U))) ? (((IData)(1U) 
                                       + (0x1ffffffU 
                                          & (IData)(
                                                    ((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T)) 
                                                     >> 8U)))) 
                                      & (0x3fffffeU 
                                         | (1U & (~ (IData)(
                                                            (0x80ULL 
                                                             == 
                                                             (0xffULL 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T)))))))
            : (0x1ffffffU & (IData)(((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_scale_unit__DOT__activated_data_e_scaled_in_to_rec_fn_15__DOT___intAsRawFloat_sig_T)) 
                                     >> 8U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_incremented 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT__widx_widx_bin) 
              + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__x1_a_source__DOT___T)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_bits_denied 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1)
            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__winnerQual_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__out_2_valid 
        = (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__beatsLeft)) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__state_1)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__error__DOT__winnerQual_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___directory_io_result_bits_tag 
        = (0x1fffU & ((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__hits))
                       ? (((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_6)
                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U]
                                  : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13)
                                            ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U] 
                                                << 0xfU) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U] 
                                                  >> 0x11U))
                                            : 0U)) 
                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20)
                                   ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                       << 0x1eU) | 
                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                       >> 2U)) : 0U)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27)
                                  ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                      << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                                  >> 0x13U))
                                  : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_34)
                                             ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                 << 0x1cU) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                   >> 4U))
                                             : 0U)) 
                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41)
                                ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                    << 0xbU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                >> 0x15U))
                                : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48)
                                           ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                               << 0x1aU) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                                 >> 6U))
                                           : 0U)) | 
                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55)
                            ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[4U] 
                                << 9U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                          >> 0x17U))
                            : 0U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___view___05FT_69)
                                       ? (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__ram_ext__DOT__Memory
                                          [0U] >> 0x11U)
                                       : (((((((((1U 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                  ? 
                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U]
                                                  : 0U) 
                                                | ((2U 
                                                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                    ? 
                                                   ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U] 
                                                     << 0xfU) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[0U] 
                                                       >> 0x11U))
                                                    : 0U)) 
                                               | ((4U 
                                                   & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                   ? 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                                    << 0x1eU) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                                      >> 2U))
                                                   : 0U)) 
                                              | ((8U 
                                                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                  ? 
                                                 ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                                   << 0xdU) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[1U] 
                                                     >> 0x13U))
                                                  : 0U)) 
                                             | ((0x10U 
                                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                 ? 
                                                ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                  << 0x1cU) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                    >> 4U))
                                                 : 0U)) 
                                            | ((0x20U 
                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                                ? (
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                                    << 0xbU) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[2U] 
                                                      >> 0x15U))
                                                : 0U)) 
                                           | ((0x40U 
                                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                               ? ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                                   << 0x1aU) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                                     >> 6U))
                                               : 0U)) 
                                          | ((0x80U 
                                              & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH))
                                              ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[4U] 
                                                  << 9U) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___cc_dir_RW0_rdata[3U] 
                                                    >> 0x17U))
                                              : 0U)))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1373(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1373\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__b_row_is_not_all_zeros 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__b_fire_counter) 
           < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__b_rows));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__accumulate_zeros 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_23) 
           & (0x20007fffULL == (0x20007fffULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_8)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_28 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_23) 
           & (0x20007fffULL == (0x20007fffULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_8)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__performing_mul_pre 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_20) 
             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_21))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_402)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__perform_mul_pre) 
              & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__performing_single_mul 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_20) 
             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_22))) 
            & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__DoComputes_0)) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__perform_single_mul) 
              & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__control_state))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__firing 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__start_inputting_a) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__start_inputting_b)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__start_inputting_d));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__b_garbage 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_23) 
                  & (0x20007fffULL == (0x20007fffULL 
                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_8))) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__start_inputting_b))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1375(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1375\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h39181e62__0;
    VlWide<3>/*95:0*/ __Vtemp_h131d760a__0;
    VlWide<3>/*95:0*/ __Vtemp_h0c3940ed__0;
    VlWide<3>/*95:0*/ __Vtemp_hda494052__0;
    VlWide<3>/*95:0*/ __Vtemp_h9f1c0f2f__0;
    VlWide<3>/*95:0*/ __Vtemp_h055766f9__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__a_garbage 
        = (1U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___T_17) 
                  & (0x20007fffULL == (0x20007fffULL 
                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___GEN_6))) 
                 | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__start_inputting_a))));
    vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__mem_MPORT_1_en 
        = ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__d_wb) 
           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__srams__DOT__a_fire) 
              & (4U != (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))));
    __Vtemp_h39181e62__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_16[0U];
    __Vtemp_h39181e62__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_16[1U];
    __Vtemp_h39181e62__0[2U] = ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_16[2U] 
                                       << 1U)) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_16[2U]);
    __Vtemp_h131d760a__0[0U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b) 
                                                                   >> 0xfU))))))) 
                                 << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b));
    __Vtemp_h131d760a__0[1U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b) 
                                                                   >> 0xfU))))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((0x7ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b) 
                                                                                >> 0xfU)))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h131d760a__0[2U] = ((IData)(((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__b) 
                                                                   >> 0xfU)))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    VL_ADD_W(3, __Vtemp_h0c3940ed__0, __Vtemp_h39181e62__0, __Vtemp_h131d760a__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_18[0U] 
        = __Vtemp_h0c3940ed__0[0U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_18[1U] 
        = __Vtemp_h0c3940ed__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_18[2U] 
        = (7U & __Vtemp_h0c3940ed__0[2U]);
    __Vtemp_hda494052__0[0U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_40[0U];
    __Vtemp_hda494052__0[1U] = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_40[1U];
    __Vtemp_hda494052__0[2U] = ((4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_40[2U] 
                                       << 1U)) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_40[2U]);
    __Vtemp_h9f1c0f2f__0[0U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich) 
                                                                   >> 0xfU))))))) 
                                 << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich));
    __Vtemp_h9f1c0f2f__0[1U] = (((IData)((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich) 
                                                                   >> 0xfU))))))) 
                                 >> 0x10U) | ((IData)(
                                                      ((0x7ffffffffffffULL 
                                                        & (- (QData)((IData)(
                                                                             (1U 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich) 
                                                                                >> 0xfU)))))) 
                                                       >> 0x20U)) 
                                              << 0x10U));
    __Vtemp_h9f1c0f2f__0[2U] = ((IData)(((0x7ffffffffffffULL 
                                          & (- (QData)((IData)(
                                                               (1U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__ich) 
                                                                   >> 0xfU)))))) 
                                         >> 0x20U)) 
                                >> 0x10U);
    VL_ADD_W(3, __Vtemp_h055766f9__0, __Vtemp_hda494052__0, __Vtemp_h9f1c0f2f__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_42[0U] 
        = __Vtemp_h055766f9__0[0U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_42[1U] 
        = __Vtemp_h055766f9__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___dram_offset_T_42[2U] 
        = (7U & __Vtemp_h055766f9__0[2U]);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                [0U][1U] << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                     [0U][0U] >> 0x13U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                [0U][2U] << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                     [0U][1U] >> 0x13U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                [0U][3U] << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                     [0U][2U] >> 0x13U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                [0U][4U] << 0xdU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                     [0U][3U] >> 0x13U));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__d_bits_data[3U];
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN_0 
        = (0x7fU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN) 
                     >> 8U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___GEN)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___nextFree_T_8 
        = (IData)((0U != (5U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_port_named_serial_tl_mem__DOT__shrinker__DOT___GEN_4))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1376(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1376\n"); );
    // Init
    VlWide<16>/*511:0*/ __Vtemp_h774385cb__0;
    VlWide<16>/*511:0*/ __Vtemp_h2f8dfa1d__0;
    // Body
    __Vtemp_h774385cb__0[0xeU] = (((IData)((((QData)((IData)(
                                                             ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                << 0x18U) 
                                                               | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                   << 0x10U) 
                                                                  | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                      [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                      << 8U) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]))))))) 
                                   >> 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                          [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                          << 0x18U) 
                                                                         | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                             << 0x10U) 
                                                                            | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                                                << 8U) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                           << 0x18U) 
                                                                          | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                              << 0x10U) 
                                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0])))))) 
                                                      >> 0x20U)) 
                                             << 0x18U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[3U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[4U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[5U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[6U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[7U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[8U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[9U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xaU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xbU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xcU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xdU] 
        = (((IData)((((QData)((IData)(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                        [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                        << 0x18U) | 
                                       ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                         << 0x10U) 
                                        | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                    << 0x18U) 
                                                   | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                       << 0x10U) 
                                                      | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                          [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                          << 8U) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]))))))) 
            << 0x18U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xdU]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xeU] 
        = __Vtemp_h774385cb__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT___mem_R0_data[0xfU] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
            << 0x18U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                      [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                      << 0x18U) 
                                                     | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                         << 0x10U) 
                                                        | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                            << 8U) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x18U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 0x10U) 
                                                                    | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                        [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                        << 8U) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0])))))) 
                                  >> 0x20U)) >> 8U));
    __Vtemp_h2f8dfa1d__0[0xeU] = (((IData)((((QData)((IData)(
                                                             ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                               << 0x18U) 
                                                              | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x10U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 8U) 
                                                                    | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                << 0x18U) 
                                                               | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                   [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                   << 0x10U) 
                                                                  | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                      [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                      << 8U) 
                                                                     | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]))))))) 
                                   >> 8U) | ((IData)(
                                                     ((((QData)((IData)(
                                                                        ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                                          [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                                          << 0x18U) 
                                                                         | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                                             [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                                             << 0x10U) 
                                                                            | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                                                << 8U) 
                                                                               | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                                               [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                           << 0x18U) 
                                                                          | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                              [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                              << 0x10U) 
                                                                             | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                                << 8U) 
                                                                                | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                                [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0])))))) 
                                                      >> 0x20U)) 
                                             << 0x18U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[1U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[2U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[3U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[4U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[5U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[6U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[7U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[7U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[8U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[8U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[9U] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[9U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xaU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xaU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xbU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xbU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xcU] 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xcU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xdU] 
        = (((IData)((((QData)((IData)(((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                        [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                        << 0x18U) | 
                                       ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                         << 0x10U) 
                                        | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                            << 8U) 
                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                      << 0x20U) | (QData)((IData)((
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                    [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                    << 0x18U) 
                                                   | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                       << 0x10U) 
                                                      | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                          [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                          << 8U) 
                                                         | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0]))))))) 
            << 0x18U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT___GEN_53[0xdU]);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xeU] 
        = __Vtemp_h2f8dfa1d__0[0xeU];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT___mem_R0_data[0xfU] 
        = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram
            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_63__DOT__ram_R_0_addr_pipe_0] 
            << 0x18U) | ((IData)(((((QData)((IData)(
                                                    ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram
                                                      [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_62__DOT__ram_R_0_addr_pipe_0] 
                                                      << 0x18U) 
                                                     | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram
                                                         [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_61__DOT__ram_R_0_addr_pipe_0] 
                                                         << 0x10U) 
                                                        | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram
                                                            [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_60__DOT__ram_R_0_addr_pipe_0] 
                                                            << 8U) 
                                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram
                                                           [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_59__DOT__ram_R_0_addr_pipe_0]))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram
                                                                  [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_58__DOT__ram_R_0_addr_pipe_0] 
                                                                  << 0x18U) 
                                                                 | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram
                                                                     [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_57__DOT__ram_R_0_addr_pipe_0] 
                                                                     << 0x10U) 
                                                                    | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram
                                                                        [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_56__DOT__ram_R_0_addr_pipe_0] 
                                                                        << 8U) 
                                                                       | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram
                                                                       [vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_55__DOT__ram_R_0_addr_pipe_0])))))) 
                                  >> 0x20U)) >> 8U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0)
             ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_opcode))
                 ? (((QData)((IData)(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                        >> ((2U & ((IData)(
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                            >> 0x3fU)) 
                                                   << 1U)) 
                                            | (1U & (IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                             >> 0x3fU))))) 
                                       << 0x1fU) | 
                                      ((0x40000000U 
                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                            >> ((2U 
                                                 & ((IData)(
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                             >> 0x3eU)) 
                                                    << 1U)) 
                                                | (1U 
                                                   & (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                              >> 0x3eU))))) 
                                           << 0x1eU)) 
                                       | ((0x20000000U 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                               >> (
                                                   (2U 
                                                    & ((IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x3dU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x3dU))))) 
                                              << 0x1dU)) 
                                          | ((0x10000000U 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                  >> 
                                                  ((2U 
                                                    & ((IData)(
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                >> 0x3cU)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                 >> 0x3cU))))) 
                                                 << 0x1cU)) 
                                             | ((0x8000000U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                     >> 
                                                     ((2U 
                                                       & ((IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                   >> 0x3bU)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & (IData)(
                                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                    >> 0x3bU))))) 
                                                    << 0x1bU)) 
                                                | ((0x4000000U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                        >> 
                                                        ((2U 
                                                          & ((IData)(
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                      >> 0x3aU)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & (IData)(
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                       >> 0x3aU))))) 
                                                       << 0x1aU)) 
                                                   | ((0x2000000U 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                           >> 
                                                           ((2U 
                                                             & ((IData)(
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                         >> 0x39U)) 
                                                                << 1U)) 
                                                            | (1U 
                                                               & (IData)(
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                          >> 0x39U))))) 
                                                          << 0x19U)) 
                                                      | ((0x1000000U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                              >> 
                                                              ((2U 
                                                                & ((IData)(
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                            >> 0x38U)) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                             >> 0x38U))))) 
                                                             << 0x18U)) 
                                                         | ((0x800000U 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                 >> 
                                                                 ((2U 
                                                                   & ((IData)(
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                               >> 0x37U)) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x37U))))) 
                                                                << 0x17U)) 
                                                            | ((0x400000U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                    >> 
                                                                    ((2U 
                                                                      & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x36U)) 
                                                                         << 1U)) 
                                                                     | (1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x36U))))) 
                                                                   << 0x16U)) 
                                                               | ((0x200000U 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                       >> 
                                                                       ((2U 
                                                                         & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x35U)) 
                                                                            << 1U)) 
                                                                        | (1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x35U))))) 
                                                                      << 0x15U)) 
                                                                  | ((0x100000U 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                          >> 
                                                                          ((2U 
                                                                            & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x34U)) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x34U))))) 
                                                                         << 0x14U)) 
                                                                     | ((0x80000U 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                             >> 
                                                                             ((2U 
                                                                               & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x33U)) 
                                                                                << 1U)) 
                                                                              | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x33U))))) 
                                                                            << 0x13U)) 
                                                                        | ((0x40000U 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x32U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x32U))))) 
                                                                               << 0x12U)) 
                                                                           | ((0x20000U 
                                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x31U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x31U))))) 
                                                                                << 0x11U)) 
                                                                              | ((0x10000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x30U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x30U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2fU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2fU))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2eU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2eU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2dU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2dU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2cU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2cU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2bU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2bU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x2aU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x2aU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x29U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x29U))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x28U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x28U))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x27U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x27U))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x26U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x26U))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x25U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x25U))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x24U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x24U))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x23U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x23U))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x22U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x22U))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x21U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x21U))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x20U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x20U))))))))))))))))))))))))))))))))))))))) 
                     << 0x20U) | (QData)((IData)(((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                    >> 
                                                    ((2U 
                                                      & ((IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                  >> 0x1fU)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                   >> 0x1fU))))) 
                                                   << 0x1fU) 
                                                  | ((0x40000000U 
                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                          >> 
                                                          ((2U 
                                                            & ((IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                        >> 0x1eU)) 
                                                               << 1U)) 
                                                           | (1U 
                                                              & (IData)(
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                         >> 0x1eU))))) 
                                                         << 0x1eU)) 
                                                     | ((0x20000000U 
                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                             >> 
                                                             ((2U 
                                                               & ((IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                           >> 0x1dU)) 
                                                                  << 1U)) 
                                                              | (1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                            >> 0x1dU))))) 
                                                            << 0x1dU)) 
                                                        | ((0x10000000U 
                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                >> 
                                                                ((2U 
                                                                  & ((IData)(
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                              >> 0x1cU)) 
                                                                     << 1U)) 
                                                                 | (1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                               >> 0x1cU))))) 
                                                               << 0x1cU)) 
                                                           | ((0x8000000U 
                                                               & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                   >> 
                                                                   ((2U 
                                                                     & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1bU)) 
                                                                        << 1U)) 
                                                                    | (1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1bU))))) 
                                                                  << 0x1bU)) 
                                                              | ((0x4000000U 
                                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                      >> 
                                                                      ((2U 
                                                                        & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x1aU)) 
                                                                           << 1U)) 
                                                                       | (1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x1aU))))) 
                                                                     << 0x1aU)) 
                                                                 | ((0x2000000U 
                                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                         >> 
                                                                         ((2U 
                                                                           & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x19U)) 
                                                                              << 1U)) 
                                                                          | (1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x19U))))) 
                                                                        << 0x19U)) 
                                                                    | ((0x1000000U 
                                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                            >> 
                                                                            ((2U 
                                                                              & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x18U)) 
                                                                                << 1U)) 
                                                                             | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x18U))))) 
                                                                           << 0x18U)) 
                                                                       | ((0x800000U 
                                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                               >> 
                                                                               ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x17U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x17U))))) 
                                                                              << 0x17U)) 
                                                                          | ((0x400000U 
                                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x16U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x16U))))) 
                                                                                << 0x16U)) 
                                                                             | ((0x200000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x15U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x15U))))) 
                                                                                << 0x15U)) 
                                                                                | ((0x100000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x14U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x14U))))) 
                                                                                << 0x14U)) 
                                                                                | ((0x80000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x13U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x13U))))) 
                                                                                << 0x13U)) 
                                                                                | ((0x40000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x12U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x12U))))) 
                                                                                << 0x12U)) 
                                                                                | ((0x20000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x11U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x11U))))) 
                                                                                << 0x11U)) 
                                                                                | ((0x10000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0x10U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0x10U))))) 
                                                                                << 0x10U)) 
                                                                                | ((0x8000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xfU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xfU))))) 
                                                                                << 0xfU)) 
                                                                                | ((0x4000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xeU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xeU))))) 
                                                                                << 0xeU)) 
                                                                                | ((0x2000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xdU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xdU))))) 
                                                                                << 0xdU)) 
                                                                                | ((0x1000U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xcU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xcU))))) 
                                                                                << 0xcU)) 
                                                                                | ((0x800U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xbU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xbU))))) 
                                                                                << 0xbU)) 
                                                                                | ((0x400U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 0xaU)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 0xaU))))) 
                                                                                << 0xaU)) 
                                                                                | ((0x200U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 9U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 9U))))) 
                                                                                << 9U)) 
                                                                                | ((0x100U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 8U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 8U))))) 
                                                                                << 8U)) 
                                                                                | ((0x80U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 7U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 7U))))) 
                                                                                << 7U)) 
                                                                                | ((0x40U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 6U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 6U))))) 
                                                                                << 6U)) 
                                                                                | ((0x20U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 5U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 5U))))) 
                                                                                << 5U)) 
                                                                                | ((0x10U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 4U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 4U))))) 
                                                                                << 4U)) 
                                                                                | ((8U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 3U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 3U))))) 
                                                                                << 3U)) 
                                                                                | ((4U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 2U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 2U))))) 
                                                                                << 2U)) 
                                                                                | ((2U 
                                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data 
                                                                                >> 1U)) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
                                                                                >> 1U))))) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_lut) 
                                                                                >> 
                                                                                ((2U 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data) 
                                                                                << 1U)) 
                                                                                | (1U 
                                                                                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data)))))))))))))))))))))))))))))))))))))))
                 : ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param))
                     ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out
                     : (((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param)) 
                         == (1U & (((1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext 
                                                   >> 0x3fU))) 
                                    == (1U & (IData)(
                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext 
                                                      >> 0x3fU))))
                                    ? (~ (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__adder_out 
                                                  >> 0x3fU)))
                                    : ((1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_param) 
                                              >> 1U)) 
                                       == (1U & (IData)(
                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_a_ext 
                                                         >> 0x3fU)))))))
                         ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_data
                         : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data)))
             : 0ULL) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1)
                         ? (((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])) 
                             << 0x29U) | (((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[2U])) 
                                           << 9U) | 
                                          ((QData)((IData)(
                                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                           >> 0x17U)))
                         : 0ULL));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1377(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1377\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h20494402__0;
    VlWide<3>/*95:0*/ __Vtemp_h20494402__1;
    VlWide<3>/*95:0*/ __Vtemp_h20494402__2;
    VlWide<3>/*95:0*/ __Vtemp_h20494402__3;
    VlWide<3>/*95:0*/ __Vtemp_h20494402__4;
    VlWide<3>/*95:0*/ __Vtemp_h20494402__5;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__1;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__2;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__3;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__4;
    VlWide<3>/*95:0*/ __Vtemp_h5bc491f8__5;
    // Body
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__0, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__1, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__2, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__3, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__4, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h20494402__5, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT___intAsRawFloat_sig_T[0U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
              | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
             & (__Vtemp_h20494402__0[1U] >> 7U)) | 
            ((((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_sign)) 
              | ((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__intAsRawFloat_sign)))) 
             & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
            ? (((IData)(1U) + (0x1ffffffU & ((__Vtemp_h20494402__1[2U] 
                                              << 0x18U) 
                                             | (__Vtemp_h20494402__1[1U] 
                                                >> 8U)))) 
               & (0x3fffffeU | (1U & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                          & (__Vtemp_h20494402__2[1U] 
                                             >> 7U)) 
                                         & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x7fffffffffULL 
                                                        & (((QData)((IData)(
                                                                            __Vtemp_h20494402__3[1U])) 
                                                            << 0x20U) 
                                                           | (QData)((IData)(
                                                                             __Vtemp_h20494402__3[0U]))))))))))))
            : ((0x1fffffeU & ((__Vtemp_h20494402__4[2U] 
                               << 0x18U) | (0xfffffeU 
                                            & (__Vtemp_h20494402__4[1U] 
                                               >> 8U)))) 
               | (1U & ((__Vtemp_h20494402__5[1U] >> 8U) 
                        | ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__0, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__1, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__2, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__3, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__4, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp_h5bc491f8__5, (((QData)((IData)(
                                                                vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[1U])) 
                                                << 0x20U) 
                                               | (QData)((IData)(
                                                                 vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT___intAsRawFloat_sig_T[0U]))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
        = (((((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
              | (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm))) 
             & (__Vtemp_h5bc491f8__0[0U] >> 0xaU)) 
            | ((((2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_sign)) 
                | ((3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                   & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__intAsRawFloat_sign)))) 
               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact)))
            ? ((1ULL + (0x3fffffffffffffULL & (((QData)((IData)(
                                                                __Vtemp_h5bc491f8__1[2U])) 
                                                << 0x35U) 
                                               | (((QData)((IData)(
                                                                   __Vtemp_h5bc491f8__1[1U])) 
                                                   << 0x15U) 
                                                  | ((QData)((IData)(
                                                                     __Vtemp_h5bc491f8__1[0U])) 
                                                     >> 0xbU))))) 
               & (0x7ffffffffffffeULL | (QData)((IData)(
                                                        (1U 
                                                         & (~ 
                                                            (((0U 
                                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                                              & (__Vtemp_h5bc491f8__2[0U] 
                                                                 >> 0xaU)) 
                                                             & (~ (IData)(
                                                                          (0U 
                                                                           != 
                                                                           (0x3ffU 
                                                                            & __Vtemp_h5bc491f8__3[0U])))))))))))
            : ((0x3ffffffffffffeULL & (((QData)((IData)(
                                                        __Vtemp_h5bc491f8__4[2U])) 
                                        << 0x35U) | 
                                       (((QData)((IData)(
                                                         __Vtemp_h5bc491f8__4[1U])) 
                                         << 0x15U) 
                                        | (0x1ffffffffffffeULL 
                                           & ((QData)((IData)(
                                                              __Vtemp_h5bc491f8__4[0U])) 
                                              >> 0xbU))))) 
               | (QData)((IData)((1U & ((__Vtemp_h5bc491f8__5[0U] 
                                         >> 0xbU) | 
                                        ((6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_rm)) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__i2f_1__DOT__roundAnyRawFNToRecFN__DOT__common_inexact))))))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1378(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1378\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hda5a7fd0__0;
    VlWide<9>/*287:0*/ __Vtemp_h98223622__0;
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___T_1 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stalling_0)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___command_p_io_in_valid_T_4));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT___T_2 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stalling_0)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT___command_p_io_in_valid_T_4));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__valids_0) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__valids_1) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT____Vcellinp__command_p__io_out_ready)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___GEN 
        = (0x7fffffffU & ((0xffU & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
                                            >> 0x21U))) 
                          | (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
                                     >> 1U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__pegMinNonzeroMagOut 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
            & VL_GTS_III(11, 0x6bU, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp))) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp) 
              | (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__overflow 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__commonCase) 
           & VL_LTS_III(4, 2U, (0xfU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp) 
                                        >> 7U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_16 
        = (0U == (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___next_cmd_T_2)
                              ? ((2U < (0x1ffffU & 
                                        ((IData)(1U) 
                                         + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_cmd))))
                                  ? 0U : ((IData)(1U) 
                                          + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_cmd)))
                              : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_cmd))));
    __Vtemp_hda5a7fd0__0[0U] = (IData)(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___io_cmd_valid_output)
                                             ? ((2U 
                                                 == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state))
                                                 ? 
                                                (0x20000ULL 
                                                 | (QData)((IData)(
                                                                   (3U 
                                                                    | (0xff00U 
                                                                       & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_stat_id) 
                                                                          << 8U))))))
                                                 : 
                                                ((3U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state))
                                                  ? 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_addr 
                                                  + 
                                                  (0xffffffffULL 
                                                   & ((0x1ffffffffffffff0ULL 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                          << 4U)) 
                                                      + 
                                                      (0x1ffffffffffffffULL 
                                                       & ((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_r)) 
                                                          * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_stride)))))
                                                  : 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_addr 
                                                  + 
                                                  (0xffffffffULL 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_full_c)
                                                       ? 
                                                      (0x3fffffffffffffc0ULL 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                          << 6U))
                                                       : 
                                                      (0xffffffffffffff0ULL 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                          << 4U)))))))
                                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output)
                                                 ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___ex_io_cmd_bits_rs1
                                                 : 
                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output)
                                                  ? 
                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_dram_addr 
                                                  + 
                                                  (0xffffffffULL 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_low_d)
                                                       ? 
                                                      (0xffffffffffffff0ULL 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___dram_offset_T_5 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j))) 
                                                          << 4U))
                                                       : 
                                                      (0x3fffffffffffffc0ULL 
                                                       & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___dram_offset_T_5 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j))) 
                                                          << 6U)))))
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldab_arb__DOT___GEN_1)
                                                   ? 
                                                  (0x3fffffffffffffffULL 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_dram_addr 
                                                      + 
                                                      (0xfffffff0ULL 
                                                       & ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__row_iterator)) 
                                                            * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_dram_stride) 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__col_iterator))) 
                                                          << 4U))))
                                                   : 
                                                  (0x3fffffffffffffffULL 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_dram_addr 
                                                      + 
                                                      (0xfffffff0ULL 
                                                       & ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__row_iterator)) 
                                                            * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_dram_stride) 
                                                           + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__col_iterator))) 
                                                          << 4U))))))))
                                         : (((QData)((IData)(
                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[2U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[1U])))));
    __Vtemp_hda5a7fd0__0[1U] = (IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___io_cmd_valid_output)
                                              ? ((2U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state))
                                                  ? 
                                                 (0x20000ULL 
                                                  | (QData)((IData)(
                                                                    (3U 
                                                                     | (0xff00U 
                                                                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_stat_id) 
                                                                           << 8U))))))
                                                  : 
                                                 ((3U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state))
                                                   ? 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_addr 
                                                   + 
                                                   (0xffffffffULL 
                                                    & ((0x1ffffffffffffff0ULL 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                           << 4U)) 
                                                       + 
                                                       (0x1ffffffffffffffULL 
                                                        & ((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__ln_r)) 
                                                           * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_stride)))))
                                                   : 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_dram_addr 
                                                   + 
                                                   (0xffffffffULL 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__req_full_c)
                                                        ? 
                                                       (0x3fffffffffffffc0ULL 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                           << 6U))
                                                        : 
                                                       (0xffffffffffffff0ULL 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___ln_dram_offset_T 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__j))) 
                                                           << 4U)))))))
                                              : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output)
                                                  ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___ex_io_cmd_bits_rs1
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output)
                                                   ? 
                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_dram_addr 
                                                   + 
                                                   (0xffffffffULL 
                                                    & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_low_d)
                                                        ? 
                                                       (0xffffffffffffff0ULL 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___dram_offset_T_5 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j))) 
                                                           << 4U))
                                                        : 
                                                       (0x3fffffffffffffc0ULL 
                                                        & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___dram_offset_T_5 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j))) 
                                                           << 6U)))))
                                                   : 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldab_arb__DOT___GEN_1)
                                                    ? 
                                                   (0x3fffffffffffffffULL 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_dram_addr 
                                                       + 
                                                       (0xfffffff0ULL 
                                                        & ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__row_iterator)) 
                                                             * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__req_dram_stride) 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldA__DOT__col_iterator))) 
                                                           << 4U))))
                                                    : 
                                                   (0x3fffffffffffffffULL 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_dram_addr 
                                                       + 
                                                       (0xfffffff0ULL 
                                                        & ((((QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__row_iterator)) 
                                                             * vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__req_dram_stride) 
                                                            + (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldB__DOT__col_iterator))) 
                                                           << 4U))))))))
                                          : (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[2U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[1U])))) 
                                        >> 0x20U));
    __Vtemp_hda5a7fd0__0[2U] = (IData)(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___io_cmd_valid_output)
                                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___stC_io_cmd_bits_rs2
                                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output)
                                                 ? 
                                                ((1U 
                                                  == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state))
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((0x1f0000U 
                                                                     & (((IData)(0x10U) 
                                                                         - 
                                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__i) 
                                                                           == 
                                                                           (0xffffU 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_max_i) 
                                                                               - (IData)(1U))))
                                                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_pad_i)
                                                                           : 0U)) 
                                                                        << 0x10U)) 
                                                                    | (0x1fU 
                                                                       & ((IData)(0x10U) 
                                                                          - 
                                                                          (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__j) 
                                                                            == 
                                                                            (0xffffU 
                                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_max_j) 
                                                                                - (IData)(1U))))
                                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_pad_j)
                                                                            : 0U)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0x80000000U 
                                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_accumulate) 
                                                                          | (0U 
                                                                             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__k))) 
                                                                         << 0x1eU) 
                                                                        | (0x1c007fffU 
                                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___GEN_2))))))
                                                  : 0x100010e0007fffULL)
                                                 : 
                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output)
                                                  ? 
                                                 (((QData)((IData)(
                                                                   ((0x1f0000U 
                                                                     & (((IData)(0x10U) 
                                                                         - 
                                                                         (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__i) 
                                                                           == 
                                                                           (0xffffU 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_max_i) 
                                                                               - (IData)(1U))))
                                                                           ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_pad_i)
                                                                           : 0U)) 
                                                                        << 0x10U)) 
                                                                    | (0x7fU 
                                                                       & ((0x70U 
                                                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__blocks) 
                                                                              << 4U)) 
                                                                          - 
                                                                          (((0xffffU 
                                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j) 
                                                                                + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__blocks))) 
                                                                            >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_max_j))
                                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_pad_j)
                                                                            : 0U)))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    (0x80000000U 
                                                                     | (0x1c007fffU 
                                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___GEN_0)))))
                                                  : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___ldab_arb_io_out_bits_rs2)))
                                         : (((QData)((IData)(
                                                             vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[4U])) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[3U])))));
    __Vtemp_hda5a7fd0__0[3U] = (IData)((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                          ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___io_cmd_valid_output)
                                              ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___stC_io_cmd_bits_rs2
                                              : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output)
                                                  ? 
                                                 ((1U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state))
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((0x1f0000U 
                                                                      & (((IData)(0x10U) 
                                                                          - 
                                                                          (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__i) 
                                                                            == 
                                                                            (0xffffU 
                                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_max_i) 
                                                                                - (IData)(1U))))
                                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_pad_i)
                                                                            : 0U)) 
                                                                         << 0x10U)) 
                                                                     | (0x1fU 
                                                                        & ((IData)(0x10U) 
                                                                           - 
                                                                           (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__j) 
                                                                             == 
                                                                             (0xffffU 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_max_j) 
                                                                                - (IData)(1U))))
                                                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_pad_j)
                                                                             : 0U)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0x80000000U 
                                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__req_accumulate) 
                                                                           | (0U 
                                                                              != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__k))) 
                                                                          << 0x1eU) 
                                                                         | (0x1c007fffU 
                                                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___GEN_2))))))
                                                   : 0x100010e0007fffULL)
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    ((0x1f0000U 
                                                                      & (((IData)(0x10U) 
                                                                          - 
                                                                          (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__i) 
                                                                            == 
                                                                            (0xffffU 
                                                                             & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_max_i) 
                                                                                - (IData)(1U))))
                                                                            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_pad_i)
                                                                            : 0U)) 
                                                                         << 0x10U)) 
                                                                     | (0x7fU 
                                                                        & ((0x70U 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__blocks) 
                                                                               << 4U)) 
                                                                           - 
                                                                           (((0xffffU 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__j) 
                                                                                + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__blocks))) 
                                                                             >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_max_j))
                                                                             ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT__req_pad_j)
                                                                             : 0U)))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0x80000000U 
                                                                      | (0x1c007fffU 
                                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___GEN_0)))))
                                                   : vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___ldab_arb_io_out_bits_rs2)))
                                          : (((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[4U])) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[3U])))) 
                                        >> 0x20U));
    __Vtemp_h98223622__0[0U] = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                    ? 0U : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                            >> 0x19U)) 
                                  << 0x19U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                                  ? 0U
                                                  : 
                                                 (0x1fU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x14U))) 
                                                << 0x14U) 
                                               | ((0x80000U 
                                                   & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)) 
                                                       << 0x13U) 
                                                      & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                                                  | (0x40000U 
                                                     & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)) 
                                                         << 0x12U) 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U]))))) 
                                | ((0x20000U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)) 
                                                 << 0x11U) 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                         ? 0U : (0x1fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xcU))) 
                                       << 0xcU) | (
                                                   (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                                      ? 0U
                                                      : 
                                                     (0x1fU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                                         >> 7U))) 
                                                    << 7U) 
                                                   | (0x7fU 
                                                      & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                                                          ? 
                                                         ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___io_cmd_valid_output)
                                                           ? 
                                                          ((2U 
                                                            == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state))
                                                            ? 0U
                                                            : 3U)
                                                           : 
                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output)
                                                            ? 
                                                           ((1U 
                                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__state))
                                                             ? 6U
                                                             : 
                                                            (4U 
                                                             | (0U 
                                                                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT__i))))
                                                            : 
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output)
                                                             ? 0xeU
                                                             : 
                                                            ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldab_arb__DOT___GEN_1)
                                                              ? 2U
                                                              : 1U))))
                                                          : 
                                                         vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U]))))));
    __Vtemp_h98223622__0[5U] = (((0x3fff8U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[5U]) 
                                 | ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[5U]) 
                                    | ((2U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[5U]) 
                                       | (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[5U])))) 
                                | (0xfffc0000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[5U]));
    __Vtemp_h98223622__0[6U] = (((0x3fc00U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                 | ((0x200U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                    | ((0x100U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                       | ((0xc0U & 
                                           vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                          | ((0x20U 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                             | ((0x18U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]) 
                                                | (7U 
                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]))))))) 
                                | (0xfffc0000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[6U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[0U] 
        = __Vtemp_h98223622__0[0U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[1U] 
        = ((0x3ffffU & (__Vtemp_hda5a7fd0__0[0U] | 
                        ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                            ? 0U : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                    >> 0x19U)) >> 7U) 
                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)
                              ? 0U : (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U] 
                                               >> 0x14U))) 
                            >> 0xcU)))) | (0xfffc0000U 
                                           & __Vtemp_hda5a7fd0__0[0U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[2U] 
        = ((0x3ffffU & __Vtemp_hda5a7fd0__0[1U]) | 
           (0xfffc0000U & __Vtemp_hda5a7fd0__0[1U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[3U] 
        = ((0x3ffffU & __Vtemp_hda5a7fd0__0[2U]) | 
           (0xfffc0000U & __Vtemp_hda5a7fd0__0[2U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[4U] 
        = ((0x3ffffU & __Vtemp_hda5a7fd0__0[3U]) | 
           (0xfffc0000U & __Vtemp_hda5a7fd0__0[3U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[5U] 
        = __Vtemp_h98223622__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[6U] 
        = __Vtemp_h98223622__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[7U] 
        = (((0x3fc00U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[7U]) 
            | (0x3ffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[7U])) 
           | (0xfffc0000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[7U]));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT____Vcellinp__ram_ext__W0_data[8U] 
        = ((0x20000U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured)) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                            >> 0x11U)) << 0x11U)) | 
           ((0x10000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loop_configured) 
                          << 0x10U) | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[8U])) 
            | (0x1ffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[8U])));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1379(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1379\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___arb_io_in_1_ready) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ex__DOT___io_cmd_valid_output));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_10) 
           & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_10) 
           & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT___T_10) 
           & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__stC__DOT__state)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___arb_io_in_2_ready 
        = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__arb__DOT___grant_T)) 
                 & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__unrolled_cmd__DOT__full))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__arb__DOT___grant_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__arb__DOT___grant_T) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__ldD__DOT___io_cmd_valid_output));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT___GEN 
        = (0x7fffffffU & ((0xffU & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__freeOH 
                                            >> 0x21U))) 
                          | (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__freeOH 
                                     >> 1U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x7ffU & (((0x400U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                 << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
                     + (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                              >> 0x18U))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__sRoundedExp 
        = (0x3fffU & (((0x2000U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z) 
                                   << 1U)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sExp_Z)) 
                      + (3U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundedSig 
                                       >> 0x35U)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT___next_b_T_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT___state_T_9) 
           & (~ (IData)((0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__next_ocol)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_replay 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_replay)
            : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__fq__io_enq_bits_replay));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_5 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_taken)) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__portsAOI_filtered_0_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__empty)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1380(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1380\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor__DOT___T_1329 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__portsAOI_filtered_0_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__portsAOI_filtered_1_0_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___T_1329 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__portsAOI_filtered_1_0_ready) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT__empty)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_opcode 
        = (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]
                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]
                             : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_param 
        = (7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                   ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                       << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)) : 0U) | 
                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                   ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                       << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)) : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_mask 
        = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                        ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                            << 0x12U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         >> 0xeU)) : 0U) 
                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                          ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                              << 0x12U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xeU))
                          : 0U)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
             ? (0x10U | (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU))) : 0U) | 
           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
             ? (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                        >> 0xaU)) : 0U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size 
        = (0xfU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
                     ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                         << 0x1aU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)) : 0U) 
                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                       ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                           << 0x1aU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 6U)) : 0U)));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1381(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1381\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_address 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_0)
             ? ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                 << 0x12U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                              >> 0xeU)) : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__muxStateEarly_1)
                                                  ? 
                                                 ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 0x12U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xeU))
                                                  : 0U));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_284 
        = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))) 
            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__cached_grant_wait))) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_cached_miss));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_io_cpu_resp_valid 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__doUncachedResp));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___dataArb_io_in_0_valid_T_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_hit_pre_data_ecc) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__x1_a_deq_valid) 
           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__x1_out_1_valid 
        = ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft))
            ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__x1_a_deq_valid) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid))
            : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_0) 
                & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__x1_a_deq_valid)) 
               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__state_1) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__readys_valid 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__tl_out_a_valid) 
            << 1U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__x1_a_deq_valid));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask 
        = ((0x8000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                            >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                       ? (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                  >> 0xfU))
                                       : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                  >> 0xfU)))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                  ? 
                                                 (0xeU 
                                                  < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                   ? (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                              >> 0xeU))
                                                   : (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                              >> 0xeU)))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                     ? 
                                                    (0xdU 
                                                     < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                     : 
                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                      ? (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                 >> 0xdU))
                                                      : (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                 >> 0xdU)))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                ? (0xcU 
                                                   < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                               >> 0xcU))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xcU)))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                   ? 
                                                  (0xbU 
                                                   < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                   : 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                               >> 0xbU))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xbU)))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                      ? 
                                                     (0xaU 
                                                      < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                      : 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                       ? (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                  >> 0xaU))
                                                       : (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                  >> 0xaU)))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                         ? 
                                                        (9U 
                                                         < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                         : 
                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                          ? (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                     >> 9U))
                                                          : (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                     >> 9U)))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                            ? 
                                                           (8U 
                                                            < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                            : 
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                             ? (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                        >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                        >> 8U)))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                               ? 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                   >> 3U)))
                                                               : 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                ? (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                           >> 7U))
                                                                : (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                           >> 7U)))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                  ? 
                                                                 (6U 
                                                                  < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                  : 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                   ? (IData)(
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                              >> 6U))
                                                                   : (IData)(
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                              >> 6U)))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                     ? 
                                                                    (5U 
                                                                     < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                     : 
                                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                      ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 5U))
                                                                      : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 5U)))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                        ? 
                                                                       (4U 
                                                                        < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                        : 
                                                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                         ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 4U))
                                                                         : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 4U)))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                           ? 
                                                                          (0U 
                                                                           != 
                                                                           (7U 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                               >> 2U)))
                                                                           : 
                                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                            ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 3U))
                                                                            : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 3U)))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                              ? 
                                                                             (2U 
                                                                              < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                              : 
                                                                             ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                               ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 2U))
                                                                               : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 2U)))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                                 ? 
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                                 ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 1U)))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en)
                                                                                 ? 
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                                 : 
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53)))))))))))))))))));
}

VL_ATTR_COLD void VTestHarness___024root___settle__TOP__1382(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___settle__TOP__1382\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en 
        = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en) 
            | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread)) 
           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zerowrite));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_en) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_data[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_data[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_data[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_0_data[3U];
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_18[3U];
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] = 0U;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask 
        = ((0x8000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                            >> 4U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                       ? (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                  >> 0xfU))
                                       : (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                  >> 0xfU)))) 
                       << 0xfU)) | ((0x4000U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                  ? 
                                                 (0xeU 
                                                  < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                  : 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                   ? (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                              >> 0xeU))
                                                   : (IData)(
                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                              >> 0xeU)))) 
                                                << 0xeU)) 
                                    | ((0x2000U & (
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                     ? 
                                                    (0xdU 
                                                     < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                     : 
                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                      ? (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                 >> 0xdU))
                                                      : (IData)(
                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                 >> 0xdU)))) 
                                                   << 0xdU)) 
                                       | ((0x1000U 
                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                ? (0xcU 
                                                   < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                               >> 0xcU))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xcU)))) 
                                              << 0xcU)) 
                                          | ((0x800U 
                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                   ? 
                                                  (0xbU 
                                                   < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                   : 
                                                  ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                    ? (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                               >> 0xbU))
                                                    : (IData)(
                                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                               >> 0xbU)))) 
                                                 << 0xbU)) 
                                             | ((0x400U 
                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                      ? 
                                                     (0xaU 
                                                      < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                      : 
                                                     ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                       ? (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                  >> 0xaU))
                                                       : (IData)(
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                  >> 0xaU)))) 
                                                    << 0xaU)) 
                                                | ((0x200U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                         ? 
                                                        (9U 
                                                         < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                         : 
                                                        ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                          ? (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                     >> 9U))
                                                          : (IData)(
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                     >> 9U)))) 
                                                       << 9U)) 
                                                   | ((0x100U 
                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                            ? 
                                                           (8U 
                                                            < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                            : 
                                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                             ? (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                        >> 8U))
                                                             : (IData)(
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                        >> 8U)))) 
                                                          << 8U)) 
                                                      | ((0x80U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                               ? 
                                                              (0U 
                                                               != 
                                                               (3U 
                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                   >> 3U)))
                                                               : 
                                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                ? (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                           >> 7U))
                                                                : (IData)(
                                                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                           >> 7U)))) 
                                                             << 7U)) 
                                                         | ((0x40U 
                                                             & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                  ? 
                                                                 (6U 
                                                                  < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                  : 
                                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                   ? (IData)(
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                              >> 6U))
                                                                   : (IData)(
                                                                             (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                              >> 6U)))) 
                                                                << 6U)) 
                                                            | ((0x20U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                     ? 
                                                                    (5U 
                                                                     < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                     : 
                                                                    ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                      ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 5U))
                                                                      : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 5U)))) 
                                                                   << 5U)) 
                                                               | ((0x10U 
                                                                   & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                        ? 
                                                                       (4U 
                                                                        < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                        : 
                                                                       ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                         ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 4U))
                                                                         : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 4U)))) 
                                                                      << 4U)) 
                                                                  | ((8U 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                           ? 
                                                                          (0U 
                                                                           != 
                                                                           (7U 
                                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                               >> 2U)))
                                                                           : 
                                                                          ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                            ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 3U))
                                                                            : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 3U)))) 
                                                                         << 3U)) 
                                                                     | ((4U 
                                                                         & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                              ? 
                                                                             (2U 
                                                                              < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                              : 
                                                                             ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                               ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 2U))
                                                                               : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 2U)))) 
                                                                            << 2U)) 
                                                                        | ((2U 
                                                                            & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                                 ? 
                                                                                (0U 
                                                                                != 
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols) 
                                                                                >> 1U)))
                                                                                 : 
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                                 ? (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53 
                                                                                >> 1U))
                                                                                 : (IData)(
                                                                                (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53 
                                                                                >> 1U)))) 
                                                                               << 1U)) 
                                                                           | (1U 
                                                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___ex_controller_io_srams_write_1_en)
                                                                                 ? 
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT___mesh_io_resp_bits_tag_cols))
                                                                                 : 
                                                                                ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__dmaread_1)
                                                                                 ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_53)
                                                                                 : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_53)))))))))))))))))));
}
