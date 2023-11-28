// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2898(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2898\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:451: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 451, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:452:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:453: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 453, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:457: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 457, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:458:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:459: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2899(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2899\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                            & (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                    | (1U == (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                               >> 4U)))) 
                                   | (~ (IData)((0U 
                                                 != 
                                                 (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                     >> 4U)))))) 
                                  | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                 | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                               | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)))) 
                           & ((IData)(((0x3000U == 
                                        (0x7ffff000U 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                       & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                 & ((((((0U == ((0x3fffcU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                    >> 0xdU)) 
                                                | (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                      >> 0xcU)))) 
                                        | (0U == ((0x3fff0U 
                                                   & (0x80U 
                                                      ^ 
                                                      (0x7fff0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                          >> 0xdU)))) 
                                                  | (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                        >> 0xcU))))) 
                                       | (0x200U == 
                                          (0x7fffU 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                              >> 0x10U)))) 
                                      | (0x2010U == 
                                         (0x7ffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                             >> 0xcU)))) 
                                     | (3U == (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0x1aU)))) 
                                    | (0x54000U == 
                                       (0x7ffffU & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                         >> 0xcU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:463: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 463, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:464:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:465: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 465, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2900(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2900\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                              | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                             | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                            | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                           | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:469: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 469, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:470:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:471: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 471, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:475: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 475, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:476:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:477: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 477, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2901(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2901\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:481: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 481, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:482:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:483: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 483, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask) 
                               & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                      << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                          << 3U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                                 & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:487: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 487, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:488:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:489: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 489, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2902(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2902\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                             & (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                     | (1U == (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                      >> 4U)))))) 
                                   | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                  | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                 | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)))) 
                            & (4U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                           & (((((((0U == ((0x3fffcU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                               >> 0xdU)) 
                                           | (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                               >> 0xcU)))) 
                                   | (3U == (0x7ffffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                >> 0xcU)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:493: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 493, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:494:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:495: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2903(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2903\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                              | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                             | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                            | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                           | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:499: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 499, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:500:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:501: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 501, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:505: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 505, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:506:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:507: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 507, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2904(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2904\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:511: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 511, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:512:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:513: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 513, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:517: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 517, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:518:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:519: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 519, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2905(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2905\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                             & (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                     | (1U == (7U & 
                                               ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                                    | (~ (IData)((0U 
                                                  != 
                                                  (7U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                      >> 4U)))))) 
                                   | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                  | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                 | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)))) 
                            & (4U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))) 
                           & (((((((0U == ((0x3fffcU 
                                            & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                               >> 0xdU)) 
                                           | (3U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                               >> 0xcU)))) 
                                   | (3U == (0x7ffffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                >> 0xcU)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:523: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 523, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:524:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:525: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 525, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2906(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2906\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                              | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                             | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                            | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                           | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:529: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 529, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:530:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:531: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 531, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:535: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 535, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:536:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:537: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 537, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2907(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2907\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:541: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 541, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:542:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:543: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 543, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:547: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 547, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:548:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:549: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 549, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2908(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2908\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (IData)(((0x3000U == (0x7ffff000U 
                                                & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                   & ((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)) 
                                      & (((((((0x24U 
                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                              | (1U 
                                                 == 
                                                 (7U 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                     >> 4U)))) 
                                             | (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (7U 
                                                            & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                               >> 4U)))))) 
                                            | (0x20U 
                                               == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                           | (0x21U 
                                              == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                          | (0x22U 
                                             == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                                         | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:553: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 553, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:554:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:555: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 555, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source)) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                                >> 4U)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                                               >> 4U)))))) 
                              | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                             | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                            | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))) 
                           | (0x40U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:559: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 559, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:560:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:561: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 561, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2909(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2909\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:565: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 565, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:566:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:567: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 567, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:571: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 571, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:572:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:573: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 573, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2910(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2910\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:577: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 577, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:578:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:579: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 579, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2911(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2911\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:583: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 583, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:584:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:585: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 585, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:589: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel has invalid opcode (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 589, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:590:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:591: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 591, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2912(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2912\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:595: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 595, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:596:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:597: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 597, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:601: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 601, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:602:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:603: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 603, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2913(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2913\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:607: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 607, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:608:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:609: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 609, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                            | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x12U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:613: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 613, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:614:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:615: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 615, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2914(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2914\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:619: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 619, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:620:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:621: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 621, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:625: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 625, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:626:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:627: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 627, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2915(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2915\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:631: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 631, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:632:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:633: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 633, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:637: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 637, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:638:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:639: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 639, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2916(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2916\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:643: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 643, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:644:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:645: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 645, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:649: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 649, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:650:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:651: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 651, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2917(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2917\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                            | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x12U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:655: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 655, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:656:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:657: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 657, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:661: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 661, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:662:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:663: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 663, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2918(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2918\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:667: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 667, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:668:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:669: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 669, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:673: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 673, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:674:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:675: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 675, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2919(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2919\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:679: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 679, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:680:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:681: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 681, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:685: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 685, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:686:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:687: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 687, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2920(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2920\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x11U)) : (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0x12U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:691: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 691, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:692:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:693: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 693, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:697: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 697, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:698:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:699: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 699, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2921(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2921\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:703: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 703, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:704:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:705: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 705, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                            | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x12U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:709: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 709, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:710:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:711: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 711, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2922(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2922\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:715: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 715, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:716:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:717: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 717, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:721: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 721, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:722:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:723: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 723, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2923(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2923\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                               ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                                  | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 0x11U)) : (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                                   >> 0x12U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:727: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 727, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:728:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:729: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 729, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xdU)))) 
                               | (0U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xdU)))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 9U)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:733: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 733, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:734:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:735: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 735, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2924(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2924\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:739: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 739, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:740:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:741: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 741, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace)
                         ? ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_d_0_corrupt) 
                            | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x11U)) : (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x12U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:745: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 745, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:746:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:747: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 747, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2925(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2925\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:751: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 751, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:752:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:753: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 753, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_param) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:757: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 757, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:758:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:759: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 759, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2926(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2926\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:763: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 763, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:764:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:765: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 765, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:769: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 769, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:770:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:771: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 771, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2927(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2927\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_address 
                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:775: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 775, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:776:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:777: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 777, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:781: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 781, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:782:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:783: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 783, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2928(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2928\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:787: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 787, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:788:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:789: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 789, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:793: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 793, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:794:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:795: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 795, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2929(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2929\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:799: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 799, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:800:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:801: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 801, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:805: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 805, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:806:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:807: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 807, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2930(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2930\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_ha59aa3cc__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_denied) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:811: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 811, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:812:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:813: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 813, "");
        }
    }
    VL_SHIFTR_WWI(65,65,7, __Vtemp_ha59aa3cc__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1309) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & __Vtemp_ha59aa3cc__0[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:817: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' channel re-used a source ID (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 817, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:818:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:819: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 819, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2931(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2931\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h4a1f7f64__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e323327__0;
    // Body
    VL_EXTEND_WI(65,7, __Vtemp_h4a1f7f64__0, (0x7fU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 9U)));
    VL_SHIFTR_WWW(65,65,65, __Vtemp_h6e323327__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight, __Vtemp_h4a1f7f64__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1328) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (__Vtemp_h6e323327__0[0U] 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:823: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 823, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:824:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:825: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 825, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1328) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:829: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 829, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:830:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:831: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 831, "");
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2932(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2932\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h49d43e58__0;
    VlWide<9>/*287:0*/ __Vtemp_h087e67f1__0;
    VlWide<9>/*287:0*/ __Vtemp_h15b489db__0;
    VlWide<9>/*287:0*/ __Vtemp_h49d43e58__1;
    VlWide<9>/*287:0*/ __Vtemp_h776aeade__0;
    VlWide<9>/*287:0*/ __Vtemp_h69a44206__0;
    VlWide<9>/*287:0*/ __Vtemp_h49d43e58__2;
    VlWide<9>/*287:0*/ __Vtemp_h7c0f8eba__0;
    VlWide<9>/*287:0*/ __Vtemp_h4485ef54__0;
    VlWide<9>/*287:0*/ __Vtemp_h49d43e58__3;
    VlWide<9>/*287:0*/ __Vtemp_h0cffeb43__0;
    VlWide<9>/*287:0*/ __Vtemp_h2f0d84db__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1328) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_size) 
                        != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:835: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 835, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:836:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:837: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 837, "");
        }
    }
    VL_EXTEND_WI(258,7, __Vtemp_h49d43e58__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h087e67f1__0[0U] = (__Vtemp_h49d43e58__0[0U] 
                                << 2U);
    __Vtemp_h087e67f1__0[1U] = ((__Vtemp_h49d43e58__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[1U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[2U] = ((__Vtemp_h49d43e58__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[2U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[3U] = ((__Vtemp_h49d43e58__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[3U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[4U] = ((__Vtemp_h49d43e58__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[4U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[5U] = ((__Vtemp_h49d43e58__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[5U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[6U] = ((__Vtemp_h49d43e58__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[6U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[7U] = ((__Vtemp_h49d43e58__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[7U] 
                                              << 2U));
    __Vtemp_h087e67f1__0[8U] = ((__Vtemp_h49d43e58__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__0[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h15b489db__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h087e67f1__0);
    VL_EXTEND_WI(258,7, __Vtemp_h49d43e58__1, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h776aeade__0[0U] = (__Vtemp_h49d43e58__1[0U] 
                                << 2U);
    __Vtemp_h776aeade__0[1U] = ((__Vtemp_h49d43e58__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[1U] 
                                              << 2U));
    __Vtemp_h776aeade__0[2U] = ((__Vtemp_h49d43e58__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[2U] 
                                              << 2U));
    __Vtemp_h776aeade__0[3U] = ((__Vtemp_h49d43e58__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[3U] 
                                              << 2U));
    __Vtemp_h776aeade__0[4U] = ((__Vtemp_h49d43e58__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[4U] 
                                              << 2U));
    __Vtemp_h776aeade__0[5U] = ((__Vtemp_h49d43e58__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[5U] 
                                              << 2U));
    __Vtemp_h776aeade__0[6U] = ((__Vtemp_h49d43e58__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[6U] 
                                              << 2U));
    __Vtemp_h776aeade__0[7U] = ((__Vtemp_h49d43e58__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[7U] 
                                              << 2U));
    __Vtemp_h776aeade__0[8U] = ((__Vtemp_h49d43e58__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__1[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h69a44206__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h776aeade__0);
    VL_EXTEND_WI(258,7, __Vtemp_h49d43e58__2, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h7c0f8eba__0[0U] = (__Vtemp_h49d43e58__2[0U] 
                                << 2U);
    __Vtemp_h7c0f8eba__0[1U] = ((__Vtemp_h49d43e58__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[1U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[2U] = ((__Vtemp_h49d43e58__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[2U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[3U] = ((__Vtemp_h49d43e58__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[3U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[4U] = ((__Vtemp_h49d43e58__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[4U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[5U] = ((__Vtemp_h49d43e58__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[5U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[6U] = ((__Vtemp_h49d43e58__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[6U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[7U] = ((__Vtemp_h49d43e58__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[7U] 
                                              << 2U));
    __Vtemp_h7c0f8eba__0[8U] = ((__Vtemp_h49d43e58__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__2[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h4485ef54__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h7c0f8eba__0);
    VL_EXTEND_WI(258,7, __Vtemp_h49d43e58__3, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h0cffeb43__0[0U] = (__Vtemp_h49d43e58__3[0U] 
                                << 2U);
    __Vtemp_h0cffeb43__0[1U] = ((__Vtemp_h49d43e58__3[0U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[1U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[2U] = ((__Vtemp_h49d43e58__3[1U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[2U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[3U] = ((__Vtemp_h49d43e58__3[2U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[3U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[4U] = ((__Vtemp_h49d43e58__3[3U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[4U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[5U] = ((__Vtemp_h49d43e58__3[4U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[5U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[6U] = ((__Vtemp_h49d43e58__3[5U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[6U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[7U] = ((__Vtemp_h49d43e58__3[6U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[7U] 
                                              << 2U));
    __Vtemp_h0cffeb43__0[8U] = ((__Vtemp_h49d43e58__3[7U] 
                                 >> 0x1eU) | (__Vtemp_h49d43e58__3[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h2f0d84db__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h0cffeb43__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1328) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                 & __Vtemp_h15b489db__0[0U]) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                      & __Vtemp_h69a44206__0[0U]) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                         & __Vtemp_h4485ef54__0[0U]) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                               & __Vtemp_h2f0d84db__0[0U]) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:841: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 841, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:842:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:843: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 843, "");
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestHarness__ConstPool__CONST_h00a540f1_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2933(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2933\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h4a2b1f48__0;
    VlWide<17>/*543:0*/ __Vtemp_h35033d6b__0;
    VlWide<17>/*543:0*/ __Vtemp_ha0a128a1__0;
    // Body
    VL_EXTEND_WI(517,7, __Vtemp_h4a2b1f48__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    __Vtemp_h35033d6b__0[0U] = (__Vtemp_h4a2b1f48__0[0U] 
                                << 3U);
    __Vtemp_h35033d6b__0[1U] = ((__Vtemp_h4a2b1f48__0[0U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[1U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[2U] = ((__Vtemp_h4a2b1f48__0[1U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[2U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[3U] = ((__Vtemp_h4a2b1f48__0[2U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[3U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[4U] = ((__Vtemp_h4a2b1f48__0[3U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[4U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[5U] = ((__Vtemp_h4a2b1f48__0[4U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[5U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[6U] = ((__Vtemp_h4a2b1f48__0[5U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[6U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[7U] = ((__Vtemp_h4a2b1f48__0[6U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[7U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[8U] = ((__Vtemp_h4a2b1f48__0[7U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[8U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[9U] = ((__Vtemp_h4a2b1f48__0[8U] 
                                 >> 0x1dU) | (__Vtemp_h4a2b1f48__0[9U] 
                                              << 3U));
    __Vtemp_h35033d6b__0[0xaU] = ((__Vtemp_h4a2b1f48__0[9U] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xaU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0xbU] = ((__Vtemp_h4a2b1f48__0[0xaU] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xbU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0xcU] = ((__Vtemp_h4a2b1f48__0[0xbU] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xcU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0xdU] = ((__Vtemp_h4a2b1f48__0[0xcU] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xdU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0xeU] = ((__Vtemp_h4a2b1f48__0[0xdU] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xeU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0xfU] = ((__Vtemp_h4a2b1f48__0[0xeU] 
                                   >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0xfU] 
                                                << 3U));
    __Vtemp_h35033d6b__0[0x10U] = ((__Vtemp_h4a2b1f48__0[0xfU] 
                                    >> 0x1dU) | (__Vtemp_h4a2b1f48__0[0x10U] 
                                                 << 3U));
    VL_SHIFTR_WWW(520,520,520, __Vtemp_ha0a128a1__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight_sizes, __Vtemp_h35033d6b__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1328) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & ((VTestHarness__ConstPool__CONST_h00a540f1_0[0U] 
                                                 & __Vtemp_ha0a128a1__0[0U]) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:847: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 847, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:848:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:849: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 849, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__x1_out_1_valid)) 
                        & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source) 
                           == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 9U)))) & 
                       (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:853: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 853, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:854:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:855: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 855, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2934(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2934\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__0;
    VlWide<4>/*127:0*/ __Vtemp_h557ea57f__0;
    VlWide<4>/*127:0*/ __Vtemp_hbedf69c8__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__1;
    VlWide<4>/*127:0*/ __Vtemp_h4a2dd5e2__0;
    VlWide<4>/*127:0*/ __Vtemp_h1abc586c__0;
    VlWide<4>/*127:0*/ __Vtemp_hc961d23f__2;
    VlWide<4>/*127:0*/ __Vtemp_h557ea57f__1;
    VlWide<4>/*127:0*/ __Vtemp_h4bdd5dd8__0;
    // Body
    __Vtemp_hc961d23f__0[0U] = 1U;
    __Vtemp_hc961d23f__0[1U] = 0U;
    __Vtemp_hc961d23f__0[2U] = 0U;
    __Vtemp_hc961d23f__0[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h557ea57f__0, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_hbedf69c8__0, __Vtemp_hc961d23f__0, __Vtemp_h557ea57f__0);
    __Vtemp_hc961d23f__1[0U] = 1U;
    __Vtemp_hc961d23f__1[1U] = 0U;
    __Vtemp_hc961d23f__1[2U] = 0U;
    __Vtemp_hc961d23f__1[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h4a2dd5e2__0, (0x7fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h1abc586c__0, __Vtemp_hc961d23f__1, __Vtemp_h4a2dd5e2__0);
    __Vtemp_hc961d23f__2[0U] = 1U;
    __Vtemp_hc961d23f__2[1U] = 0U;
    __Vtemp_hc961d23f__2[2U] = 0U;
    __Vtemp_hc961d23f__2[3U] = 0U;
    VL_EXTEND_WI(128,7, __Vtemp_h557ea57f__1, (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source));
    VL_SHIFTL_WWW(128,128,128, __Vtemp_h4bdd5dd8__0, __Vtemp_hc961d23f__2, __Vtemp_h557ea57f__1);
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)) 
                           & (~ ((0U != (((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                             ? __Vtemp_hbedf69c8__0[0U]
                                             : 0U) 
                                           ^ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode)))
                                               ? __Vtemp_h1abc586c__0[0U]
                                               : 0U)) 
                                          | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? __Vtemp_hbedf69c8__0[1U]
                                               : 0U) 
                                             ^ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                                                  & (0U 
                                                     == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                 & (6U 
                                                    != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode)))
                                                 ? 
                                                __Vtemp_h1abc586c__0[1U]
                                                 : 0U))) 
                                         | (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? (1U 
                                                 & __Vtemp_hbedf69c8__0[2U])
                                              : 0U) 
                                            ^ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                                                 & (0U 
                                                    == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))) 
                                                & (6U 
                                                   != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode)))
                                                ? (1U 
                                                   & __Vtemp_h1abc586c__0[2U])
                                                : 0U)))) 
                                 | (0U == ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                              ? __Vtemp_h4bdd5dd8__0[0U]
                                              : 0U) 
                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                                ? __Vtemp_h4bdd5dd8__0[1U]
                                                : 0U)) 
                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___same_cycle_resp_T_1)
                                               ? (1U 
                                                  & __Vtemp_h4bdd5dd8__0[2U])
                                               : 0U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:859: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 859, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:860:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:861: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 861, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)) 
                           & (~ (((0U == ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[0U] 
                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[1U]) 
                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight[2U])) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:865: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: TileLink timeout expired (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 865, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:866:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:867: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 867, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2935(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2935\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:871: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 871, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:872:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:873: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 873, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__bundleIn_0_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:877: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor: Assertion failed: 'D' channel contains improper response size (connected at PeripheryBus.scala:58:7)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 877, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv:878:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_23.sv:879: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.atomics.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_23.sv", 879, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2936(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2936\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:288: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 288, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:289:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:290: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 290, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))) 
                           & ((((((((0U == ((0x3fffcU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                 >> 0xcU)))) 
                                   | (1U == (0x7fffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0x10U)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:294: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 294, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:295:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:296: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 296, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2937(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2937\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:300: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 300, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:301:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:302: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 302, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:306: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 306, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:307:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:308: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 308, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2938(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2938\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:312: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 312, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:313:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:314: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 314, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:318: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 318, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:319:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:320: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 320, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2939(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2939\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:324: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 324, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:325:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:326: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 326, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:330: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 330, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:331:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:332: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 332, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2940(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2940\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:336: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 336, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:337:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:338: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 338, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))) 
                           & ((((((((0U == ((0x3fffcU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                 >> 0xcU)))) 
                                   | (1U == (0x7fffU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                >> 0x10U)))) 
                                  | (0U == ((0x3fff0U 
                                             & (0x80U 
                                                ^ (0x7fff0U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                      >> 0xdU)))) 
                                            | (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0xcU))))) 
                                 | (0x200U == (0x7fffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x10U)))) 
                                | (0x2010U == (0x7ffffU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0xcU)))) 
                               | (3U == (0x1fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x1aU)))) 
                              | (0x54000U == (0x7ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:342: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 342, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:343:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:344: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 344, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2941(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2941\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:348: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 348, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:349:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:350: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 350, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:354: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 354, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:355:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:356: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 356, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2942(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2942\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:360: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 360, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:361:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:362: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 362, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:366: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 366, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:367:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:368: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 368, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2943(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2943\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:372: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 372, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:373:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:374: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 374, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:378: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 378, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:379:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:380: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 380, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2944(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2944\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:384: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 384, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:385:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:386: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 386, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                           & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                  | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                  >> 4U)))) 
                                 | (~ (IData)((0U != 
                                               (3U 
                                                & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                   >> 4U)))))) 
                                | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                               | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                              | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:390: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 390, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:391:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:392: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 392, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2945(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2945\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((IData)(((0x3000U == (0x7ffff000U 
                                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                    & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))) 
                           | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                              & (((((((0U == ((0x3fffcU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                    >> 0xcU)))) 
                                      | (1U == (0x7fffU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                   >> 0x10U)))) 
                                     | (0U == ((0x3fff0U 
                                                & (0x80U 
                                                   ^ 
                                                   (0x7fff0U 
                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                       >> 0xdU)))) 
                                               | (0xfU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                     >> 0xcU))))) 
                                    | (0x200U == (0x7fffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                     >> 0x10U)))) 
                                   | (0x2010U == (0x7ffffU 
                                                  & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                     >> 0xcU)))) 
                                  | (3U == (0x1fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                             >> 0x1aU)))) 
                                 | (0x54000U == (0x7ffffU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                    >> 0xcU)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:396: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 396, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:397:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:398: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 398, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2946(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2946\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:402: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 402, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:403:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:404: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 404, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:408: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 408, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:409:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:410: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 410, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2947(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2947\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:414: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 414, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:415:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:416: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 416, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:420: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 420, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:421:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:422: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 422, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2948(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2948\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT__saved_corrupt)
                         : (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_0_a_bits_corrupt))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:426: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 426, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:427:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:428: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 428, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                            & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                    >> 4U)))))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                               | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))) 
                           & ((IData)(((0x3000U == 
                                        (0x7ffff000U 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                       & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                 & ((((((0U == ((0x3fffcU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                    >> 0xdU)) 
                                                | (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                      >> 0xcU)))) 
                                        | (0U == ((0x3fff0U 
                                                   & (0x80U 
                                                      ^ 
                                                      (0x7fff0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                          >> 0xdU)))) 
                                                  | (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                        >> 0xcU))))) 
                                       | (0x200U == 
                                          (0x7fffU 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                              >> 0x10U)))) 
                                      | (0x2010U == 
                                         (0x7ffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                             >> 0xcU)))) 
                                     | (3U == (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x1aU)))) 
                                    | (0x54000U == 
                                       (0x7ffffU & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         >> 0xcU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:432: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 432, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:433:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:434: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2949(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2949\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:438: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 438, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:439:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:440: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 440, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:444: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 444, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:445:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:446: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 446, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2950(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2950\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:450: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 450, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:451:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:452: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 452, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:456: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 456, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:457:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:458: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 458, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2951(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2951\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                            & ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                   | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                   >> 4U)))) 
                                  | (~ (IData)((0U 
                                                != 
                                                (3U 
                                                 & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                    >> 4U)))))) 
                                 | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                               | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))) 
                           & ((IData)(((0x3000U == 
                                        (0x7ffff000U 
                                         & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                       & (0xdU > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))) 
                              | ((7U > (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)) 
                                 & ((((((0U == ((0x3fffcU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                    >> 0xdU)) 
                                                | (3U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                      >> 0xcU)))) 
                                        | (0U == ((0x3fff0U 
                                                   & (0x80U 
                                                      ^ 
                                                      (0x7fff0U 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                          >> 0xdU)))) 
                                                  | (0xfU 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                        >> 0xcU))))) 
                                       | (0x200U == 
                                          (0x7fffU 
                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                              >> 0x10U)))) 
                                      | (0x2010U == 
                                         (0x7ffffU 
                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                             >> 0xcU)))) 
                                     | (3U == (0x1fU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                                  >> 0x1aU)))) 
                                    | (0x54000U == 
                                       (0x7ffffU & 
                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         >> 0xcU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:462: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 462, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:463:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:464: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 464, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2952(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2952\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((0x24U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                               | (1U == (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                               >> 4U)))) 
                              | (~ (IData)((0U != (3U 
                                                   & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)))))) 
                             | (0x20U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                            | (0x21U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                           | (0x22U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:468: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 468, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:469:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:470: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 470, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xfffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address 
                                         & (~ ((0x1aU 
                                                >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_size)))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:474: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 474, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:475:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:476: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 476, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__2953(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__2953\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:480: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 480, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:481:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:482: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 482, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT__repeated_repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask) 
                               & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                      << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_5) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_5) 
                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_4) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_4) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                          << 3U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_3) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                 & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_bus_named_subsystem_cbus__DOT__widget__DOT___repeated_repeater_io_deq_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:486: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 486, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv:487:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_19.sv:488: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_19.sv", 488, "");
        }
    }
}
