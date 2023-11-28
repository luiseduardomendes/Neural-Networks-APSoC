// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3772(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3772\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_17.sv:843: Assertion failed in %NTestHarness.chiptop.system.subsystem_fbus_coupler_from_port_named_serial_tl_ctrl.buffer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:390:9)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv", 843, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv:844:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_17.sv:845: Assertion failed in %NTestHarness.chiptop.system.subsystem_fbus_coupler_from_port_named_serial_tl_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv", 845, "");
        }
    }
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_17.sv:849: Assertion failed in %NTestHarness.chiptop.system.subsystem_fbus_coupler_from_port_named_serial_tl_ctrl.buffer.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:390:9)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv", 849, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv:850:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_17.sv:851: Assertion failed in %NTestHarness.chiptop.system.subsystem_fbus_coupler_from_port_named_serial_tl_ctrl.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_17.sv", 851, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3775(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3775\n"); );
    // Body
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_param 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_param;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_opcode 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_opcode;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_set 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__req_r_set;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__ram_sink_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__gemmini__DOT__spad__DOT__norm_unit_passthru_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter;
    vlSelf->__Vdlyvset__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdly__TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy 
        = vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy;
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:303: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 303, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:304:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:305: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 305, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3776(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3776\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                           & ((((((((0U == ((0x3fffcU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU)))) 
                                   | (1U == (0x7fffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0x10U)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:309: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 309, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:310:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:311: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 311, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3777(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3777\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:315: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 315, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:316:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:317: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 317, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                                                >> 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:321: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 321, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:322:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:323: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 323, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3778(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3778\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:327: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 327, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:328:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:329: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 329, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:333: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 333, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:334:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:335: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 335, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3779(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3779\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0xffffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:339: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 339, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:340:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:341: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 341, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:345: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 345, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:346:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:347: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 347, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3780(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3780\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:351: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 351, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:352:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:353: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 353, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                           & ((((((((0U == ((0x3fffcU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU)))) 
                                   | (1U == (0x7fffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0x10U)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:357: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 357, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:358:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:359: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 359, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3781(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3781\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:363: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 363, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:364:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:365: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 365, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)((0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                                                >> 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:369: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 369, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:370:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:371: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 371, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3782(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3782\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:375: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 375, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:376:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:377: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 377, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:381: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 381, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:382:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:383: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 383, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3783(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3783\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:387: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 387, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:388:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:389: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 389, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0xffffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:393: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 393, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:394:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:395: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 395, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3784(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3784\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:399: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 399, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:400:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:401: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 401, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                           & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                  | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                  >> 4U)))) 
                                 | (~ (IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))))) 
                                | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                              | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:405: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 405, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:406:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:407: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 407, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3785(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3785\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x3000U == (0x7ffff000U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address)) 
                                    & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))) 
                           | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                              & (((((((0U == ((0x3fffcU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                    >> 0xcU)))) 
                                      | (1U == (0x7fffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                   >> 0x10U)))) 
                                     | (0U == ((0x3fff0U 
                                                & (0x80U 
                                                   ^ 
                                                   (0x7fff0U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                       >> 0xdU)))) 
                                               | (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                     >> 0xcU))))) 
                                    | (0x200U == (0x7fffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                     >> 0x10U)))) 
                                   | (0x2010U == (0x7ffffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                     >> 0xcU)))) 
                                  | (3U == (0x1fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                             >> 0x1aU)))) 
                                 | (0x54000U == (0x7ffffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                    >> 0xcU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:411: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 411, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:412:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:413: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 413, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3786(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3786\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:417: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 417, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:418:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:419: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 419, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:423: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 423, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:424:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:425: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 425, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3787(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3787\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:429: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 429, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:430:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:431: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 431, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:435: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 435, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:436:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:437: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 437, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3788(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3788\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:441: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Get is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 441, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:442:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:443: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 443, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                            & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                    >> 4U)))))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))) 
                           & ((IData)(((0x3000U == 
                                        (0x7ffff000U 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address)) 
                                       & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                                 & ((((((0U == ((0x3fffcU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                    >> 0xdU)) 
                                                | (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xcU)))) 
                                        | (0U == ((0x3fff0U 
                                                   & (0x80U 
                                                      ^ 
                                                      (0x7fff0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                          >> 0xdU)))) 
                                                  | (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                        >> 0xcU))))) 
                                       | (0x200U == 
                                          (0x7fffU 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                              >> 0x10U)))) 
                                      | (0x2010U == 
                                         (0x7ffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                             >> 0xcU)))) 
                                     | (3U == (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                                    | (0x54000U == 
                                       (0x7ffffU & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         >> 0xcU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:447: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 447, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:448:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:449: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 449, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3789(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3789\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:453: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 453, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:454:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:455: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 455, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:459: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 459, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:460:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:461: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 461, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3790(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3790\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:465: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 465, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:466:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:467: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 467, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:471: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 471, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:472:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:473: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 473, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3791(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3791\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                            & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                   >> 4U)))) 
                                  | (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                    >> 4U)))))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                               | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))) 
                           & ((IData)(((0x3000U == 
                                        (0x7ffff000U 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address)) 
                                       & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                                 & ((((((0U == ((0x3fffcU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                    >> 0xdU)) 
                                                | (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xcU)))) 
                                        | (0U == ((0x3fff0U 
                                                   & (0x80U 
                                                      ^ 
                                                      (0x7fff0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                          >> 0xdU)))) 
                                                  | (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                        >> 0xcU))))) 
                                       | (0x200U == 
                                          (0x7fffU 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                              >> 0x10U)))) 
                                      | (0x2010U == 
                                         (0x7ffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                             >> 0xcU)))) 
                                     | (3U == (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                                    | (0x54000U == 
                                       (0x7ffffU & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         >> 0xcU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:477: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 477, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:478:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:479: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 479, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3792(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3792\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:483: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 483, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:484:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:485: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 485, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:489: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 489, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:490:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:491: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 491, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3793(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3793\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:495: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 495, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:496:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:497: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 497, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                               & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:501: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 501, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:502:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:503: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 503, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3794(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3794\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                             & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                    | (1U == (3U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                     >> 4U)))))) 
                                  | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                 | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))) 
                            & (4U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                           & (((((((0U == ((0x3fffcU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                               >> 0xdU)) 
                                           | (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                               >> 0xcU)))) 
                                   | (3U == (0x7ffffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xcU)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:507: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 507, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:508:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:509: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 509, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3795(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3795\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:513: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 513, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:514:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:515: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 515, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:519: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 519, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:520:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:521: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 521, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3796(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3796\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:525: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 525, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:526:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:527: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 527, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:531: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 531, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:532:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:533: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 533, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3797(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3797\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                             & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                    | (1U == (3U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (3U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                     >> 4U)))))) 
                                  | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                 | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))) 
                            & (4U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))) 
                           & (((((((0U == ((0x3fffcU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                               >> 0xdU)) 
                                           | (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                               >> 0xcU)))) 
                                   | (3U == (0x7ffffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                >> 0xcU)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:537: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 537, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:538:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:539: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 539, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3798(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3798\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:543: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 543, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:544:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:545: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 545, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:549: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 549, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:550:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:551: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 551, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3799(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3799\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:555: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 555, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:556:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:557: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 557, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:561: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 561, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:562:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:563: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 563, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3800(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3800\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)(((0x3000U == (0x7ffff000U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address)) 
                                   & ((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)) 
                                      & ((((((0x24U 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                                             | (1U 
                                                == 
                                                (3U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                    >> 4U)))) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                              >> 4U)))))) 
                                           | (0x20U 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                          | (0x21U 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                                         | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:567: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 567, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:568:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:569: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 569, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:573: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 573, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:574:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:575: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 575, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3801(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3801\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:579: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 579, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:580:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:581: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 581, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:585: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 585, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:586:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:587: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 587, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3802(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3802\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_mask) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:591: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 591, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:592:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:593: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 593, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:597: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 597, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:598:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:599: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 599, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3803(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3803\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:603: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel has invalid opcode (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 603, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:604:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:605: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 605, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:609: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 609, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:610:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:611: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 611, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3804(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3804\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0x180U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:615: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 615, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:616:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:617: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 617, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:621: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 621, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:622:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:623: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 623, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3805(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3805\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:627: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 627, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:628:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:629: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 629, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:633: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 633, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:634:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:635: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 635, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3806(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3806\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:639: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 639, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:640:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:641: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 641, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:645: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 645, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:646:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:647: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 647, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3807(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3807\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0x180U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:651: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 651, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:652:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:653: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 653, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:657: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 657, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:658:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:659: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 659, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3808(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3808\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:663: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 663, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:664:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:665: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 665, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:669: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 669, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:670:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:671: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 671, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3809(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3809\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:675: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 675, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:676:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:677: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 677, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:681: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 681, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:682:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:683: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 683, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3810(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3810\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0x180U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:687: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 687, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:688:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:689: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 689, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:693: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 693, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:694:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:695: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 695, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3811(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3811\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:699: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 699, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:700:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:701: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 701, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:705: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 705, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:706:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:707: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 707, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3812(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3812\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:711: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 711, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:712:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:713: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 713, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:717: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 717, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:718:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:719: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 719, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3813(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3813\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:723: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 723, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:724:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:725: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 725, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:729: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 729, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:730:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:731: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 731, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3814(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3814\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:735: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 735, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:736:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:737: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 737, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:741: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 741, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:742:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:743: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 743, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3815(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3815\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((((((0x24U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xdU)))) 
                             | (0x20U == (0x3fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x21U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x22U == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:747: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 747, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:748:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:749: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 749, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:753: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 753, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:754:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:755: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 755, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3816(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3816\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:759: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 759, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:760:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:761: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 761, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:765: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 765, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:766:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:767: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 767, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3817(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3817\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_param) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:771: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 771, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:772:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:773: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 773, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:777: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 777, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:778:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:779: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 779, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3818(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3818\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:783: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 783, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:784:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:785: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 785, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_address 
                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:789: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 789, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:790:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:791: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 791, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3819(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3819\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:795: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 795, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:796:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:797: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 797, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:801: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 801, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:802:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:803: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 803, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3820(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3820\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:807: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 807, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:808:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:809: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 809, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:813: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 813, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:814:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:815: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 815, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3821(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3821\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:819: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 819, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:820:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:821: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 821, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:825: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 825, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:826:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:827: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 827, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3822(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3822\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1278) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)((0x1fffffffffULL & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight 
                                                   >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:831: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' channel re-used a source ID (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 831, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:832:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:833: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 833, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1297) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x24ULL >= (QData)((IData)(
                                                                (0x3fU 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 9U)))))
                                     ? (0x1fffffffffULL 
                                        & VL_SHIFTR_QQQ(37,37,37, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))
                                     : 0ULL)) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:837: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 837, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:838:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:839: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 839, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3823(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3823\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1297) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:843: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 843, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:844:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:845: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 845, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3824(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3824\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h4bfaf0b6__0;
    VlWide<5>/*159:0*/ __Vtemp_h035c4c21__0;
    VlWide<5>/*159:0*/ __Vtemp_h89f2026b__0;
    VlWide<5>/*159:0*/ __Vtemp_h4bfaf0b6__1;
    VlWide<5>/*159:0*/ __Vtemp_hf88b6a24__0;
    VlWide<5>/*159:0*/ __Vtemp_hbbfb4dd8__0;
    VlWide<5>/*159:0*/ __Vtemp_h4bfaf0b6__2;
    VlWide<5>/*159:0*/ __Vtemp_h76a748d6__0;
    VlWide<5>/*159:0*/ __Vtemp_h9bf5b869__0;
    VlWide<5>/*159:0*/ __Vtemp_h4bfaf0b6__3;
    VlWide<5>/*159:0*/ __Vtemp_h01daa976__0;
    VlWide<5>/*159:0*/ __Vtemp_hbc5a93b1__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1297) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_size) 
                        != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:849: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 849, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:850:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:851: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 851, "");
        }
    }
    VL_EXTEND_WI(146,6, __Vtemp_h4bfaf0b6__0, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h035c4c21__0[0U] = (__Vtemp_h4bfaf0b6__0[0U] 
                                << 2U);
    __Vtemp_h035c4c21__0[1U] = ((__Vtemp_h4bfaf0b6__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__0[1U] 
                                              << 2U));
    __Vtemp_h035c4c21__0[2U] = ((__Vtemp_h4bfaf0b6__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__0[2U] 
                                              << 2U));
    __Vtemp_h035c4c21__0[3U] = ((__Vtemp_h4bfaf0b6__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__0[3U] 
                                              << 2U));
    __Vtemp_h035c4c21__0[4U] = ((__Vtemp_h4bfaf0b6__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__0[4U] 
                                              << 2U));
    VL_SHIFTR_WWW(148,148,148, __Vtemp_h89f2026b__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h035c4c21__0);
    VL_EXTEND_WI(146,6, __Vtemp_h4bfaf0b6__1, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_hf88b6a24__0[0U] = (__Vtemp_h4bfaf0b6__1[0U] 
                                << 2U);
    __Vtemp_hf88b6a24__0[1U] = ((__Vtemp_h4bfaf0b6__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__1[1U] 
                                              << 2U));
    __Vtemp_hf88b6a24__0[2U] = ((__Vtemp_h4bfaf0b6__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__1[2U] 
                                              << 2U));
    __Vtemp_hf88b6a24__0[3U] = ((__Vtemp_h4bfaf0b6__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__1[3U] 
                                              << 2U));
    __Vtemp_hf88b6a24__0[4U] = ((__Vtemp_h4bfaf0b6__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__1[4U] 
                                              << 2U));
    VL_SHIFTR_WWW(148,148,148, __Vtemp_hbbfb4dd8__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hf88b6a24__0);
    VL_EXTEND_WI(146,6, __Vtemp_h4bfaf0b6__2, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h76a748d6__0[0U] = (__Vtemp_h4bfaf0b6__2[0U] 
                                << 2U);
    __Vtemp_h76a748d6__0[1U] = ((__Vtemp_h4bfaf0b6__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__2[1U] 
                                              << 2U));
    __Vtemp_h76a748d6__0[2U] = ((__Vtemp_h4bfaf0b6__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__2[2U] 
                                              << 2U));
    __Vtemp_h76a748d6__0[3U] = ((__Vtemp_h4bfaf0b6__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__2[3U] 
                                              << 2U));
    __Vtemp_h76a748d6__0[4U] = ((__Vtemp_h4bfaf0b6__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__2[4U] 
                                              << 2U));
    VL_SHIFTR_WWW(148,148,148, __Vtemp_h9bf5b869__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h76a748d6__0);
    VL_EXTEND_WI(146,6, __Vtemp_h4bfaf0b6__3, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h01daa976__0[0U] = (__Vtemp_h4bfaf0b6__3[0U] 
                                << 2U);
    __Vtemp_h01daa976__0[1U] = ((__Vtemp_h4bfaf0b6__3[0U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__3[1U] 
                                              << 2U));
    __Vtemp_h01daa976__0[2U] = ((__Vtemp_h4bfaf0b6__3[1U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__3[2U] 
                                              << 2U));
    __Vtemp_h01daa976__0[3U] = ((__Vtemp_h4bfaf0b6__3[2U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__3[3U] 
                                              << 2U));
    __Vtemp_h01daa976__0[4U] = ((__Vtemp_h4bfaf0b6__3[3U] 
                                 >> 0x1eU) | (__Vtemp_h4bfaf0b6__3[4U] 
                                              << 2U));
    VL_SHIFTR_WWW(148,148,148, __Vtemp_hbc5a93b1__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h01daa976__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1297) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_h89f2026b__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_hbbfb4dd8__0[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_h9bf5b869__0[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_hbc5a93b1__0[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:855: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 855, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:856:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:857: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 857, "");
        }
    }
}

extern const VlWide<10>/*319:0*/ VTestHarness__ConstPool__CONST_h3c9d8e1d_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3825(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3825\n"); );
    // Init
    VlWide<10>/*319:0*/ __Vtemp_h4c193484__0;
    VlWide<10>/*319:0*/ __Vtemp_h10b8cc7f__0;
    VlWide<10>/*319:0*/ __Vtemp_hf3b89085__0;
    // Body
    VL_EXTEND_WI(293,6, __Vtemp_h4c193484__0, (0x3fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h10b8cc7f__0[0U] = (__Vtemp_h4c193484__0[0U] 
                                << 3U);
    __Vtemp_h10b8cc7f__0[1U] = ((__Vtemp_h4c193484__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[1U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[2U] = ((__Vtemp_h4c193484__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[2U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[3U] = ((__Vtemp_h4c193484__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[3U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[4U] = ((__Vtemp_h4c193484__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[4U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[5U] = ((__Vtemp_h4c193484__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[5U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[6U] = ((__Vtemp_h4c193484__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[6U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[7U] = ((__Vtemp_h4c193484__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[7U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[8U] = ((__Vtemp_h4c193484__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[8U] 
                                              << 3U));
    __Vtemp_h10b8cc7f__0[9U] = ((__Vtemp_h4c193484__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h4c193484__0[9U] 
                                              << 3U));
    VL_SHIFTR_WWW(296,296,296, __Vtemp_hf3b89085__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight_sizes, __Vtemp_h10b8cc7f__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___T_1297) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & ((VTestHarness__ConstPool__CONST_h3c9d8e1d_0[0U] 
                                                 & __Vtemp_hf3b89085__0[0U]) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:861: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 861, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:862:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:863: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 863, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__x1_out_1_valid)) 
                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source) 
                           == (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 9U)))) & 
                       (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_enq_ready_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:867: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 867, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:868:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:869: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 869, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3826(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3826\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x1fffffffffULL 
                                       & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))
                                    : 0ULL) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode)))
                                                 ? 
                                                (0x1fffffffffULL 
                                                 & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(
                                                                                (0x3fU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))
                                                 : 0ULL)) 
                                 | (0ULL == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? (0x1fffffffffULL 
                                                 & VL_SHIFTL_QQQ(37,64,64, 1ULL, (QData)((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_source))))
                                              : 0ULL)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:873: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 873, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:874:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:875: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 875, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((0ULL == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__inflight) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:879: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: TileLink timeout expired (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 879, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:880:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:881: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 881, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3827(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3827\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:885: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 885, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:886:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:887: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 887, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:891: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor: Assertion failed: 'D' channel contains improper response size (connected at BusWrapper.scala:189:97)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 891, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv:892:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:893: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.coupler_to_bus_named_subsystem_cbus.widget.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_6.sv", 893, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3828(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3828\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid))) 
                                  | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                         >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid)))) 
                                 & ((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid)) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                            >> 1U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid)))) 
                                    | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                           >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:475: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 475, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:476:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:477: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 477, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid) 
                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid)) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid))) 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                      >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys) 
                                     >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:481: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 481, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:482:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:483: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3829(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3829\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid)) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid))) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:487: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 487, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:488:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:489: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 489, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid))) 
                                  | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                         >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid)))) 
                                 & ((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid)) 
                                        | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                            >> 1U) 
                                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid)))) 
                                    | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                           >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:493: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 493, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:494:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:495: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3830(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3830\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid) 
                                        | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid)) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid))) 
                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid))) 
                                  | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                      >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_1) 
                                     >> 2U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:499: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 499, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:500:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:501: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 501, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid) 
                                       | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid)) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid) 
                                     | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid))) 
                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:505: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:109 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 505, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:506:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:507: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 507, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3831(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3831\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid))) 
                                 | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                        >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_12_earlyValid))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:511: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 511, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:512:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:513: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 513, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_12_earlyValid))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_11_earlyValid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2) 
                                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_12_earlyValid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:517: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 517, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:518:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:519: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 519, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3832(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3832\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid))) 
                                 | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                        >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:523: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 523, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:524:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:525: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 525, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_15_earlyValid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3) 
                                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_16_earlyValid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:529: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 529, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:530:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:531: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 531, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3833(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3833\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_20_earlyValid))) 
                                 | (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                        >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_21_earlyValid))))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:535: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:106 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 535, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:536:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:537: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 537, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_20_earlyValid) 
                                      | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_21_earlyValid))) 
                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_20_earlyValid))) 
                                 | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_4) 
                                     >> 1U) & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_21_earlyValid)))))))) {
        VL_WRITEF("[%0t] %%Error: TLXbar.sv:541: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar: Assertion failed\n    at Arbiter.scala:108 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 541, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv:542:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLXbar.sv:543: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLXbar.sv", 543, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3834(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3834\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x180U == (0x3c0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])) 
                                    & (0xdU > (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))))) 
                           & (((2U == (0xffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 1U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1fU)))) 
                               | (0x10000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 5U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1bU))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 0xbU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:293: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 293, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:294:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:295: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 295, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:299: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 299, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:300:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:301: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 301, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3835(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3835\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)((0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:305: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 305, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:306:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:307: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 307, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x11U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xfU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:311: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 311, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:312:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:313: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 313, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3836(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3836\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:317: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 317, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:318:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:319: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 319, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0xffffU != (0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:323: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 323, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv:324:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_1.sv:325: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_1.sv", 325, "");
        }
    }
}
