// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4146(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4146\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_1)
                                    ? (7U & ((IData)(1U) 
                                             << (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                    : 0U) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode)))
                                               ? (7U 
                                                  & ((IData)(1U) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_1)
                                            ? (7U & 
                                               ((IData)(1U) 
                                                << 
                                                (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1310: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1310, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1311:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1312: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1312, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1316: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: TileLink timeout expired (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1316, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1317:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1318: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1318, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4147(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4147\n"); );
    // Body
    if (VL_UNLIKELY((7U & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___T_2602) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                           & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1) 
                              >> (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1322: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'C' channel re-used a source ID (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1322, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1323:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1324: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1324, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1) 
                                  >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                               & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                              & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1328: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1328, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1329:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1330: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1330, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4148(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4148\n"); );
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                           & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                          & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size) 
                        != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                    >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1334: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1334, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1335:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1336: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1336, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))) 
                        & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                       & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                              & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                             & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size) 
                        != (0x7fU & (((0x17U >= ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source) 
                                                 << 3U))
                                       ? (0xffffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_sizes_1 
                                             >> ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source) 
                                                 << 3U)))
                                       : 0U) >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1340: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1340, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1341:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1342: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1342, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4149(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4149\n"); );
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                            & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__c_first_counter_1))) 
                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty))) 
                         & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                   >> 0xaU)) == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                        & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                       & (~ ((4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])) 
                             | (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleIn_1_d_q__DOT__full) 
                           | (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT__full))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1346: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1346, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1347:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1348: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1348, "");
        }
    }
    if (VL_UNLIKELY((((0U != (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                               & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                               ? (7U & ((IData)(1U) 
                                        << (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU))))
                               : 0U)) & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_3) 
                          & (6U == (6U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])))
                          ? (7U & ((IData)(1U) << (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))))
                          : 0U) == ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                                      & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_2))) 
                                     & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode)))
                                     ? (7U & ((IData)(1U) 
                                              << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)))
                                     : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1352: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'C' and 'D' concurrent, despite minlatency 2 (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1352, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1353:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1354: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1354, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4150(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4150\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__watchdog_1 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1358: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: TileLink timeout expired (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1358, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1359:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1360: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1360, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___T_2663) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_first_counter_3))) 
                       & (4U == (6U & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode)))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xfU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_sink))
                         ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_2) 
                                       >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_sink)))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1364: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'D' channel re-used a sink ID (connected at SystemBus.scala:41:55)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1364, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1365:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1366: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1366, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4151(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4151\n"); );
    // Body
    if (VL_UNLIKELY((1U & (((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_e_q__DOT__empty)) 
                            & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                           & (~ ((0xfU >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink))
                                  ? (0xffffU & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__d_set) 
                                                 | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__inflight_2)) 
                                                >> (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_1_e_bits_sink)))
                                  : 0U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1370: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at SystemBus.scala:41:55)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1370, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv:1371:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_2.sv:1372: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.system_bus_xbar.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_2.sv", 1372, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x180U == (0x3c0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U])) 
                                    & ((0xdU > (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                       & (((0U == (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                                          | (2U == 
                                             (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))))) 
                           & (((2U == (0xffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU)))) 
                               | (0x10000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:458: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 458, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:459:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:460: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 460, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4152(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4152\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((IData)((0x180U == (0xfc0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U)))) 
                           & (((((((((((0U == ((0x7fffcU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U)))) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                       | (3U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (1U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                     | (2U == (0xffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 4U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1cU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))) 
                                | (0x10000U == (0xfffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:464: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 464, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:465:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:466: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 466, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4153(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4153\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:470: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 470, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:471:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:472: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 472, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)((0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:476: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 476, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:477:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:478: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 478, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4154(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4154\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:482: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 482, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:483:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:484: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 484, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:488: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 488, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:489:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:490: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 490, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4155(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4155\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0xffffU != (0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:494: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 494, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:495:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:496: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 496, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                        >> 0x1cU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:500: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 500, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:501:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:502: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 502, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4156(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4156\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x180U == (0x3c0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U])) 
                                    & ((0xdU > (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                       & (((0U == (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                                          | (2U == 
                                             (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))))) 
                           & (((2U == (0xffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU)))) 
                               | (0x10000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:506: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 506, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:507:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:508: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 508, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4157(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4157\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((IData)((0x180U == (0xfc0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U)))) 
                           & (((((((((((0U == ((0x7fffcU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U)))) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                       | (3U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (1U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                     | (2U == (0xffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 4U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1cU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))) 
                                | (0x10000U == (0xfffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:512: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 512, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:513:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:514: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 514, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4158(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4158\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:518: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 518, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:519:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:520: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 520, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (IData)((0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 8U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:524: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 524, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:525:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:526: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 526, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4159(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4159\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:530: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 530, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:531:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:532: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 532, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:536: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 536, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:537:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:538: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 538, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4160(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4160\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                      & (7U == (0x3fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:542: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 542, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:543:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:544: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 544, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0xffffU != (0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                               >> 0xcU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:548: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 548, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:549:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:550: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 550, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4161(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4161\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                        >> 0x1cU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:554: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 554, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:555:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:556: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 556, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 6U))) 
                           & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                               | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)))) 
                              | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:560: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 560, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:561:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:562: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 562, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4162(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4162\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (3U == (0xfffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                           | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                              & ((((((((((0U == ((0x7fffcU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 7U) 
                                                     | (0x7cU 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x19U)))) 
                                                 | (3U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U)))) 
                                         | (1U == (0xffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 4U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1cU))))) 
                                        | (2U == (0xffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU))))) 
                                       | (0U == ((0x7fff0U 
                                                  & (0x80U 
                                                     ^ 
                                                     ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 7U) 
                                                      | (0x70U 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x19U))))) 
                                                 | (0xfU 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (0x200U == 
                                         (0xffffU & 
                                          ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 4U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1cU))))) 
                                     | (0x2010U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                                    | (3U == (0x3fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 6U)))) 
                                   | (0x10000U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 8U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                  | (0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U))))) 
                                 | (8U == (0xfU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 8U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:566: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 566, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:567:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:568: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 568, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4163(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4163\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:572: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Get carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 572, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:573:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:574: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 574, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:578: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Get address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 578, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:579:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:580: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 580, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4164(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4164\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:584: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Get carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 584, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:585:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:586: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 586, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xcU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:590: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Get contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 590, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:591:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:592: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 592, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4165(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4165\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                        >> 0x1cU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:596: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Get is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 596, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:597:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:598: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 598, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & ((((((((0U == ((0x7fffcU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 7U) 
                                                      | (0x7cU 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x19U)))) 
                                                  | (3U 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                         | (0x200U 
                                            == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                        | (0x2010U 
                                           == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                                       | (3U == (0x3fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 6U)))) 
                                      | (0x10000U == 
                                         (0xfffffU 
                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x18U))))) 
                                     | (0x54000U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:602: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 602, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:603:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:604: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 604, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4166(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4166\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:608: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 608, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:609:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:610: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 610, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:614: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 614, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:615:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:616: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 616, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4167(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4167\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:620: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutFull carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 620, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:621:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:622: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 622, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xcU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:626: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 626, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:627:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:628: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 628, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4168(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4168\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & ((((((((0U == ((0x7fffcU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 7U) 
                                                      | (0x7cU 
                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0x19U)))) 
                                                  | (3U 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                         | (0x200U 
                                            == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                        | (0x2010U 
                                           == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                                       | (3U == (0x3fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    >> 6U)))) 
                                      | (0x10000U == 
                                         (0xfffffU 
                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x18U))))) 
                                     | (0x54000U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:632: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 632, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:633:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:634: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 634, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4169(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4169\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:638: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 638, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:639:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:640: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 640, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:644: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 644, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:645:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:646: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 646, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4170(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4170\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:650: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 650, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:651:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:652: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 652, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xffffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 0x14U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 0xcU)) 
                                          & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:656: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 656, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:657:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:658: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 658, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4171(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4171\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((4U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               & (((((((0U == ((0x7fffcU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U)))) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                       | (3U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 7U) 
                                                     | (0x70U 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x19U))))) 
                                                | (0xfU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                                     | (0x200U == (0xffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 4U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1cU))))) 
                                    | (0x2010U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 8U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                   | (3U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 6U)))) 
                                  | (0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))))) 
                              | ((5U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & ((0x10000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:662: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 662, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:663:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:664: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 664, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4172(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4172\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:668: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 668, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:669:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:670: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 670, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:674: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 674, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:675:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:676: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 676, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4173(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4173\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:680: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 680, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:681:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:682: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 682, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xcU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:686: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 686, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:687:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:688: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 688, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4174(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4174\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((4U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                               & (((((((0U == ((0x7fffcU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U)))) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                       | (3U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (0U == ((0x7fff0U 
                                                 & (0x80U 
                                                    ^ 
                                                    ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 7U) 
                                                     | (0x70U 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x19U))))) 
                                                | (0xfU 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                                     | (0x200U == (0xffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 4U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x1cU))))) 
                                    | (0x2010U == (0xfffffU 
                                                   & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                       << 8U) 
                                                      | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                   | (3U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 6U)))) 
                                  | (0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))))) 
                              | ((5U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & ((0x10000U == (0xfffffU 
                                                  & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:692: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 692, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:693:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:694: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 694, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4175(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4175\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:698: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 698, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:699:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:700: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 700, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:704: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 704, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:705:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:706: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 706, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4176(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4176\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:710: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 710, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:711:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:712: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 712, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xcU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:716: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 716, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:717:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:718: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 718, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4177(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4177\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                              | ((7U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                                 & (((2U == (0xffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 4U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1cU)))) 
                                     | (0x10000U == 
                                        (0xfffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                                    | (8U == (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 8U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:722: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 722, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:723:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:724: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 724, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4178(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4178\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:728: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 728, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:729:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:730: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 730, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:734: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 734, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:735:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:736: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 736, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4179(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4179\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:740: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 740, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:741:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:742: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 742, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & ((0xffffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[1U] 
                                    >> 0xcU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:746: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 746, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:747:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:748: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 748, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4180(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4180\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_a_q__DOT___ram_ext_R0_data[5U] 
                        >> 0x1cU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:752: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 752, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:753:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:754: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 754, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:758: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 758, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:759:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:760: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 760, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4181(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4181\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:764: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 764, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:765:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:766: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 766, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0xcU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:770: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 770, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:771:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:772: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 772, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4182(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4182\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:776: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 776, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:777:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:778: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 778, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:782: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 782, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:783:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:784: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 784, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4183(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4183\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:788: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 788, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:789:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:790: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 790, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:794: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 794, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:795:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:796: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 796, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4184(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4184\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0xcU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:800: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 800, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:801:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:802: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 802, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:806: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 806, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:807:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:808: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 808, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4185(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4185\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:812: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 812, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:813:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:814: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 814, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:818: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 818, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:819:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:820: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 820, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4186(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4186\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:824: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 824, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:825:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:826: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 826, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U == (0xcU & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_size)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:830: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 830, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:831:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:832: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 832, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4187(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4187\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:836: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 836, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:837:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:838: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 838, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:842: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 842, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:843:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:844: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 844, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4188(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4188\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_denied)) 
                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:848: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 848, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:849:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:850: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 850, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:854: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 854, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:855:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:856: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 856, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4189(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4189\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:860: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 860, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:861:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:862: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 862, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:866: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 866, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:867:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:868: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 868, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4190(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4190\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:872: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 872, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:873:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:874: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 874, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:878: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 878, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:879:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:880: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 880, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4191(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4191\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_denied)) 
                           | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                               & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                                 & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:884: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 884, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:885:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:886: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 886, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source)) 
                            | (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))) 
                           | (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_2_d_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:890: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 890, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:891:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:892: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 892, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4192(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4192\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:896: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 896, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:897:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:898: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 898, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__out_22_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_0) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__bundleIn_0_d_bits_corrupt)) 
                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4_1) 
                           & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT___bundleIn_0_d_q_io_deq_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:902: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 902, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:903:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:904: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 904, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4193(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4193\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__b_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((((((((((0U == ((0x7fffcU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                              >> 0xcU))) 
                                   | (1U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                             >> 0x10U))) 
                                  | (2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                            >> 0x10U))) 
                                 | (0U == ((0x7fff0U 
                                            & (0x80U 
                                               ^ (0x7fff0U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                                     >> 0xdU)))) 
                                           | (0xfU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                                 >> 0xcU))))) 
                                | (0x200U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                              >> 0x10U))) 
                               | (0x2010U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                              >> 0xcU))) 
                              | (3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                        >> 0x1aU))) 
                             | (0x10000U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                             >> 0xcU))) 
                            | (0x54000U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                            >> 0xcU))) 
                           | (8U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:908: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'B' channel carries Probe type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 908, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:909:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:910: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 910, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4194(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4194\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__b_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((((((((((((3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                              >> 0xcU)) 
                                      | (0x2010U == 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                          >> 0xcU))) 
                                     | (4U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                               >> 0xcU))) 
                                    | (0x54000U == 
                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                        >> 0xcU))) 
                                   | (3U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                             >> 0x1aU))) 
                                  | (0x200U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                                >> 0x10U))) 
                                 | (0U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                           >> 0xcU))) 
                                | (1U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                          >> 0x10U))) 
                               | (0x100U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                             >> 0xcU))) 
                              | (0x110U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                            >> 0xcU))) 
                             | (8U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                       >> 0x1cU))) 
                            | (0x10000U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                            >> 0xcU))) 
                           | (2U == (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address 
                                     >> 0x10U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:914: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'B' channel Probe carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 914, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:915:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:916: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 916, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4195(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4195\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__b_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0x3fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__bundleIn_0_b_bits_address))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:926: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'B' channel Probe address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 926, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:927:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:928: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 928, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__b_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (3U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain)
                                      ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r)
                                      : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:932: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 932, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:933:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:934: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 934, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4196(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4196\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((((((((((((3U == (0xfffffU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  << 8U) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))) 
                                      | (0x2010U == 
                                         (0xfffffU 
                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x18U))))) 
                                     | (4U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                                    | (0x54000U == 
                                       (0xfffffU & 
                                        ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                          << 8U) | 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x18U))))) 
                                   | (3U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 6U)))) 
                                  | (0x200U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                 | (0U == (0xfffffU 
                                           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U))))) 
                                | (1U == (0xffffU & 
                                          ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                            << 4U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1cU))))) 
                               | (0x100U == (0xfffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 << 8U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x18U))))) 
                              | (0x110U == (0xfffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U))))) 
                             | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                               >> 8U)))) 
                            | (0x10000U == (0xfffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U))))) 
                           | (2U == (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 << 4U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:944: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 944, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:945:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:946: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 946, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4197(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4197\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:950: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 950, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:951:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:952: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 952, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                      & (4U == (0x307U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:956: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 956, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:957:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:958: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 958, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4198(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4198\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:962: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 962, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:963:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:964: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 964, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                      & (0x34U == (0x37U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:968: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 968, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:969:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:970: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 970, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4199(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4199\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[5U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:974: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 974, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:975:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:976: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 976, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((((((((((((3U == (0xfffffU 
                                              & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  << 8U) 
                                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))) 
                                      | (0x2010U == 
                                         (0xfffffU 
                                          & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                              << 8U) 
                                             | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x18U))))) 
                                     | (4U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                                    | (0x54000U == 
                                       (0xfffffU & 
                                        ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                          << 8U) | 
                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0x18U))))) 
                                   | (3U == (0x3fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 6U)))) 
                                  | (0x200U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                 | (0U == (0xfffffU 
                                           & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U))))) 
                                | (1U == (0xffffU & 
                                          ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                            << 4U) 
                                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0x1cU))))) 
                               | (0x100U == (0xfffffU 
                                             & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 << 8U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x18U))))) 
                              | (0x110U == (0xfffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U))))) 
                             | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                               >> 8U)))) 
                            | (0x10000U == (0xfffffU 
                                            & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U))))) 
                           | (2U == (0xffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                 << 4U) 
                                                | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:980: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 980, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:981:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:982: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 982, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4200(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4200\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:986: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 986, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:987:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:988: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 988, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                      & (5U == (0x307U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:992: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 992, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:993:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:994: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 994, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4201(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4201\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x14U) 
                                          | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xcU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:998: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 998, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:999:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1000: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1000, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                      & (0x35U == (0x37U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1004: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1004, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:1005:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1006: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1006, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4202(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4202\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ ((IData)(((0x180U == (0x3c0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U])) 
                                    & ((0xdU > (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U))) 
                                       & (((0U == (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))) 
                                           | (1U == 
                                              (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                                          | (2U == 
                                             (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))))) 
                           & (((2U == (0xffffU & ((
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU)))) 
                               | (0x10000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1010: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1010, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:1011:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1012: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1012, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4203(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4203\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((IData)((0x180U == (0xfc0U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U)))) 
                           & (((((((((((0U == ((0x7fffcU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x7cU 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U)))) 
                                               | (3U 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                       | (3U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                      | (1U == (0xffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                     | (2U == (0xffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 4U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1cU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))) 
                                | (0x10000U == (0xfffffU 
                                                & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1016: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1016, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:1017:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1018: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1018, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__4204(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__4204\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))) 
                     & (~ (((0U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                          >> 0xaU))) 
                            | (1U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                           | (2U == (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1022: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1022, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:1023:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1024: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1024, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT__empty)) 
                      & (6U == (0x307U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__tile_prci_domain__DOT__buffer_1__DOT__bundleOut_1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_sbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1028: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2: Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1028, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv:1029:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_5.sv:1030: Assertion failed in %NTestHarness.chiptop.system.subsystem_sbus.fixer.monitor_2\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_5.sv", 1030, "");
        }
    }
}
