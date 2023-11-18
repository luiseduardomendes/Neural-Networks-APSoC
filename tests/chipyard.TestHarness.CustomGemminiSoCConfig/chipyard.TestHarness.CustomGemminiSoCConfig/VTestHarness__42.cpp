// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "VTestHarness.h"
#include "VTestHarness__Syms.h"

#include "verilated_dpi.h"

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4348(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4348\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__c__DOT__ram_address__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132560:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_0)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_1)))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132563: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.subsystem_mbus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 132563, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132571:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132584:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_0) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_1)))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132587: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.subsystem_mbus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 132587, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132595:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_0) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT__earlyWinner_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132608:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                 | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))) 
                             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___T_10))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132611: Assertion failed in %NTestHarness.chiptop.system.subsystem_mbus.subsystem_mbus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 132611, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:132619:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_mbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4_auto_in_d_valid) 
                                   | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_mbus__DOT__subsystem_mbus_xbar__DOT___T_10)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4349(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4349\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_corrupt__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_param__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_opcode__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_mask__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_data__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_tl_a_size__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:239902:11
done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_valid) 
                           & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_laddr_is_acc_addr)) 
                          & (0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:239905: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.mvin_scale_pixel_repeater\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 239905, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:239913:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_valid) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_laddr_is_acc_addr)) 
                            & (0U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__mvin_scale_pixel_repeater__DOT__req_bits_pixel_repeats)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at PixelRepeater.scala:58 assert(!(req.valid && is_acc_addr && req.bits.pixel_repeats > 0.U))\n");
        }
    }
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__mods_0__DOT__sinkC__DOT__putbuffer__DOT__data_corrupt__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85553:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1)))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85556: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 85556, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85564:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((2U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85577:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid))) 
                             | ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1)))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85580: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 85580, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85588:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid))) 
                               | ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__earlyWinner_1))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85601:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                 | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid))) 
                             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_12))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85604: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 85604, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:85612:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_cbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                         & (~ ((~ ((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state)) 
                                   | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__source_i_valid))) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___T_12)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4350(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4350\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*127:0*/ __Vtemp8890[4];
    WData/*127:0*/ __Vtemp8893[4];
    WData/*127:0*/ __Vtemp8894[4];
    WData/*127:0*/ __Vtemp8897[4];
    WData/*127:0*/ __Vtemp8900[4];
    WData/*127:0*/ __Vtemp8901[4];
    WData/*127:0*/ __Vtemp8904[4];
    WData/*127:0*/ __Vtemp8907[4];
    WData/*127:0*/ __Vtemp8908[4];
    WData/*127:0*/ __Vtemp8911[4];
    WData/*127:0*/ __Vtemp8914[4];
    WData/*127:0*/ __Vtemp8915[4];
    // Body
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227789:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                        [0U]) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227792: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227792, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                          [0U]) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227813:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227816: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227816, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227824:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                          & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227837:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227840: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227840, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227861:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227864: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227864, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227885:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227888: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227888, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227909:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffffU & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                            [0U]))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227912: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227912, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227920:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffffU & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                              [0U])))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227933:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U] & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227936: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227936, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227957:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                        [0U]) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227960: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227960, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                          [0U]) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227981:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227984: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 227984, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:227992:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                          & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                             [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228005:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228008: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228008, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228029:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228032: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228032, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228053:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228056: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228056, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228077:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228080: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228080, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228101:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffffU & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                            [0U]))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228104: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228104, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffffU & (~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                              [0U])))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228125:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U] & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228128: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228128, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228149:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0xcU < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228152: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228152, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0xcU < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228173:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                             | ((6U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                 [0U]) & ((((((((((VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1ffffb000) 
                                                    & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1ffff0000) 
                                                      & (QData)((IData)(
                                                                        (0x10000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1ffff0000) 
                                                     & (QData)((IData)(
                                                                       (0x20000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffef000) 
                                                    & (QData)((IData)(
                                                                      (0x100000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1ffff0000) 
                                                   & (QData)((IData)(
                                                                     (0x2000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x2010000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fc000000) 
                                                 & (QData)((IData)(
                                                                   (0xc000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x10000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                          | (VL_ULL(0) 
                                             == (VL_ULL(0x1f0000000) 
                                                 & (QData)((IData)(
                                                                   (0x80000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228176: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228176, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228184:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                               | ((6U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                   [0U]) & ((((((((
                                                   ((VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1ffffb000) 
                                                      & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                    | (VL_ULL(0) 
                                                       == 
                                                       (VL_ULL(0x1ffff0000) 
                                                        & (QData)((IData)(
                                                                          (0x10000U 
                                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                   | (VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1ffff0000) 
                                                       & (QData)((IData)(
                                                                         (0x20000U 
                                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1fffef000) 
                                                      & (QData)((IData)(
                                                                        (0x100000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1ffff0000) 
                                                     & (QData)((IData)(
                                                                       (0x2000000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffff000) 
                                                    & (QData)((IData)(
                                                                      (0x2010000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x10000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x54000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1f0000000) 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228197:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228200: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228200, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228221:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228224: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228224, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228232:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228245:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228248: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228248, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228256:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228269:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U] & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228272: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228272, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (4U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228293:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                       | ((6U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          ((((((((VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1fffef000) 
                                                     & (QData)((IData)(
                                                                       (0x100000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1ffff0000) 
                                                    & (QData)((IData)(
                                                                      (0x2000000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x2010000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fc000000) 
                                                  & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x54000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1f0000000) 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228296: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228296, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228304:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                         | ((6U >= 
                                             vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                             [0U]) 
                                            & ((((((((VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1ffffb000) 
                                                       & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                     | (VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1fffef000) 
                                                         & (QData)((IData)(
                                                                           (0x100000U 
                                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                    | (VL_ULL(0) 
                                                       == 
                                                       (VL_ULL(0x1ffff0000) 
                                                        & (QData)((IData)(
                                                                          (0x2000000U 
                                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                   | (VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1fffff000) 
                                                       & (QData)((IData)(
                                                                         (0x2010000U 
                                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1fc000000) 
                                                      & (QData)((IData)(
                                                                        (0xc000000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1fffff000) 
                                                     & (QData)((IData)(
                                                                       (0x10000000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffff000) 
                                                    & (QData)((IData)(
                                                                      (0x54000000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1f0000000) 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228317:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228320: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228320, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228328:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228341:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228344: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228344, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228352:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228365:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228368: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228368, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228376:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228389:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                       | ((6U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          ((((((((VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1ffffb000) 
                                                   & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1fffef000) 
                                                     & (QData)((IData)(
                                                                       (0x100000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1ffff0000) 
                                                    & (QData)((IData)(
                                                                      (0x2000000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x2010000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1fc000000) 
                                                  & (QData)((IData)(
                                                                    (0xc000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fffff000) 
                                                   & (QData)((IData)(
                                                                     (0x54000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1f0000000) 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228392: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228392, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                         | ((6U >= 
                                             vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                             [0U]) 
                                            & ((((((((VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1ffffb000) 
                                                       & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                     | (VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1fffef000) 
                                                         & (QData)((IData)(
                                                                           (0x100000U 
                                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                    | (VL_ULL(0) 
                                                       == 
                                                       (VL_ULL(0x1ffff0000) 
                                                        & (QData)((IData)(
                                                                          (0x2000000U 
                                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                   | (VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1fffff000) 
                                                       & (QData)((IData)(
                                                                         (0x2010000U 
                                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1fc000000) 
                                                      & (QData)((IData)(
                                                                        (0xc000000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                 | (VL_ULL(0) 
                                                    == 
                                                    (VL_ULL(0x1fffff000) 
                                                     & (QData)((IData)(
                                                                       (0x10000000U 
                                                                        ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffff000) 
                                                    & (QData)((IData)(
                                                                      (0x54000000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1f0000000) 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228413:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228416: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228416, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228437:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228440: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228440, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228448:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228461:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                 [0U] & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228464: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228464, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228472:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (1U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                                   [0U] & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228485:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & (((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                         [0U]) & ((
                                                   (((((VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1ffffb000) 
                                                         & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                       | (VL_ULL(0) 
                                                          == 
                                                          (VL_ULL(0x1fffff000) 
                                                           & (QData)((IData)(
                                                                             (0x3000U 
                                                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                      | (VL_ULL(0) 
                                                         == 
                                                         (VL_ULL(0x1fffef000) 
                                                          & (QData)((IData)(
                                                                            (0x100000U 
                                                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                     | (VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1ffff0000) 
                                                         & (QData)((IData)(
                                                                           (0x2000000U 
                                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                    | (VL_ULL(0) 
                                                       == 
                                                       (VL_ULL(0x1fffff000) 
                                                        & (QData)((IData)(
                                                                          (0x2010000U 
                                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                   | (VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1fc000000) 
                                                       & (QData)((IData)(
                                                                         (0xc000000U 
                                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1fffff000) 
                                                      & (QData)((IData)(
                                                                        (0x54000000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))) 
                                       | ((4U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          ((VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1f0000000) 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228488: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228488, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228496:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & (((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          (((((((VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffff000) 
                                                    & (QData)((IData)(
                                                                      (0x3000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffef000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))) 
                                         | ((4U >= 
                                             vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                             [0U]) 
                                            & ((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1f0000000) 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228509:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228512: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228512, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228520:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228533:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228536: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228536, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228557:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228560: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228560, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228568:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228581:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & (((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                         [0U]) & ((
                                                   (((((VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1ffffb000) 
                                                         & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                       | (VL_ULL(0) 
                                                          == 
                                                          (VL_ULL(0x1fffff000) 
                                                           & (QData)((IData)(
                                                                             (0x3000U 
                                                                              ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                      | (VL_ULL(0) 
                                                         == 
                                                         (VL_ULL(0x1fffef000) 
                                                          & (QData)((IData)(
                                                                            (0x100000U 
                                                                             ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                     | (VL_ULL(0) 
                                                        == 
                                                        (VL_ULL(0x1ffff0000) 
                                                         & (QData)((IData)(
                                                                           (0x2000000U 
                                                                            ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                    | (VL_ULL(0) 
                                                       == 
                                                       (VL_ULL(0x1fffff000) 
                                                        & (QData)((IData)(
                                                                          (0x2010000U 
                                                                           ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                   | (VL_ULL(0) 
                                                      == 
                                                      (VL_ULL(0x1fc000000) 
                                                       & (QData)((IData)(
                                                                         (0xc000000U 
                                                                          ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                                  | (VL_ULL(0) 
                                                     == 
                                                     (VL_ULL(0x1fffff000) 
                                                      & (QData)((IData)(
                                                                        (0x54000000U 
                                                                         ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))) 
                                       | ((4U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          ((VL_ULL(0) 
                                            == (VL_ULL(0x1fffff000) 
                                                & (QData)((IData)(
                                                                  (0x10000000U 
                                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1f0000000) 
                                                  & (QData)((IData)(
                                                                    (0x80000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228584: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228584, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228592:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & (((3U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & 
                                          (((((((VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffffb000) 
                                                  & (QData)((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))) 
                                                | (VL_ULL(0) 
                                                   == 
                                                   (VL_ULL(0x1fffff000) 
                                                    & (QData)((IData)(
                                                                      (0x3000U 
                                                                       ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1fffef000) 
                                                   & (QData)((IData)(
                                                                     (0x100000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                              | (VL_ULL(0) 
                                                 == 
                                                 (VL_ULL(0x1ffff0000) 
                                                  & (QData)((IData)(
                                                                    (0x2000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                             | (VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x2010000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                            | (VL_ULL(0) 
                                               == (VL_ULL(0x1fc000000) 
                                                   & (QData)((IData)(
                                                                     (0xc000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address)))))) 
                                           | (VL_ULL(0) 
                                              == (VL_ULL(0x1fffff000) 
                                                  & (QData)((IData)(
                                                                    (0x54000000U 
                                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))) 
                                         | ((4U >= 
                                             vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                             [0U]) 
                                            & ((VL_ULL(0) 
                                                == 
                                                (VL_ULL(0x1fffff000) 
                                                 & (QData)((IData)(
                                                                   (0x10000000U 
                                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))) 
                                               | (VL_ULL(0) 
                                                  == 
                                                  (VL_ULL(0x1f0000000) 
                                                   & (QData)((IData)(
                                                                     (0x80000000U 
                                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address))))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228605:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228608: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228608, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228616:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228629:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228632: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228632, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228640:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (3U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228653:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228656: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228656, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (3U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228677:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                              [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                       | ((6U >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                           [0U]) & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228680: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228680, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228688:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xcU >= vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                [0U]) & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_418) 
                                         | ((6U >= 
                                             vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                             [0U]) 
                                            & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___T_99)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228701:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                    [0U])))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228704: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228704, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228712:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                                                      [0U]))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228725:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228728: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228728, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228736:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (1U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228749:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228752: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228752, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228760:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_mask
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228773:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U] & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228776: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228776, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228784:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (5U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                              [0U])) & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_corrupt
                         [0U]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228797:11
done_reset        
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)) 
                         & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228800: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228800, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228808:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228821:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228824: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228824, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228832:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228845:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228848: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228848, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228856:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228869:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228872: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228872, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228880:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228893:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228896: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228896, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228904:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228917:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228920: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228920, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228928:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228941:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228944: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228944, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228952:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228965:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228968: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228968, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228976:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228989:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:228992: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 228992, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229000:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229013:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229016: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229016, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229024:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229037:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229040: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229040, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229048:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229061:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229064: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229064, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229072:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229085:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229088: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229088, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229096:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229109:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229112: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229112, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229120:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229133:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229136: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229136, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229144:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229157:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229160: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229160, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229168:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229181:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                              [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                             | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                             [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229184: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229184, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229192:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                                [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                               | vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                               [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229205:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229208: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229208, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229216:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1])))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229229:11
done_reset        
    ) {
        if (VL_UNLIKELY((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229232: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229232, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229240:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_corrupt
                         [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1]))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229253:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229256: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229256, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229264:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229277:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229280: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229280, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229288:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_param
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229301:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229304: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229304, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229312:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229325:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229328: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229328, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229336:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229349:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                          != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229352: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229352, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229360:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_bits_address 
                            != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229373:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229376: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229376, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229384:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229397:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229400: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229400, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229408:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_param
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229421:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229424: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229424, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229432:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229445:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source_1)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229448: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229448, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229469:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__sink)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229472: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229472, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229480:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_sink
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229493:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                          [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__denied)) 
                         & (((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229496: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229496, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_denied
                            [vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__value_1] 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229517:11
done_reset        
    ) {
        if (VL_UNLIKELY((0xffffU & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                     >> vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                     [0U]) & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                               & (0U 
                                                  == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                              & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229520: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229520, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((0xffffU & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_first_T) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                     & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                                    & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                       >> vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                       [0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229541:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                         >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                   [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229544: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229544, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                               | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                     [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229565:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                   [0U]) ? 4U : ((6U 
                                                  == 
                                                  vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                                  [0U])
                                                  ? 4U
                                                  : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U]) ? 4U : (
                                                   (6U 
                                                    == 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                                    [0U])
                                                    ? 5U
                                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                   [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229568: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229568, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                 [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                     [0U]) ? 4U : (
                                                   (6U 
                                                    == 
                                                    vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                                    [0U])
                                                    ? 4U
                                                    : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                       [0U]) ? 4U : 
                                      ((6U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_opcode
                                        [0U]) ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229589:11
done_reset        
    ) {
        if (VL_UNLIKELY(((vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                          [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                   [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229592: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229592, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                 [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_size
                            [0U] != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229613:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                              == ((7U == (7U & (IData)(
                                                       (VL_ULL(7) 
                                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                           >> 1U)))))
                                   ? 4U : ((6U == (7U 
                                                   & (IData)(
                                                             (VL_ULL(7) 
                                                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                 >> 1U)))))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & (IData)(
                                                         (VL_ULL(7) 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))
                                     ? 4U : ((6U == 
                                              (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                      [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229616: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229616, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                    [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                == ((7U == (7U & (IData)(
                                                         (VL_ULL(7) 
                                                          & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                             >> 1U)))))
                                     ? 4U : ((6U == 
                                              (7U & (IData)(
                                                            (VL_ULL(7) 
                                                             & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                                >> 1U)))))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data) 
                                  == ((7U == (7U & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & (IData)(
                                                           (VL_ULL(7) 
                                                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___a_opcode_lookup_T_1 
                                                               >> 1U)))))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229637:11
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp8890, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp8893[0U] = (0x7fU & (__Vtemp8890[0U] 
                                    >> 1U));
        __Vtemp8893[1U] = 0U;
        __Vtemp8893[2U] = 0U;
        __Vtemp8893[3U] = 0U;
        VL_EXTEND_WW(128,127, __Vtemp8894, __Vtemp8893);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp8894[0U])) 
                         & (((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                   & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                      [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229640: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229640, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229648:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp8897, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp8900[0U] = (0x7fU & (__Vtemp8897[0U] 
                                    >> 1U));
        __Vtemp8900[1U] = 0U;
        __Vtemp8900[2U] = 0U;
        __Vtemp8900[3U] = 0U;
        VL_EXTEND_WW(128,127, __Vtemp8901, __Vtemp8900);
        if (VL_UNLIKELY(((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                 & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                    [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp8901[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229661:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy)))) 
                             | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full)))) 
                         & (((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid)) 
                              & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                                 [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229664: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229664, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer_auto_out_a_valid)) 
                            & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__translate_q__DOT__ram_tl_a_source
                               [0U] == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ (IData)((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__xactBusy)))) 
                               | (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleOut_0_a_q__DOT__full))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229683:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_set_wo_ready) 
                                    != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                         ? (0xffffU 
                                            & ((IData)(1U) 
                                               << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                         : 0U)) | (~ (IData)(
                                                             (0U 
                                                              != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_set_wo_ready)))))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229686: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229686, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229694:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_set_wo_ready) 
                                      != ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data)))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))
                                           : 0U)) | 
                                     (~ (IData)((0U 
                                                 != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__a_set_wo_ready)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229707:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229710: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229710, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229718:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight)))) 
                                      | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229731:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_1) 
                                        >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229734: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229734, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229742:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (0xffffU & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_1) 
                                          >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229755:11
done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp8904, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp8907[0U] = (0x7fU & (__Vtemp8904[0U] 
                                    >> 1U));
        __Vtemp8907[1U] = 0U;
        __Vtemp8907[2U] = 0U;
        __Vtemp8907[3U] = 0U;
        VL_EXTEND_WW(128,127, __Vtemp8908, __Vtemp8907);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp8908[0U])) 
                         & ((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229758: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229758, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229766:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(128,128,7, __Vtemp8911, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes_1, 
                      ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                       << 3U));
        __Vtemp8914[0U] = (0x7fU & (__Vtemp8911[0U] 
                                    >> 1U));
        __Vtemp8914[1U] = 0U;
        __Vtemp8914[2U] = 0U;
        __Vtemp8914[3U] = 0U;
        VL_EXTEND_WW(128,127, __Vtemp8915, __Vtemp8914);
        if (VL_UNLIKELY((((((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_opcode_io_deq_bits_MPORT_data))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp8915[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229779:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_1)))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229782: Assertion failed in %NTestHarness.chiptop.system.tile_prci_domain.tile_reset_domain.tile.gemmini.spad.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 229782, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:229790:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__inflight_1)))) 
                                      | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__watchdog_1 
                                        < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at Scratchpad.scala:201:27)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}

VL_INLINE_OPT void VTestHarness::_sequent__TOP__4351(VTestHarness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness::_sequent__TOP__4351\n"); );
    VTestHarness* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    // Begin mtask footprint all: 
    WData/*159:0*/ __Vtemp8920[5];
    WData/*159:0*/ __Vtemp8921[5];
    WData/*159:0*/ __Vtemp8926[5];
    WData/*159:0*/ __Vtemp8927[5];
    WData/*159:0*/ __Vtemp8932[5];
    WData/*159:0*/ __Vtemp8933[5];
    WData/*159:0*/ __Vtemp8938[5];
    WData/*159:0*/ __Vtemp8939[5];
    WData/*159:0*/ __Vtemp8944[5];
    WData/*159:0*/ __Vtemp8945[5];
    WData/*159:0*/ __Vtemp8950[5];
    WData/*159:0*/ __Vtemp8951[5];
    WData/*159:0*/ __Vtemp8956[5];
    WData/*159:0*/ __Vtemp8957[5];
    WData/*159:0*/ __Vtemp8962[5];
    WData/*159:0*/ __Vtemp8963[5];
    WData/*319:0*/ __Vtemp8966[10];
    WData/*319:0*/ __Vtemp8969[10];
    WData/*319:0*/ __Vtemp8970[10];
    WData/*319:0*/ __Vtemp8973[10];
    WData/*319:0*/ __Vtemp8976[10];
    WData/*319:0*/ __Vtemp8977[10];
    WData/*319:0*/ __Vtemp8980[10];
    WData/*319:0*/ __Vtemp8983[10];
    WData/*319:0*/ __Vtemp8984[10];
    WData/*319:0*/ __Vtemp8987[10];
    WData/*319:0*/ __Vtemp8990[10];
    WData/*319:0*/ __Vtemp8991[10];
    // Body
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_mxr__v0 = 0U;
    vlTOPp->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain__DOT__tile__DOT__gemmini__DOT__spad__DOT__writer__DOT__tlb_q__DOT__ram_status_debug__v0 = 0U;
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23397:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23400: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23400, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23408:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23421:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_232)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23424: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23424, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23432:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_232))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23445:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23448: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23448, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23456:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23469:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23472: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23472, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23480:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23493:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23496: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23496, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23504:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23517:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23520: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23520, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23528:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23541:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23544: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23544, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23552:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23565:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23568: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23568, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23576:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23589:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23592: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23592, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23600:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                          & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23613:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_232)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23616: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23616, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23624:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_232))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23637:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23640: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23640, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23648:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23661:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23664: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23664, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23672:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23685:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23688: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23688, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23696:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23709:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23712: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23712, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23720:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23733:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23736: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23736, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23744:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23757:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23760: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23760, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23768:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xffffU & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23781:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23784: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23784, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23792:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23805:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23808: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23808, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23816:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23829:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                             | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                & (((((((0U == (0x7fffb000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                        | (0U == (0x7fff0000U 
                                                  & (0x10000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffef000U 
                                                 & (0x100000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7fff0000U 
                                                & (0x2000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x2010000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                    | (0U == (0x7c000000U 
                                              & (0xc000000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                   | (0U == (0x7ffff000U 
                                             & (0x54000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23832: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23832, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23840:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                               | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                  & (((((((0U == (0x7fffb000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                          | (0U == 
                                             (0x7fff0000U 
                                              & (0x10000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7ffef000U 
                                                   & (0x100000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7fff0000U 
                                                  & (0x2000000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffff000U 
                                                 & (0x2010000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23853:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23856: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23856, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23864:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23877:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23880: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23880, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23888:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23901:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23904: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23904, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23912:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23925:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23928: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23928, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23936:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23949:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23952: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23952, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23960:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23973:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                   & ((((((0U == (0x7fffb000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                          | (0U == 
                                             (0x7ffef000U 
                                              & (0x100000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7fff0000U 
                                                   & (0x2000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x2010000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7c000000U 
                                                 & (0xc000000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7ffff000U 
                                                & (0x54000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23976: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 23976, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23984:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                                  | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                     & ((((((0U == 
                                             (0x7fffb000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                            | (0U == 
                                               (0x7ffef000U 
                                                & (0x100000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                           | (0U == 
                                              (0x7fff0000U 
                                               & (0x2000000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                          | (0U == 
                                             (0x7ffff000U 
                                              & (0x2010000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x54000000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:23997:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24000: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24000, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24008:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24021:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24024: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24024, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24032:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24045:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24048: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24048, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24056:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24069:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24072: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24072, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24080:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24093:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                             & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                                | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                   & ((((((0U == (0x7fffb000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                          | (0U == 
                                             (0x7ffef000U 
                                              & (0x100000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7fff0000U 
                                                   & (0x2000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x2010000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7c000000U 
                                                 & (0xc000000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7ffff000U 
                                                & (0x54000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24096: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24096, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24104:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                               & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491) 
                                  | ((6U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                     & ((((((0U == 
                                             (0x7fffb000U 
                                              & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                            | (0U == 
                                               (0x7ffef000U 
                                                & (0x100000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                           | (0U == 
                                              (0x7fff0000U 
                                               & (0x2000000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                          | (0U == 
                                             (0x7ffff000U 
                                              & (0x2010000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7c000000U 
                                                   & (0xc000000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x54000000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24117:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24120: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24120, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24128:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24141:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24144: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24144, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24152:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24165:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24168: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24168, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24176:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24189:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                                 & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24192: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24192, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24200:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                                   & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24213:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                             & ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                & (((((((0U == (0x7fffb000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x3000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffef000U 
                                                 & (0x100000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7fff0000U 
                                                & (0x2000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x2010000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                    | (0U == (0x7c000000U 
                                              & (0xc000000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                   | (0U == (0x7ffff000U 
                                             & (0x54000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24216: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24216, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24224:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                               & ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                  & (((((((0U == (0x7fffb000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                          | (0U == 
                                             (0x7ffff000U 
                                              & (0x3000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7ffef000U 
                                                   & (0x100000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7fff0000U 
                                                  & (0x2000000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffff000U 
                                                 & (0x2010000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24237:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24240: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24240, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24248:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24261:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24264: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24264, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24272:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24285:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24288: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24288, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24296:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24309:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24312: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24312, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24320:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24333:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                             & ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                & (((((((0U == (0x7fffb000U 
                                                & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                        | (0U == (0x7ffff000U 
                                                  & (0x3000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffef000U 
                                                 & (0x100000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7fff0000U 
                                                & (0x2000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x2010000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                    | (0U == (0x7c000000U 
                                              & (0xc000000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                   | (0U == (0x7ffff000U 
                                             & (0x54000000U 
                                                ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24336: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24336, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24344:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                               & ((3U >= (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)) 
                                  & (((((((0U == (0x7fffb000U 
                                                  & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)) 
                                          | (0U == 
                                             (0x7ffff000U 
                                              & (0x3000U 
                                                 ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                         | (0U == (0x7ffef000U 
                                                   & (0x100000U 
                                                      ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                        | (0U == (0x7fff0000U 
                                                  & (0x2000000U 
                                                     ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                       | (0U == (0x7ffff000U 
                                                 & (0x2010000U 
                                                    ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                      | (0U == (0x7c000000U 
                                                & (0xc000000U 
                                                   ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))) 
                                     | (0U == (0x7ffff000U 
                                               & (0x54000000U 
                                                  ^ vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24357:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24360: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24360, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24368:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24381:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24384: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24384, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24392:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24405:11
done_reset        
    ) {
        if (VL_UNLIKELY(((3U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24408: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24408, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24416:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (3U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24429:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24432: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24432, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24440:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (3U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24453:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24456: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24456, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24464:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_95) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_491)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24477:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                >> 4U)))) 
                               | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                             | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24480: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24480, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24488:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (0x20U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24501:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                           & (~ (0x7ffffffU 
                                                 & ((IData)(0xfffU) 
                                                    << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size))))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24504: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24504, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24512:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (0xfffU & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address 
                                             & (~ (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size)))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24525:11
done_reset        
    ) {
        if (VL_UNLIKELY(((1U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24528: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24528, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24536:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (1U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24549:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24552: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24552, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24560:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_mask) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24573:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24576: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24576, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24584:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24597:11
done_reset        
    ) {
        if (VL_UNLIKELY(((6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24600: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24600, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24608:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (6U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24621:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24624: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24624, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24632:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24645:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24648: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24648, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24656:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24669:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24672: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24672, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24680:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24693:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24696: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24696, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24704:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24717:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24720: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24720, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24728:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24741:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24744: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24744, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24752:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24765:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24768: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24768, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24776:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24789:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24792: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24792, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24800:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24813:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24816: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24816, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24824:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24837:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24840: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24840, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24848:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24861:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24864: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24864, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24872:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (4U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24885:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24888: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24888, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24896:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24909:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24912: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24912, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24920:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                          & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                         & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24933:11
done_reset        
    ) {
        if (VL_UNLIKELY(((4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24936: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24936, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24944:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (4U > (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24957:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24960: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24960, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24968:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U < (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24981:11
done_reset        
    ) {
        if (VL_UNLIKELY(((2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24984: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 24984, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:24992:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25005:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25008: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25008, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25016:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (5U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25029:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25032: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25032, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25040:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25053:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25056: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25056, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25064:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25077:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25080: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25080, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25088:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25101:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25104: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25104, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25112:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25125:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25128: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25128, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25136:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25149:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                                | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25152: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25152, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25160:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (1U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied)) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                                  | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25173:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((((((0x24U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                 | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                 >> 4U)))) 
                                | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                >> 4U)))) 
                               | (0x20U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                              | (0x21U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25176: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25176, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25184:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((((((0x24U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))) 
                                   | (1U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                   >> 4U)))) 
                                  | (0U == (3U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                                  >> 4U)))) 
                                 | (0x20U == (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                                | (0x21U == (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                               | (0x22U == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25197:11
done_reset        
    ) {
        if (VL_UNLIKELY(((0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25200: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25200, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25208:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25221:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                          | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25224: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25224, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25232:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (2U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_corrupt) 
                            | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__corrupt_reg))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25245:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25248: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25248, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25256:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25269:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25272: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25272, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25280:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_param) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25293:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25296: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25296, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25304:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25317:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25320: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25320, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25328:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25341:11
done_reset        
    ) {
        if (VL_UNLIKELY((((0x7fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address) 
                          != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25344: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25344, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25352:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((0x7fffffffU & vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_3_0_a_bits_address) 
                            != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address)))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25365:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25368: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25368, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25376:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25389:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25392: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25392, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25400:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_param_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25413:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25416: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25416, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25424:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25437:11
done_reset        
    ) {
        if (VL_UNLIKELY((((0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25440: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25440, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25448:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25461:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25464: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25464, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25472:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_sink_io_deq_bits_MPORT_data) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25485:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied)) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25488: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25488, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25496:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                           & (0U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_denied) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25509:11
done_reset        
    ) {
        if (VL_UNLIKELY(((IData)((VL_ULL(0x1fffffffff) 
                                  & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                     >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))) 
                         & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25512: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25512, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25520:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_first_T) 
                           & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (IData)((VL_ULL(0x1fffffffff) 
                                    & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25533:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((IData)((VL_ULL(0x1fffffffff) 
                                      & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                         >> (0x3fU 
                                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                             | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                   == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25536: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25536, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25544:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((IData)((VL_ULL(0x1fffffffff) 
                                        & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                           >> (0x3fU 
                                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                               | (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                   & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                  & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                     == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25557:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                              == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                   ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_30)))))) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                   == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25560: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25560, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25568:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                 == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                     ? 4U : ((6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_30)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                  == ((7U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                       ? 4U : ((6U 
                                                == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_opcode))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_30))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25581:11
done_reset        
    ) {
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size) 
                          != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data)) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                             & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                   == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25584: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25584, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25592:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                           & (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                 == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_size) 
                            != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25605:11
done_reset        
    ) {
        __Vtemp8920[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8920[1U] = 0U;
        __Vtemp8920[2U] = 0U;
        __Vtemp8920[3U] = 0U;
        __Vtemp8920[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8921, __Vtemp8920);
        __Vtemp8926[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8926[1U] = 0U;
        __Vtemp8926[2U] = 0U;
        __Vtemp8926[3U] = 0U;
        __Vtemp8926[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8927, __Vtemp8926);
        __Vtemp8932[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8932[1U] = 0U;
        __Vtemp8932[2U] = 0U;
        __Vtemp8932[3U] = 0U;
        __Vtemp8932[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8933, __Vtemp8932);
        __Vtemp8938[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8938[1U] = 0U;
        __Vtemp8938[2U] = 0U;
        __Vtemp8938[3U] = 0U;
        __Vtemp8938[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8939, __Vtemp8938);
        if (VL_UNLIKELY(((~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                              == ((7U == (7U & __Vtemp8921[0U]))
                                   ? 4U : ((6U == (7U 
                                                   & __Vtemp8927[0U]))
                                            ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                             | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                == ((7U == (7U & __Vtemp8933[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp8939[0U]))
                                              ? 5U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_46)))))) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                      == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25608: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25608, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25616:11
verbose&&done_reset        
    ) {
        __Vtemp8944[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8944[1U] = 0U;
        __Vtemp8944[2U] = 0U;
        __Vtemp8944[3U] = 0U;
        __Vtemp8944[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8945, __Vtemp8944);
        __Vtemp8950[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8950[1U] = 0U;
        __Vtemp8950[2U] = 0U;
        __Vtemp8950[3U] = 0U;
        __Vtemp8950[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8951, __Vtemp8950);
        __Vtemp8956[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8956[1U] = 0U;
        __Vtemp8956[2U] = 0U;
        __Vtemp8956[3U] = 0U;
        __Vtemp8956[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8957, __Vtemp8956);
        __Vtemp8962[0U] = (7U & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___a_opcode_lookup_T_1[0U] 
                                 >> 1U));
        __Vtemp8962[1U] = 0U;
        __Vtemp8962[2U] = 0U;
        __Vtemp8962[3U] = 0U;
        __Vtemp8962[4U] = 0U;
        VL_EXTEND_WW(148,147, __Vtemp8963, __Vtemp8962);
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                    == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                == ((7U == (7U & __Vtemp8945[0U]))
                                     ? 4U : ((6U == 
                                              (7U & 
                                               __Vtemp8951[0U]))
                                              ? 4U : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_46)))) 
                               | ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode) 
                                  == ((7U == (7U & 
                                              __Vtemp8957[0U]))
                                       ? 4U : ((6U 
                                                == 
                                                (7U 
                                                 & __Vtemp8963[0U]))
                                                ? 5U
                                                : (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___GEN_46))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25629:11
done_reset        
    ) {
        VL_SHIFTR_WWI(296,296,9, __Vtemp8966, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes, 
                      (0x1f8U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 << 3U)));
        __Vtemp8969[0U] = (0x7fU & (__Vtemp8966[0U] 
                                    >> 1U));
        __Vtemp8969[1U] = 0U;
        __Vtemp8969[2U] = 0U;
        __Vtemp8969[3U] = 0U;
        __Vtemp8969[4U] = 0U;
        __Vtemp8969[5U] = 0U;
        __Vtemp8969[6U] = 0U;
        __Vtemp8969[7U] = 0U;
        __Vtemp8969[8U] = 0U;
        __Vtemp8969[9U] = 0U;
        VL_EXTEND_WW(296,295, __Vtemp8970, __Vtemp8969);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp8970[0U])) 
                         & (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                              & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                             & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                    & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                   & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                      == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25632: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25632, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25640:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(296,296,9, __Vtemp8973, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes, 
                      (0x1f8U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 << 3U)));
        __Vtemp8976[0U] = (0x7fU & (__Vtemp8973[0U] 
                                    >> 1U));
        __Vtemp8976[1U] = 0U;
        __Vtemp8976[2U] = 0U;
        __Vtemp8976[3U] = 0U;
        __Vtemp8976[4U] = 0U;
        __Vtemp8976[5U] = 0U;
        __Vtemp8976[6U] = 0U;
        __Vtemp8976[7U] = 0U;
        __Vtemp8976[8U] = 0U;
        __Vtemp8976[9U] = 0U;
        VL_EXTEND_WW(296,295, __Vtemp8977, __Vtemp8976);
        if (VL_UNLIKELY(((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                             & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                            & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                           & (~ (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                  & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                                 & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                    == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp8977[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25653:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_d_ready)) 
                             | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_enq_ready))) 
                         & (((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                                 & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                                & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                               & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
                              & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                                 == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                             & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25656: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25656, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25664:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY(((((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                               & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                             & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid)) 
                            & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source) 
                               == (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))) 
                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_d_ready)) 
                               | (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater_io_enq_ready)))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25675:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                      & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1)))
                                      ? (VL_ULL(0x1fffffffff) 
                                         & (VL_ULL(1) 
                                            << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))
                                      : VL_ULL(0)) 
                                    != ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                                          & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                                         & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)))
                                         ? (VL_ULL(0x1fffffffff) 
                                            & (VL_ULL(1) 
                                               << (0x3fU 
                                                   & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))
                                         : VL_ULL(0))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                                   & (0U 
                                                      == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1)))
                                                   ? 
                                                  (VL_ULL(0x1fffffffff) 
                                                   & (VL_ULL(1) 
                                                      << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))
                                                   : VL_ULL(0))))))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25678: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25678, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25686:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                        & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1)))
                                        ? (VL_ULL(0x1fffffffff) 
                                           & (VL_ULL(1) 
                                              << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))
                                        : VL_ULL(0)) 
                                      != ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                                           & (6U != (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode)))
                                           ? (VL_ULL(0x1fffffffff) 
                                              & (VL_ULL(1) 
                                                 << 
                                                 (0x3fU 
                                                  & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))
                                           : VL_ULL(0))) 
                                     | (~ (IData)((0U 
                                                   != 
                                                   (((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_valid) 
                                                     & (0U 
                                                        == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1)))
                                                     ? 
                                                    (VL_ULL(0x1fffffffff) 
                                                     & (VL_ULL(1) 
                                                        << (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar_auto_out_0_a_bits_source)))
                                                     : VL_ULL(0))))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25699:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25702: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25702, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25710:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight))) 
                                      | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog 
                                        < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25723:11
done_reset        
    ) {
        if (VL_UNLIKELY(((~ (IData)((VL_ULL(0x1fffffffff) 
                                     & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1 
                                        >> (0x3fU & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data)))))) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25726: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25726, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25734:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & (~ (IData)((VL_ULL(0x1fffffffff) 
                                       & (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1 
                                          >> (0x3fU 
                                              & (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data))))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25747:11
done_reset        
    ) {
        VL_SHIFTR_WWI(296,296,9, __Vtemp8980, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1, 
                      (0x1f8U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 << 3U)));
        __Vtemp8983[0U] = (0x7fU & (__Vtemp8980[0U] 
                                    >> 1U));
        __Vtemp8983[1U] = 0U;
        __Vtemp8983[2U] = 0U;
        __Vtemp8983[3U] = 0U;
        __Vtemp8983[4U] = 0U;
        __Vtemp8983[5U] = 0U;
        __Vtemp8983[6U] = 0U;
        __Vtemp8983[7U] = 0U;
        __Vtemp8983[8U] = 0U;
        __Vtemp8983[9U] = 0U;
        VL_EXTEND_WW(296,295, __Vtemp8984, __Vtemp8983);
        if (VL_UNLIKELY((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                          != (0xffU & __Vtemp8984[0U])) 
                         & ((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                              & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                             & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                            & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25750: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25750, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25758:11
verbose&&done_reset        
    ) {
        VL_SHIFTR_WWI(296,296,9, __Vtemp8987, vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes_1, 
                      (0x1f8U & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_source_io_deq_bits_MPORT_data) 
                                 << 3U)));
        __Vtemp8990[0U] = (0x7fU & (__Vtemp8987[0U] 
                                    >> 1U));
        __Vtemp8990[1U] = 0U;
        __Vtemp8990[2U] = 0U;
        __Vtemp8990[3U] = 0U;
        __Vtemp8990[4U] = 0U;
        __Vtemp8990[5U] = 0U;
        __Vtemp8990[6U] = 0U;
        __Vtemp8990[7U] = 0U;
        __Vtemp8990[8U] = 0U;
        __Vtemp8990[9U] = 0U;
        VL_EXTEND_WW(296,295, __Vtemp8991, __Vtemp8990);
        if (VL_UNLIKELY((((((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor_io_in_d_valid) 
                            & (0U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                           & (6U == (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics_auto_in_d_bits_opcode))) 
                          & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset))) 
                         & ((IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_size_io_deq_bits_MPORT_data) 
                            != (0xffU & __Vtemp8991[0U]))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25771:11
done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (((~ (IData)((0U 
                                                != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1))) 
                                    | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                   | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                      < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                               & (~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)))))) {
            VL_WRITEF("[%0t] %%Error: chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25774: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),vlSymsp->name());
            VL_STOP_MT("/root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v", 25774, "");
        }
    }
    if (
        // $c function at /root/chipyard/sims/verilator/generated-src/chipyard.TestHarness.CustomGemminiSoCConfig/chipyard.TestHarness.CustomGemminiSoCConfig.top.v:25782:11
verbose&&done_reset        
    ) {
        if (VL_UNLIKELY((1U & ((~ (IData)(vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__bundleOut_0_member_allClocks_subsystem_sbus_0_reset_catcher_io_sync_reset)) 
                               & (~ (((~ (IData)((0U 
                                                  != vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_1))) 
                                      | (0U == vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                     | (vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog_1 
                                        < vlTOPp->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
            VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n");
        }
    }
}
