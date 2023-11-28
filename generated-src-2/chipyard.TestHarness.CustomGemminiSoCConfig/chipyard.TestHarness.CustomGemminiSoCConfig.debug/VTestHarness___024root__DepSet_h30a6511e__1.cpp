// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__72(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__72\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (5U == ((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                  ? 1U : 4U))) & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:441: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 441, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:442:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:443: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 443, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__73(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__73\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:447: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 447, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:448:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:449: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 449, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x206U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:453: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 453, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:454:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:455: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 455, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:459: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 459, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:460:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:461: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 461, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__74(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__74\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:465: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 465, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:466:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:467: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 467, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:471: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 471, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:472:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:473: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 473, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__75(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__75\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x4006U == (0x4007U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:477: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 477, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:478:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:479: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 479, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x204U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:483: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 483, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:484:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:485: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 485, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__76(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__76\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:489: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 489, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:490:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:491: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 491, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1cU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:495: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 495, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:496:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:497: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 497, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__77(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__77\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x14U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:501: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 501, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:502:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:503: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 503, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:507: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 507, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:508:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:509: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 509, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__78(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__78\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x205U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:513: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 513, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:514:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:515: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 515, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:519: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 519, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:520:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:521: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 521, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__79(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__79\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1dU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:525: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 525, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:526:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:527: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 527, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x15U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:531: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 531, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:532:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:533: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 533, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__80(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__80\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:537: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 537, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:538:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:539: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 539, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x200U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:543: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 543, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:544:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:545: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 545, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__81(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__81\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:549: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 549, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:550:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:551: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 551, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:555: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 555, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:556:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:557: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 557, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__82(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__82\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x201U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:561: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 561, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:562:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:563: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 563, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:567: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 567, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:568:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:569: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 569, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__83(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__83\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:573: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 573, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:574:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:575: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 575, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x202U == (0x207U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:579: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 579, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:580:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:581: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 581, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__84(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__84\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:585: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 585, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:586:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:587: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 587, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:591: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 591, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:592:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:593: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 593, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__85(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__85\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                          ? 1U : 4U) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:597: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 597, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:598:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:599: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 599, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:603: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 603, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:604:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:605: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 605, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:609: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 609, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:610:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:611: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 611, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__86(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__86\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:615: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 615, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:616:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:617: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 617, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_address 
                        != vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:621: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 621, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:622:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:623: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 623, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:627: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 627, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:628:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:629: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__87(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__87\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:633: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 633, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:634:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:635: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 635, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:639: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 639, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:640:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:641: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 641, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:645: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 645, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:646:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:647: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 647, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__88(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__88\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xaU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:651: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 651, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:652:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:653: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 653, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:657: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 657, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:658:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:659: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 659, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_set) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:663: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 663, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:664:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:665: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 665, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__89(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__89\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1227) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight) 
                            >> (1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U))) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:669: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 669, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:670:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:671: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 671, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1227) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * ((7U 
                                                == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                ? 1U
                                                : 4U))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 ((7U 
                                                   == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                   ? 1U
                                                   : 4U)))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    ((7U 
                                                      == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                      ? 1U
                                                      : 4U))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          ((7U 
                                                            == (IData)(vlSelf->TestHarness__DOT__ram__DOT__adapter__DOT__state))
                                                            ? 1U
                                                            : 4U)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:675: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 675, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:676:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:677: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 677, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__90(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__90\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1227) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_bits_size) 
                        != (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:681: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 681, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:682:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:683: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 683, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1227) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 7U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 7U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 7U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:687: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 687, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:688:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:689: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 689, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__91(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__91\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT___T_1227) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (((7U 
                                                  >= 
                                                  (8U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                                  ? 
                                                 (0xffU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes) 
                                                     >> 
                                                     (8U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                                  : 0U) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:693: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 693, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:694:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:695: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 695, "");
        }
    }
    if (VL_UNLIKELY(((((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid)) 
                        & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                              >> 9U))) & (6U != (7U 
                                                 & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_d_ready)) 
                           | (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__full))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:699: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 699, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:700:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:701: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 701, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__92(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__92\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                                   & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1))) 
                                  != ((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (7U 
                                                 & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                                      & (~ (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                                 | (~ ((IData)(vlSelf->TestHarness__DOT__ram__DOT___adapter_auto_out_a_valid) 
                                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:705: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 8 (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 705, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:706:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:707: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 707, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:711: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 711, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:712:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:713: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 713, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__93(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__93\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:717: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 717, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:718:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:719: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 719, "");
        }
    }
    if (VL_UNLIKELY((((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__empty)) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:723: Assertion failed in %NTestHarness.ram.buffer_1.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:463:39)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 723, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv:724:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_78.sv:725: Assertion failed in %NTestHarness.ram.buffer_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_78.sv", 725, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__94(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__94\n"); );
    // Body
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   != 
                                                   (vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                                                    >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:150: Assertion failed in %NTestHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at Periphery.scala:233 assert(io.exit < 2.U, \"*** FAILED *** (exit code = %%%%d)\\n\", io.exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestHarness__DOT__SimJTAG__DOT_____05Fexit 
                      >> 1U));
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 150, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv:151:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TestHarness.sv:152: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 152, "");
        }
    }
    if (VL_UNLIKELY(((~ (IData)(vlSelf->reset)) & (0U 
                                                   != 
                                                   (vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                                                    >> 1U))))) {
        VL_WRITEF("[%0t] %%Error: TestHarness.sv:156: Assertion failed in %NTestHarness: Assertion failed: *** FAILED *** (exit code = %10#)\n\n    at SerialAdapter.scala:104 assert(!error, \"*** FAILED *** (exit code = %%%%d)\\n\", exit >> 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name(),
                  32,(vlSelf->TestHarness__DOT__success_exit_sim__DOT_____05Fexit_reg 
                      >> 1U));
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 156, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv:157:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TestHarness.sv:158: Assertion failed in %NTestHarness\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TestHarness.sv", 158, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                    >> 2U))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_10.sv:177: Assertion failed in %NTestHarness.ram.fragmenter: Assertion failed\n    at Fragmenter.scala:310 assert (!repeater.io.full || !aHasData)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv", 177, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv:178:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_10.sv:179: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv", 179, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__95(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__95\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | (0xffU == (0xffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__full)
                                                  ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                  : 
                                                 (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                  >> 1U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_10.sv:183: Assertion failed in %NTestHarness.ram.fragmenter: Assertion failed\n    at Fragmenter.scala:313 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv", 183, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv:184:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_10.sv:185: Assertion failed in %NTestHarness.ram.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_10.sv", 185, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)) 
                                 | (0xffU == (0xffU 
                                              & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                                  ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_mask)
                                                  : 
                                                 (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                  >> 1U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_11.sv:161: Assertion failed in %NTestHarness.ram.fragmenter_1: Assertion failed\n    at Fragmenter.scala:313 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_11.sv", 161, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_11.sv:162:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_11.sv:163: Assertion failed in %NTestHarness.ram.fragmenter_1\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLFragmenter_11.sv", 163, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:198: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 198, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:199:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:200: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 200, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__96(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__96\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:204: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 204, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:205:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:206: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 206, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:210: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 210, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:211:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:212: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 212, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:216: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 216, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:217:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:218: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 218, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__97(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__97\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:222: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 222, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:223:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:224: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 224, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:228: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 228, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:229:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:230: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 230, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:234: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 234, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:235:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:236: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 236, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__98(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__98\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:240: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 240, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:241:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:242: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 242, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:246: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 246, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:247:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:248: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 248, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:252: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 252, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:253:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:254: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 254, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__99(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__99\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:258: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 258, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:259:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:260: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 260, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:264: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 264, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:265:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:266: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 266, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__100(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__100\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U == (0x38000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:270: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 270, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:271:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:272: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 272, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:276: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 276, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:277:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:278: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 278, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:282: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 282, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:283:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:284: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 284, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__101(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__101\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x20000ULL == (0x30000ULL 
                                                   & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:288: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 288, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:289:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:290: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 290, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:294: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 294, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:295:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:296: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 296, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__102(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__102\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:300: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 300, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:301:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:302: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 302, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:306: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 306, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:307:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:308: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 308, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__103(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__103\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:312: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 312, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:313:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:314: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 314, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:318: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 318, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:319:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:320: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 320, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:324: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 324, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:325:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:326: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 326, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__104(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__104\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:330: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 330, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:331:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:332: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 332, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:336: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 336, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:337:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:338: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 338, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__105(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__105\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:342: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 342, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:343:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:344: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 344, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:348: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 348, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:349:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:350: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 350, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__106(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__106\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:354: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 354, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:355:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:356: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 356, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xffU & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         >> 1U) & (~ 
                                                   ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:360: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 360, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:361:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:362: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 362, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__107(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__107\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:366: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 366, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:367:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:368: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 368, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:372: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 372, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:373:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:374: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 374, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__108(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__108\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:378: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 378, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:379:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:380: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 380, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:384: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 384, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:385:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:386: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 386, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__109(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__109\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:390: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 390, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:391:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:392: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 392, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:396: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 396, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:397:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:398: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 398, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__110(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__110\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0x1dU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:402: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 402, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:403:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:404: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 404, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:408: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 408, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:409:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:410: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 410, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__111(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__111\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:414: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 414, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:415:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:416: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 416, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ (0x1fffU 
                                              & ((IData)(0x3fU) 
                                                 << 
                                                 (7U 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0x13U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:420: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 420, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:421:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:422: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 422, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__112(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__112\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:426: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 426, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:427:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:428: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 428, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:432: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 432, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:433:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:434: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 434, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__113(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__113\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:438: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 438, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:439:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:440: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 440, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (1U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:444: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 444, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:445:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:446: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 446, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:450: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 450, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:451:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:452: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 452, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__114(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__114\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:456: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 456, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:457:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:458: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 458, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                 >> 4U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:462: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 462, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:463:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:464: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 464, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__sink)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:468: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 468, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:469:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:470: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 470, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__115(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__115\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:474: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 474, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:475:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:476: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 476, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__a_first_done) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0xbU)))
                         ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                       >> (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0xbU))))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:480: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 480, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:481:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:482: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 482, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xfU >= (0xfU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                              >> 4U)))
                             ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                  >> 4U))))
                             : 0U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:486: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 486, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:487:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:488: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 488, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__116(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__116\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((1U == ((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))))
                                    ? (7U & (0x911240U 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))
                                    : 0U)) | (1U == 
                                              ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:492: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 492, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:493:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:494: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 494, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:498: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 498, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:499:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:500: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 500, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__117(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__117\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((1U == ((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                                                >> 4U)))) 
                                                                            << 2U)) 
                                                             >> 1U))))))
                                    ? (7U & (0x911240U 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                                                >> 4U)))) 
                                                                               << 2U)) 
                                                                >> 1U)))))))
                                    : 0U)) | (1U == 
                                              ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                                                >> 4U)))) 
                                                                               << 2U)) 
                                                                >> 1U))))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (IData)(
                                                                     (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_opcodes, 
                                                                                ((QData)((IData)(
                                                                                (0xfU 
                                                                                & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                                                >> 4U)))) 
                                                                                << 2U)) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:504: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 504, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:505:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:506: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 506, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__118(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__118\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__bundleIn_0_d_bits_size) 
                        != (7U & (IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight_sizes, 
                                                        ((QData)((IData)(
                                                                         (0xfU 
                                                                          & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                                             >> 4U)))) 
                                                         << 2U)) 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:510: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 510, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:511:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:512: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 512, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT___T_640) 
                        & (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_a_valid)) 
                       & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                   >> 0xbU)) == (0xfU 
                                                 & ((IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source) 
                                                    >> 4U)))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_1_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_enq_ready_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:516: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 516, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:517:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:518: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 518, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__119(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__119\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:522: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:460:69)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 522, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv:523:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_77.sv:524: Assertion failed in %NTestHarness.ram.fragmenter_1.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_77.sv", 524, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:160: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 160, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:161:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:162: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 162, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:166: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 166, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:167:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:168: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 168, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__120(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__120\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:172: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 172, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:173:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:174: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 174, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:178: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 178, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:179:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:180: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 180, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__121(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__121\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:184: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 184, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:185:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:186: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 186, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                 >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:190: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 190, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:191:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:192: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 192, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__122(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__122\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:196: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 196, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:197:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:198: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 198, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:202: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 202, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:203:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:204: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 204, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:208: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 208, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:209:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:210: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 210, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__123(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__123\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:214: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 214, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:215:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:216: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 216, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:220: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 220, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:221:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:222: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 222, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__124(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__124\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:226: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 226, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:227:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:228: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 228, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U == (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:232: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 232, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:233:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:234: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 234, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__125(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__125\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                                 >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:238: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 238, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:239:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:240: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 240, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:244: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 244, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:245:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:246: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 246, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U != (3U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:250: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 250, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:251:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:252: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 252, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__126(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__126\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:256: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 256, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:257:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:258: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 258, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:262: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 262, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:263:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:264: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 264, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__127(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__127\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                              >> 1U))) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:268: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 268, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:269:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:270: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 270, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__128(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__128\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:274: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 274, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:275:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:276: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 276, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:280: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 280, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:281:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:282: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 282, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:286: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 286, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:287:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:288: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 288, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__129(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__129\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:292: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 292, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:293:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:294: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 294, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                              >> 1U))) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:298: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 298, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:299:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:300: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 300, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__130(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__130\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:304: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 304, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:305:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:306: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 306, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:310: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 310, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:311:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:312: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 312, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__131(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__131\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                      ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                      : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:316: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 316, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:317:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:318: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 318, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xffU & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                          ? 0xffU : 
                                         (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                          >> 1U)) & 
                                        (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                             << 7U) 
                                            | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                << 6U) 
                                               | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:322: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 322, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:323:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:324: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 324, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__132(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__132\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:328: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 328, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:329:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:330: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 330, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:334: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 334, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:335:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:336: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 336, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__133(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__133\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                     ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                     : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                        >> 0x1bU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:340: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 340, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:341:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:342: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 342, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                              >> 1U))) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:346: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 346, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:347:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:348: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 348, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__134(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__134\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:352: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 352, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:353:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:354: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 354, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:358: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 358, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:359:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:360: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 360, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__135(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__135\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                          : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                             >> 0x1bU)) >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:364: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 364, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:365:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:366: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 366, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                              >> 1U))) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:370: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 370, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:371:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:372: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 372, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__136(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__136\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:376: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 376, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:377:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:378: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 378, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address 
                                     & (~ (0x3fU & 
                                           ((IData)(7U) 
                                            << (3U 
                                                & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__aFrag))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:382: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 382, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:383:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:384: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 384, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__137(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__137\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                                       ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_param)
                                       : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0x1bU)) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:388: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 388, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:389:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:390: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 390, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                              >> 1U))) 
                        != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:394: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 394, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:395:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:396: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 396, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__138(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__138\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hdc3e84e6__0;
    VlWide<8>/*255:0*/ __Vtemp_h60dfb690__0;
    VlWide<8>/*255:0*/ __Vtemp_hdc3e84e6__1;
    VlWide<8>/*255:0*/ __Vtemp_ha7ee1e1c__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                            >> 0xaU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:400: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 400, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:401:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:402: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 402, "");
        }
    }
    VL_EXTEND_WI(256,8, __Vtemp_hdc3e84e6__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_h60dfb690__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, __Vtemp_hdc3e84e6__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__a_first_done) 
                      & (~ (IData)(vlSelf->reset))) 
                     & __Vtemp_h60dfb690__0[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:406: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 406, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:407:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:408: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 408, "");
        }
    }
    VL_EXTEND_WI(256,8, __Vtemp_hdc3e84e6__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    VL_SHIFTR_WWW(256,256,256, __Vtemp_ha7ee1e1c__0, vlSelf->TestHarness__DOT__ram__DOT__rom__DOT__monitor__DOT__inflight, __Vtemp_hdc3e84e6__1);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (__Vtemp_ha7ee1e1c__0[0U] 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:412: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 412, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:413:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:414: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 414, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__139(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__139\n"); );
    // Init
    VlWide<32>/*1023:0*/ __Vtemp_hcfe659b6__0;
    VlWide<32>/*1023:0*/ __Vtemp_h82ae4b85__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcfe659b6__1;
    VlWide<32>/*1023:0*/ __Vtemp_ha0ad806c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcfe659b6__2;
    VlWide<32>/*1023:0*/ __Vtemp_hdcf848e7__0;
    VlWide<32>/*1023:0*/ __Vtemp_hcfe659b6__3;
    VlWide<32>/*1023:0*/ __Vtemp_h8275bff5__0;
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter_1__DOT__repeater__DOT___io_deq_valid_output) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((1U == ((0x17U >= (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))))
                                    ? (7U & (0x911240U 
                                             >> (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode)))))
                                    : 0U)) | (1U == 
                                              ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:418: Assertion failed in %NTestHarness.ram.rom.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:460:12)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 418, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv:419:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_73.sv:420: Assertion failed in %NTestHarness.ram.rom.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_73.sv", 420, "");
        }
    }
    VL_EXTEND_WI(1022,8, __Vtemp_hcfe659b6__0, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    __Vtemp_h82ae4b85__0[0U] = (__Vtemp_hcfe659b6__0[0U] 
                                << 2U);
    __Vtemp_h82ae4b85__0[1U] = ((__Vtemp_hcfe659b6__0[0U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[1U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[2U] = ((__Vtemp_hcfe659b6__0[1U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[2U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[3U] = ((__Vtemp_hcfe659b6__0[2U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[3U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[4U] = ((__Vtemp_hcfe659b6__0[3U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[4U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[5U] = ((__Vtemp_hcfe659b6__0[4U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[5U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[6U] = ((__Vtemp_hcfe659b6__0[5U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[6U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[7U] = ((__Vtemp_hcfe659b6__0[6U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[7U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[8U] = ((__Vtemp_hcfe659b6__0[7U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[8U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[9U] = ((__Vtemp_hcfe659b6__0[8U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__0[9U] 
                                              << 2U));
    __Vtemp_h82ae4b85__0[0xaU] = ((__Vtemp_hcfe659b6__0[9U] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xaU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0xbU] = ((__Vtemp_hcfe659b6__0[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xbU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0xcU] = ((__Vtemp_hcfe659b6__0[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xcU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0xdU] = ((__Vtemp_hcfe659b6__0[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xdU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0xeU] = ((__Vtemp_hcfe659b6__0[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xeU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0xfU] = ((__Vtemp_hcfe659b6__0[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__0[0xfU] 
                                                << 2U));
    __Vtemp_h82ae4b85__0[0x10U] = ((__Vtemp_hcfe659b6__0[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x10U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x11U] = ((__Vtemp_hcfe659b6__0[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x11U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x12U] = ((__Vtemp_hcfe659b6__0[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x12U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x13U] = ((__Vtemp_hcfe659b6__0[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x13U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x14U] = ((__Vtemp_hcfe659b6__0[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x14U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x15U] = ((__Vtemp_hcfe659b6__0[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x15U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x16U] = ((__Vtemp_hcfe659b6__0[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x16U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x17U] = ((__Vtemp_hcfe659b6__0[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x17U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x18U] = ((__Vtemp_hcfe659b6__0[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x18U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x19U] = ((__Vtemp_hcfe659b6__0[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x19U] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1aU] = ((__Vtemp_hcfe659b6__0[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1aU] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1bU] = ((__Vtemp_hcfe659b6__0[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1bU] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1cU] = ((__Vtemp_hcfe659b6__0[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1cU] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1dU] = ((__Vtemp_hcfe659b6__0[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1dU] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1eU] = ((__Vtemp_hcfe659b6__0[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1eU] 
                                                 << 2U));
    __Vtemp_h82ae4b85__0[0x1fU] = ((__Vtemp_hcfe659b6__0[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__0[0x1fU] 
                                                 << 2U));
    VL_EXTEND_WI(1022,8, __Vtemp_hcfe659b6__1, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    __Vtemp_ha0ad806c__0[0U] = (__Vtemp_hcfe659b6__1[0U] 
                                << 2U);
    __Vtemp_ha0ad806c__0[1U] = ((__Vtemp_hcfe659b6__1[0U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[1U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[2U] = ((__Vtemp_hcfe659b6__1[1U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[2U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[3U] = ((__Vtemp_hcfe659b6__1[2U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[3U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[4U] = ((__Vtemp_hcfe659b6__1[3U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[4U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[5U] = ((__Vtemp_hcfe659b6__1[4U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[5U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[6U] = ((__Vtemp_hcfe659b6__1[5U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[6U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[7U] = ((__Vtemp_hcfe659b6__1[6U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[7U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[8U] = ((__Vtemp_hcfe659b6__1[7U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[8U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[9U] = ((__Vtemp_hcfe659b6__1[8U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__1[9U] 
                                              << 2U));
    __Vtemp_ha0ad806c__0[0xaU] = ((__Vtemp_hcfe659b6__1[9U] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xaU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0xbU] = ((__Vtemp_hcfe659b6__1[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xbU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0xcU] = ((__Vtemp_hcfe659b6__1[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xcU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0xdU] = ((__Vtemp_hcfe659b6__1[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xdU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0xeU] = ((__Vtemp_hcfe659b6__1[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xeU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0xfU] = ((__Vtemp_hcfe659b6__1[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__1[0xfU] 
                                                << 2U));
    __Vtemp_ha0ad806c__0[0x10U] = ((__Vtemp_hcfe659b6__1[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x10U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x11U] = ((__Vtemp_hcfe659b6__1[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x11U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x12U] = ((__Vtemp_hcfe659b6__1[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x12U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x13U] = ((__Vtemp_hcfe659b6__1[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x13U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x14U] = ((__Vtemp_hcfe659b6__1[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x14U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x15U] = ((__Vtemp_hcfe659b6__1[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x15U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x16U] = ((__Vtemp_hcfe659b6__1[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x16U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x17U] = ((__Vtemp_hcfe659b6__1[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x17U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x18U] = ((__Vtemp_hcfe659b6__1[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x18U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x19U] = ((__Vtemp_hcfe659b6__1[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x19U] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1aU] = ((__Vtemp_hcfe659b6__1[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1aU] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1bU] = ((__Vtemp_hcfe659b6__1[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1bU] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1cU] = ((__Vtemp_hcfe659b6__1[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1cU] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1dU] = ((__Vtemp_hcfe659b6__1[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1dU] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1eU] = ((__Vtemp_hcfe659b6__1[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1eU] 
                                                 << 2U));
    __Vtemp_ha0ad806c__0[0x1fU] = ((__Vtemp_hcfe659b6__1[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__1[0x1fU] 
                                                 << 2U));
    VL_EXTEND_WI(1022,8, __Vtemp_hcfe659b6__2, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    __Vtemp_hdcf848e7__0[0U] = (__Vtemp_hcfe659b6__2[0U] 
                                << 2U);
    __Vtemp_hdcf848e7__0[1U] = ((__Vtemp_hcfe659b6__2[0U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[1U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[2U] = ((__Vtemp_hcfe659b6__2[1U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[2U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[3U] = ((__Vtemp_hcfe659b6__2[2U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[3U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[4U] = ((__Vtemp_hcfe659b6__2[3U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[4U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[5U] = ((__Vtemp_hcfe659b6__2[4U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[5U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[6U] = ((__Vtemp_hcfe659b6__2[5U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[6U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[7U] = ((__Vtemp_hcfe659b6__2[6U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[7U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[8U] = ((__Vtemp_hcfe659b6__2[7U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[8U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[9U] = ((__Vtemp_hcfe659b6__2[8U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__2[9U] 
                                              << 2U));
    __Vtemp_hdcf848e7__0[0xaU] = ((__Vtemp_hcfe659b6__2[9U] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xaU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0xbU] = ((__Vtemp_hcfe659b6__2[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xbU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0xcU] = ((__Vtemp_hcfe659b6__2[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xcU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0xdU] = ((__Vtemp_hcfe659b6__2[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xdU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0xeU] = ((__Vtemp_hcfe659b6__2[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xeU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0xfU] = ((__Vtemp_hcfe659b6__2[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__2[0xfU] 
                                                << 2U));
    __Vtemp_hdcf848e7__0[0x10U] = ((__Vtemp_hcfe659b6__2[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x10U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x11U] = ((__Vtemp_hcfe659b6__2[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x11U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x12U] = ((__Vtemp_hcfe659b6__2[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x12U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x13U] = ((__Vtemp_hcfe659b6__2[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x13U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x14U] = ((__Vtemp_hcfe659b6__2[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x14U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x15U] = ((__Vtemp_hcfe659b6__2[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x15U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x16U] = ((__Vtemp_hcfe659b6__2[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x16U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x17U] = ((__Vtemp_hcfe659b6__2[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x17U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x18U] = ((__Vtemp_hcfe659b6__2[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x18U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x19U] = ((__Vtemp_hcfe659b6__2[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x19U] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1aU] = ((__Vtemp_hcfe659b6__2[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1aU] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1bU] = ((__Vtemp_hcfe659b6__2[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1bU] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1cU] = ((__Vtemp_hcfe659b6__2[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1cU] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1dU] = ((__Vtemp_hcfe659b6__2[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1dU] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1eU] = ((__Vtemp_hcfe659b6__2[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1eU] 
                                                 << 2U));
    __Vtemp_hdcf848e7__0[0x1fU] = ((__Vtemp_hcfe659b6__2[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__2[0x1fU] 
                                                 << 2U));
    VL_EXTEND_WI(1022,8, __Vtemp_hcfe659b6__3, (IData)(vlSelf->TestHarness__DOT__ram__DOT___fragmenter_1_auto_out_a_bits_source));
    __Vtemp_h8275bff5__0[0U] = (__Vtemp_hcfe659b6__3[0U] 
                                << 2U);
    __Vtemp_h8275bff5__0[1U] = ((__Vtemp_hcfe659b6__3[0U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[1U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[2U] = ((__Vtemp_hcfe659b6__3[1U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[2U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[3U] = ((__Vtemp_hcfe659b6__3[2U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[3U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[4U] = ((__Vtemp_hcfe659b6__3[3U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[4U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[5U] = ((__Vtemp_hcfe659b6__3[4U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[5U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[6U] = ((__Vtemp_hcfe659b6__3[5U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[6U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[7U] = ((__Vtemp_hcfe659b6__3[6U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[7U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[8U] = ((__Vtemp_hcfe659b6__3[7U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[8U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[9U] = ((__Vtemp_hcfe659b6__3[8U] 
                                 >> 0x1eU) | (__Vtemp_hcfe659b6__3[9U] 
                                              << 2U));
    __Vtemp_h8275bff5__0[0xaU] = ((__Vtemp_hcfe659b6__3[9U] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xaU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0xbU] = ((__Vtemp_hcfe659b6__3[0xaU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xbU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0xcU] = ((__Vtemp_hcfe659b6__3[0xbU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xcU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0xdU] = ((__Vtemp_hcfe659b6__3[0xcU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xdU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0xeU] = ((__Vtemp_hcfe659b6__3[0xdU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xeU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0xfU] = ((__Vtemp_hcfe659b6__3[0xeU] 
                                   >> 0x1eU) | (__Vtemp_hcfe659b6__3[0xfU] 
                                                << 2U));
    __Vtemp_h8275bff5__0[0x10U] = ((__Vtemp_hcfe659b6__3[0xfU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x10U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x11U] = ((__Vtemp_hcfe659b6__3[0x10U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x11U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x12U] = ((__Vtemp_hcfe659b6__3[0x11U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x12U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x13U] = ((__Vtemp_hcfe659b6__3[0x12U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x13U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x14U] = ((__Vtemp_hcfe659b6__3[0x13U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x14U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x15U] = ((__Vtemp_hcfe659b6__3[0x14U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x15U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x16U] = ((__Vtemp_hcfe659b6__3[0x15U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x16U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x17U] = ((__Vtemp_hcfe659b6__3[0x16U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x17U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x18U] = ((__Vtemp_hcfe659b6__3[0x17U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x18U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x19U] = ((__Vtemp_hcfe659b6__3[0x18U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x19U] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1aU] = ((__Vtemp_hcfe659b6__3[0x19U] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1aU] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1bU] = ((__Vtemp_hcfe659b6__3[0x1aU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1bU] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1cU] = ((__Vtemp_hcfe659b6__3[0x1bU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1cU] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1dU] = ((__Vtemp_hcfe659b6__3[0x1cU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1dU] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1eU] = ((__Vtemp_hcfe659b6__3[0x1dU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1eU] 
                                                 << 2U));
    __Vtemp_h8275bff5__0[0x1fU] = ((__Vtemp_hcfe659b6__3[0x1eU] 
                                    >> 0x1eU) | (__Vtemp_hcfe659b6__3[0x1fU] 
                                                 << 2U));
}
