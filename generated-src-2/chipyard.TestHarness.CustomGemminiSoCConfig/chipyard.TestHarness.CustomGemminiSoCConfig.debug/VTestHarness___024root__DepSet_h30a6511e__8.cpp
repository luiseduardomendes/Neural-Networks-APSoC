// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1852(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1852\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xdU)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:397: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 397, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:398:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:399: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 399, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:403: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 403, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:404:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:405: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 405, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1853(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1853\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xaU)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x3ffff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0xdU)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0xffffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 8U)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0xdU)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x3ffff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xaU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0xdU)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0xffffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xcU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:409: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 409, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:410:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:411: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 411, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1854(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1854\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ ((7U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 6U))) & 
                           (0x10000U == (0x1ffffU & 
                                         ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 7U) | 
                                          (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x19U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:415: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 415, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:416:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:417: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 417, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xdU)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:421: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 421, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:422:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:423: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 423, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1855(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1855\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:427: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 427, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:428:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:429: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 429, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0xffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x16U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xaU)) 
                                        & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                << 7U) 
                                               | (0x3ffff80U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                      << 7U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0xdU)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                      << 5U) 
                                                     | (0xffffe0U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                            << 5U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 8U)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0xdU)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                            << 3U) 
                                                           | (0x3ffff8U 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                  << 3U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xaU)))) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ 
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xdU)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                  << 1U) 
                                                                 | (0xffffeU 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                        << 1U) 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0xcU)))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0xdU)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:433: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 433, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:434:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:435: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 435, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1856(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1856\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:439: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 439, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:440:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:441: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 441, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xdU)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:445: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 445, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:446:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:447: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 447, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1857(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1857\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:451: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 451, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:452:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:453: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 453, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xaU)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x3ffff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0xdU)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0xffffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 8U)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0xdU)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x3ffff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xaU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0xdU)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0xffffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xcU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:457: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 457, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:458:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:459: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 459, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1858(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1858\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:463: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 463, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:464:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:465: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 465, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xdU)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:469: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 469, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:470:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:471: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 471, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1859(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1859\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:475: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 475, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:476:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:477: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 477, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xaU)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x3ffff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0xdU)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0xffffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 8U)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0xdU)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x3ffff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xaU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0xdU)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0xffffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xcU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:481: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 481, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:482:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:483: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 483, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1860(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1860\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:487: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 487, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:488:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:489: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 489, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0x13U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xdU)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:493: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 493, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:494:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:495: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 495, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1861(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1861\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:499: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 499, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:500:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:501: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 501, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xaU)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                  << 7U) 
                                                 | (0x3ffff80U 
                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        << 7U) 
                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 6U)))) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_5) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_5) 
                                                        & (~ 
                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 0xdU)))) 
                                                    << 6U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                        << 5U) 
                                                       | (0xffffe0U 
                                                          & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              << 5U) 
                                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 8U)))) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_4) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_4) 
                                                              & (~ 
                                                                 (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 0xdU)))) 
                                                          << 4U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                              << 3U) 
                                                             | (0x3ffff8U 
                                                                & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    << 3U) 
                                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0xaU)))) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_3) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_3) 
                                                                    & (~ 
                                                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 0xdU)))) 
                                                                << 2U) 
                                                               | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                    << 1U) 
                                                                   | (0xffffeU 
                                                                      & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                          << 1U) 
                                                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xcU)))) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_acc_2) 
                                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__mask_eq_2) 
                                                                        & (~ 
                                                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 0xdU))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:505: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 505, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:506:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:507: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 507, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1862(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1862\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x12U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:511: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 511, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:512:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:513: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 513, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:517: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 517, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:518:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:519: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 519, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1863(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1863\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:523: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 523, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:524:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:525: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 525, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:529: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 529, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:530:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:531: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 531, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1864(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1864\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:535: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 535, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:536:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:537: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 537, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:541: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 541, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:542:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:543: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 543, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1865(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1865\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                      & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:547: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 547, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:548:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:549: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 549, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:553: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 553, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:554:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:555: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 555, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1866(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1866\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x18000000U == (0x18000000U 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:559: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 559, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:560:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:561: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 561, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x10000000U == (0x18000000U 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:565: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 565, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:566:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:567: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 567, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1867(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1867\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:571: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 571, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:572:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:573: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 573, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:577: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel Grant is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 577, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:578:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:579: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 579, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1868(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1868\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:583: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 583, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:584:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:585: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 585, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                    >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:589: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 589, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:590:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:591: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 591, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1869(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1869\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x18000000U == (0x18000000U 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:595: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 595, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:596:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:597: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 597, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0x10000000U == (0x18000000U 
                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:601: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 601, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:602:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:603: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 603, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1870(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1870\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (IData)((2U != (0x402U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:607: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 607, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:608:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:609: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 609, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:613: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel GrantData is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 613, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:614:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:615: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 615, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1871(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1871\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:619: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 619, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:620:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:621: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 621, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:625: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 625, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:626:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:627: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 627, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1872(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1872\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:631: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 631, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:632:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:633: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 633, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:637: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 637, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:638:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:639: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 639, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1873(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1873\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (IData)((2U != (0x402U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:643: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 643, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:644:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:645: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 645, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:649: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 649, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:650:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:651: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 651, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1874(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1874\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x1bU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:655: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 655, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:656:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:657: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 657, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 0xaU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:661: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 661, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:662:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:663: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 663, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1875(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1875\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                        >> 1U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:667: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel HintAck is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 667, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:668:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:669: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 669, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:673: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 673, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:674:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:675: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 675, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1876(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1876\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:679: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 679, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:680:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:681: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 681, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:685: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 685, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:686:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:687: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 687, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1877(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1877\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 9U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:691: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 691, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:692:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:693: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 693, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty)) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0x1fffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x13U) 
                                        | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xdU))) 
                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:697: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 697, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:698:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:699: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 699, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1878(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1878\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:703: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 703, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:704:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:705: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 705, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x1bU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:709: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 709, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:710:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:711: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 711, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1879(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1879\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:715: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 715, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:716:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:717: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 717, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                 >> 0xbU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:721: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 721, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:722:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:723: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 723, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1880(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1880\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                               >> 2U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:727: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 727, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:728:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:729: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 729, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((1U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_0 
                               >> 1U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:733: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 733, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:734:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:735: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 735, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1881(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1881\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_662) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 9U))) ? 
                        (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                    >> (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 9U))))
                         : 0U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:739: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 739, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:740:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:741: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 741, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_681) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (((0xfU >= (0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                              >> 0xbU)))
                             ? (0xffffU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight) 
                                           >> (0xfU 
                                               & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                  >> 0xbU))))
                             : 0U) | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:745: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 745, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:746:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:747: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 747, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1882(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1882\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_681) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:751: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 751, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:752:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:753: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 753, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1883(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1883\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_681) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp)) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                 >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:757: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 757, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:758:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:759: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 759, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_681) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xbU)))) 
                                                                            << 2U)) 
                                                             >> 1U))))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (IData)(
                                                            (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes, 
                                                                           ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xbU)))) 
                                                                            << 2U)) 
                                                             >> 1U)))))))
                                 : 0U)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (IData)(
                                                               (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes, 
                                                                              ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
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
                                                                     (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_opcodes, 
                                                                                ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xbU)))) 
                                                                                << 2U)) 
                                                                      >> 1U)))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:763: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 763, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:764:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:765: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 765, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1884(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1884\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT___T_681) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                               >> 0x13U)) != (7U & (IData)(
                                                           (VL_SHIFTR_QQQ(64,64,64, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight_sizes, 
                                                                          ((QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xbU)))) 
                                                                           << 2U)) 
                                                            >> 1U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:769: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 769, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:770:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:771: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 771, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                           & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1))) 
                         & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT__empty))) 
                        & ((0xfU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 9U)) == (0xfU 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                                   >> 0xbU)))) 
                       & (6U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__full) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___outArb_io_in_4_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:775: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 775, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:776:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:777: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 777, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1885(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1885\n"); );
    // Body
    if (VL_UNLIKELY(((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0) 
                     & (~ (((0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__inflight)) 
                            | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                           | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__watchdog 
                              < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__plusarg_reader__DOT__myplus)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:781: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 781, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:782:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:783: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 783, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:787: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 787, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:788:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:789: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 789, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1886(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1886\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__manager_tl_d_valid) 
                        & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT___inDes_io_out_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__serdesser__DOT__inDes__DOT__data_4 
                                     >> 0x13U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:793: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 793, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv:794:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_66.sv:795: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.serdesser.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_66.sv", 795, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:273: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 273, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:274:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:275: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 275, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1887(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1887\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:279: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 279, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:280:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:281: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 281, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:285: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 285, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:286:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:287: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 287, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1888(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1888\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:291: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 291, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:292:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:293: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 293, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:297: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 297, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:298:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:299: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 299, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1889(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1889\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:303: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 303, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:304:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:305: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 305, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                            >> 0xdU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:309: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 309, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:310:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:311: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 311, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1890(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1890\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:315: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 315, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:316:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:317: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 317, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:321: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 321, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:322:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:323: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 323, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (2U >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:327: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 327, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:328:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:329: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 329, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1891(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1891\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:333: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 333, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:334:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:335: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 335, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (2U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:339: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 339, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:340:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:341: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 341, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1892(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1892\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:345: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 345, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:346:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:347: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 347, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0xffU != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:351: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 351, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:352:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:353: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 353, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1893(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1893\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                            >> 0xdU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:357: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 357, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:358:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:359: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 359, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ ((7U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                           & ((2U == (0x1fffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                                 >> 0x10U))) 
                              | (0x10000U == (0x1ffffU 
                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                                 >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:363: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 363, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:364:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:365: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 365, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1894(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1894\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:369: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 369, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:370:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:371: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 371, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:375: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 375, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:376:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:377: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 377, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1895(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1895\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:381: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 381, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:382:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:383: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 383, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1896(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1896\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                            >> 0xdU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:387: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Get is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 387, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:388:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:389: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 389, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (IData)(((0x10000000U == 
                                    (0x1ffff000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                   & (7U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:393: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 393, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:394:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:395: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 395, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1897(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1897\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:399: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 399, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:400:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:401: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 401, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:405: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 405, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:406:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:407: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 407, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1898(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1898\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:411: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 411, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:412:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:413: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 413, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1899(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1899\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ (IData)(((0x10000000U == 
                                    (0x1ffff000U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                   & (7U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:417: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 417, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:418:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:419: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 419, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:423: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 423, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:424:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:425: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 425, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1900(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1900\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:429: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 429, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:430:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:431: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 431, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                               & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                          & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                      << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                 << 6U) 
                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                     | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                        & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                    << 5U) 
                                                   | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                        | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                           & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                       << 4U) 
                                                      | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                           | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                              & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                          << 3U) 
                                                         | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                 & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                     & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:435: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 435, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:436:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:437: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 437, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1901(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1901\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:441: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 441, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:442:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:443: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 443, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:447: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 447, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:448:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:449: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 449, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1902(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1902\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (4U < (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:453: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 453, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:454:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:455: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 455, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:459: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 459, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:460:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:461: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 461, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1903(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1903\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:465: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 465, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:466:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:467: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 467, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:471: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 471, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:472:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:473: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 473, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1904(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1904\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:477: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 477, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:478:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:479: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 479, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:483: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 483, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:484:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:485: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 485, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1905(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1905\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                      & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:489: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 489, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:490:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:491: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 491, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (0x3fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address 
                                        & (~ ((0xcU 
                                               >= (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:495: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 495, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:496:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:497: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 497, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1906(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1906\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:501: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 501, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:502:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:503: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 503, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask) 
                        != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                 & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                             << 7U) | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_5) 
                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_5) 
                                            & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                        << 6U) | ((
                                                   ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                    | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                       & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                   << 5U) 
                                                  | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_4) 
                                                       | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_4) 
                                                          & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                      << 4U) 
                                                     | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                          | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                             & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                         << 3U) 
                                                        | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_3) 
                                                             | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_3) 
                                                                & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address))) 
                                                            << 2U) 
                                                           | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                   & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                               << 1U) 
                                                              | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_acc_2) 
                                                                 | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__mask_eq_2) 
                                                                    & (~ vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:507: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 507, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:508:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:509: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 509, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1907(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1907\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0) 
                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U] 
                            >> 0xdU)) | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1) 
                                         & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U] 
                                            >> 0x15U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:513: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 513, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:514:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:515: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 515, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:519: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 519, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:520:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:521: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 521, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1908(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1908\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:525: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 525, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:526:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:527: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 527, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:531: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 531, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:532:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:533: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 533, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1909(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1909\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:537: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 537, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:538:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:539: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 539, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2006U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:543: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 543, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:544:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:545: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 545, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1910(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1910\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:549: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 549, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:550:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:551: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 551, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:555: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 555, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:556:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:557: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 557, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1911(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1911\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1cU == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:561: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 561, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:562:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:563: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 563, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x14U == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:567: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 567, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:568:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:569: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 569, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1912(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1912\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:573: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 573, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:574:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:575: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 575, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2004U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:579: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel Grant is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 579, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:580:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:581: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 581, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1913(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1913\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:585: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 585, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:586:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:587: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 587, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (3U > (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:591: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 591, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:592:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:593: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 593, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1914(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1914\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x1dU == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:597: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 597, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:598:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:599: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 599, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x15U == (0x1fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:603: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 603, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:604:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:605: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 605, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1915(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1915\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:609: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 609, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:610:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:611: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 611, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2005U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:615: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel GrantData is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 615, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:616:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:617: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 617, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1916(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1916\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:621: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 621, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:622:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:623: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 623, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:627: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 627, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:628:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:629: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 629, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1917(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1917\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2000U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:633: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 633, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:634:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:635: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 635, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:639: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 639, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:640:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:641: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 641, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1918(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1918\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (~ ((~ (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xeU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:645: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 645, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:646:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:647: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 647, "");
        }
    }
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2001U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:651: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel AccessAckData is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 651, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:652:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:653: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 653, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1919(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1919\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:657: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 657, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:658:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:659: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 659, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xeU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:663: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 663, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:664:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:665: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 665, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1920(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1920\n"); );
    // Body
    if (VL_UNLIKELY((((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__empty)) 
                      & (0x2002U == (0x2007U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:669: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'D' channel HintAck is denied (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 669, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:670:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:671: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 671, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:675: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 675, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:676:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:677: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 677, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1921(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1921\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_param) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:681: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 681, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:682:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:683: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 683, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:687: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 687, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:688:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:689: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 689, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__1922(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__1922\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_bits_source) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:693: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 693, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:694:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:695: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 695, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_mbus_auto_coupler_to_port_named_serial_tl_mem_tlserial_manager_crossing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__a_first_counter))) 
                      & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__resetSynchronizer__DOT__x1_member_allClocks_subsystem_fbus_0_reset_catcher__DOT__io_sync_reset_chain__DOT__output_chain__DOT__sync_0)) 
                     & ((0x1fffffffU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address) 
                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__serial_tl_domain__DOT__buffer__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:699: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:44)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 699, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv:700:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_67.sv:701: Assertion failed in %NTestHarness.chiptop.system.serial_tl_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_67.sv", 701, "");
        }
    }
}
