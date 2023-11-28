// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestHarness.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestHarness__Syms.h"
#include "VTestHarness___024root.h"

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3353(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3353\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:404: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 404, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:405:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:406: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 406, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3354(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3354\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:410: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Get is corrupt (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 410, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:411:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:412: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 412, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (IData)(((0x400U == (0x7feU 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                   & ((((((((0x24U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xeU)))))) 
                                          | (0x20U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))) 
                                         | (0x21U == 
                                            (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                                        | (0x22U == 
                                           (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))) 
                                       | (0x40U == 
                                          (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                                      & (7U != (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:416: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 416, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:417:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:418: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 418, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3355(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3355\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:422: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 422, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:423:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:424: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 424, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3356(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3356\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:428: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 428, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:429:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:430: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 430, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:434: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 434, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:435:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:436: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 436, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3357(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3357\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:440: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 440, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:441:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:442: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 442, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3358(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3358\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (IData)(((0x400U == (0x7feU 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                   & ((((((((0x24U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU))) 
                                            | (1U == 
                                               (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xeU)))) 
                                           | (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (7U 
                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0xeU)))))) 
                                          | (0x20U 
                                             == (0x7fU 
                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0xaU)))) 
                                         | (0x21U == 
                                            (0x7fU 
                                             & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                                        | (0x22U == 
                                           (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))) 
                                       | (0x40U == 
                                          (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                                      & (7U != (7U 
                                                & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 6U)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:446: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 446, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:447:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:448: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 448, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3359(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3359\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:452: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 452, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:453:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:454: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 454, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3360(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3360\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:458: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 458, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:459:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:460: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 460, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:464: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 464, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:465:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:466: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 466, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3361(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3361\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x10U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x10U)) 
                                        & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                << 7U) 
                                               | (0x3fff80U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      << 7U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xaU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x11U)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      << 5U) 
                                                     | (0xfffe0U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            << 5U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xcU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x11U)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            << 3U) 
                                                           | (0x3fff8U 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  << 3U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xeU)))) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ 
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0x11U)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  << 1U) 
                                                                 | (0xfffeU 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                        << 1U) 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x10U)))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x11U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:470: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 470, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:471:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:472: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 472, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3362(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3362\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:476: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 476, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:477:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:478: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 478, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:482: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 482, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:483:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:484: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 484, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3363(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3363\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:488: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 488, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:489:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:490: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 490, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:494: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 494, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:495:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:496: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 496, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3364(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3364\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:500: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 500, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:501:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:502: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 502, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3365(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3365\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:506: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 506, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:507:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:508: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 508, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:512: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 512, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:513:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:514: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 514, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3366(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3366\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:518: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 518, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:519:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:520: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 520, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:524: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 524, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:525:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:526: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 526, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3367(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3367\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:530: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 530, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:531:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:532: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 532, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3368(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3368\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                      & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:536: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 536, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:537:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:538: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 538, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:542: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 542, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:543:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:544: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 544, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3369(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3369\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:548: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 548, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:549:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:550: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 550, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (3U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:554: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 554, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:555:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:556: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 556, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3370(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3370\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:560: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 560, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:561:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:562: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 562, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3371(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3371\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (5U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:566: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 566, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:567:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:568: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 568, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (4U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                            >> 4U))) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                >> 8U)))) 
                               | (0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                               >> 8U)))) 
                              | (0x20U == (0x7fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                            >> 4U)))) 
                             | (0x21U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                   >> 4U)))) 
                            | (0x22U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)))) 
                           | (0x40U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                 >> 4U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:626: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 626, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:627:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:628: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 628, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3372(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3372\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                            >> 4U))) 
                                | (1U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                >> 8U)))) 
                               | (0U == (7U & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                               >> 8U)))) 
                              | (0x20U == (0x7fU & 
                                           ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                            >> 4U)))) 
                             | (0x21U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                   >> 4U)))) 
                            | (0x22U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)))) 
                           | (0x40U == (0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                 >> 4U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:632: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 632, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:633:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:634: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 634, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3373(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3373\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:644: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 644, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:645:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:646: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 646, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:650: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 650, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:651:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:652: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 652, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3374(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3374\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:656: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 656, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:657:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:658: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 658, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xaU)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:662: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 662, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:663:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:664: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 664, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3375(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3375\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0x3ffffffU & ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                        << 0xfU) | 
                                       (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0x11U))) 
                        != vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:668: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 668, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:669:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:670: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 670, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:674: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 674, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:675:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:676: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 676, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3376(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3376\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:680: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 680, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:681:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:682: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 682, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size) 
                        != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:686: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 686, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:687:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:688: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 688, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3377(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3377\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0x7fU & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                  >> 4U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:692: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 692, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:693:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:694: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 694, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__sink)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:698: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 698, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:699:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:700: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 700, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3378(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3378\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h92ffdf0c__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:704: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 704, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:705:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:706: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 706, "");
        }
    }
    VL_SHIFTR_WWI(65,65,7, __Vtemp_h92ffdf0c__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight, 
                  (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 0xaU)));
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_855) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & __Vtemp_h92ffdf0c__0[0U]))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:710: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'A' channel re-used a source ID (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 710, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:711:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:712: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 712, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3379(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3379\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h767c3cc8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6e7f46d3__0;
    // Body
    VL_EXTEND_WI(65,7, __Vtemp_h767c3cc8__0, (0x7fU 
                                              & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                 >> 4U)));
    VL_SHIFTR_WWW(65,65,65, __Vtemp_h6e7f46d3__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight, __Vtemp_h767c3cc8__0);
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_874) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (__Vtemp_h6e7f46d3__0[0U] 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:716: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 716, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:717:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:718: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 718, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_874) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:722: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 722, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:723:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:724: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 724, "");
        }
    }
}

extern const VlWide<9>/*287:0*/ VTestHarness__ConstPool__CONST_h52851b57_0;

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3380(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3380\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h76ae7bec__0;
    VlWide<9>/*287:0*/ __Vtemp_h97d7075d__0;
    VlWide<9>/*287:0*/ __Vtemp_hd577a15f__0;
    VlWide<9>/*287:0*/ __Vtemp_h76ae7bec__1;
    VlWide<9>/*287:0*/ __Vtemp_hb4d7f8ce__0;
    VlWide<9>/*287:0*/ __Vtemp_h11f234c6__0;
    VlWide<9>/*287:0*/ __Vtemp_h76ae7bec__2;
    VlWide<9>/*287:0*/ __Vtemp_hcb2edf6f__0;
    VlWide<9>/*287:0*/ __Vtemp_h9e9c2c95__0;
    VlWide<9>/*287:0*/ __Vtemp_h76ae7bec__3;
    VlWide<9>/*287:0*/ __Vtemp_h392f2137__0;
    VlWide<9>/*287:0*/ __Vtemp_hd9dbc77e__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_874) 
                       & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 6U)) != (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:728: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 728, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:729:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:730: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 730, "");
        }
    }
    VL_EXTEND_WI(258,7, __Vtemp_h76ae7bec__0, (0x7fU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)));
    __Vtemp_h97d7075d__0[0U] = (__Vtemp_h76ae7bec__0[0U] 
                                << 2U);
    __Vtemp_h97d7075d__0[1U] = ((__Vtemp_h76ae7bec__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[1U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[2U] = ((__Vtemp_h76ae7bec__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[2U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[3U] = ((__Vtemp_h76ae7bec__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[3U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[4U] = ((__Vtemp_h76ae7bec__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[4U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[5U] = ((__Vtemp_h76ae7bec__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[5U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[6U] = ((__Vtemp_h76ae7bec__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[6U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[7U] = ((__Vtemp_h76ae7bec__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[7U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[8U] = ((__Vtemp_h76ae7bec__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_hd577a15f__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h97d7075d__0);
    VL_EXTEND_WI(258,7, __Vtemp_h76ae7bec__1, (0x7fU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)));
    __Vtemp_hb4d7f8ce__0[0U] = (__Vtemp_h76ae7bec__1[0U] 
                                << 2U);
    __Vtemp_hb4d7f8ce__0[1U] = ((__Vtemp_h76ae7bec__1[0U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[1U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[2U] = ((__Vtemp_h76ae7bec__1[1U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[2U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[3U] = ((__Vtemp_h76ae7bec__1[2U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[3U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[4U] = ((__Vtemp_h76ae7bec__1[3U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[4U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[5U] = ((__Vtemp_h76ae7bec__1[4U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[5U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[6U] = ((__Vtemp_h76ae7bec__1[5U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[6U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[7U] = ((__Vtemp_h76ae7bec__1[6U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[7U] 
                                              << 2U));
    __Vtemp_hb4d7f8ce__0[8U] = ((__Vtemp_h76ae7bec__1[7U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__1[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h11f234c6__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hb4d7f8ce__0);
    VL_EXTEND_WI(258,7, __Vtemp_h76ae7bec__2, (0x7fU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)));
    __Vtemp_hcb2edf6f__0[0U] = (__Vtemp_h76ae7bec__2[0U] 
                                << 2U);
    __Vtemp_hcb2edf6f__0[1U] = ((__Vtemp_h76ae7bec__2[0U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[1U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[2U] = ((__Vtemp_h76ae7bec__2[1U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[2U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[3U] = ((__Vtemp_h76ae7bec__2[2U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[3U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[4U] = ((__Vtemp_h76ae7bec__2[3U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[4U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[5U] = ((__Vtemp_h76ae7bec__2[4U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[5U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[6U] = ((__Vtemp_h76ae7bec__2[5U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[6U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[7U] = ((__Vtemp_h76ae7bec__2[6U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[7U] 
                                              << 2U));
    __Vtemp_hcb2edf6f__0[8U] = ((__Vtemp_h76ae7bec__2[7U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__2[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h9e9c2c95__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hcb2edf6f__0);
    VL_EXTEND_WI(258,7, __Vtemp_h76ae7bec__3, (0x7fU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)));
    __Vtemp_h392f2137__0[0U] = (__Vtemp_h76ae7bec__3[0U] 
                                << 2U);
    __Vtemp_h392f2137__0[1U] = ((__Vtemp_h76ae7bec__3[0U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[1U] 
                                              << 2U));
    __Vtemp_h392f2137__0[2U] = ((__Vtemp_h76ae7bec__3[1U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[2U] 
                                              << 2U));
    __Vtemp_h392f2137__0[3U] = ((__Vtemp_h76ae7bec__3[2U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[3U] 
                                              << 2U));
    __Vtemp_h392f2137__0[4U] = ((__Vtemp_h76ae7bec__3[3U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[4U] 
                                              << 2U));
    __Vtemp_h392f2137__0[5U] = ((__Vtemp_h76ae7bec__3[4U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[5U] 
                                              << 2U));
    __Vtemp_h392f2137__0[6U] = ((__Vtemp_h76ae7bec__3[5U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[6U] 
                                              << 2U));
    __Vtemp_h392f2137__0[7U] = ((__Vtemp_h76ae7bec__3[6U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[7U] 
                                              << 2U));
    __Vtemp_h392f2137__0[8U] = ((__Vtemp_h76ae7bec__3[7U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__3[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_hd9dbc77e__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h392f2137__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_874) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                 & __Vtemp_hd577a15f__0[0U]) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                      & __Vtemp_h11f234c6__0[0U]) 
                                                     >> 1U))))))
                                 : 0U)) | ((4U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode)) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                         & __Vtemp_h9e9c2c95__0[0U]) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                                               & __Vtemp_hd9dbc77e__0[0U]) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:734: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 734, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:735:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:736: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 736, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3381(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3381\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h76ae7bec__0;
    VlWide<9>/*287:0*/ __Vtemp_h97d7075d__0;
    VlWide<9>/*287:0*/ __Vtemp_h89371a81__0;
    // Body
    VL_EXTEND_WI(258,7, __Vtemp_h76ae7bec__0, (0x7fU 
                                               & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                  >> 4U)));
    __Vtemp_h97d7075d__0[0U] = (__Vtemp_h76ae7bec__0[0U] 
                                << 2U);
    __Vtemp_h97d7075d__0[1U] = ((__Vtemp_h76ae7bec__0[0U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[1U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[2U] = ((__Vtemp_h76ae7bec__0[1U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[2U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[3U] = ((__Vtemp_h76ae7bec__0[2U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[3U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[4U] = ((__Vtemp_h76ae7bec__0[3U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[4U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[5U] = ((__Vtemp_h76ae7bec__0[4U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[5U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[6U] = ((__Vtemp_h76ae7bec__0[5U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[6U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[7U] = ((__Vtemp_h76ae7bec__0[6U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[7U] 
                                              << 2U));
    __Vtemp_h97d7075d__0[8U] = ((__Vtemp_h76ae7bec__0[7U] 
                                 >> 0x1eU) | (__Vtemp_h76ae7bec__0[8U] 
                                              << 2U));
    VL_SHIFTR_WWW(260,260,260, __Vtemp_h89371a81__0, vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes, __Vtemp_h97d7075d__0);
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_874) 
                       & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__same_cycle_resp))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_bits_size) 
                        != (7U & ((VTestHarness__ConstPool__CONST_h52851b57_0[0U] 
                                   & __Vtemp_h89371a81__0[0U]) 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:740: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: 'D' channel contains improper response size (connected at CLINT.scala:108:65)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 740, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:741:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:742: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 742, "");
        }
    }
    if (VL_UNLIKELY((((((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__bundleIn_0_d_valid) 
                          & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))) 
                         & (0U == (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1))) 
                        & (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid)) 
                       & ((0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 0xaU)) == (0x7fU 
                                                  & ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_source) 
                                                     >> 4U)))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_d_ready)) 
                           | (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___io_enq_ready_output)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:746: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 746, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:747:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:748: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 748, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3382(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3382\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset)) 
                           & (~ (((0U == ((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[0U] 
                                           | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[1U]) 
                                          | vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight[2U])) 
                                  | (0U == vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:752: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor: Assertion failed: TileLink timeout expired (connected at CLINT.scala:108:65)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 752, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv:753:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_29.sv:754: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_clint.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_29.sv", 754, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:272: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 272, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:273:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:274: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 274, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3383(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3383\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (IData)((0x8180U == (0x1fdc0U 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:278: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 278, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:279:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:280: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 280, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:284: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 284, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:285:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:286: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 286, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3384(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3384\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:290: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 290, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:291:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:292: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 292, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:296: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 296, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:297:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:298: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 298, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3385(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3385\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:302: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 302, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:303:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:304: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 304, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:308: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 308, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:309:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:310: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 310, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3386(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3386\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (6U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:314: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 314, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:315:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:316: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 316, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:320: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 320, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:321:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:322: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 322, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3387(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3387\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (IData)((0x8180U == (0x1fdc0U 
                                               & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:326: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 326, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:327:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:328: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 328, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:332: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 332, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:333:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:334: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 334, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3388(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3388\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U >= (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:338: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 338, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:339:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:340: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 340, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:344: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 344, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:345:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:346: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 346, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3389(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3389\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (2U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:350: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 350, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:351:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:352: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 352, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (7U == (0x3fU & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:356: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 356, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:357:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:358: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 358, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3390(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3390\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0xffU != (0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           >> 0x10U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:362: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 362, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:363:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:364: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 364, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (7U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:368: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 368, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:369:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:370: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 370, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3391(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3391\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:374: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 374, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:375:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:376: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 376, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3392(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3392\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (0x1c4U == (0x1c7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:380: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 380, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:381:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:382: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 382, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:386: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 386, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:387:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:388: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 388, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3393(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3393\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:392: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 392, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:393:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:394: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 394, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:398: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 398, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:399:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:400: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 400, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3394(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3394\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:404: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 404, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:405:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:406: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 406, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3395(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3395\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (4U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x18U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:410: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Get is corrupt (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 410, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:411:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:412: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 412, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((((0x24U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                                 | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xeU)))) 
                                | (~ (IData)((0U != 
                                              (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))))) 
                               | (0x20U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))) 
                              | (0x21U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x22U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           & (7U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:416: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 416, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:417:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:418: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 418, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3396(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3396\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:422: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 422, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:423:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:424: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 424, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3397(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3397\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:428: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 428, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:429:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:430: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 430, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:434: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 434, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:435:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:436: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 436, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3398(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3398\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (0U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:440: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 440, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:441:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:442: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 442, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3399(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3399\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ ((((((((0x24U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU))) 
                                 | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xeU)))) 
                                | (~ (IData)((0U != 
                                              (7U & 
                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))))) 
                               | (0x20U == (0x7fU & 
                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 0xaU)))) 
                              | (0x21U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x22U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           & (7U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 6U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:446: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 446, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:447:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:448: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 448, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3400(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3400\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:452: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 452, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:453:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:454: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 454, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3401(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3401\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:458: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 458, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:459:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:460: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 460, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:464: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 464, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:465:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:466: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 466, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3402(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3402\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (1U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0xffU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x10U) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0x10U)) 
                                        & (~ ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                << 7U) 
                                               | (0x3fff80U 
                                                  & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      << 7U) 
                                                     & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0xaU)))) 
                                              | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                      & (~ 
                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 0x11U)))) 
                                                  << 6U) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                      << 5U) 
                                                     | (0xfffe0U 
                                                        & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            << 5U) 
                                                           & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0xcU)))) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                            & (~ 
                                                               (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 0x11U)))) 
                                                        << 4U) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                            << 3U) 
                                                           | (0x3fff8U 
                                                              & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  << 3U) 
                                                                 & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                    >> 0xeU)))) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                  & (~ 
                                                                     (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 0x11U)))) 
                                                              << 2U) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                  << 1U) 
                                                                 | (0xfffeU 
                                                                    & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                        << 1U) 
                                                                       & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x10U)))) 
                                                                | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                      & (~ 
                                                                         (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                          >> 0x11U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:470: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 470, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:471:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:472: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 472, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3403(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3403\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:476: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 476, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:477:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:478: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 478, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:482: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 482, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:483:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:484: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 484, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3404(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3404\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:488: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 488, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:489:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:490: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 490, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (4U < (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:494: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 494, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:495:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:496: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 496, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3405(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3405\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (2U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & ((0xffU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0x10U)) != ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                   << 7U) 
                                                  | (0x3fff80U 
                                                     & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         << 7U) 
                                                        & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0xaU)))) 
                                                 | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_5) 
                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_5) 
                                                         & (~ 
                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 0x11U)))) 
                                                     << 6U) 
                                                    | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                         << 5U) 
                                                        | (0xfffe0U 
                                                           & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               << 5U) 
                                                              & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                 >> 0xcU)))) 
                                                       | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_4) 
                                                            | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_4) 
                                                               & (~ 
                                                                  (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 0x11U)))) 
                                                           << 4U) 
                                                          | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                               << 3U) 
                                                              | (0x3fff8U 
                                                                 & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     << 3U) 
                                                                    & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                       >> 0xeU)))) 
                                                             | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_3) 
                                                                  | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_3) 
                                                                     & (~ 
                                                                        (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 0x11U)))) 
                                                                 << 2U) 
                                                                | ((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                     << 1U) 
                                                                    | (0xfffeU 
                                                                       & (((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                           << 1U) 
                                                                          & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x10U)))) 
                                                                   | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_acc_2) 
                                                                      | ((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__mask_eq_2) 
                                                                         & (~ 
                                                                            (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 0x11U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:500: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 500, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:501:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:502: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 502, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3406(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3406\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:506: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 506, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:507:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:508: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 508, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (~ (((((((0x24U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                                | (1U == (7U & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xeU)))) 
                               | (~ (IData)((0U != 
                                             (7U & 
                                              (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xeU)))))) 
                              | (0x20U == (0x7fU & 
                                           (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU)))) 
                             | (0x21U == (0x7fU & (
                                                   vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0xaU)))) 
                            | (0x22U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0xaU)))) 
                           | (0x40U == (0x7fU & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:512: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 512, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:513:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:514: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 514, "");
        }
    }
}

VL_INLINE_OPT void VTestHarness___024root___sequent__TOP__3407(VTestHarness___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestHarness__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestHarness___024root___sequent__TOP__3407\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                       & (3U == (7U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))) 
                     & (0U != (0x3fU & (((vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          << 0xfU) 
                                         | (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0x11U)) 
                                        & (~ ((0xcU 
                                               >= (7U 
                                                   & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 6U)))
                                               ? (0x1fffU 
                                                  & ((IData)(0x3fU) 
                                                     << 
                                                     (7U 
                                                      & (vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 6U))))
                                               : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:518: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 518, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:519:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:520: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 520, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_5_a_valid) 
                      & (0x23U == (0x27U & vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestHarness__DOT__chiptop__DOT__system__DOT___resetSynchronizer_auto_out_member_allClocks_subsystem_cbus_0_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:524: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at Periphery.scala:87:63)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 524, "");
        if (VL_UNLIKELY(
                // $c function at /home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv:525:14
done_reset
            )) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_30.sv:526: Assertion failed in %NTestHarness.chiptop.system.subsystem_cbus.coupler_to_debug.fragmenter.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/luismendes/Downloads/chipyard/sims/verilator/generated-src-2/chipyard.TestHarness.CustomGemminiSoCConfig/gen-collateral/TLMonitor_30.sv", 526, "");
        }
    }
}
