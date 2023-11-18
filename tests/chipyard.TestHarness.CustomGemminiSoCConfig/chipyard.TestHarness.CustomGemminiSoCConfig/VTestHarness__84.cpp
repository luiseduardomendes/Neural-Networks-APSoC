// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5344(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5344\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_source[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_param[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data[0U][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data[0U][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data[0U][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data[0U][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_mask[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5345(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5345\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_read_full_acc_row__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_read_full_acc_row[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_read_full_acc_row__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_read_full_acc_row__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___GEN_3));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_176) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_laddr_is_acc_addr 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT__req_bits_laddr_is_acc_addr;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_176) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_pixel_repeats 
            = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer__DOT__req_bits_tag_pixel_repeats) 
                        - (IData)(1U)));
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___T_173) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__underflow))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT__req_bits_pixel_repeats 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__zero_writer_pixel_repeater__DOT___req_bits_pixel_repeats_T_1;
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_5[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T)
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_3)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_size)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5346(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5346\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_2)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor_io_in_d_bits_opcode;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5347(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5347\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__tail__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__tail[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__tail__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__tail__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_noop__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_noop[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_noop__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_rs2__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5348(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5348\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__store_controller__DOT__cmd__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x11U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x12U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x13U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x14U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x15U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x16U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x17U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x18U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x19U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x1fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_1[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_5[0x20U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x11U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x12U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x13U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x14U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x15U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x16U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x17U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x18U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x19U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x1fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_T_2[0x20U]
            : 0U);
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5349(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5349\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x11U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x11U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x12U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x12U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x13U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x13U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x14U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x14U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x15U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x15U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x16U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x16U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x17U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x17U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x18U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x18U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x19U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x19U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x1fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x1fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x20U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x20U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x21U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x21U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x22U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x22U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x23U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x23U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x24U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x24U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x25U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x25U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x26U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x26U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x27U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x27U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x28U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x28U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x29U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x29U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x2fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x2fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x30U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x30U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x31U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x31U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x32U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x32U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x33U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x33U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x34U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x34U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x35U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x35U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x36U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x36U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x37U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x37U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x38U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x38U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x39U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x39U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x3fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x3fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x40U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x40U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x41U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x41U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x42U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x42U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x43U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x43U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x44U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x44U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x45U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x45U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x46U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x46U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x47U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x47U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x48U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x48U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x49U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x49U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x4fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x4fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x50U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x50U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x51U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x51U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x52U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x52U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x53U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x53U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x54U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x54U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x55U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x55U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x56U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x56U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x57U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x57U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x58U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x58U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x59U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x59U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x5fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x5fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x60U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x60U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x61U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x61U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x62U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x62U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x63U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x63U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x64U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x64U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x65U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x65U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x66U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x66U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x67U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x67U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x68U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x68U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x69U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x69U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x6fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x6fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x70U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x70U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x71U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x71U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x72U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x72U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x73U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x73U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x74U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x74U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x75U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x75U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x76U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x76U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x77U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x77U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x78U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x78U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x79U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x79U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7aU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7aU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7bU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7bU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7cU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7cU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7dU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7dU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7eU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7eU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x7fU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x7fU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x80U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x80U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_sizes[0x81U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___inflight_sizes_T_2[0x81U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done)
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___watchdog_T_3)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter1_1));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_param;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_1)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter1_1));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__size 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__size_1 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__aFrag));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5350(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5350\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__opcode_1 
            = (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_bits_opcode));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_done) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__clint__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_a_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__len = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q_io_deq_pop) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__len 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___len_T_6;
        } else {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___T) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT__len 
                    = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__ex_controller__DOT__unrolled_cmd_mod__DOT__q__DOT___len_T_1;
            }
        }
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_0__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_1__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_2__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_3__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_4__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_5__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_6__DOT__probes_toN;
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5351(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5351\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_7__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_8__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__abc_mshrs_9__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__bc_mshr__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__c_mshr__DOT__probes_toN;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__ram_cmd_inst_funct__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__ram_cmd_inst_funct[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__ram_cmd_inst_funct__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__ram_cmd_inst_funct__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_is_acc_addr__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_is_acc_addr[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_is_acc_addr__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_laddr_is_acc_addr__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5352(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5352\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_corrupt__v0] = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_data__v0[3U];
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value_1;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_beat__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_beat[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__io_bs_adr_q__DOT__ram_beat__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__unrolled_cmd__DOT__value_1;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_address[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5353(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5353\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T) 
         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__saved_mask 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_mask_io_deq_bits_MPORT_data;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter_auto_out_d_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_deq_valid)) 
                  & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater_io_repeat)))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___GEN_0)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_data__v0] = VL_ULL(0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_data__v0] = VL_ULL(0);
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_data__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__ram_data__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkD__DOT__d__DOT__value;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__value_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__value_1;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__load_controller__DOT__cmd__DOT__ram_cmd_inst_funct__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5354(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5354\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_pool_en__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_pool_en[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_pool_en__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__write_issue_q__DOT__ram_pool_en__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes_1[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_5[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xaU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xaU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xbU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xbU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xcU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xcU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xdU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xdU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xeU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xeU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0xfU] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0xfU]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0x10U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___inflight_sizes_T_2[0x10U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T)
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_3)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5355(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5355\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_out_a_bits_address;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_2)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5356(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5356\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__data_opcode__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_count;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_T_8)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_T_2
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_T_5
            : VL_ULL(0));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5357(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5357\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_5[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___inflight_sizes_T_5[4U]
            : 0U);
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param_2 
            = (3U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sourceB__DOT__param));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_done) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__b_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__address_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2_auto_in_b_bits_address;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___watchdog_T_3)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (7U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data))) 
                                              >> 4U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param_3 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__address_2 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5358(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5358\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size_3 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_size_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source_3 
            = (0x20U | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___c_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__c_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode_3 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_3)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_size)) 
                                              >> 4U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter1_3)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_3 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_2)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_size)) 
                                              >> 4U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter1_2)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_1)
                          ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_opcode))
                              ? (~ (0x1ffU & (((IData)(0x3fU) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_size)) 
                                              >> 4U)))
                              : 0U) : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5359(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5359\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_sink;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q_io_deq_bits_source;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1 
                = (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_opcode))
                              ? 0U : (~ (0x1ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_1_a_bits_size))) 
                                                   >> 4U))))
                          : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__size 
            = (7U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_1_a_bits_size));
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5360(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5360\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_1_a_bits_address;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_address__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_corrupt[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_corrupt[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_param[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_param[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_param__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5361(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5361\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_opcode[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_opcode[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_mask[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_mask[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data[0U][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data[0U][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data[0U][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data[0U][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data[0U][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data[0U][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data[0U][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data[0U][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_tl_a_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_size[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_size__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_valid 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___GEN_3));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_176) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_laddr_is_acc_addr 
            = (1U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_tag_addr) 
                     >> 0x1fU));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_176) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats 
            = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__vsm__DOT__in_bits_tag_pixel_repeats) 
                        - (IData)(1U)));
    } else {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___T_173) 
             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__underflow))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT___req_bits_pixel_repeats_T_1;
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5362(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5362\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_T_5));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_2)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_1)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5363(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5363\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1];
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                             ? ((4U & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                 [0U]) ? 0U : (~ (0x7fffffU 
                                                  & (((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]) 
                                                     >> 4U))))
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
            [0U];
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5364(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5364\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
            [0U];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
            [0U];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
            [0U];
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT___xactBusy_T_1));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_mxr__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_mxr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_mxr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_mxr__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_mxr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_mxr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_mxr__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_mxr[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_mxr__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_debug__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_debug[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_status_debug__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_debug__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_debug[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__shadow_retry_a__DOT__ram_status_debug__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_debug__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_debug[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_debug__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5365(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5365\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? VL_ULL(0) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[8U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_5[9U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? VL_ULL(0) : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[8U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___inflight_sizes_T_2[9U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg 
                = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__last)) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_out));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_2)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_1)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5366(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5366\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_1)
                             ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                               >> 4U))))
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5367(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5367\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address 
            = (0x7fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address);
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1 
            = (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_2) 
              - ((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_6) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 1U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_10) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 2U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_14) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 3U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5368(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5368\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_18) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 4U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_22) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 5U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_26) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 6U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_30) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 7U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_9 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_34) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 8U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_38) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 9U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5369(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5369\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_11 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_42) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xaU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_46) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xbU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_13 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_50) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xcU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_14 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_54) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xdU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_58) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xeU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_16 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_62) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0xfU) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5370(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5370\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_17 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_66) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0x10U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_18 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_70) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0x11U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_19 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_74) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0x12U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__count_20 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___count_T_78) 
              - (((((IData)(1U) << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                   >> 0x13U) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__d_last)) 
                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT___dec_T_1))));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT__valid 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_1_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__requests__DOT___valid_T_2
            : VL_ULL(0));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__maybe_full = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5371(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5371\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__maybe_full = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq) 
             != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_deq))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full 
                = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__do_enq;
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__QueueCompatibility__DOT__maybe_full = 0U;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__ram_address__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__value;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_T_5));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5372(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5372\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_T_2));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_2 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_2)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter1_2)));
        }
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_1)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5373(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5373\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__source_1 
            = (0xfU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_1)
                             ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                               >> 4U))))
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5374(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5374\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar__DOT__monitor_1__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleOut_0_a_q__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleOut_0_a_q__DOT__value;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer__DOT__bundleOut_0_a_q__DOT__value_1;
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_T_5);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[4U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[5U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[6U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_5[7U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_T_2);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[0U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[1U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[2U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[3U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[4U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[5U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[6U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___inflight_sizes_T_2[7U]);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T)
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___watchdog_T_3));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T))
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___watchdog_T_1));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_2 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_2 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_2)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter1_2)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5375(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5375\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_1)
                             ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))
                                 ? (~ (0x7fffffU & 
                                       (((IData)(0xfffU) 
                                         << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                        >> 4U))) : 0U)
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter1_1)));
        }
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_denied_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__source_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter_1 
                = (0xffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_1)
                             ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_opcode))
                                 ? 0U : (~ (0x7fffffU 
                                            & (((IData)(0xfffU) 
                                                << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_size)) 
                                               >> 4U))))
                             : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter1_1)));
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5376(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5376\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_2__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__xbar_auto_out_a_bits_address;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5377(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5377\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__value 
        = vlTOPp->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__value;
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_opcode__v0;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___T) 
         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_last)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_T_5
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes_1[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_5[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_T_2
            : VL_ULL(0));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[0U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[1U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[2U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[3U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[4U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[5U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[6U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[7U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[8U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes[9U] 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___inflight_sizes_T_2[9U]
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T)
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___watchdog_T_3)
            : 0U);
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)
            ? (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T))
                ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___watchdog_T_1)
            : 0U);
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_1)
                              ? ((4U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode))
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_size)) 
                                                >> 3U))))
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5378(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5378\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_param;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_source;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_opcode;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_2)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter1_2)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2 = 0U;
    }
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) {
        if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1 
                = (0x1ffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_1)
                              ? ((1U & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                                         >> 3U))) : 0U)
                              : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter1_1)));
        }
    } else {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1 = 0U;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__denied 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5379(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5379\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__sink 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_size;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___a_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__address 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_bits_address;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode_1 
            = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode;
    }
    if (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___d_first_T) 
         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter)))) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source_1 
            = (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data));
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full 
        = ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
           & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar_auto_in_0_a_ready) 
                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_deq_valid)) 
                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeat_last))) 
              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___GEN_0)));
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data[0U][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data[0U][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data[0U][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data[0U][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0][0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0[0U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0][1U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0[1U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0][2U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0[2U];
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0][3U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_data__v0[3U];
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt__v0;
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5380(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5380\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_corrupt__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask[0U] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_mask__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_param__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_opcode__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_source__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_size__v0;
    }
    if (vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address[vlTOPp->__Vdlyvdim0__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0] 
            = vlTOPp->__Vdlyvval__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__ram_address__v0;
    }
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__value 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)
            ? 0U : ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__wrap)
                     ? 0U : vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___value_T_1));
    if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset) {
        vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue = 0U;
    } else {
        if ((1U & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___T_4832) 
                      | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___T_4902)) 
                     | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___T_4867)) 
                    | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_io_busy))) 
                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)))) {
            vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue = 0U;
        } else {
            if (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_io_busy) {
                vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__cycles_since_issue 
                    = vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___cycles_since_issue_T_1;
            }
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5381(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5381\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17799)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17799)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17799))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17799))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17799));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17798)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17798)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((2U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17798))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17798))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17798));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17797)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17797)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((1U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17797))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17797))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17797));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5382(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5382\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_st_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17796)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17796)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17796))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17796))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17796));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17803)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17803)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17803))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17803))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17803));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17802)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17802)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((2U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17802))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17802))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17802));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5383(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5383\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17801)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17801)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((1U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17801))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17801))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17801));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_1_bits_deps_st_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17800)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17800)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17800))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17800))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17800));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17807)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17807)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17807))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17807))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17807));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5384(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5384\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17806)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17806)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((2U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17806))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17806))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17806));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17805)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17805)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((1U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17805))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17805))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17805));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_2_bits_deps_st_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17804)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17804)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17804))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17804))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17804));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5385(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5385\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17811)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17811)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((3U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17811))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17811))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17811));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17810)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17810)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((2U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17810))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17810))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17810));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17809)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17809)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((1U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17809))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17809))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17809));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5386(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5386\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_3_bits_deps_st_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17808)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17808)
                    : ((2U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                     >> 4U))) ? ((0U 
                                                  != 
                                                  (3U 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17808))
                        : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17808))))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17808));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_7 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((7U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14823))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14823))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14823));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_6 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((6U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14822))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14822))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14822));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_5 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((5U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14821))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14821))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14821));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5387(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5387\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_4 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((4U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14820))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14820))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14820));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_3 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((3U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14819))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14819))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14819));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_2 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((2U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14818))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14818))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14818));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_1 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((1U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14817))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14817))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14817));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ld_0 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? ((0U != (7U 
                                                 & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14816))
                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14816))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_14816));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5388(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5388\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_15 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17163)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xfU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17163))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17163)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17163));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_14 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17162)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xeU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17162))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17162)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17162));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_13 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17161)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xdU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17161))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17161)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17161));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_12 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17160)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xcU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17160))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17160)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17160));
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__5389(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__5389\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_11 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17159)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xbU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17159))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17159)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17159));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_10 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17158)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((0xaU 
                                              != (0xfU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17158))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17158)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17158));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_9 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17157)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((9U != 
                                              (0xfU 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17157))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17157)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17157));
    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT__entries_st_0_bits_deps_ex_8 
        = ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_valid)
            ? ((0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                             >> 4U))) ? (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17156)
                : ((1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits) 
                                 >> 4U))) ? ((8U != 
                                              (0xfU 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station_completed_arb_io_out_bits))) 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17156))
                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17156)))
            : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__reservation_station__DOT___GEN_17156));
}
