// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5790(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5790\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__c_mshr__io_allocate_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__request_prio_1 = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__fpmu__io_in_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma_io_in_bits_req_rm;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroC 
            = (1U & (~ (IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                       >> 0x1dU)))));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_55) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_cam_sel_match_0)) 
         & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_denied 
            = (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                     >> 0x10U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U];
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U];
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_259_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_3_0_io_in_control_0_propagate_b;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroC 
            = (1U & (~ (IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                       >> 0x1dU)))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT___T) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm_1__DOT__in_bits_tag_cmd_id 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__io_resp_bits_cmd_id_r;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_80) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_len 
            = (0x1fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT__req_bits_tag_cols));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5791(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5791\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h83cbe653__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_25) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_24) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_29) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_23) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_28) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_22) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_16) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_20) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_21) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_18) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_27) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_17) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_26) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_30) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_19) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT___GEN_15) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_bytes_to_read 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__read_packet_bytes_read;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT___T_397) {
        __Vtemp_h83cbe653__0[0U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_1_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_0_bits_block_stride));
        __Vtemp_h83cbe653__0[1U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_3_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_2_bits_block_stride));
        __Vtemp_h83cbe653__0[2U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_5_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_4_bits_block_stride));
        __Vtemp_h83cbe653__0[3U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_7_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_6_bits_block_stride));
        __Vtemp_h83cbe653__0[4U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_9_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_8_bits_block_stride));
        __Vtemp_h83cbe653__0[5U] = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_11_bits_block_stride) 
                                     << 0x10U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_10_bits_block_stride));
        __Vtemp_h83cbe653__0[6U] = (IData)((((QData)((IData)(
                                                             (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_block_stride) 
                                                               << 0x10U) 
                                                              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_block_stride)))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_block_stride) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_block_stride))))));
        __Vtemp_h83cbe653__0[7U] = (IData)(((((QData)((IData)(
                                                              (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_15_bits_block_stride) 
                                                                << 0x10U) 
                                                               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_14_bits_block_stride)))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_13_bits_block_stride) 
                                                                 << 0x10U) 
                                                                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__xactTracker__DOT__entries_12_bits_block_stride))))) 
                                            >> 0x20U));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__beatPacker__DOT__req_bits_block_stride 
            = (0xffffU & (((0U == (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid) 
                                            << 4U)))
                            ? 0U : (__Vtemp_h83cbe653__0[
                                    (((IData)(0xfU) 
                                      + (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid) 
                                                  << 4U))) 
                                     >> 5U)] << ((IData)(0x20U) 
                                                 - 
                                                 (0x1fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid) 
                                                     << 4U))))) 
                          | (__Vtemp_h83cbe653__0[(7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid) 
                                                      >> 1U))] 
                             >> (0x1fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT____Vcellinp__xactTracker__io_peek_xactid) 
                                          << 4U)))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5792(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5792\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_btb_update_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__r_btb_updatePipe_bits_prediction_entry 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_valid)
                ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_entry)
                : 0x1cU);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__x1_a_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN)) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5793(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5793\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[1U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5794(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5794\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_0__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN)) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5795(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5795\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[3U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5796(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5796\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____Vcellinp__data_arrays_1__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_write)) 
         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT___GEN 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_1__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                        >> 4U));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0x7ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_12)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_scounteren 
            = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0x7ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_38)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcounteren 
            = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_5 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_4 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5797(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5797\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_valid) 
          & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN))) 
         & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__nextPos)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__stack_3 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____Vcellinp__btb__io_ras_update_bits_returnAddr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1329) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
            = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_1)
                         ? ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                             [0U][0U]) ? 0U : (~ ((
                                                   (0x1aU 
                                                    >= 
                                                    (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 6U)))
                                                    ? 
                                                   (0x7ffffffU 
                                                    & ((IData)(0xfffU) 
                                                       << 
                                                       (0xfU 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                           [0U][0U] 
                                                           >> 6U))))
                                                    : 0U) 
                                                  >> 4U)))
                         : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                            - (IData)(1U))));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_15 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_253) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_15)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_204) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_14)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_106) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_12)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_249) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_11)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_10 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_200) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_10)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_102) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_8)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5798(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5798\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_245) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_7)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_147) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_241) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_143) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_13 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_139) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_13)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_135) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_9)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_229) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_7)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_131) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_225) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_15 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_221) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_15)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_111) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_1)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5799(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5799\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_188) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_14)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_10 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_184) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_10)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_1 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_127) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_1)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_180) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_6)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_176) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_74) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_12)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_70) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_8)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_217) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_11)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_62) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_66) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_151) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_9)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5800(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5800\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_78) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_82) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_160) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_164) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_6)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_12 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_90) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_12)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_10 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_168) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_10)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_94) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_0)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_14 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_172) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_14)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_4 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_98) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_4)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_11 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_233) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_11)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_8 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_86) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_8)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5801(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5801\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_15 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_237) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_0)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_1_15)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_2 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_192) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_2)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_6 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_196) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_6)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_13 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_155) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN_1)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_2_13)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_3 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_209) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_3)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_5 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_115) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_5)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_7 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_213) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_7)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_9 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_119) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_9)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_13 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___T_123) 
           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT___GEN)
               ? (0x3f800000U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_scale_bits)
               : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__completed_masks_0_13)));
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mul 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mul));
    if ((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mul 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mul;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5802(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5802\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_bits 
            = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6) 
                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5) 
                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4)))) 
                << 2U) | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_106) 
                                                 >> 1U)))) 
                           << 1U) | (IData)((0U != 
                                             (5U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___GEN_106))))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit_bits 
            = ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_7) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_6) 
                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_5) 
                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_4)))) 
                << 2U) | (((IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_134) 
                                                 >> 1U)))) 
                           << 1U) | (IData)((0U != 
                                             (5U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_134))))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_block_r 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch)) 
              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___T_12) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_block_r))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_37) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 8U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_43) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x38U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_36) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_r 
            = (1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_38) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x10U)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5803(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5803\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h484f70e3__0;
    VlWide<5>/*159:0*/ __Vtemp_h9ecd4287__0;
    VlWide<5>/*159:0*/ __Vtemp_ha5f76c43__0;
    VlWide<5>/*159:0*/ __Vtemp_h37fb1228__0;
    VlWide<5>/*159:0*/ __Vtemp_h019f052d__0;
    VlWide<5>/*159:0*/ __Vtemp_h9f17579c__0;
    VlWide<5>/*159:0*/ __Vtemp_h4c776abc__0;
    VlWide<5>/*159:0*/ __Vtemp_h1bbb726a__0;
    VlWide<5>/*159:0*/ __Vtemp_h638eae2f__0;
    VlWide<5>/*159:0*/ __Vtemp_h39fcc07b__0;
    VlWide<5>/*159:0*/ __Vtemp_h1b70a8cd__0;
    VlWide<5>/*159:0*/ __Vtemp_h49845692__0;
    VlWide<5>/*159:0*/ __Vtemp_h739cdfe2__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h4c776abc__1;
    VlWide<5>/*159:0*/ __Vtemp_h1dac41a0__0;
    VlWide<5>/*159:0*/ __Vtemp_hddc61f8e__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_39) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x18U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_40) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x20U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_41) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x28U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_42) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_r 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x30U)));
    }
    VL_EXTEND_WI(132,5, __Vtemp_h9ecd4287__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0x1eU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 5U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_ha5f76c43__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xaU)));
    __Vtemp_h37fb1228__0[0U] = (__Vtemp_ha5f76c43__0[0U] 
                                << 3U);
    __Vtemp_h37fb1228__0[1U] = ((__Vtemp_ha5f76c43__0[0U] 
                                 >> 0x1dU) | (__Vtemp_ha5f76c43__0[1U] 
                                              << 3U));
    __Vtemp_h37fb1228__0[2U] = ((__Vtemp_ha5f76c43__0[1U] 
                                 >> 0x1dU) | (__Vtemp_ha5f76c43__0[2U] 
                                              << 3U));
    __Vtemp_h37fb1228__0[3U] = ((__Vtemp_ha5f76c43__0[2U] 
                                 >> 0x1dU) | (__Vtemp_ha5f76c43__0[3U] 
                                              << 3U));
    __Vtemp_h37fb1228__0[4U] = ((__Vtemp_ha5f76c43__0[3U] 
                                 >> 0x1dU) | (__Vtemp_ha5f76c43__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(132,132,132, __Vtemp_h019f052d__0, __Vtemp_h9ecd4287__0, __Vtemp_h37fb1228__0);
    __Vtemp_h9f17579c__0[0U] = 0xffU;
    __Vtemp_h9f17579c__0[1U] = 0U;
    __Vtemp_h9f17579c__0[2U] = 0U;
    __Vtemp_h9f17579c__0[3U] = 0U;
    __Vtemp_h9f17579c__0[4U] = 0U;
    VL_EXTEND_WI(140,4, __Vtemp_h4c776abc__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h1bbb726a__0[0U] = (__Vtemp_h4c776abc__0[0U] 
                                << 3U);
    __Vtemp_h1bbb726a__0[1U] = ((__Vtemp_h4c776abc__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h4c776abc__0[1U] 
                                              << 3U));
    __Vtemp_h1bbb726a__0[2U] = ((__Vtemp_h4c776abc__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h4c776abc__0[2U] 
                                              << 3U));
    __Vtemp_h1bbb726a__0[3U] = ((__Vtemp_h4c776abc__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h4c776abc__0[3U] 
                                              << 3U));
    __Vtemp_h1bbb726a__0[4U] = ((__Vtemp_h4c776abc__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h4c776abc__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h638eae2f__0, __Vtemp_h9f17579c__0, __Vtemp_h1bbb726a__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        __Vtemp_h484f70e3__0[1U] = 0U;
        __Vtemp_h484f70e3__0[2U] = 0U;
        __Vtemp_h484f70e3__0[3U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h484f70e3__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_h019f052d__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h638eae2f__0[1U]
                                                     : 0U)));
        __Vtemp_h484f70e3__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_h019f052d__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h638eae2f__0[2U]
                                                     : 0U)));
        __Vtemp_h484f70e3__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_h019f052d__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h638eae2f__0[3U]
                                                     : 0U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                    ? __Vtemp_h019f052d__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                      ? __Vtemp_h638eae2f__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h484f70e3__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h484f70e3__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h484f70e3__0[3U];
    VL_EXTEND_WI(131,4, __Vtemp_h39fcc07b__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         << 1U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_h1b70a8cd__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xaU)));
    __Vtemp_h49845692__0[0U] = (__Vtemp_h1b70a8cd__0[0U] 
                                << 2U);
    __Vtemp_h49845692__0[1U] = ((__Vtemp_h1b70a8cd__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h1b70a8cd__0[1U] 
                                              << 2U));
    __Vtemp_h49845692__0[2U] = ((__Vtemp_h1b70a8cd__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h1b70a8cd__0[2U] 
                                              << 2U));
    __Vtemp_h49845692__0[3U] = ((__Vtemp_h1b70a8cd__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h1b70a8cd__0[3U] 
                                              << 2U));
    __Vtemp_h49845692__0[4U] = ((__Vtemp_h1b70a8cd__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h1b70a8cd__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h739cdfe2__0, __Vtemp_h39fcc07b__0, __Vtemp_h49845692__0);
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_h4c776abc__1, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h1dac41a0__0[0U] = (__Vtemp_h4c776abc__1[0U] 
                                << 2U);
    __Vtemp_h1dac41a0__0[1U] = ((__Vtemp_h4c776abc__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h4c776abc__1[1U] 
                                              << 2U));
    __Vtemp_h1dac41a0__0[2U] = ((__Vtemp_h4c776abc__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h4c776abc__1[2U] 
                                              << 2U));
    __Vtemp_h1dac41a0__0[3U] = ((__Vtemp_h4c776abc__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h4c776abc__1[3U] 
                                              << 2U));
    __Vtemp_h1dac41a0__0[4U] = ((__Vtemp_h4c776abc__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h4c776abc__1[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_hddc61f8e__0, __Vtemp_h7c30b3f9__0, __Vtemp_h1dac41a0__0);
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
            ? 0ULL : ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes 
                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                           ? (((QData)((IData)(__Vtemp_h739cdfe2__0[1U])) 
                               << 0x20U) | (QData)((IData)(
                                                           __Vtemp_h739cdfe2__0[0U])))
                           : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                                           ? (((QData)((IData)(
                                                               __Vtemp_hddc61f8e__0[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                __Vtemp_hddc61f8e__0[0U])))
                                           : 0ULL))));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5804(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5804\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)
            ? 0U : (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1253)
                                    ? ((0xfU >= (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                    [0U][0U] 
                                                    >> 0xaU)))
                                        ? ((IData)(1U) 
                                           << (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xaU)))
                                        : 0U) : 0U)) 
                               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1268)
                                      ? ((0xfU >= (0xfU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 9U)))
                                          ? ((IData)(1U) 
                                             << (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U)))
                                          : 0U) : 0U)))));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_42) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_w 
            = (IData)((0x3000000000000ULL == (0x3000000000000ULL 
                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_38) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_w 
            = (IData)((0x30000ULL == (0x30000ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_43) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_w 
            = (IData)((0x300000000000000ULL == (0x300000000000000ULL 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_36) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_w 
            = (IData)((3ULL == (3ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_37) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_w 
            = (IData)((0x300ULL == (0x300ULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_39) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_w 
            = (IData)((0x3000000ULL == (0x3000000ULL 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
}

extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e95a4_0;
extern const VlWide<130>/*4159:0*/ VTestHarness__ConstPool__CONST_h58046101_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_hd6e5c6ea_0;
extern const VlWide<513>/*16415:0*/ VTestHarness__ConstPool__CONST_h481e15b8_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5805(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5805\n"); );
    // Init
    VlWide<130>/*4159:0*/ __Vtemp_ha81a37db__0;
    VlWide<513>/*16415:0*/ __Vtemp_hda173ed1__0;
    VlWide<512>/*16383:0*/ __Vtemp_hc37a7b5e__0;
    VlWide<513>/*16415:0*/ __Vtemp_h44a5090d__0;
    VlWide<513>/*16415:0*/ __Vtemp_h0794b198__0;
    VlWide<513>/*16415:0*/ __Vtemp_h392fb3f5__0;
    VlWide<130>/*4159:0*/ __Vtemp_h93be35ca__0;
    VlWide<130>/*4159:0*/ __Vtemp_hee3ed7be__0;
    VlWide<130>/*4159:0*/ __Vtemp_h2996f4e5__0;
    VlWide<513>/*16415:0*/ __Vtemp_hc378b35c__0;
    VlWide<513>/*16415:0*/ __Vtemp_h60b9023b__0;
    VlWide<513>/*16415:0*/ __Vtemp_he3fda9d9__0;
    VlWide<513>/*16415:0*/ __Vtemp_h3e76dafd__0;
    VlWide<130>/*4159:0*/ __Vtemp_haeefed38__0;
    VlWide<130>/*4159:0*/ __Vtemp_hafdad92b__0;
    VlWide<130>/*4159:0*/ __Vtemp_hec0c690e__0;
    VlWide<130>/*4159:0*/ __Vtemp_hbd6afeb9__0;
    VlWide<4>/*127:0*/ __Vtemp_he4f11364__0;
    VlWide<5>/*159:0*/ __Vtemp_h4312a920__0;
    VlWide<5>/*159:0*/ __Vtemp_hc322f157__0;
    VlWide<5>/*159:0*/ __Vtemp_h8eeee11b__0;
    VlWide<5>/*159:0*/ __Vtemp_hbb0e9282__0;
    VlWide<5>/*159:0*/ __Vtemp_h9f17579c__0;
    VlWide<5>/*159:0*/ __Vtemp_h6edb03af__0;
    VlWide<5>/*159:0*/ __Vtemp_h509e5fb7__0;
    VlWide<5>/*159:0*/ __Vtemp_h87f43fd7__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_40) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_w 
            = (IData)((0x300000000ULL == (0x300000000ULL 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_41) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_w 
            = (IData)((0x30000000000ULL == (0x30000000000ULL 
                                            & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1)));
    }
    VL_EXTEND_WI(16386,3, __Vtemp_hda173ed1__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done)
                                                  ? 
                                                 (1U 
                                                  | (6U 
                                                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__aFrag) 
                                                        << 1U)))
                                                  : 0U));
    VL_EXTEND_WI(16384,11, __Vtemp_hc37a7b5e__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_source));
    VL_CONCAT_WWI(16386,16384,2, __Vtemp_h44a5090d__0, __Vtemp_hc37a7b5e__0, 0U);
    VL_SHIFTL_WWW(16386,16386,16386, __Vtemp_h0794b198__0, __Vtemp_hda173ed1__0, __Vtemp_h44a5090d__0);
    VL_AND_W(513, __Vtemp_h392fb3f5__0, VTestHarness__ConstPool__CONST_h481e95a4_0, __Vtemp_h0794b198__0);
    VL_SEL_WWII(4160,16386, __Vtemp_h93be35ca__0, __Vtemp_h392fb3f5__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hee3ed7be__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__a_first_done), __Vtemp_h93be35ca__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_OR_W(130, __Vtemp_h2996f4e5__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, __Vtemp_hee3ed7be__0);
    VL_EXTEND_WI(16397,11, __Vtemp_hc378b35c__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_bootrom_fragmenter_out_a_bits_source));
    VL_CONCAT_WWI(16399,16397,2, __Vtemp_h60b9023b__0, __Vtemp_hc378b35c__0, 0U);
    VL_SHIFTL_WWW(16399,16399,16399, __Vtemp_he3fda9d9__0, VTestHarness__ConstPool__CONST_hd6e5c6ea_0, __Vtemp_h60b9023b__0);
    VL_AND_W(513, __Vtemp_h3e76dafd__0, VTestHarness__ConstPool__CONST_h481e15b8_0, __Vtemp_he3fda9d9__0);
    VL_SEL_WWII(4160,16399, __Vtemp_haeefed38__0, __Vtemp_h3e76dafd__0, 0U, 0x1040U);
    VL_COND_WIWW(4160, __Vtemp_hafdad92b__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__d_first_done), __Vtemp_haeefed38__0, VTestHarness__ConstPool__CONST_h58046101_0);
    VL_NOT_W(130, __Vtemp_hec0c690e__0, __Vtemp_hafdad92b__0);
    VL_AND_W(130, __Vtemp_hbd6afeb9__0, __Vtemp_h2996f4e5__0, __Vtemp_hec0c690e__0);
    VL_COND_WIWW(4160, __Vtemp_ha81a37db__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset), VTestHarness__ConstPool__CONST_h58046101_0, __Vtemp_hbd6afeb9__0);
    VL_ASSIGN_W(4160,vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__inflight_sizes, __Vtemp_ha81a37db__0);
    VL_EXTEND_WI(132,5, __Vtemp_h4312a920__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0x1eU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         >> 5U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_hc322f157__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xaU)));
    __Vtemp_h8eeee11b__0[0U] = (__Vtemp_hc322f157__0[0U] 
                                << 3U);
    __Vtemp_h8eeee11b__0[1U] = ((__Vtemp_hc322f157__0[0U] 
                                 >> 0x1dU) | (__Vtemp_hc322f157__0[1U] 
                                              << 3U));
    __Vtemp_h8eeee11b__0[2U] = ((__Vtemp_hc322f157__0[1U] 
                                 >> 0x1dU) | (__Vtemp_hc322f157__0[2U] 
                                              << 3U));
    __Vtemp_h8eeee11b__0[3U] = ((__Vtemp_hc322f157__0[2U] 
                                 >> 0x1dU) | (__Vtemp_hc322f157__0[3U] 
                                              << 3U));
    __Vtemp_h8eeee11b__0[4U] = ((__Vtemp_hc322f157__0[3U] 
                                 >> 0x1dU) | (__Vtemp_hc322f157__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(132,132,132, __Vtemp_hbb0e9282__0, __Vtemp_h4312a920__0, __Vtemp_h8eeee11b__0);
    __Vtemp_h9f17579c__0[0U] = 0xffU;
    __Vtemp_h9f17579c__0[1U] = 0U;
    __Vtemp_h9f17579c__0[2U] = 0U;
    __Vtemp_h9f17579c__0[3U] = 0U;
    __Vtemp_h9f17579c__0[4U] = 0U;
    VL_EXTEND_WI(140,4, __Vtemp_h6edb03af__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h509e5fb7__0[0U] = (__Vtemp_h6edb03af__0[0U] 
                                << 3U);
    __Vtemp_h509e5fb7__0[1U] = ((__Vtemp_h6edb03af__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h6edb03af__0[1U] 
                                              << 3U));
    __Vtemp_h509e5fb7__0[2U] = ((__Vtemp_h6edb03af__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h6edb03af__0[2U] 
                                              << 3U));
    __Vtemp_h509e5fb7__0[3U] = ((__Vtemp_h6edb03af__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h6edb03af__0[3U] 
                                              << 3U));
    __Vtemp_h509e5fb7__0[4U] = ((__Vtemp_h6edb03af__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h6edb03af__0[4U] 
                                              << 3U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_h87f43fd7__0, __Vtemp_h9f17579c__0, __Vtemp_h509e5fb7__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        __Vtemp_he4f11364__0[1U] = 0U;
        __Vtemp_he4f11364__0[2U] = 0U;
        __Vtemp_he4f11364__0[3U] = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_he4f11364__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hbb0e9282__0[1U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h87f43fd7__0[1U]
                                                     : 0U)));
        __Vtemp_he4f11364__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hbb0e9282__0[2U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h87f43fd7__0[2U]
                                                     : 0U)));
        __Vtemp_he4f11364__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                                         ? __Vtemp_hbb0e9282__0[3U]
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    __Vtemp_h87f43fd7__0[3U]
                                                     : 0U)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                    ? __Vtemp_hbb0e9282__0[0U] : 0U)) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                      ? __Vtemp_h87f43fd7__0[0U] : 0U)));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_he4f11364__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_he4f11364__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_he4f11364__0[3U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5806(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5806\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hf5998e27__0;
    VlWide<5>/*159:0*/ __Vtemp_hc322f157__0;
    VlWide<5>/*159:0*/ __Vtemp_h8eeed12c__0;
    VlWide<5>/*159:0*/ __Vtemp_h7a65063b__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_h6edb03af__0;
    VlWide<5>/*159:0*/ __Vtemp_h509e6f88__0;
    VlWide<5>/*159:0*/ __Vtemp_hb2a86872__0;
    // Body
    VL_EXTEND_WI(131,4, __Vtemp_hf5998e27__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                         [0U][0U] 
                                                         << 1U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_hc322f157__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                  [0U][0U] 
                                                  >> 0xaU)));
    __Vtemp_h8eeed12c__0[0U] = (__Vtemp_hc322f157__0[0U] 
                                << 2U);
    __Vtemp_h8eeed12c__0[1U] = ((__Vtemp_hc322f157__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hc322f157__0[1U] 
                                              << 2U));
    __Vtemp_h8eeed12c__0[2U] = ((__Vtemp_hc322f157__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hc322f157__0[2U] 
                                              << 2U));
    __Vtemp_h8eeed12c__0[3U] = ((__Vtemp_hc322f157__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hc322f157__0[3U] 
                                              << 2U));
    __Vtemp_h8eeed12c__0[4U] = ((__Vtemp_hc322f157__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hc322f157__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h7a65063b__0, __Vtemp_hf5998e27__0, __Vtemp_h8eeed12c__0);
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_h6edb03af__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h509e6f88__0[0U] = (__Vtemp_h6edb03af__0[0U] 
                                << 2U);
    __Vtemp_h509e6f88__0[1U] = ((__Vtemp_h6edb03af__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h6edb03af__0[1U] 
                                              << 2U));
    __Vtemp_h509e6f88__0[2U] = ((__Vtemp_h6edb03af__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h6edb03af__0[2U] 
                                              << 2U));
    __Vtemp_h509e6f88__0[3U] = ((__Vtemp_h6edb03af__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h6edb03af__0[3U] 
                                              << 2U));
    __Vtemp_h509e6f88__0[4U] = ((__Vtemp_h6edb03af__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h6edb03af__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_hb2a86872__0, __Vtemp_h7c30b3f9__0, __Vtemp_h509e6f88__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_opcodes = 0ULL;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                    ? (((QData)((IData)(__Vtemp_h7a65063b__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_h7a65063b__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                                    ? (((QData)((IData)(
                                                        __Vtemp_hb2a86872__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_hb2a86872__0[0U])))
                                    : 0ULL)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1253)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                             [0U][0U] 
                                             >> 0xaU)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__reader__DOT__core__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                               [0U][0U] 
                                               >> 0xaU)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__monitor__DOT___T_1268)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U)))
                                                      : 0U)
                                                     : 0U))));
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_1329) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                             ? ((4U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U]) ? 0U : (~ 
                                                   (((0x1aU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U)))
                                                      ? 
                                                     (0x7ffffffU 
                                                      & ((IData)(0xfffU) 
                                                         << 
                                                         (0xfU 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 6U))))
                                                      : 0U) 
                                                    >> 4U)))
                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5807(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5807\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__maybe_full = 0U;
    } else {
        if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_3_1;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__do_enq;
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_40) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x22U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_39) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x1aU)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_36) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 2U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_43) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x3aU)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_37) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0xaU)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_38) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x12U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_41) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x2aU)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_42) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_x 
            = (1U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                             >> 0x32U)));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_30)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_medeleg 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_260_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_4_0_io_in_control_0_propagate_b;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5808(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5808\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_54) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter 
            = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first)
                      ? ((1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 5U))) 
                                          >> 3U))) : 0U)
                      : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter) 
                         - (IData)(1U))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT___T) 
             & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__locked)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__lockIdx 
                = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)
                    ? 4U : 1U);
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__outArb__DOT__lockIdx = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value 
                = ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__enq_ptr_value))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value 
                = ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value))
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__read_issue_q__DOT__deq_ptr_value))));
        }
        if ((1U & (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5013) 
                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5014)) 
                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___T_5016)) 
                    | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___io_busy_output))) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT___reservation_station_completed_arb_io_out_valid)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue = 0U;
        } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT___io_busy_output) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue)));
        }
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_1_J 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_bias__DOT__command_p__DOT__stages_0_J;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5809(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5809\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full = 0U;
    } else if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
                != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
         & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_10)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_stvec 
            = (0x7fffffffffULL & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_5)) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_6)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_1_act 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[1U] 
                     >> 8U));
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_5)) 
                  | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_4)))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_0_act 
            = (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[1U] 
                     >> 8U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                 << 0x1fU) | (0x7ffc0000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 1U))) 
               | ((0x20000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 1U)) | ((0x1e000U 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 1U)) 
                                          | (0x1fffU 
                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = ((0x3ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                            >> 1U)) | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                        << 0x1fU) | 
                                       (0x7ffc0000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                                           >> 1U))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x3ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                            >> 1U)) | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U] 
                                        << 0x1fU) | 
                                       (0x7ffc0000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                           >> 1U))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x3ffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U] 
                            >> 1U)) | ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                        << 0x1fU) | 
                                       (0x7ffc0000U 
                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[3U] 
                                           >> 1U))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = ((0x40000U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                            >> 1U)) | (0x3ffffU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[4U] 
                                                   >> 1U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5810(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5810\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_sectored_hit_valid 
            = ((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_0) 
                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_1)) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_2)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_3)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_4)) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_5)) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_6)) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__sector_hits_7));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_sectored_hit_valid 
            = ((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_0) 
                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_1)) 
                    | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_2)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_3)) 
                  | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_4)) 
                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_5)) 
                | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_6)) 
               | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_sector_hits_7));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_1_tag_rob_id 
            = (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                        >> 0xaU));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT___GEN_2) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd_tracker__DOT__cmds_0_tag_rob_id 
            = (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                        >> 0xaU));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_799) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))
                              ? (~ (((0xcU >= (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                >> 0x13U)))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                               >> 0x13U))))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
        }
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes 
            = (0xffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes) 
                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1208)
                             ? ((0x13U >= (8U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                 >> 8U)))
                                 ? (0xfffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1208)
                                                  ? 
                                                 (1U 
                                                  | (0x1eU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                        >> 0x12U)))
                                                  : 0U) 
                                                << 
                                                (8U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                    >> 8U))))
                                 : 0U) : 0U)) & (~ 
                                                 ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1223)
                                                   ? 
                                                  ((0x1eU 
                                                    >= 
                                                    (8U 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U)))
                                                    ? 
                                                   (0x7fffffffU 
                                                    & ((IData)(0xffU) 
                                                       << 
                                                       (8U 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 6U))))
                                                    : 0U)
                                                   : 0U))));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5811(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5811\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight 
            = (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight) 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1208) 
                   & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                         >> 0xbU)))) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1223) 
                                           & (~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes 
            = (0xfU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes) 
                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1208)
                            ? ((0x12U >= (4U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                >> 9U)))
                                ? (0x7ffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1208)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                                                    << 1U))
                                                 : 0U) 
                                               << (4U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 9U))))
                                : 0U) : 0U)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1223)
                                                    ? 
                                                   ((0x1eU 
                                                     >= 
                                                     (4U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 7U)))
                                                     ? 
                                                    (0x7fffffffU 
                                                     & ((IData)(0xfU) 
                                                        << 
                                                        (4U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 7U))))
                                                     : 0U)
                                                    : 0U))));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_ren) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5812(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5812\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_ren) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_0__DOT____Vcellinp__mem__io_raddr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_ren) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_19__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_20__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_21__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_22__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_23__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_24__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_25__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_26__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT__mem__DOT__mem__DOT__mem_0_ext__DOT__mem_0_27__DOT__ram_R_0_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__acc_mems_1__DOT____Vcellinp__mem__io_raddr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_799) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))
                              ? (~ (((0xcU >= (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                >> 0x13U)))
                                      ? (0x1fffU & 
                                         ((IData)(0x3fU) 
                                          << (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                               >> 0x13U))))
                                      : 0U) >> 3U))
                              : 0U) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1284) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))
                                  ? 0U : (~ (((0x1aU 
                                               >= (0xfU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x7ffffffU 
                                                  & ((IData)(0xfffU) 
                                                     << 
                                                     (0xfU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U) 
                                             >> 3U)))
                              : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5813(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5813\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_he5110b82__0;
    VlWide<5>/*159:0*/ __Vtemp_h3c991810__0;
    VlWide<5>/*159:0*/ __Vtemp_h8691f9e1__0;
    VlWide<5>/*159:0*/ __Vtemp_h1bf4edbd__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__0;
    VlWide<5>/*159:0*/ __Vtemp_ha2923908__0;
    VlWide<5>/*159:0*/ __Vtemp_hdf60b1b5__0;
    VlWide<5>/*159:0*/ __Vtemp_hee55f246__0;
    VlWide<5>/*159:0*/ __Vtemp_heb5f0b45__0;
    VlWide<5>/*159:0*/ __Vtemp_h3c991810__1;
    VlWide<5>/*159:0*/ __Vtemp_h6c14c1bb__0;
    VlWide<5>/*159:0*/ __Vtemp_h7866c8ba__0;
    VlWide<5>/*159:0*/ __Vtemp_h7c30b3f9__1;
    VlWide<5>/*159:0*/ __Vtemp_ha2923908__1;
    VlWide<5>/*159:0*/ __Vtemp_h70ca404f__0;
    VlWide<5>/*159:0*/ __Vtemp_hd866cee1__0;
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_261_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_5_0_io_in_control_0_propagate_b;
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_49)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_no_pool 
            = (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U]);
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_51)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_no_pool 
            = (1U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U]);
    }
    VL_EXTEND_WI(131,4, __Vtemp_he5110b82__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 5U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_h3c991810__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h8691f9e1__0[0U] = (__Vtemp_h3c991810__0[0U] 
                                << 2U);
    __Vtemp_h8691f9e1__0[1U] = ((__Vtemp_h3c991810__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__0[1U] 
                                              << 2U));
    __Vtemp_h8691f9e1__0[2U] = ((__Vtemp_h3c991810__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__0[2U] 
                                              << 2U));
    __Vtemp_h8691f9e1__0[3U] = ((__Vtemp_h3c991810__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__0[3U] 
                                              << 2U));
    __Vtemp_h8691f9e1__0[4U] = ((__Vtemp_h3c991810__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h1bf4edbd__0, __Vtemp_he5110b82__0, __Vtemp_h8691f9e1__0);
    __Vtemp_h7c30b3f9__0[0U] = 0xfU;
    __Vtemp_h7c30b3f9__0[1U] = 0U;
    __Vtemp_h7c30b3f9__0[2U] = 0U;
    __Vtemp_h7c30b3f9__0[3U] = 0U;
    __Vtemp_h7c30b3f9__0[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_ha2923908__0, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                  >> 0xbU)));
    __Vtemp_hdf60b1b5__0[0U] = (__Vtemp_ha2923908__0[0U] 
                                << 2U);
    __Vtemp_hdf60b1b5__0[1U] = ((__Vtemp_ha2923908__0[0U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__0[1U] 
                                              << 2U));
    __Vtemp_hdf60b1b5__0[2U] = ((__Vtemp_ha2923908__0[1U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__0[2U] 
                                              << 2U));
    __Vtemp_hdf60b1b5__0[3U] = ((__Vtemp_ha2923908__0[2U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__0[3U] 
                                              << 2U));
    __Vtemp_hdf60b1b5__0[4U] = ((__Vtemp_ha2923908__0[3U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__0[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_hee55f246__0, __Vtemp_h7c30b3f9__0, __Vtemp_hdf60b1b5__0);
    VL_EXTEND_WI(131,4, __Vtemp_heb5f0b45__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662)
                                                ? (1U 
                                                   | (0xeU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         << 1U)))
                                                : 0U));
    VL_EXTEND_WI(129,4, __Vtemp_h3c991810__1, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h6c14c1bb__0[0U] = (__Vtemp_h3c991810__1[0U] 
                                << 2U);
    __Vtemp_h6c14c1bb__0[1U] = ((__Vtemp_h3c991810__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__1[1U] 
                                              << 2U));
    __Vtemp_h6c14c1bb__0[2U] = ((__Vtemp_h3c991810__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__1[2U] 
                                              << 2U));
    __Vtemp_h6c14c1bb__0[3U] = ((__Vtemp_h3c991810__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__1[3U] 
                                              << 2U));
    __Vtemp_h6c14c1bb__0[4U] = ((__Vtemp_h3c991810__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h3c991810__1[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(131,131,131, __Vtemp_h7866c8ba__0, __Vtemp_heb5f0b45__0, __Vtemp_h6c14c1bb__0);
    __Vtemp_h7c30b3f9__1[0U] = 0xfU;
    __Vtemp_h7c30b3f9__1[1U] = 0U;
    __Vtemp_h7c30b3f9__1[2U] = 0U;
    __Vtemp_h7c30b3f9__1[3U] = 0U;
    __Vtemp_h7c30b3f9__1[4U] = 0U;
    VL_EXTEND_WI(141,4, __Vtemp_ha2923908__1, (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                  >> 0xbU)));
    __Vtemp_h70ca404f__0[0U] = (__Vtemp_ha2923908__1[0U] 
                                << 2U);
    __Vtemp_h70ca404f__0[1U] = ((__Vtemp_ha2923908__1[0U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__1[1U] 
                                              << 2U));
    __Vtemp_h70ca404f__0[2U] = ((__Vtemp_ha2923908__1[1U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__1[2U] 
                                              << 2U));
    __Vtemp_h70ca404f__0[3U] = ((__Vtemp_ha2923908__1[2U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__1[3U] 
                                              << 2U));
    __Vtemp_h70ca404f__0[4U] = ((__Vtemp_ha2923908__1[3U] 
                                 >> 0x1eU) | (__Vtemp_ha2923908__1[4U] 
                                              << 2U));
    VL_SHIFTL_WWW(143,143,143, __Vtemp_hd866cee1__0, __Vtemp_h7c30b3f9__1, __Vtemp_h70ca404f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_sizes 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_sizes 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662)
                    ? (((QData)((IData)(__Vtemp_h1bf4edbd__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_h1bf4edbd__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_677)
                                    ? (((QData)((IData)(
                                                        __Vtemp_hee55f246__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_hee55f246__0[0U])))
                                    : 0ULL)));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662)
                    ? (((QData)((IData)(__Vtemp_h7866c8ba__0[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    __Vtemp_h7866c8ba__0[0U])))
                    : 0ULL)) & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_677)
                                    ? (((QData)((IData)(
                                                        __Vtemp_hd866cee1__0[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    __Vtemp_hd866cee1__0[0U])))
                                    : 0ULL)));
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_sizes = 0ULL;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes = 0ULL;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5814(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5814\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662)
                               ? ((0xfU >= (0xfU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U)))
                                   ? ((IData)(1U) << 
                                      (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 9U)))
                                   : 0U) : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_677)
                                                     ? 
                                                    ((0xfU 
                                                      >= 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 0xbU)))
                                                      ? 
                                                     ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 0xbU)))
                                                      : 0U)
                                                     : 0U))))
            : 0U);
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_51)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_downsample 
            = (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                     >> 1U));
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_49)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_downsample 
            = (1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U] 
                     >> 1U));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtvec = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_configured = 0U;
    } else {
        if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_4))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_4_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_4_1;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_36)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mtvec 
                = (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1);
        }
        if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___T_14)) 
                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT___GEN_5)) 
                      | (8U != (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__cmd__DOT___ram_ext_R0_data[0U])))))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_configured 
                = (0xffffU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod_1__DOT__loops_configured)));
        }
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT___GEN_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_1_tag_rob_id 
            = (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                        >> 0xaU));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT___GEN_2) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd_tracker__DOT__cmds_0_tag_rob_id 
            = (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT___ram_ext_R0_data[8U] 
                        >> 0xaU));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5815(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5815\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_1_K 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ex__DOT__command_p__DOT__stages_0_K;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                     - (IData)(1U)));
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_7 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_5 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_4 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_6 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_3 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_2 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) 
         & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__tags_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_kchs 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[1U] 
               >> 0x10U);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5816(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5816\n"); );
    // Init
    CData/*31:0*/ __Vtemp_hb362a752__0;
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id)))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_kchs 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[1U] 
               >> 0x10U);
    }
    __Vtemp_hb362a752__0 = (1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                                  | ((((4U != (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                >> 1U))) 
                                       & ((3U == (7U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                     >> 1U)))
                                           ? (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full))
                                           : ((IData)(
                                                      ((0U 
                                                        == 
                                                        (0xeU 
                                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5)) 
                                                       & (~ 
                                                          ((2U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                                >> 1U))) 
                                                           | (1U 
                                                              == 
                                                              (7U 
                                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_5 
                                                                  >> 1U))))))) 
                                              & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__full))))) 
                                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving))) 
                                     | ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT___T_1) 
                                            & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__recvCount)))) 
                                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving)))));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__receiving 
        = __Vtemp_hb362a752__0;
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr 
            = (1U & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr) 
                       >= (1U & (((IData)(1U) - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop)) 
                                 - (IData)(1U)))) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop))
                      ? (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop) 
                          - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___io_deq_bits_1_T_12)) 
                         - (IData)(1U)) : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__raddr) 
                                           + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT____Vcellinp__q__io_deq_pop))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5817(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5817\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_262_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_6_0_io_in_control_0_propagate_b;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__do_enq;
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__maybe_full = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                             : 0U)) << 0x13U) | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_denied) 
                                                  << 0x12U) 
                                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_sink) 
                                                     << 0xeU) 
                                                    | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_1_d_bits_source) 
                                                        << 9U) 
                                                       | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_size) 
                                                           << 5U) 
                                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_param) 
                                                              << 3U) 
                                                             | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_17_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[0U]
                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[0U]
                             : 0U)) >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                   ? 
                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                                                   : 0U) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                                                     : 0U)) 
                                                << 0x13U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[1U]
                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[1U]
                             : 0U)) >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                   ? 
                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                                                   : 0U) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                                                     : 0U)) 
                                                << 0x13U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                   ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[2U]
                   : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                             ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[2U]
                             : 0U)) >> 0xdU) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                                   ? 
                                                  vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                                   : 0U) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                                     ? 
                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                                     : 0U)) 
                                                << 0x13U));
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[4U] 
            = (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0) 
                  & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1) 
                    & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt))) 
                << 0x13U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_0)
                                ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_bus_named_subsystem_cbus_auto_widget_in_d_bits_data[3U]
                                : 0U) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3_1)
                                          ? vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data[3U]
                                          : 0U)) >> 0xdU));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_dpad 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U] 
               >> 0x10U);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_rpad 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[4U] 
               >> 0x10U);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5818(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5818\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_lpad 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[1U]);
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id)))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_lpad 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[1U]);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_rpad 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[4U] 
               >> 0x10U);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_dpad 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[3U] 
               >> 0x10U);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_upad 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[4U]);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5819(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5819\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_upad 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[4U]);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_tileresetsetter__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_pbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1 = 0U;
    } else if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__winnerQual_1;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT___T_3) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__req_addr_start 
            = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_requesting_ld_input_id) 
               << 0xdU);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) {
        if ((0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_4))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm 
                = (7U & (IData)((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                                 >> 5U)));
        } else if ((0xfffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_2))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_frm 
                = (7U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1));
        }
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_K 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_K;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_1_J 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_weights__DOT__command_p__DOT__stages_0_J;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_9) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter 
            = (0xfffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__mvout_1d_enabled)
                          ? ((0U == (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__mvout_1d_rows) 
                                                - (IData)(1U))))
                              ? 0U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___GEN_10) 
                                       >= (0xffffU 
                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__mvout_1d_rows) 
                                              - (IData)(1U))))
                                       ? (((IData)(1U) 
                                           - (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__mvout_1d_rows) 
                                               - (IData)(1U)) 
                                              - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter))) 
                                          - (IData)(1U))
                                       : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___row_counter_T_7)))
                          : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter) 
                              != (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                           - (IData)(1U))))
                              ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter)
                              : ((0U == (0x1fU & ((
                                                   (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                    << 0x10U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                      >> 0x10U)) 
                                                  - (IData)(1U))))
                                  ? 0U : (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter) 
                                           >= (0x1fU 
                                               & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                    << 0x10U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                      >> 0x10U)) 
                                                  - (IData)(1U))))
                                           ? (((IData)(1U) 
                                               - ((0x1fU 
                                                   & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                        << 0x10U) 
                                                       | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT___ram_ext_R0_data[4U] 
                                                          >> 0x10U)) 
                                                      - (IData)(1U))) 
                                                  - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__row_counter))) 
                                              - (IData)(1U))
                                           : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT___row_counter_T_7))))));
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter 
            = ((0U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                - (IData)(1U)))) ? 0U
                : (0xffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter) 
                             >= (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                          - (IData)(1U))))
                             ? (((IData)(1U) - ((0x7fU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__blocks) 
                                                    - (IData)(1U))) 
                                                - (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter))) 
                                - (IData)(1U)) : ((IData)(1U) 
                                                  + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__store_controller__DOT__block_counter)))));
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5820(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5820\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_pc_valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_div 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_div;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value = 0U;
    } else {
        if ((1U & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                      >> 9U)))) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr 
                = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__do_deq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__do_enq) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__raw_cmd_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5821(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5821\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5822(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5822\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5823(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5823\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5824(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5824\n"); );
    // Body
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_en_pipe_0 
        = ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
           & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)));
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT___T_2589) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_1)
                             ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_opcode))
                                 ? 0U : (~ (((0x1aU 
                                              >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size))
                                              ? (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_tl_other_masters_out_1_a_bits_size)))
                                              : 0U) 
                                            >> 4U)))
                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__monitor_1__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1399) {
            vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_1)
                             ? ((4U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_opcode))
                                 ? 0U : (~ (((0x1aU 
                                              >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size))
                                              ? (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size)))
                                              : 0U) 
                                            >> 4U)))
                             : ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1) 
                                - (IData)(1U))));
        }
    }
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_kcols 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[2U]);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_1_inner_bounds_krows 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[2U] 
               >> 0x10U);
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5825(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5825\n"); );
    // Body
    if ((1U & (~ (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___T_14)) 
                   | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT___GEN_43)) 
                  | (~ ((0x12U == (0x7fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[0U])) 
                        & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loop_being_configured_id)))))))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_krows 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[2U] 
               >> 0x10U);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__loops_0_inner_bounds_kcols 
            = (0xffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT___ram_ext_R0_data[2U]);
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5826(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5826\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5827(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5827\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_263_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_7_0_io_in_control_0_propagate_b;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0 = 0U;
    } else if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_3_0;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5828(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5828\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5829(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5829\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[3U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5830(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5830\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[3U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5831(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5831\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xaU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[2U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_10__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xbU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[2U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_11__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xcU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[3U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_12__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xdU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[3U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_13__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xeU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[3U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_14__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5832(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5832\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 0xfU))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[3U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_15__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5833(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5833\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5834(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5834\n"); );
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h7e58ec99_0;
extern const VlWide<8>/*255:0*/ VTestHarness__ConstPool__CONST_h9e67c271_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;
extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52859b67_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5835(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5835\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_heac6a1e7__0;
    VlWide<9>/*287:0*/ __Vtemp_hb2182b1b__0;
    VlWide<9>/*287:0*/ __Vtemp_h25ec9baf__0;
    VlWide<9>/*287:0*/ __Vtemp_he1d29fe3__0;
    VlWide<9>/*287:0*/ __Vtemp_hc9c3ba19__0;
    VlWide<9>/*287:0*/ __Vtemp_h2b69bea3__0;
    VlWide<9>/*287:0*/ __Vtemp_h98ceed9f__0;
    VlWide<9>/*287:0*/ __Vtemp_he806a0ac__0;
    // Body
    if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram_RW_0_r_addr_pipe_0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    }
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_is_pool 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_is_pool;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_1_cmd_inst_funct 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__st__DOT__command_p__DOT__stages_0_cmd_inst_funct;
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_rdata_written_once 
        = ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT___x1_a_bits_mask_T_4) 
              | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_from_bus_named_subsystem_fbus__DOT__widget__DOT__x1_a_bits_mask_rdata_written_once)));
    VL_EXTEND_WI(260,5, __Vtemp_hb2182b1b__0, ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                                ? (1U 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_size) 
                                                      << 1U))
                                                : 0U));
    VL_EXTEND_WI(257,5, __Vtemp_h25ec9baf__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT___xbar_auto_out_a_bits_source));
    __Vtemp_he1d29fe3__0[0U] = (__Vtemp_h25ec9baf__0[0U] 
                                << 3U);
    __Vtemp_he1d29fe3__0[1U] = ((__Vtemp_h25ec9baf__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[1U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[2U] = ((__Vtemp_h25ec9baf__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[2U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[3U] = ((__Vtemp_h25ec9baf__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[3U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[4U] = ((__Vtemp_h25ec9baf__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[4U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[5U] = ((__Vtemp_h25ec9baf__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[5U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[6U] = ((__Vtemp_h25ec9baf__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[6U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[7U] = ((__Vtemp_h25ec9baf__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[7U] 
                                              << 3U));
    __Vtemp_he1d29fe3__0[8U] = ((__Vtemp_h25ec9baf__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h25ec9baf__0[8U] 
                                              << 3U));
    VL_SHIFTL_WWW(260,260,260, __Vtemp_hc9c3ba19__0, __Vtemp_hb2182b1b__0, __Vtemp_he1d29fe3__0);
    VL_EXTEND_WI(268,5, __Vtemp_h2b69bea3__0, (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h98ceed9f__0[0U] = (__Vtemp_h2b69bea3__0[0U] 
                                << 3U);
    __Vtemp_h98ceed9f__0[1U] = ((__Vtemp_h2b69bea3__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[1U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[2U] = ((__Vtemp_h2b69bea3__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[2U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[3U] = ((__Vtemp_h2b69bea3__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[3U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[4U] = ((__Vtemp_h2b69bea3__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[4U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[5U] = ((__Vtemp_h2b69bea3__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[5U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[6U] = ((__Vtemp_h2b69bea3__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[6U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[7U] = ((__Vtemp_h2b69bea3__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[7U] 
                                              << 3U));
    __Vtemp_h98ceed9f__0[8U] = ((__Vtemp_h2b69bea3__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h2b69bea3__0[8U] 
                                              << 3U));
    VL_SHIFTL_WWW(271,271,271, __Vtemp_he806a0ac__0, VTestHarness__ConstPool__CONST_h7e58ec99_0, __Vtemp_h98ceed9f__0);
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        __Vtemp_heac6a1e7__0[1U] = VTestHarness__ConstPool__CONST_h9e67c271_0[1U];
        __Vtemp_heac6a1e7__0[2U] = VTestHarness__ConstPool__CONST_h9e67c271_0[2U];
        __Vtemp_heac6a1e7__0[3U] = VTestHarness__ConstPool__CONST_h9e67c271_0[3U];
        __Vtemp_heac6a1e7__0[4U] = VTestHarness__ConstPool__CONST_h9e67c271_0[4U];
        __Vtemp_heac6a1e7__0[5U] = VTestHarness__ConstPool__CONST_h9e67c271_0[5U];
        __Vtemp_heac6a1e7__0[6U] = VTestHarness__ConstPool__CONST_h9e67c271_0[6U];
        __Vtemp_heac6a1e7__0[7U] = VTestHarness__ConstPool__CONST_h9e67c271_0[7U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = VTestHarness__ConstPool__CONST_h9e67c271_0[0U];
    } else {
        __Vtemp_heac6a1e7__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[1U] 
                                            & __Vtemp_hc9c3ba19__0[1U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[1U] 
                                              & __Vtemp_he806a0ac__0[1U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[1U])));
        __Vtemp_heac6a1e7__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[2U] 
                                            & __Vtemp_hc9c3ba19__0[2U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[2U] 
                                              & __Vtemp_he806a0ac__0[2U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[2U])));
        __Vtemp_heac6a1e7__0[3U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[3U] 
                                            & __Vtemp_hc9c3ba19__0[3U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[3U] 
                                              & __Vtemp_he806a0ac__0[3U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[3U])));
        __Vtemp_heac6a1e7__0[4U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[4U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[4U] 
                                            & __Vtemp_hc9c3ba19__0[4U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[4U] 
                                              & __Vtemp_he806a0ac__0[4U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[4U])));
        __Vtemp_heac6a1e7__0[5U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[5U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[5U] 
                                            & __Vtemp_hc9c3ba19__0[5U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[5U] 
                                              & __Vtemp_he806a0ac__0[5U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[5U])));
        __Vtemp_heac6a1e7__0[6U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[6U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[6U] 
                                            & __Vtemp_hc9c3ba19__0[6U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[6U] 
                                              & __Vtemp_he806a0ac__0[6U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[6U])));
        __Vtemp_heac6a1e7__0[7U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[7U] 
                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                                         ? (VTestHarness__ConstPool__CONST_h52851b57_0[7U] 
                                            & __Vtemp_hc9c3ba19__0[7U])
                                         : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])) 
                                    & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                                           ? (VTestHarness__ConstPool__CONST_h52859b67_0[7U] 
                                              & __Vtemp_he806a0ac__0[7U])
                                           : VTestHarness__ConstPool__CONST_h9e67c271_0[7U])));
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1323)
                    ? (VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                       & __Vtemp_hc9c3ba19__0[0U]) : 
                   VTestHarness__ConstPool__CONST_h9e67c271_0[0U])) 
               & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___T_1338)
                      ? (VTestHarness__ConstPool__CONST_h52859b67_0[0U] 
                         & __Vtemp_he806a0ac__0[0U])
                      : VTestHarness__ConstPool__CONST_h9e67c271_0[0U])));
    }
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_heac6a1e7__0[1U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_heac6a1e7__0[2U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_heac6a1e7__0[3U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_heac6a1e7__0[4U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_heac6a1e7__0[5U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_heac6a1e7__0[6U];
    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_heac6a1e7__0[7U];
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5836(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5836\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5837(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5837\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_0_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_wmask) 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_0__io_write_data[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_0__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5838(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5838\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[1U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5839(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5839\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_1_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_wmask) 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_1__io_write_data[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_1__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5840(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5840\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[1U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5841(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5841\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_2_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_wmask) 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_2__io_write_data[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_2__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5842(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5842\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[0U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[0U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 3U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[0U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 4U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[1U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_4__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5843(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5843\n"); );
    // Body
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 5U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[1U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_5__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 6U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[1U] 
                        >> 0x10U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_6__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 7U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[1U] 
               >> 0x18U);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_7__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 8U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[2U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_8__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__bank_ios_3_write_en)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_wmask) 
            >> 9U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT____Vcellinp__spad_mems_3__io_write_data[2U] 
                        >> 8U));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT__mem__DOT__mem_ext__DOT__mem_0_9__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__spad_mems_3__DOT____Vcellinp__mem__RW0_addr;
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5844(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5844\n"); );
    // Body
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__valid) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b 
            = (0x1ffffffffffffULL & ((0xffffffffffffULL 
                                      & ((QData)((IData)(
                                                         (((IData)(
                                                                   (0U 
                                                                    != 
                                                                    (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U] 
                                                                     >> 0x1dU))) 
                                                           << 0x17U) 
                                                          | (0x7fffffU 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in1[0U])))) 
                                         * (QData)((IData)(
                                                           (((IData)(
                                                                     (0U 
                                                                      != 
                                                                      (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U] 
                                                                       >> 0x1dU))) 
                                                             << 0x17U) 
                                                            | (0x7fffffU 
                                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in2[0U])))))) 
                                     + (0xffffffffffffULL 
                                        & (((QData)((IData)(
                                                            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U])) 
                                            << 0x1dU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U])) 
                                              >> 3U)))));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    } else {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_slave_named_clockgater__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__maybe_full = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1 = 0U;
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__small_1 = 0U;
    } else {
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__do_enq) 
             != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__do_deq))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__maybe_full 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__cmd__DOT__do_enq;
        }
        if ((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1 
                = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__winnerQual_2_1;
        }
        if (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x7ffU == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_162)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__small_1 
                = (0x3fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1));
        } else if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit)))) {
            vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__small_1 
                = (0x3fU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1));
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__5845(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__5845\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hca2f1651__0;
    VlWide<4>/*127:0*/ __Vtemp_h66d4efed__0;
    VlWide<4>/*127:0*/ __Vtemp_h694ddbf8__0;
    VlWide<4>/*127:0*/ __Vtemp_h3bd5fbd0__0;
    VlWide<4>/*127:0*/ __Vtemp_hda9d1e10__0;
    VlWide<4>/*127:0*/ __Vtemp_h732cc475__0;
    VlWide<4>/*127:0*/ __Vtemp_h07ab9ce4__0;
    VlWide<4>/*127:0*/ __Vtemp_h09d954d5__0;
    // Body
    if ((1U & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stalling_1)))) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_1_spad_addr 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__mod__DOT__ld_input__DOT__command_p__DOT__stages_0_spad_addr;
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        VL_EXTEND_WQ(106,53, __Vtemp_hca2f1651__0, 
                     (((QData)((IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                               >> 0x1dU)))) 
                       << 0x34U) | (0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[0U]))))));
        VL_EXTEND_WQ(106,53, __Vtemp_h66d4efed__0, 
                     (((QData)((IData)((0U != (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                               >> 0x1dU)))) 
                       << 0x34U) | (0xfffffffffffffULL 
                                    & (((QData)((IData)(
                                                        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[0U]))))));
        VL_MUL_W(4, __Vtemp_h694ddbf8__0, __Vtemp_hca2f1651__0, __Vtemp_h66d4efed__0);
        __Vtemp_h3bd5fbd0__0[0U] = __Vtemp_h694ddbf8__0[0U];
        __Vtemp_h3bd5fbd0__0[1U] = __Vtemp_h694ddbf8__0[1U];
        __Vtemp_h3bd5fbd0__0[2U] = __Vtemp_h694ddbf8__0[2U];
        __Vtemp_h3bd5fbd0__0[3U] = (0x3ffU & __Vtemp_h694ddbf8__0[3U]);
        VL_EXTEND_WW(107,106, __Vtemp_hda9d1e10__0, __Vtemp_h3bd5fbd0__0);
        __Vtemp_h732cc475__0[0U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                     << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
                                                  >> 3U));
        __Vtemp_h732cc475__0[1U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                     << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
                                                  >> 3U));
        __Vtemp_h732cc475__0[2U] = ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                     << 0x1dU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
                                                  >> 3U));
        __Vtemp_h732cc475__0[3U] = (0x3ffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
                                              >> 3U));
        VL_EXTEND_WW(107,106, __Vtemp_h07ab9ce4__0, __Vtemp_h732cc475__0);
        VL_ADD_W(4, __Vtemp_h09d954d5__0, __Vtemp_hda9d1e10__0, __Vtemp_h07ab9ce4__0);
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            = __Vtemp_h09d954d5__0[0U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
            = __Vtemp_h09d954d5__0[1U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
            = __Vtemp_h09d954d5__0[2U];
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[3U] 
            = (0x7ffU & __Vtemp_h09d954d5__0[3U]);
    }
    if (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__r_264_0) {
        vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0__DOT__tile_0_0__DOT__last_s 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__ex_controller__DOT__mesh__DOT__mesh__DOT__mesh_8_0_io_in_control_0_propagate_b;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)) 
         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wmask))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0x3fffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wdata[0U]);
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wmask) 
            >> 1U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0x3fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wdata[1U] 
                             << 0xaU) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wdata[0U] 
                                         >> 0x16U)));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_en) 
          & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_out_bits_write)) 
         & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wmask) 
            >> 2U))) {
        vlSelf->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0x3fffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wdata[2U] 
                             << 0x14U) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_wdata[1U] 
                                          >> 0xcU)));
        vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
}
