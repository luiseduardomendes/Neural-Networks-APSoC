// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__187(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__187\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:427: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 427, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:428:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:429: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 429, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xffU & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         >> 1U) & (~ 
                                                   ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:433: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 433, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:434:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:435: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__188(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__188\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:439: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 439, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:440:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:441: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 441, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:445: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 445, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:446:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:447: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 447, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__189(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__189\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:451: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 451, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:452:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:453: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 453, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:457: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 457, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:458:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:459: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__190(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__190\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:463: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 463, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:464:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:465: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 465, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:469: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 469, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:470:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:471: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__191(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__191\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0x1dU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:475: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 475, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:476:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:477: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 477, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:481: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 481, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:482:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:483: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__192(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__192\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:487: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 487, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:488:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:489: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 489, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:493: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 493, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:494:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:495: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__193(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__193\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:499: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 499, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:500:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:501: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 501, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:505: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 505, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:506:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:507: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 507, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__194(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__194\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:511: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 511, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:512:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:513: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 513, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:517: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 517, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:518:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:519: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 519, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:523: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 523, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:524:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:525: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 525, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__195(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__195\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:529: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 529, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:530:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:531: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 531, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                        & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                           >> 0x11U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:535: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 535, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:536:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:537: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 537, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:541: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 541, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:542:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:543: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 543, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__196(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__196\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:547: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 547, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:548:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:549: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 549, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:553: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 553, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:554:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:555: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 555, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:559: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 559, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:560:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:561: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 561, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__197(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__197\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:565: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 565, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:566:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:567: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 567, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                        & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                           >> 0x11U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:571: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 571, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:572:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:573: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 573, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:577: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 577, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:578:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:579: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 579, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__198(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__198\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:583: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 583, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:584:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:585: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 585, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:589: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 589, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:590:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:591: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 591, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:595: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 595, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:596:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:597: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 597, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__199(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__199\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:601: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 601, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:602:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:603: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 603, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                              & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x11U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:607: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 607, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:608:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:609: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 609, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:613: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 613, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:614:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:615: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 615, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__200(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__200\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:619: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 619, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:620:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:621: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 621, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                        & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                           >> 0x11U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:625: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 625, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:626:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:627: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 627, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:631: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 631, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:632:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:633: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 633, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__201(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__201\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:637: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 637, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:638:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:639: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 639, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)) 
                           | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                              & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x11U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:643: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 643, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:644:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:645: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 645, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:649: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 649, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:650:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:651: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 651, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__202(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__202\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:655: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 655, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:656:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:657: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 657, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__muxStateEarly_0) 
                        & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                           >> 0x11U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:661: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 661, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:662:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:663: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 663, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:667: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 667, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:668:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:669: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 669, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__203(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__203\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:673: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 673, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:674:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:675: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 675, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x1bU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:679: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 679, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:680:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:681: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 681, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:685: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 685, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:686:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:687: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 687, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__204(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__204\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0xbU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:691: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 691, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:692:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:693: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 693, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0x1fffffffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                        != vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:697: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 697, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:698:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:699: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 699, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:703: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 703, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:704:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:705: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 705, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__205(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__205\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_param) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:709: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 709, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:710:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:711: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 711, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:715: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 715, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:716:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:717: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 717, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:721: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 721, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:722:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:723: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 723, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__206(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__206\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_sink) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:727: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 727, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:728:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:729: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 729, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_denied) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:733: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 733, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:734:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:735: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 735, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_662) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0xbU)))
                         ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                       >> (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0xbU))))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:739: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 739, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:740:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:741: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 741, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__207(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__207\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xfU >= (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source))
                             ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight) 
                                           >> (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)))
                             : 0U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:745: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 745, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:746:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:747: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 747, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                                           == ((0x17U 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:751: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 751, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:752:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:753: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 753, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__208(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__208\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:757: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 757, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:758:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:759: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 759, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)) 
                                                                            << 2U)) 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)) 
                                                                            << 2U)) 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)) 
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
                                                                     (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                                                                                ((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)) 
                                                                                << 2U)) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:763: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 763, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:764:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:765: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 765, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__209(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__209\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT___T_681) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size) 
                        != (7U & (IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight_sizes, 
                                                        ((QData)((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source)) 
                                                         << 2U)) 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:769: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 769, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:770:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:771: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 771, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT___serdesser_auto_client_out_a_valid)) 
                        & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0xbU)) == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_source))) 
                       & (6U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___outArb_io_in_1_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT___portsAOI_in_0_a_ready_WIRE)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:775: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 775, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:776:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:777: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 777, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__210(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__210\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:781: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 781, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:782:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:783: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 783, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:787: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 787, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:788:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:789: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 789, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__xbar__DOT__out_9_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:793: Assertion failed in %NTestHarness.ram.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:461:8)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 793, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv:794:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_74.sv:795: Assertion failed in %NTestHarness.ram.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_74.sv", 795, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__211(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__211\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:273: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 273, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:274:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:275: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 275, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:279: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 279, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:280:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:281: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 281, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:285: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 285, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:286:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:287: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 287, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__212(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__212\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:291: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 291, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:292:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:293: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 293, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:297: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 297, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:298:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:299: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 299, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__213(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__213\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:303: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 303, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:304:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:305: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 305, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:309: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 309, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:310:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:311: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 311, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:315: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 315, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:316:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:317: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 317, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__214(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__214\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:321: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 321, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:322:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:323: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 323, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:327: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 327, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:328:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:329: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 329, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:333: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 333, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:334:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:335: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 335, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__215(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__215\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:339: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 339, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:340:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:341: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 341, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U == (0x38000000U & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:345: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 345, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:346:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:347: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 347, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                           >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:351: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 351, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:352:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:353: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 353, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__216(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__216\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:357: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 357, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:358:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:359: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 359, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x10000000ULL == 
                                    (0x1ffff000ULL 
                                     & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:363: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 363, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:364:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:365: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 365, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__217(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__217\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:369: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 369, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:370:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:371: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 371, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:375: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 375, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:376:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:377: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 377, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__218(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__218\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:381: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 381, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:382:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:383: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 383, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__219(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__219\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:387: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Get is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 387, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:388:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:389: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 389, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x10000000ULL == 
                                    (0x1ffff000ULL 
                                     & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:393: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 393, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:394:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:395: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 395, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__220(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__220\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:399: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 399, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:400:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:401: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 401, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:405: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 405, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:406:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:407: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 407, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__221(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__221\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:411: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 411, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:412:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:413: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 413, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__222(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__222\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (IData)(((0x10000000ULL == 
                                    (0x1ffff000ULL 
                                     & vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                                   & (7U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0x13U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:417: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 417, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:418:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:419: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 419, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:423: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 423, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:424:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:425: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 425, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__223(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__223\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:429: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 429, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:430:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:431: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 431, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xffU & ((vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                         >> 1U) & (~ 
                                                   ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 7U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 6U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 5U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 4U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 3U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                        & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                                    << 2U) 
                                                                   | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                        | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                       << 1U) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:435: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 435, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:436:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:437: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 437, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__224(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__224\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:441: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 441, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:442:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:443: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 443, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:447: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 447, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:448:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:449: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 449, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__225(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__225\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:453: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 453, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:454:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:455: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 455, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:459: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 459, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:460:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:461: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 461, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__226(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__226\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:465: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 465, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:466:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:467: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 467, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:471: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 471, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:472:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:473: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 473, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__227(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__227\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                        >> 0x1dU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:477: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 477, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:478:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:479: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 479, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:483: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 483, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:484:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:485: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 485, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__228(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__228\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:489: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 489, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:490:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:491: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 491, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0x3fU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                      >> 0x13U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                         >> 0x13U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:495: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 495, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:496:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:497: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 497, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__229(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__229\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1cU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:501: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 501, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:502:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:503: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 503, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                                  >> 1U)) != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                   & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                               << 7U) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                     << 5U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                               & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                           << 3U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))) 
                                                                 << 1U) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:507: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 507, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:508:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:509: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 509, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__230(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__230\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:513: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 513, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:514:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:515: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 515, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (7U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:519: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel has invalid opcode (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 519, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:520:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:521: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 521, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:525: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 525, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:526:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:527: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 527, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__231(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__231\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:531: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 531, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:532:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:533: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 533, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:537: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 537, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:538:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:539: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 539, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__232(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__232\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10006U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:543: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 543, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:544:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:545: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 545, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:549: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 549, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:550:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:551: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 551, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:555: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 555, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:556:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:557: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 557, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__233(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__233\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x1cU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:561: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 561, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:562:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:563: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 563, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x14U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:567: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 567, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:568:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:569: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 569, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__234(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__234\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:573: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 573, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:574:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:575: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 575, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10004U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:579: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel Grant is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 579, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:580:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:581: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 581, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:585: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 585, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:586:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:587: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 587, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__235(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__235\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (3U > (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:591: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 591, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:592:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:593: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 593, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x1dU == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:597: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 597, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:598:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:599: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 599, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x15U == (0x1fU & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:603: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 603, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:604:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:605: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 605, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__236(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__236\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x11U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:609: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 609, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:610:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:611: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 611, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10005U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:615: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel GrantData is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 615, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:616:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:617: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 617, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__237(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__237\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:621: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 621, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:622:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:623: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 623, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:627: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 627, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:628:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:629: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__238(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__238\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10000U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:633: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 633, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:634:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:635: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 635, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:639: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 639, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:640:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:641: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 641, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__239(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__239\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) | (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x11U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:645: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 645, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:646:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:647: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 647, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10001U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:651: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 651, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:652:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:653: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 653, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__240(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__240\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:657: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 657, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:658:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:659: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 659, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0x11U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:663: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 663, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:664:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:665: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 665, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__241(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__241\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                      & (0x10002U == (0x10007U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:669: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel HintAck is denied (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 669, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:670:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:671: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 671, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:675: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 675, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:676:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:677: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 677, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x1bU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:681: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 681, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:682:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:683: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 683, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__242(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__242\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:687: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 687, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:688:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:689: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 689, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0xbU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:693: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 693, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:694:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:695: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 695, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0x1fffffffU & (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_address)) 
                        != vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:699: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 699, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:700:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:701: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 701, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__243(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__243\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:705: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 705, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:706:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:707: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 707, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((3U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:711: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 711, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:712:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:713: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 713, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:717: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 717, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:718:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:719: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 719, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__244(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__244\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 0xbU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:723: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 723, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:724:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:725: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 725, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xfU)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:729: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 729, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:730:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:731: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 731, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((1U & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0x10U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:735: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 735, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:736:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:737: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 737, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__245(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__245\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_598) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                          >> 0xbU)))
                         ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                       >> (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0xbU))))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:741: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' channel re-used a source ID (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 741, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:742:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:743: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 743, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_617) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xbU)))
                             ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xbU))))
                             : 0U) | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:747: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 747, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:748:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:749: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 749, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__246(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__246\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT___inDes_io_out_bits_opcode)))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
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
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:753: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 753, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:754:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:755: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 755, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:759: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 759, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:760:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:761: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 761, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__247(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__247\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ (((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU)))) 
                                                                            << 2U)) 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU)))) 
                                                                            << 2U)) 
                                                             >> 1U)))))))
                                 : 0U)) | ((7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU)))) 
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
                                                                     (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, 
                                                                                ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 0xbU)))) 
                                                                                << 2U)) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:765: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 765, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:766:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:767: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 767, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__248(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__248\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___T_617) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size) 
                        != (7U & (IData)((VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, 
                                                        ((QData)((IData)(
                                                                         (0xfU 
                                                                          & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0xbU)))) 
                                                         << 2U)) 
                                          >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:771: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 771, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:772:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:773: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 773, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_a_valid)) 
                        & ((0xfU & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0xbU)) == (0xfU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xbU)))) 
                       & (6U != (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT___xbar_auto_out_0_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:777: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 777, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:778:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:779: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 779, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__249(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__249\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? ((0xfU >= (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                    >> 0xbU)))
                                        ? (0xffffU 
                                           & ((IData)(1U) 
                                              << (0xfU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                     >> 0xbU))))
                                        : 0U) : 0U) 
                                  != ((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                                       & (6U != (7U 
                                                 & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                       ? ((0xfU >= 
                                           (0xfU & 
                                            (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU)))
                                           ? (0xffffU 
                                              & ((IData)(1U) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xbU))))
                                           : 0U) : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? ((0xfU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                    >> 0xbU)))
                                                ? (0xffffU 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                          >> 0xbU))))
                                                : 0U)
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:783: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 3 (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 783, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:784:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:785: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 785, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader_TestHarness_UNIQUIFIED__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:789: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: TileLink timeout expired (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 789, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:790:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:791: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 791, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__250(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__250\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:795: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 795, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:796:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:797: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 797, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__ram__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:801: Assertion failed in %NTestHarness.ram.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at SerialAdapter.scala:459:102)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 801, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv:802:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_76.sv:803: Assertion failed in %NTestHarness.ram.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_76.sv", 803, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__251(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__251\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (~ ((IData)(((0x180U == (0x7c0U 
                                                & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])) 
                                    & (0xdU > (0xfU 
                                               & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))))) 
                           & (((2U == (0xffffU & ((
                                                   vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 5U) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1bU)))) 
                               | (0x10000U == (0xfffffU 
                                               & ((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U))))) 
                              | (8U == (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 7U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:273: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 273, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:274:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:275: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 275, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:279: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 279, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:280:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:281: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 281, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__252(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__252\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                      & (0x406U == (0x407U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:285: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 285, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:286:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:287: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 287, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U >= (0xfU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:291: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 291, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:292:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:293: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 293, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__253(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__253\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0U != (0xfffU & (((vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           << 0x15U) 
                                          | (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xbU)) 
                                         & (~ ((0x1aU 
                                                >= 
                                                (0xfU 
                                                 & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))
                                                ? (0x7ffffffU 
                                                   & ((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U))))
                                                : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:297: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 297, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:298:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:299: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 299, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:303: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 303, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:304:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:305: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 305, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__254(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__254\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0xbU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:309: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 309, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:310:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:311: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 311, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->reset))) 
                     & (vlSelf->TestHarness__DOT__ram__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:315: Assertion failed in %NTestHarness.ram.serdesser.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at SerialAdapter.scala:463:25)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 315, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv:316:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_71.sv:317: Assertion failed in %NTestHarness.ram.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_71.sv", 317, "");
        }
    }
}
